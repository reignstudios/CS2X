using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Symbols;
using System.Collections.Immutable;
using Microsoft.CodeAnalysis.CSharp.Syntax;

namespace CS2X.Core.Transpilers
{
	public sealed class Transpiler_C : Transpiler
	{
		#region Option Types
		public enum GC_Type
		{
			/// <summary>
			/// Modern platforms. Thread safe.
			/// </summary>
			Boehm,

			/// <summary>
			/// Legacy or unsupported Boehm platforms. Not thread safe.
			/// </summary>
			Portable,

			/// <summary>
			/// Super low memory or embedded devices. Not thread safe.
			/// </summary>
			Micro
		}

		public enum Ptr_Size
		{
			Bit_8 = 1,
			Bit_16 = 2,
			Bit_32 = 4,
			Bit_64 = 8,
			Bit_128 = 16
		}

		public enum Endianness
		{
			Little,
			Big
		}

		public enum StringLiteralMemoryLocation
		{
			/// <summary>
			/// Stores string literals in shared global memory (RAM).
			/// This allows for runtime type info such as: "Abc".GetType()
			/// </summary>
			GlobalProgramMemory_RAM,

			/// <summary>
			/// Stores string literals in AVR program flash memory.
			/// Runtime type info will not work: "Abc".GetType() = null ref error
			/// </summary>
			ReadonlyProgramMemory_AVR
		}

		public struct Options
		{
			/// <summary>
			/// Target Garbage Collector
			/// This will generate the proper C #includes
			/// </summary>
			public GC_Type gc;

			/// <summary>
			/// Garbage Collector file path
			/// </summary>
			public string gcFolderPath;

			/// <summary>
			/// Native pointer size in bits (native int)
			/// </summary>
			public Ptr_Size ptrSize;

			/// <summary>
			/// CPU bit order
			/// </summary>
			public Endianness endianness;

			/// <summary>
			/// Whether or not to store runtime type string literal metadata.
			/// Metadata such as Type.FullName etc
			/// </summary>
			public bool storeRuntimeTypeStringLiteralMetadata;

			/// <summary>
			/// Memory location string literals are stored
			/// </summary>
			public StringLiteralMemoryLocation stringLiteralMemoryLocation;
		}
		#endregion

		class TranspiledProject
		{
			public readonly Project project;
			public readonly List<TranspiledProject> references = new List<TranspiledProject>();
			public readonly Dictionary<string, string> stringLiterals = new Dictionary<string, string>();
			// TODO: add generics

			public TranspiledProject(Project project)
			{
				this.project = project;
			}
		}

		public readonly Options options;
		private List<TranspiledProject> transpiledProjects = new List<TranspiledProject>();
		private TranspiledProject transpiledProject;// active transpiling project
		private Project project;// active project
		private IMethodSymbol method;// active method
		private SemanticModel semanticModel;// active semantic model for a method
		private StreamWriterEx writer, stringLiteralWriter;
		private BlockSyntax block;// active body block
		private InstructionalBody instructionalBody;// active instructional body states and values
		private Dictionary<string, string> stringLiterals;// string literals that span all projects

		/// <summary>
		/// For debugging only. Skips compiling references
		/// </summary>
		public bool skipReferenced;

		/// <summary>
		/// For debugging only. Only transpile first project
		/// </summary>
		public bool firstProjOnly;

		#region Core resolution
		public Transpiler_C(Solution solution, in Options options)
		: base(solution)
		{
			this.options = options;
		}

		public override void Transpile(string outputPath)
		{
			stringLiterals = new Dictionary<string, string>();
			using (var stream = new FileStream(Path.Combine(outputPath, "_StringLiterals.h"), FileMode.Create, FileAccess.Write, FileShare.Read))
			using (stringLiteralWriter = new StreamWriterEx(stream))
			{
				WriteHeaderInfo(stringLiteralWriter);
				stringLiteralWriter.WriteLine("#pragma once");
				stringLiteralWriter.WriteLine();
				foreach (var project in solution.projects)
				{
					var transpileReference = transpiledProjects.FirstOrDefault(x => x.project == project);
					if (transpileReference == null) TranspileProject(outputPath, project);
					if (firstProjOnly) break;
				}
			}
		}

		private TranspiledProject TranspileProject(string outputPath, Project project)
		{
			var transpiledProject = new TranspiledProject(project);

			// transpile references first
			if (!skipReferenced)
			{
				foreach (var reference in project.references)
				{
					var transpileReference = transpiledProjects.FirstOrDefault(x => x.project == reference);
					if (transpileReference == null)
					{
						transpileReference = TranspileProject(outputPath, reference);
						transpiledProject.references.Add(transpileReference);
					}
					else
					{
						transpiledProject.references.Add(transpileReference);
					}
				}
			}

			// transpile project
			this.transpiledProject = transpiledProject;
			string filename = project.roslynProject.AssemblyName + (project.type == ProjectTypes.Exe ? ".c" : ".h");
			using (var stream = new FileStream(Path.Combine(outputPath, filename), FileMode.Create, FileAccess.Write, FileShare.Read))
			using (writer = new StreamWriterEx(stream))
			{
				WriteProject(project);
			}

			// finish
			transpiledProjects.Add(transpiledProject);
			return transpiledProject;
		}

		private void WriteHeaderInfo(StreamWriterEx writer)
		{
			writer.WriteLine("/* ############################### */");
			writer.WriteLine($"/* Generated with CS2X v{Utils.GetAssemblyInfoVersion()} */");
			writer.WriteLine("/* ############################### */");
		}

		private void WriteProject(Project project)
		{
			this.project = project;

			// writer info
			WriteHeaderInfo(writer);
			if (project.type == ProjectTypes.Dll) writer.WriteLine("#pragma once");

			// include std libraries
			if (project.isCoreLib)
			{
				// std
				writer.WriteLine("#include <stdio.h>");
				writer.WriteLine("#include <math.h>");
				writer.WriteLine("#include <stdint.h>");
				writer.WriteLine("#include <uchar.h>");
				writer.WriteLine("#include <locale.h>");
				if (options.stringLiteralMemoryLocation == StringLiteralMemoryLocation.ReadonlyProgramMemory_AVR) writer.WriteLine("#include <avr/pgmspace.h>");

				// write include of gc to be used
				string gcFileName;
				switch (options.gc)
				{
					case GC_Type.Boehm: gcFileName = "CS2X.GC.Boehm"; break;
					case GC_Type.Portable: gcFileName = "CS2X.GC.Portable"; break;
					case GC_Type.Micro: gcFileName = "CS2X.GC.Micro"; break;
					default: throw new Exception("Unsupported GC option: " + options.gc);
				}
					
				gcFileName = Path.Combine(options.gcFolderPath, gcFileName);
				writer.WriteLine($"#include \"{gcFileName}.h\"");
				writer.WriteLine($"#include \"{Path.Combine(options.gcFolderPath, "CS2X.InstructionHelpers.h")}\"");

				// include string literals
				writer.WriteLine("#include \"_StringLiterals.h\"");
			}

			// include references
			foreach (var reference in project.references)
			{
				writer.WriteLine($"#include \"{reference.roslynProject.AssemblyName}.h\"");
			}

			// forward declare types
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Forward declare Types */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes) WriteType(type, false);

			// type definitions
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Type definitions */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes)
			{
				if (WriteType(type, true)) writer.WriteLine();
			}

			// runtime type definitions
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Runtime Types */");
			writer.WriteLine("/* =============================== */");
			var runtimeType = project.compilation.GetTypeByMetadataName("System.RuntimeType");
			foreach (var type in project.allTypes)
			{
				if (WriteRuntimeType(type, runtimeType)) writer.WriteLine();
			}

			// forward declare methods
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Forward decalre Methods */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes)
			{
				if (type.TypeKind == TypeKind.Interface) continue;
				foreach (var method in type.GetMembers())
				{
					if (method is IMethodSymbol) WriteMethod((IMethodSymbol)method, false);
				}
			}

			// method definitions
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Method definitions */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes)
			{
				if (type.TypeKind == TypeKind.Interface) continue;
				foreach (var method in type.GetMembers())
				{
					if (method is IMethodSymbol && WriteMethod((IMethodSymbol)method, true)) writer.WriteLine();
				}
			}

			// entry point
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Entry Point */");
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("int main()");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix("CS2X_GC_Init();");

			writer.WriteLinePrefix("CS2X_GC_Collect();");
			writer.RemoveTab();
			writer.WriteLine('}');
		}

		private int GetStringMemorySize(string value)
		{
			return (int)options.ptrSize + sizeof(int) + sizeof(char) + (value.Length * sizeof(char));// TODO: handle non-standard int & char sizes
		}

		private string StringToLiteral(string value)
		{
			var result = new StringBuilder();
			result.Append('{');

			void WriteBinary(byte[] data)
			{
				foreach (byte b in data)
				{
					result.Append(b);
					result.Append(',');
				}
			}

			// write runtime type header
			for (int i = 0; i != (int)options.ptrSize; ++i) result.Append("0,");

			// write string length
			WriteBinary(BitConverter.GetBytes(value.Length));

			// write string unicode data
			byte[] binaryData;
			if (options.endianness == Endianness.Little) binaryData = Encoding.Unicode.GetBytes(value);
			else binaryData = Encoding.BigEndianUnicode.GetBytes(value);
			WriteBinary(binaryData);

			// null-terminated char
			result.Append("0,0}");

			return result.ToString();
		}
		#endregion

		#region Type Writers
		private bool WriteRuntimeType(INamedTypeSymbol type, INamedTypeSymbol runtimeType)
		{
			if (type.SpecialType == SpecialType.System_Void) return false;

			string runtimeTypeName = GetRuntimeTypeFullName(type);
			writer.WriteLine($"typedef struct {runtimeTypeName}");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"{GetTypeFullName(runtimeType)} runtimeType;");
			var virtualMethods = GetOrderedVirtualMethods(type);
			foreach (var method in virtualMethods)
			{
				if (method.IsStatic) throw new NotSupportedException("Virtual static method not supported: " + method.Name);
				int vTableIndex = GetVirtualMethodOverloadIndex(method);
				string methodName = method.Name;
				ParseImplementationDetail(ref methodName);
				writer.WriteLinePrefix($"{GetTypeFullNameRef(method.ReturnType)} (*vTabel_{methodName}_{vTableIndex})();");
			}
			writer.RemoveTab();
			writer.WriteLine($"}} {runtimeTypeName};");
			writer.WriteLine($"{runtimeTypeName} {GetRuntimeTypeObjFullName(type)};");

			writer.Write($"int8_t {GetRuntimeTypeMetadataFullName(type)}_Name[{GetStringMemorySize(type.Name)}] = ");
			writer.Write(StringToLiteral(type.Name));
			writer.WriteLine(';');

			string fullName = type.FullName();
			writer.Write($"int8_t {GetRuntimeTypeMetadataFullName(type)}_FullName[{GetStringMemorySize(fullName)}] = ");
			writer.Write(StringToLiteral(fullName));
			writer.WriteLine(';');

			return true;
		}

		private bool WriteType(INamedTypeSymbol type, bool writeBody)
		{
			if (IsPrimitiveType(type) || type.SpecialType == SpecialType.System_Void) return false;

			if (!writeBody)
			{
				if (type.TypeKind == TypeKind.Enum)
				{
					writer.WriteLine($"typedef {GetPrimitiveName(type.EnumUnderlyingType)} {GetTypeFullName(type)};");
				}
				else if (type.TypeKind == TypeKind.Interface)
				{
					writer.WriteLine($"typedef void {GetTypeFullName(type)};");
				}
				else
				{
					if (IsEmptyType(type))
					{
						string ptr;
						if (type.IsValueType) ptr = "*";
						else ptr = string.Empty;
						writer.WriteLine($"typedef void{ptr} {GetTypeFullName(type)};");
					}
					else
					{
						writer.WriteLine(string.Format("typedef struct {0} {0};", GetTypeFullName(type)));
					}
				}
			}
			else if (type.TypeKind == TypeKind.Enum) 
			{
				var members = type.GetMembers();
				foreach (var member in members)
				{
					if (!member.IsStatic) continue;
					if (member is IFieldSymbol)
					{
						var field = (IFieldSymbol)member;
						writer.WriteLine($"#define {GetFieldFullName(field)} {field.ConstantValue.ToString()}");
					}
				}
				return members.Length != 0;
			}
			else if(!IsEmptyType(type))
			{
				// get all types that should write non-static fields
				var fieldTypeList = new List<INamedTypeSymbol>();
				fieldTypeList.Add(type);
				var baseType = type.BaseType;
				while (baseType != null)
				{
					fieldTypeList.Add(baseType);
					baseType = baseType.BaseType;
				}

				// write non-static fields
				writer.WriteLine($"struct {GetTypeFullName(type)}");
				writer.WriteLine('{');
				writer.AddTab();
				foreach (var subType in fieldTypeList)
				{
					foreach (var member in subType.GetMembers())
					{
						if (member.IsStatic) continue;
						if (member is IFieldSymbol) WriteField((IFieldSymbol)member);
					}
				}
				writer.RemoveTab();
				writer.WriteLine("};");

				// write static fields
				foreach (var member in type.GetMembers())
				{
					if (!member.IsStatic) continue;
					if (member is IFieldSymbol) WriteField((IFieldSymbol)member);
				}
			}

			return true;
		}

		private void WriteField(IFieldSymbol field)
		{
			writer.WriteLinePrefix($"{GetTypeFullNameRef(field.Type)} {GetFieldFullName(field)};");
		}

		private bool WriteMethod(IMethodSymbol method, bool writeBody)
		{
			this.method = method;
			if (method.ContainingType.SpecialType == SpecialType.System_Void) return false;
			if (method.AssociatedSymbol is IPropertySymbol && IsAutoProperty((IPropertySymbol)method.AssociatedSymbol)) return false;

			// skip if method is native extern
			foreach (var attribute in method.GetAttributes())
			{
				var type = attribute.AttributeClass;
				if (type.ContainingNamespace.Name == "CS2X" && type.Name == "NativeExternAttribute")
				{
					return false;
				}
			}

			// validate method type is supported
			switch (method.MethodKind)
			{
				case MethodKind.Ordinary:
				case MethodKind.Constructor:
				case MethodKind.PropertyGet:
				case MethodKind.PropertySet:
					break;
				default: throw new NotSupportedException("Unsupported method kind: " + method.MethodKind);
			}

			// write method desc
			if (method.MethodKind != MethodKind.Constructor) writer.WritePrefix($"{GetTypeFullNameRef(method.ReturnType)} {GetMethodFullName(method)}(");
			else writer.WritePrefix($"{GetTypeFullNameRef(method.ContainingType)} {GetMethodFullName(method)}(");
			if (!method.IsStatic && method.MethodKind != MethodKind.Constructor)
			{
				writer.Write($"{GetTypeFullName(method.ContainingType)}* self");
				if (method.Parameters.Length != 0) writer.Write(", ");
			}
			WriteParameters(method.Parameters);

			// write method block
			if (!writeBody)
			{
				writer.WriteLine(");");
			}
			else
			{
				writer.WriteLine(')');
				writer.WriteLine('{');
				writer.AddTab();
				if (method.MethodKind == MethodKind.Constructor)
				{
					var type = method.ContainingType;
					if (type.IsReferenceType)
					{
						writer.WriteLinePrefix($"{GetTypeFullNameRef(type)} self;");
						string ptr = string.Empty;
						if (IsEmptyType(type)) ptr = "*";
						writer.WriteLinePrefix($"self = {GetNewObjectMethod(type)}(sizeof({GetTypeFullName(type)}{ptr}));");
					}
					else if (method.IsImplicitlyDeclared)
					{
						writer.WriteLinePrefix($"{GetTypeFullNameRef(type)} selfObj = {{0}};");
					}
					else
					{
						writer.WriteLinePrefix($"{GetTypeFullNameRef(type)} selfObj;");
						writer.WriteLinePrefix($"{GetTypeFullName(type)}* self = &selfObj;");
					}
				}

				if (!method.IsImplicitlyDeclared)
				{
					if (!method.IsExtern)
					{
						if (method.DeclaringSyntaxReferences.Length != 1) throw new Exception("Method can only be defined in one location: " + method.Name);
						var reference = method.DeclaringSyntaxReferences.First();
						var syntaxDeclaration = reference.GetSyntax();
						semanticModel = project.compilation.GetSemanticModel(syntaxDeclaration.SyntaxTree);
						using (var stream = new MemoryStream())
						using (instructionalBody = new InstructionalBody(stream, writer))
						{
							var origWriter = writer;
							writer = instructionalBody;
							if (syntaxDeclaration is MethodDeclarationSyntax)
							{
								var syntax = (MethodDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null)
								{
									WriteBody(syntax.Body);
								}
								else if(syntax.ExpressionBody != null)
								{
									if (!method.ReturnsVoid) writer.WritePrefix("return ");
									writer.Write(writer.prefix);
									WriteExpression(syntax.ExpressionBody.Expression);
									writer.WriteLine(';');
								}
								else
								{
									throw new NotSupportedException("Unsupported empty method syntax: " + method.Name);
								}
							}
							else if (syntaxDeclaration is ConstructorDeclarationSyntax)
							{
								var syntax = (ConstructorDeclarationSyntax)syntaxDeclaration;
								WriteBody(syntax.Body);
							}
							else if (syntaxDeclaration is AccessorDeclarationSyntax)
							{
								var syntax = (AccessorDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null) WriteBody(syntax.Body);
								else throw new NotImplementedException("This should never be hit");
							}
							else if (syntaxDeclaration is ArrowExpressionClauseSyntax)
							{
								var syntax = (ArrowExpressionClauseSyntax)syntaxDeclaration;
								writer.WritePrefix("return ");
								WriteExpression(syntax.Expression);
								writer.WriteLine(';');
							}
							else
							{
								throw new NotSupportedException("Unsupported method syntax body: " + syntaxDeclaration.GetType());
							}

							// write define locals
							writer = origWriter;
							foreach (var local in instructionalBody.locals)
							{
								writer.WriteLinePrefix($"{GetTypeFullNameRef(local.type)} {local.name};");
							}
						}
					}
					else if (IsInternalCall(method))
					{
						var type = method.ContainingType;
						if (type.ContainingNamespace.Name == "System")
						{
							if (type.Name == "Object")
							{
								if (method.Name == "GetType")
								{
									// TODO
								}
								else
								{
									throw new NotSupportedException("Unsupported internal Object method: " + method.Name);
								}
							}
							else if (type.Name == "Type")
							{
								if (method.Name == "GetTypeFromHandle")
								{
									// TODO
								}
								else
								{
									throw new NotSupportedException("Unsupported internal Type method: " + method.Name);
								}
							}
							else if (type.Name == "String")
							{
								if (method.Name == "get_Length")
								{
									// TODO
								}
								else if (method.Name == "FastAllocateString")
								{
									// TODO
								}
								else
								{
									throw new NotSupportedException("Unsupported internal String method: " + method.Name);
								}
							}
							else if (type.Name == "Array")
							{
								if (method.Name == "get_Length")
								{
									// TODO
								}
								else if (method.Name == "get_LongLength")
								{
									// TODO
								}
								else
								{
									throw new NotSupportedException("Unsupported internal Array method: " + method.Name);
								}
							}
							else
							{
								throw new NotSupportedException("Unsupported internal method in type: " + type.Name);
							}
						}
						else
						{
							throw new NotSupportedException("Unsupported internal method in namespace: " + type.Name);
						}
					}
					else
					{
						throw new NotSupportedException("Unsupported method extern: " + method.Name);
					}
				}
				else if (method.MethodKind == MethodKind.Constructor)
				{
					// do nothing...
				}
				else
				{
					throw new NotSupportedException("Unsupported implicit method kind: " + method.MethodKind);
				}

				if (method.MethodKind == MethodKind.Constructor)
				{
					if (method.ContainingType.IsReferenceType) writer.WriteLinePrefix("return self;");
					else writer.WriteLinePrefix("return selfObj;");
				}
				writer.RemoveTab();
				writer.WriteLine('}');
			}

			return true;
		}
		
		private void WriteParameters(ImmutableArray<IParameterSymbol> parameters)
		{
			var lastParameter = parameters.LastOrDefault();
			foreach (var parameter in parameters)
			{
				writer.Write($"{GetTypeFullNameRef(parameter.Type)} {GetParameterFullName(parameter)}");
				if (parameter != lastParameter) writer.Write(", ");
			}
		}
		#endregion

		#region Method Body / Syntax Instructions
		private void WriteBody(BlockSyntax body)
		{
			var origBlock = block;
			block = body;
			foreach (var statement in body.Statements)
			{
				WriteStatment(statement);
			}
			block = origBlock;
		}

		private void WriteStatment(StatementSyntax statement)
		{
			if (statement is BlockSyntax)
			{
				writer.WriteLinePrefix('{');
				writer.AddTab();
				using (var stream = new MemoryStream())
				using (var subInstructionalBody = new InstructionalBody(stream, writer))
				{
					subInstructionalBody.locals.AddRange(instructionalBody.locals);// copy parent block locals
					var origWriter = writer;
					var origInstructionalBody = instructionalBody;
					writer = subInstructionalBody;
					instructionalBody = subInstructionalBody;

					// write body
					WriteBody((BlockSyntax)statement);

					// write define locals
					writer = origWriter;
					instructionalBody = origInstructionalBody;
					foreach (var local in subInstructionalBody.locals)
					{
						if (local.block == (BlockSyntax)statement)// only write locals part of this block
						{
							writer.WriteLinePrefix($"{GetTypeFullNameRef(local.type)} {local.name};");
						}
					}
				}
				writer.RemoveTab();
				writer.WriteLinePrefix('}');
				return;// return so we don't write line end
			}
			else if (statement is ReturnStatementSyntax) WriteReturnStatement((ReturnStatementSyntax)statement);
			else if (statement is ExpressionStatementSyntax) ExpressionStatement((ExpressionStatementSyntax)statement);
			else if (statement is LocalDeclarationStatementSyntax) LocalDeclarationStatement((LocalDeclarationStatementSyntax)statement);
			else if (statement is IfStatementSyntax) IfStatement((IfStatementSyntax)statement);
			else if (statement is FixedStatementSyntax) FixedStatement((FixedStatementSyntax)statement);
			else if (statement is ThrowStatementSyntax) ThrowStatement((ThrowStatementSyntax)statement);
			else throw new NotSupportedException("Unsupported statement: " + statement.GetType());
			writer.WriteLine(';');
		}

		private void WriteReturnStatement(ReturnStatementSyntax statement)
		{
			writer.WritePrefix("return ");
			WriteExpression(statement.Expression);
		}

		private void ExpressionStatement(ExpressionStatementSyntax statement)
		{
			writer.WritePrefix();
			WriteExpression(statement.Expression);
		}

		private void LocalDeclarationStatement(LocalDeclarationStatementSyntax statement)
		{
			var typeInfo = semanticModel.GetTypeInfo(statement.Declaration.Type);
			foreach (var variable in statement.Declaration.Variables)
			{
				var localSymbol = (ILocalSymbol)semanticModel.GetDeclaredSymbol(variable);
				var local = new InstructionalBody.Local(block, variable, localSymbol, typeInfo.Type, $"l_{variable.Identifier.ValueText}_{instructionalBody.locals.Count}");
				instructionalBody.locals.Add(local);
				if (variable.Initializer != null)
				{
					writer.WritePrefix(local.name + " = ");
					WriteExpression(variable.Initializer.Value);
				}
			}
		}

		private void IfStatement(IfStatementSyntax statement)
		{
			// TODO
		}

		private void FixedStatement(FixedStatementSyntax statement)
		{
			// TODO
		}

		private void ThrowStatement(ThrowStatementSyntax statement)
		{ 
			// TODO
		}

		private void WriteExpression(ExpressionSyntax expression)
		{
			if (expression is LiteralExpressionSyntax) WriteLiteralExpression((LiteralExpressionSyntax)expression);
			else if (expression is IdentifierNameSyntax) WriteIdentifierName((IdentifierNameSyntax)expression);
			else if (expression is MemberAccessExpressionSyntax) MemberAccessExpression((MemberAccessExpressionSyntax)expression);
			else if (expression is ObjectCreationExpressionSyntax) ObjectCreationExpression((ObjectCreationExpressionSyntax)expression);
			else if (expression is StackAllocArrayCreationExpressionSyntax) StackAllocArrayCreationExpression((StackAllocArrayCreationExpressionSyntax)expression);
			else if (expression is AssignmentExpressionSyntax) AssignmentExpression((AssignmentExpressionSyntax)expression);
			else if (expression is PrefixUnaryExpressionSyntax) PrefixUnaryExpression((PrefixUnaryExpressionSyntax)expression);
			else if (expression is InvocationExpressionSyntax) InvocationExpression((InvocationExpressionSyntax)expression);
			else if (expression is ConditionalExpressionSyntax) ConditionalExpression((ConditionalExpressionSyntax)expression);
			else if (expression is BinaryExpressionSyntax) BinaryExpression((BinaryExpressionSyntax)expression);
			else if (expression is CastExpressionSyntax) CastExpression((CastExpressionSyntax)expression);
			else if (expression is ThisExpressionSyntax) ThisExpression((ThisExpressionSyntax)expression);
			else if (expression is ElementAccessExpressionSyntax) ElementAccessExpression((ElementAccessExpressionSyntax)expression);
			else if (expression is ParenthesizedExpressionSyntax) ParenthesizedExpression((ParenthesizedExpressionSyntax)expression);
			else throw new NotImplementedException("Unsupported expression: " + expression.GetType());
		}

		private void WriteCaller(ExpressionSyntax expression)
		{
			if (expression is MemberAccessExpressionSyntax)
			{
				var accessExpression = (MemberAccessExpressionSyntax)expression;
				expression = accessExpression.Expression;
			}
			else if (expression is IdentifierNameSyntax && expression.Parent is MemberAccessExpressionSyntax)
			{
				WriteCaller((MemberAccessExpressionSyntax)expression.Parent);
				return;
			}
			else
			{
				var symbolInfo = semanticModel.GetSymbolInfo(expression);
				if (symbolInfo.Symbol.ContainingType == method.ContainingType) expression = SyntaxFactory.ThisExpression();
			}

			WriteExpression(expression);
		}

		private void WriteLiteralExpression(LiteralExpressionSyntax expression)
		{
			if (expression.IsKind(SyntaxKind.StringLiteralExpression))
			{
				string literalName;
				if (!stringLiterals.ContainsKey(expression.Token.ValueText))
				{
					// write new string literal to header
					literalName = "StringLiteral_" + stringLiterals.Count.ToString();
					stringLiterals.Add(expression.Token.ValueText, literalName);
					string value;
					if (expression.Token.ValueText.Length > 64) value = expression.Token.ValueText.Substring(0, 64);
					else value = expression.Token.ValueText;
					if (value.Contains('\n')) value = value.Replace("\n", "/n");
					if (value.Contains('\r')) value = value.Replace("\r", "/r");
					stringLiteralWriter.WriteLine($"/* {value} */");
					stringLiteralWriter.Write($"int8_t {literalName}[{GetStringMemorySize(expression.Token.ValueText)}] = ");
					stringLiteralWriter.Write(StringToLiteral(expression.Token.ValueText));
					stringLiteralWriter.WriteLine(';');
				}
				else
				{
					// just get existing string literal
					literalName = stringLiterals[expression.Token.ValueText];
				}

				writer.Write(literalName);
			}
			else if (expression.IsKind(SyntaxKind.NullLiteralExpression))
			{
				writer.Write('0');
			}
			else if (expression.IsKind(SyntaxKind.NumericLiteralExpression))
			{
				writer.Write(expression.Token.ValueText);
			}
			else if (expression.IsKind(SyntaxKind.CharacterLiteralExpression))
			{
				writer.Write($"'{expression.Token.ValueText}'");
			}
			else if (expression.IsKind(SyntaxKind.TrueLiteralExpression))
			{
				writer.Write('1');
			}
			else if (expression.IsKind(SyntaxKind.FalseLiteralExpression))
			{
				writer.Write('0');
			}
			else
			{
				throw new NotSupportedException("LiteralExpressionSyntax not supported: " + expression.Kind());
			}
		}

		private void WriteIdentifierName(IdentifierNameSyntax expression)
		{
			var symbolInfo = semanticModel.GetSymbolInfo(expression);
			if (symbolInfo.Symbol is ILocalSymbol)
			{
				var local = (ILocalSymbol)symbolInfo.Symbol;
				var localObj = instructionalBody.locals.First(x => x.local == local);
				writer.Write(localObj.name);
			}
			else if (symbolInfo.Symbol is IParameterSymbol)
			{
				var parameter = (IParameterSymbol)symbolInfo.Symbol;
				writer.Write(GetParameterFullName(parameter));
			}
			else if (symbolInfo.Symbol is IFieldSymbol)
			{
				var field = (IFieldSymbol)symbolInfo.Symbol;
				if (!field.IsStatic)
				{
					WriteCaller(expression);
					writer.Write("->");
					writer.Write(GetFieldFullName(field));
				}
				else
				{
					writer.Write(GetFieldFullName(field));
				}
			}
			else if (symbolInfo.Symbol is IPropertySymbol)
			{
				var property = (IPropertySymbol)symbolInfo.Symbol;
				if (IsAutoProperty(property, out var field))
				{
					if (!property.IsStatic)
					{
						WriteCaller(expression);
						writer.Write("->");
						writer.Write(GetFieldFullName(field));
					}
					else
					{
						writer.Write(GetFieldFullName(field));
					}
				}
				else
				{
					if (!property.IsStatic)
					{
						writer.Write(GetMethodFullName(property.GetMethod));
						writer.Write('(');
						WriteCaller(expression);
						writer.Write(')');
					}
					else
					{
						writer.Write($"{GetMethodFullName(property.GetMethod)}()");
					}
				}
			}
			else if (symbolInfo.Symbol is IMethodSymbol)
			{
				var method = (IMethodSymbol)symbolInfo.Symbol;
				writer.Write($"{GetMethodFullName(method)}");
			}
			else
			{
				throw new NotSupportedException("IdentifierNameSyntax Symbol not supported: " + symbolInfo.Symbol.GetType());
			}
		}

		private void WriteArgumentList(ArgumentListSyntax argumentList)
		{
			var arguments = argumentList.Arguments;
			if (arguments.Count != 0)
			{
				var lastArg = arguments.Last();
				foreach (var arg in arguments)
				{
					WriteExpression(arg.Expression);
					if (arg != lastArg) writer.Write(", ");
				}
			}
		}

		private void MemberAccessExpression(MemberAccessExpressionSyntax expression)
		{
			// expression.Expression is the caller and will be writen from the WriteCaller method
			var nameSymbolInfo = semanticModel.GetSymbolInfo(expression.Name);
			if (nameSymbolInfo.Symbol is IMethodSymbol)
			{
				WriteExpression(expression.Name);
			}
			else if (nameSymbolInfo.Symbol is IPropertySymbol)
			{
				WriteExpression(expression.Name);
			}
			else if (nameSymbolInfo.Symbol is IFieldSymbol)
			{
				WriteExpression(expression.Name);
			}
			else
			{
				throw new NotSupportedException("Unsupported MemberAccessExpression: " + expression.ToString());
			}
		}

		private void ObjectCreationExpression(ObjectCreationExpressionSyntax expression)
		{
			var symbolInfo = semanticModel.GetSymbolInfo(expression);
			var method = (IMethodSymbol)symbolInfo.Symbol;
			writer.Write(GetMethodFullName(method));
			writer.Write('(');
			WriteArgumentList(expression.ArgumentList);
			writer.Write(')');
		}

		private void StackAllocArrayCreationExpression(StackAllocArrayCreationExpressionSyntax expression)
		{
			var typeInfo = semanticModel.GetTypeInfo(expression.Type);
			if (!(typeInfo.Type is IPointerTypeSymbol)) throw new NotImplementedException("stackalloc is not pointer type");
			var ptrType = (IPointerTypeSymbol)typeInfo.Type;
			writer.Write($"alloca(sizeof({GetTypeFullName(ptrType.PointedAtType)}))");
		}

		private void AssignmentExpression(AssignmentExpressionSyntax expression)
		{
			// check if special property assignment is needed
			if (expression.Left is IdentifierNameSyntax)
			{
				var symbolInfo = semanticModel.GetSymbolInfo(expression.Left);
				var property = symbolInfo.Symbol as IPropertySymbol;
				if (property != null && !IsAutoProperty(property))
				{
					writer.Write(GetMethodFullName(property.SetMethod));
					writer.Write('(');
					if (!property.IsStatic)
					{
						WriteCaller(expression.Left);
						writer.Write(", ");
					}
					WriteExpression(expression.Right);
					writer.Write(')');
					return;
				}
			}

			// normal assignment
			WriteExpression(expression.Left);
			writer.Write(" = ");
			WriteExpression(expression.Right);
		}

		private void PrefixUnaryExpression(PrefixUnaryExpressionSyntax expression)
		{
			writer.Write(expression.OperatorToken.Text);
			WriteExpression(expression.Operand);
		}

		private void InvocationExpression(InvocationExpressionSyntax expression)
		{
			WriteExpression(expression.Expression);
			writer.Write('(');
			var symbolInfo = semanticModel.GetSymbolInfo(expression);
			if (!symbolInfo.Symbol.IsStatic)
			{
				WriteCaller(expression.Expression);
				if (expression.ArgumentList.Arguments.Count != 0) writer.Write(", ");
			}
			WriteArgumentList(expression.ArgumentList);
			writer.Write(')');
		}

		private void ConditionalExpression(ConditionalExpressionSyntax expression)
		{
			WriteExpression(expression.Condition);
			writer.Write(" ? ");
			WriteExpression(expression.WhenTrue);
			writer.Write(" : ");
			WriteExpression(expression.WhenFalse);
		}

		private void BinaryExpression(BinaryExpressionSyntax expression)
		{
			var symbolInfo = semanticModel.GetSymbolInfo(expression);
			if (symbolInfo.Symbol == null)
			{
				WriteExpression(expression.Left);
				writer.Write($" {expression.OperatorToken.ValueText} ");
				WriteExpression(expression.Right);
			}
			else if (symbolInfo.Symbol is IMethodSymbol)
			{
				var operatorMethod = (IMethodSymbol)symbolInfo.Symbol;
				var type = operatorMethod.ContainingType;
				if (type.SpecialType == SpecialType.System_String)
				{
					IMethodSymbol specialMethod = null;
					if
					(
						expression.OperatorToken.ValueText == "+" &&
						operatorMethod.ReturnType.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters.Length == 2 &&
						operatorMethod.Parameters[0].Type.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters[1].Type.SpecialType == SpecialType.System_String
					)
					{
						specialMethod = (IMethodSymbol)type.GetMembers().First(x => x is IMethodSymbol && x.Name == "Concat" && ((IMethodSymbol)x).Parameters.Length == 2);
					}
					else if
					(
						expression.OperatorToken.ValueText == "==" &&
						operatorMethod.ReturnType.SpecialType == SpecialType.System_Boolean &&
						operatorMethod.Parameters.Length == 2 &&
						operatorMethod.Parameters[0].Type.SpecialType == SpecialType.System_String &&
						operatorMethod.Parameters[1].Type.SpecialType == SpecialType.System_String
					)
					{
						specialMethod = (IMethodSymbol)type.GetMembers().First(x => x is IMethodSymbol && x.Name == "Equals" && ((IMethodSymbol)x).Parameters.Length == 1 && ((IMethodSymbol)x).Parameters[0].Type.SpecialType == SpecialType.System_String);
					}

					if (specialMethod != null)
					{
						writer.Write(GetMethodFullName(specialMethod));
						writer.Write('(');
						//if (!leftString) writer.Write("ToString_vTableTODO(");// TODO: <<<<<<<< add ToString support for non string types
						WriteExpression(expression.Left);
						//if (!leftString) writer.Write(')');
						writer.Write(", ");
						//if (!rightString) writer.Write("ToString_vTableTODO(");
						WriteExpression(expression.Right);
						//if (!rightString) writer.Write(')');
						writer.Write(')');
					}
					else
					{
						writer.Write(GetMethodFullName(operatorMethod));
						writer.Write('(');
						WriteExpression(expression.Left);
						writer.Write(", ");
						WriteExpression(expression.Right);
						writer.Write(')');
					}
				}
				else if (IsPrimitiveType(operatorMethod.Parameters[0].Type) && IsPrimitiveType(operatorMethod.Parameters[1].Type))
				{
					WriteExpression(expression.Left);
					writer.Write($" {expression.OperatorToken.ValueText} ");
					WriteExpression(expression.Right);
				}
				else
				{
					writer.Write(GetMethodFullName(operatorMethod));
					writer.Write('(');
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
				}
			}
			else
			{
				throw new NotSupportedException("Unsupported binary expression symbol: " + symbolInfo.Symbol.GetType());
			}
		}

		private void CastExpression(CastExpressionSyntax expression)
		{
			var type = semanticModel.GetTypeInfo(expression.Type);
			writer.Write($"({GetTypeFullNameRef(type.Type)})");
			WriteExpression(expression.Expression);
		}

		private void ThisExpression(ThisExpressionSyntax expression)
		{
			writer.Write("self");
		}

		private void ElementAccessExpression(ElementAccessExpressionSyntax expression)
		{
			writer.Write('[');
			WriteExpression(expression.Expression);
			writer.Write(']');
		}

		private void ParenthesizedExpression(ParenthesizedExpressionSyntax expression)
		{
			writer.Write('(');
			WriteExpression(expression.Expression);
			writer.Write(')');
		}
		#endregion

		#region C name resolution
		private string GetNewObjectMethod(ITypeSymbol type)
		{
			if (IsAtomicType(type)) return "CS2X_GC_NewAtomic";
			else return "CS2X_GC_New";
		}

		private string GetPrimitiveName(ITypeSymbol type)
		{
			switch (type.SpecialType)
			{
				case SpecialType.System_Boolean: return "char";
				case SpecialType.System_Char: return "char16_t";
				case SpecialType.System_SByte: return "int8_t";
				case SpecialType.System_Byte: return "uint8_t";
				case SpecialType.System_Int16: return "int16_t";
				case SpecialType.System_UInt16: return "uint16_t";
				case SpecialType.System_Int32: return "int32_t";
				case SpecialType.System_UInt32: return "uint32_t";
				case SpecialType.System_Int64: return "int64_t";
				case SpecialType.System_UInt64: return "uint64_t";
				case SpecialType.System_Single: return "float";
				case SpecialType.System_Double: return "double";
				case SpecialType.System_IntPtr: return "intptr_t";
				case SpecialType.System_UIntPtr: return "uintptr_t";
				default: throw new NotImplementedException("Unsupported primitive: " + type.SpecialType);
			}
		}

		private string GetRuntimeTypeFullName(ITypeSymbol type)
		{
			return GetTypeFullName(type) + "_RTTYPE";
		}

		private string GetRuntimeTypeObjFullName(ITypeSymbol type)
		{
			return GetRuntimeTypeFullName(type) + "_OBJ";
		}

		private string GetRuntimeTypeMetadataFullName(ITypeSymbol type)
		{
			return GetRuntimeTypeFullName(type) + "_RTTYPE_METADATA";
		}

		private Enabler allowTypePrefix = new Enabler(true);
		protected override string GetTypeFullName(ITypeSymbol type)
		{
			if (IsPrimitiveType(type))
			{
				return GetPrimitiveName(type);
			}
			else if (type.SpecialType == SpecialType.System_Void)
			{
				return "void";
			}
			else
			{
				if (allowTypePrefix.enabled) return "t_" + base.GetTypeFullName(type);
				else return base.GetTypeFullName(type);
			}
		}

		private string GetTypeFullNameRef(ITypeSymbol type)
		{
			string ptr = string.Empty;
			while (true)
			{
				if (type is IArrayTypeSymbol)
				{
					ptr += "*";
					var t = (IArrayTypeSymbol)type;
					type = t.ElementType;
				}
				else if (type is IPointerTypeSymbol)
				{
					ptr += "*";
					var t = (IPointerTypeSymbol)type;
					type = t.PointedAtType;
				}
				else
				{
					break;
				}
			}

			if (type.IsReferenceType) ptr += "*";

			string result = GetTypeFullName(type);
			result += ptr;
			return result;
		}

		protected override string GetFieldFullName(IFieldSymbol field)
		{
			using (allowTypePrefix.Disable())
			{
				string result = base.GetFieldFullName(field);
				if (!field.IsStatic) result = $"f_{result}_{GetBaseTypeCount(field.ContainingType)}";
				else result = $"f_{GetTypeFullName(field.ContainingType)}_{result}";
				return result;
			}
		}

		protected override string GetParameterFullName(IParameterSymbol parameter)
		{
			using (allowTypePrefix.Disable())
			{
				return "p_" + base.GetParameterFullName(parameter);
			}
		}

		protected override string GetLocalFullName(ILocalSymbol local)
		{
			using (allowTypePrefix.Disable())
			{
				return "l_" + base.GetLocalFullName(local);
			}
		}

		protected override string GetMethodFullName(IMethodSymbol method)
		{
			using (allowTypePrefix.Disable())
			{
				return $"m_{GetTypeFullName(method.ContainingType)}_{base.GetMethodFullName(method)}_{GetMethodOverloadIndex(method)}";
			}
		}

		protected override string GetContainingTypeDelimiter()
		{
			return "_";
		}
		protected override string GetNamespaceDelimiter()
		{
			return "_";
		}
		#endregion
	}
}
