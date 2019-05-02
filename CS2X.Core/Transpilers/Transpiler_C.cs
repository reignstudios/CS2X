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
		private TranspiledProject transpiledProject;
		private Project project;
		private StreamWriterEx writer, stringLiteralWriter;
		private InstructionalBody instructionalBody;// active instructional body states and values
		private Dictionary<string, string> stringLiterals;// string literals that span all projects

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
				stringLiteralWriter.WriteLine("#pragma once");
				stringLiteralWriter.WriteLine();
				foreach (var project in solution.projects)
				{
					TranspileProject(outputPath, project);
				}
			}
		}

		private TranspiledProject TranspileProject(string outputPath, Project project)
		{
			var transpiledProject = new TranspiledProject(project);

			// transpile references first
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

		private void WriteProject(Project project)
		{
			this.project = project;
			if (project.type == ProjectTypes.Dll) writer.WriteLine("#pragma once");

			// writer info
			writer.WriteLine("/* ############################### */");
			writer.WriteLine($"/* Generated with CS2X v{Utils.GetAssemblyInfoVersion()} */");
			writer.WriteLine("/* ############################### */");

			// include std libraries
			if (project.isCoreLib)
			{
				writer.WriteLine("#include <stdio.h>");
				writer.WriteLine("#include <math.h>");
				writer.WriteLine("#include <stdint.h>");
				writer.WriteLine("#include <uchar.h>");
				writer.WriteLine("#include <locale.h>");
				if (options.stringLiteralMemoryLocation == StringLiteralMemoryLocation.ReadonlyProgramMemory_AVR) writer.WriteLine("#include <avr/pgmspace.h>");
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
			writer.WriteLine("/* Torward declare Types */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes) WriteType(type, false);

			// forward declare types
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Forward decalre Methods */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes)
			{
				foreach (var method in type.GetMembers())
				{
					if (method is IMethodSymbol) WriteMethod((IMethodSymbol)method, false);
				}
			}

			// types
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Type definitions */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes) WriteType(type, true);

			// methods
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Method definitions */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes)
			{
				foreach (var method in type.GetMembers())
				{
					if (method is IMethodSymbol) WriteMethod((IMethodSymbol)method, true);
				}
			}
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

			// write System.Object header
			WriteBinary(new byte[(int)options.ptrSize]);

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
		private void WriteType(INamedTypeSymbol type, bool writeBody)
		{
			if (IsPrimitiveType(type) || type.SpecialType == SpecialType.System_Void) return;

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
				foreach (var member in type.GetMembers())
				{
					if (!member.IsStatic) continue;
					if (member is IFieldSymbol)
					{
						var field = (IFieldSymbol)member;
						writer.WriteLine($"#define {GetFieldFullName(field)} {field.ConstantValue.ToString()}");
					}
				}
				return;
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
		}

		private void WriteField(IFieldSymbol field)
		{
			writer.WriteLinePrefix($"{GetTypeFullNameRef(field.Type)} {GetFieldFullName(field)};");
		}

		private void WriteMethod(IMethodSymbol method, bool writeBody)
		{
			// skip if method is native extern
			foreach (var attribute in method.GetAttributes())
			{
				var type = attribute.AttributeClass;
				if (type.ContainingNamespace.Name == "CS2X" && type.Name == "NativeExternAttribute")
				{
					return;
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

			// write method
			if (!writeBody)
			{
				writer.WritePrefix($"{GetTypeFullNameRef(method.ReturnType)} {GetMethodFullName(method)}(");
				WriteParameters(method.Parameters);
				writer.WriteLine(");");
			}
			else
			{
				writer.WritePrefix($"{GetTypeFullNameRef(method.ReturnType)} {GetMethodFullName(method)}(");
				WriteParameters(method.Parameters);
				writer.WriteLine(')');
				writer.WriteLine('{');
				writer.AddTab();
				if (!method.IsImplicitlyDeclared)
				{
					if (method.DeclaringSyntaxReferences.Length != 1) throw new Exception("Method can only be defined in one location: " + method.Name);
					var reference = method.DeclaringSyntaxReferences.First();
					var syntaxDeclaration = reference.GetSyntax();
					using (var stream = new MemoryStream())
					using (instructionalBody = new InstructionalBody(stream, writer))
					{
						var origWriter = writer;
						writer = instructionalBody;
						if (syntaxDeclaration is MethodDeclarationSyntax)
						{
							var syntax = (MethodDeclarationSyntax)syntaxDeclaration;
							WriteBody(syntax.Body);
						}
						else if (syntaxDeclaration is ConstructorDeclarationSyntax)
						{
							var syntax = (ConstructorDeclarationSyntax)syntaxDeclaration;
							WriteBody(syntax.Body);
						}
						else if (syntaxDeclaration is AccessorDeclarationSyntax)
						{
							var syntax = (AccessorDeclarationSyntax)syntaxDeclaration;
							WriteBody(syntax.Body);
						}
						else if (syntaxDeclaration is ArrowExpressionClauseSyntax)
						{
							var syntax = (ArrowExpressionClauseSyntax)syntaxDeclaration;
							writer.AddTab();
							writer.WritePrefix("return ");
							WriteExpression(syntax.Expression);
							writer.WriteLine(';');
							writer.RemoveTab();
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
				else if (method.MethodKind == MethodKind.Constructor)
				{
					// TODO: write implicit contructor
				}
				else
				{
					throw new NotImplementedException("Unsupported implicit method kind: " + method.MethodKind);
				}
				writer.RemoveTab();
				writer.WriteLine('}');
			}
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
			
		}

		private void WriteExpression(ExpressionSyntax expression)
		{
			if (expression is LiteralExpressionSyntax) WriteLiteralExpression((LiteralExpressionSyntax)expression);
			else if (expression is IdentifierNameSyntax) WriteIdentifierName((IdentifierNameSyntax)expression);
			else if (expression is ObjectCreationExpressionSyntax) ObjectCreationExpression((ObjectCreationExpressionSyntax)expression);
			else throw new NotImplementedException("Unsupported expression: " + expression.GetType());
		}

		private void WriteLiteralExpression(LiteralExpressionSyntax expression)
		{
			if (expression.IsKind(SyntaxKind.StringLiteralExpression))
			{
				string literalName;
				if (!stringLiterals.ContainsKey(expression.Token.ValueText))
				{
					literalName = "StringLiteral_" + stringLiterals.Count.ToString();
					stringLiterals.Add(expression.Token.ValueText, literalName);
					string value;
					if (expression.Token.ValueText.Length > 64) value = expression.Token.ValueText.Substring(0, 64);
					else value = expression.Token.ValueText;
					if (value.Contains('\n')) value = value.Replace("\n", "/n");
					if (value.Contains('\r')) value = value.Replace("\r", "/r");
					stringLiteralWriter.WriteLine($"// '{value}'");
					stringLiteralWriter.Write($"int8_t {literalName}[{GetStringMemorySize(expression.Token.ValueText)}] = ");
					stringLiteralWriter.Write(StringToLiteral(expression.Token.ValueText));
					stringLiteralWriter.WriteLine(';');
				}
				else
				{
					literalName = stringLiterals[expression.Token.ValueText];
				}
			}

			writer.Write(expression.Token.Text);
		}

		private void WriteIdentifierName(IdentifierNameSyntax expression)
		{
			
		}

		private void ObjectCreationExpression(ObjectCreationExpressionSyntax expression)
		{
			
		}
		#endregion

		#region C name resolution
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

		private Enabler allowTypePrefix = new Enabler();
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
