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
			/// Disable the GC entirely. Not safe.
			/// Good for super low memory and special embedded devices.
			/// </summary>
			Disabled,

			/// <summary>
			/// Allocates memory but doesn't scan or clean-up
			/// Good for port testing
			/// </summary>
			Dumby,

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

		public enum ArrayLengthMemoryLocation
		{
			/// <summary>
			/// Stores the array length at a zero offset from your array's ptr
			/// Array's are accessed like so: MyArray[sizeof(size_t) + MyIndex]
			/// This is the default option
			/// </summary>
			AtPointer,

			/// <summary>
			/// Stores the array length behind your array's ptr with a negitive 'size_t' offset (aka its header)
			/// Array's are accessed like so: MyArray[MyIndex] but MyArray.Length does pointer arithmetic instead
			/// This method can be faster but only works with the GC disabled currently
			/// </summary>
			BeforePointer
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
			/// Array.Length memory location
			/// </summary>
			public ArrayLengthMemoryLocation arrayLengthMemoryLocation;

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

			// test compatibility matrix
			if (options.gc == GC_Type.Boehm)
			{
				if (options.arrayLengthMemoryLocation == ArrayLengthMemoryLocation.BeforePointer) throw new NotSupportedException("Array length memory location must be 'AtPointer' for Boehm GC");
			}
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

			string stringTypeName = GetTypeFullName(stringType);
			string stringRuntimeTypeName = GetRuntimeTypeObjFullName(stringType);

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
					case GC_Type.Disabled: gcFileName = null; break;
					case GC_Type.Dumby: gcFileName = "CS2X.GC.Dumby"; break;
					case GC_Type.Boehm: gcFileName = "CS2X.GC.Boehm"; break;
					case GC_Type.Portable: gcFileName = "CS2X.GC.Portable"; break;
					case GC_Type.Micro: gcFileName = "CS2X.GC.Micro"; break;
					default: throw new Exception("Unsupported GC option: " + options.gc);
				}
				
				if (gcFileName != null)
				{
					gcFileName = Path.Combine(options.gcFolderPath, gcFileName);
					writer.WriteLine($"#include \"{gcFileName}.h\"");
				}
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
			foreach (var type in project.allTypesDependencyOrdered)
			{
				if (WriteType(type, true)) writer.WriteLine();
			}

			// runtime type definitions
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Runtime Types */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes)
			{
				if (WriteRuntimeType(type)) writer.WriteLine();
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

			// init library
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Init Library */");
			writer.WriteLine("/* =============================== */");
			string assemblyName = GetProjectNameFlat(project);
			writer.WriteLine($"void CS2X_InitLib_{assemblyName}()");
			writer.WriteLine('{');
			writer.AddTab();

			if (project.references.Count != 0)
			{
				writer.WriteLinePrefix("/* Init references */");
				foreach (var reference in project.references)
				{
					writer.WriteLinePrefix($"CS2X_InitLib_{GetProjectNameFlat(reference)}();");
				}
				writer.WriteLine();
			}

			writer.WriteLinePrefix("/* Init runtime type objects */");
			string baseTypeFieldName = GetFieldFullName(FindAutoPropertyFieldByName(typeType, "BaseType"));
			string nameFieldName = GetFieldFullName(FindAutoPropertyFieldByName(typeType, "Name"));
			string fullNameFieldName = GetFieldFullName(FindAutoPropertyFieldByName(typeType, "FullName"));
			foreach (var type in project.allTypes)
			{
				if (type.SpecialType == SpecialType.System_Void) continue;
				if (type.TypeKind == TypeKind.Interface) continue;
				string obj = GetRuntimeTypeObjFullName(type);
				writer.WriteLinePrefix($"memset(&{obj}, 0, sizeof({GetRuntimeTypeFullName(type)}));");
				writer.WriteLinePrefix($"{obj}.runtimeType.CS2X_RuntimeType = &{obj};");
				if (type.BaseType != null) writer.WriteLinePrefix($"{obj}.runtimeType.{baseTypeFieldName} = &{GetRuntimeTypeObjFullName(type.BaseType)};");
				else writer.WriteLinePrefix($"{obj}.runtimeType.{baseTypeFieldName} = 0;");
				writer.WriteLinePrefix($"{obj}.runtimeType.{nameFieldName} = ({stringTypeName}*){GetRuntimeTypeMetadataFullName(type)}_Name;");
				writer.WriteLinePrefix($"{obj}.runtimeType.{fullNameFieldName} = ({stringTypeName}*){GetRuntimeTypeMetadataFullName(type)}_FullName;");
			}

			if (options.stringLiteralMemoryLocation == StringLiteralMemoryLocation.GlobalProgramMemory_RAM)
			{
				writer.WriteLine();
				writer.WriteLinePrefix("/* Init runtime type metadata / string literals */");
				foreach (var type in project.allTypes)
				{
					if (type.SpecialType == SpecialType.System_Void) continue;
					if (type.TypeKind == TypeKind.Interface) continue;
					string metadata = GetRuntimeTypeMetadataFullName(type);
					writer.WriteLinePrefix($"(({stringTypeName}*){metadata}_Name)->CS2X_RuntimeType = &{stringRuntimeTypeName};");
					writer.WriteLinePrefix($"(({stringTypeName}*){metadata}_FullName)->CS2X_RuntimeType = &{stringRuntimeTypeName};");
				}
			}

			writer.WriteLine();
			writer.WriteLinePrefix("/* Init runtime type vtabel */");
			foreach (var type in project.allTypes)
			{
				if (type.SpecialType == SpecialType.System_Void) continue;
				if (type.TypeKind == TypeKind.Interface) continue;
				string obj = GetRuntimeTypeObjFullName(type);
				var orderedVirtualMethods = GetOrderedVirtualMethods(type);
				foreach (var method in orderedVirtualMethods)
				{
					var highestMethod = FindHighestVirtualMethodSlot(type, method);
					if (!highestMethod.IsAbstract) writer.WriteLinePrefix($"{obj}.{GetVTableMethodFullName(method)} = {GetMethodFullName(highestMethod)};");
					else writer.WriteLinePrefix($"{obj}.{GetVTableMethodFullName(method)} = 0;");
				}
			}

			writer.RemoveTab();
			writer.WriteLine('}');

			// init static constructors
			writer.WriteLine();
			string staticConstructorInitMethod = $"CS2X_InvokeStaticConstructors_{assemblyName}";
			writer.WriteLine($"void {staticConstructorInitMethod}()");
			writer.WriteLine('{');
			writer.AddTab();
			if (project.references.Count != 0)
			{
				writer.WriteLinePrefix("/* Init references */");
				foreach (var reference in project.references)
				{
					writer.WriteLinePrefix($"CS2X_InvokeStaticConstructors_{GetProjectNameFlat(reference)}();");
				}
				writer.WriteLine();
			}

			writer.WriteLinePrefix("/* Init this project */");
			foreach (var type in project.allTypes)
			{
				if (type.TypeKind == TypeKind.Interface) continue;
				foreach (var member in type.GetMembers())
				{
					if (member.Kind == SymbolKind.Method)
					{
						var method = (IMethodSymbol)member;
						if (method.MethodKind == MethodKind.StaticConstructor) writer.WriteLinePrefix($"{GetMethodFullName(method)}();");
					}
				}
			}
			writer.RemoveTab();
			writer.WriteLine('}');

			// exe only
			if (project.type == ProjectTypes.Exe)
			{
				// init string literals
				writer.WriteLine();
				writer.WriteLine("void CS2X_InitStringLiterals()");
				writer.WriteLine('{');
				writer.AddTab();
				foreach (var literal in stringLiterals)
				{
					writer.WriteLinePrefix($"(({stringTypeName}*){literal.Value})->CS2X_RuntimeType = &{stringRuntimeTypeName};");
				}
				writer.RemoveTab();
				writer.WriteLine('}');

				// entry point
				writer.WriteLine();
				writer.WriteLine("/* =============================== */");
				writer.WriteLine("/* Entry Point */");
				writer.WriteLine("/* =============================== */");
				writer.WriteLine("int main()");
				writer.WriteLine('{');
				writer.AddTab();
				writer.WriteLinePrefix("CS2X_GC_Init();");
				writer.WriteLinePrefix($"CS2X_InitLib_{assemblyName}();");
				writer.WriteLinePrefix("CS2X_InitStringLiterals();");
				writer.WriteLinePrefix($"{staticConstructorInitMethod}();");
				var mainMethod = project.compilation.GetEntryPoint(new System.Threading.CancellationToken());
				writer.WriteLinePrefix($"{GetMethodFullName(mainMethod)}();");// TODO: add support for args
				writer.WriteLinePrefix("CS2X_GC_Collect();");
				writer.WriteLinePrefix("return 0;");
				writer.RemoveTab();
				writer.WriteLine('}');
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
		private bool WriteRuntimeType(INamedTypeSymbol type)
		{
			if (type.SpecialType == SpecialType.System_Void) return false;
			if (type.TypeKind == TypeKind.Interface) return false;

			string runtimeTypeName = GetRuntimeTypeFullName(type);
			writer.WriteLine($"typedef struct {runtimeTypeName}");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"{GetTypeFullName(runtimeType)} runtimeType;");
			var virtualMethods = GetOrderedVirtualMethods(type);
			foreach (var method in virtualMethods)
			{
				if (method.IsStatic) throw new NotSupportedException("Virtual static method not supported: " + method.Name);
				writer.WritePrefix($"{GetTypeFullNameRef(method.ReturnType)} (*{GetVTableMethodFullName(method)})(");
				writer.Write($"{GetTypeFullName(type)}* self");
				if (method.Parameters.Length != 0) writer.Write(", ");
				WriteParameters(method.Parameters);
				writer.WriteLine(");");
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
			if (type.TypeKind == TypeKind.Interface) return false;

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
					if (type.IsReferenceType || !IsEmptyType(type))
					{
						writer.WriteLine(string.Format("typedef struct {0} {0};", GetTypeFullName(type)));
					}
					else
					{
						string ptr;
						if (type.IsValueType) ptr = "*";
						else ptr = string.Empty;
						writer.WriteLine($"typedef void{ptr} {GetTypeFullName(type)};");
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
			else if(type.IsReferenceType || !IsEmptyType(type))
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
				if (type.IsReferenceType) writer.WriteLinePrefix($"{GetTypeFullName(runtimeType)}* CS2X_RuntimeType;");
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
			if (method.IsAbstract) return false;
			bool isVirtualAutoPropertyMethod = false;
			if (IsAutoPropertyMethod(method, out var virtualAutoProperty, out var virtualAutoPropertyField))
			{
				if (!IsVirtualMethod(method)) return false;
				isVirtualAutoPropertyMethod = true;
			}

			// skip if method is native extern
			if (method.IsExtern)
			{
				var nativeExternAttribute = GetNativeExternAttribute(method);
				if (nativeExternAttribute != null)
				{
					if (!nativeExternAttribute.ConstructorArguments.Any(x => ((int)x.Value & 1) == 1)) throw new NotImplementedException("NativeExternTarget not set for 'C' on method: " + method.FullName());
					return false;
				}
			}

			// validate method type is supported
			switch (method.MethodKind)
			{
				case MethodKind.Ordinary:
				case MethodKind.Constructor:
				case MethodKind.StaticConstructor:
				case MethodKind.PropertyGet:
				case MethodKind.PropertySet:
				case MethodKind.UserDefinedOperator:
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
						writer.WriteLinePrefix($"self->CS2X_RuntimeType = &{GetRuntimeTypeObjFullName(type)};");
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
								if (syntax.Body != null) WriteBody(syntax.Body);
								else throw new NotSupportedException("Cunstructor body cannot be emtpy: " + syntax.ToString());
							}
							else if (syntaxDeclaration is AccessorDeclarationSyntax)
							{
								var syntax = (AccessorDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null)
								{
									WriteBody(syntax.Body);
								}
								else if (isVirtualAutoPropertyMethod)
								{
									string caller = string.Empty;
									if (!method.IsStatic) caller = "self->";
									if (method.MethodKind == MethodKind.PropertyGet) writer.WriteLinePrefix($"return {caller}{GetFieldFullName(virtualAutoPropertyField)};");
									else if (method.MethodKind == MethodKind.PropertySet) writer.WriteLinePrefix($"{caller}{GetFieldFullName(virtualAutoPropertyField)} = {GetParameterFullName(method.Parameters[0])};");
									else throw new NotImplementedException("Virtual auto property method kind is invalid: " + method.MethodKind);
								}
								else
								{
									throw new NotImplementedException("AccessorDeclarationSyntax body was null and not a virtual auto property (This should never be hit)");
								}
							}
							else if (syntaxDeclaration is ArrowExpressionClauseSyntax)
							{
								var syntax = (ArrowExpressionClauseSyntax)syntaxDeclaration;
								writer.WritePrefix("return ");
								WriteExpression(syntax.Expression);
								writer.WriteLine(';');
							}
							else if (syntaxDeclaration is OperatorDeclarationSyntax)
							{
								var syntax = (OperatorDeclarationSyntax)syntaxDeclaration;
								if (syntax.Body != null) WriteBody(syntax.Body);
								else throw new NotSupportedException("Operator body cannot be emtpy: " + syntax.ToString());
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
									writer.WriteLinePrefix("return (t_System_Type*)self->CS2X_RuntimeType;");
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
									var handle = method.Parameters[0];
									var field = (IFieldSymbol)handle.Type.GetMembers().First(x => x.Name == "m_type");
									writer.WriteLinePrefix($"return {GetParameterFullName(handle)}.{GetFieldFullName(field)};");
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
									var field = (IFieldSymbol)method.ContainingType.GetMembers().First(x => x.Name == "_stringLength");
									writer.WriteLinePrefix($"return self->{GetFieldFullName(field)};");
								}
								else if (method.Name == "FastAllocateString")
								{
									var field = (IFieldSymbol)method.ContainingType.GetMembers().First(x => x.Name == "_stringLength");
									string lengthName = GetParameterFullName(method.Parameters[0]);
									writer.WriteLinePrefix($"{GetTypeFullName(method.ContainingType)}* result = CS2X_GC_NewAtomic(sizeof(intptr_t) + sizeof(int32_t) + sizeof(char16_t) + (sizeof(char16_t) * {lengthName}));");
									writer.WriteLinePrefix($"result->CS2X_RuntimeType = &{GetRuntimeTypeObjFullName(method.ContainingType)};");
									writer.WriteLinePrefix($"result->{GetFieldFullName(field)} = {lengthName};");
									writer.WriteLinePrefix("return result;");
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
									switch (options.arrayLengthMemoryLocation)
									{
										case ArrayLengthMemoryLocation.AtPointer: writer.WriteLinePrefix($"return (int32_t)(*(size_t*)self);"); break;
										case ArrayLengthMemoryLocation.BeforePointer: writer.WriteLinePrefix($"return (int32_t)(*(size_t*)(--self));"); break;
										default: throw new NotImplementedException("Unsupported array length memory location: " + options.arrayLengthMemoryLocation);
									}
								}
								else if (method.Name == "get_LongLength")
								{
									switch (options.arrayLengthMemoryLocation)
									{
										case ArrayLengthMemoryLocation.AtPointer: writer.WriteLinePrefix($"return (int64_t)(*(size_t*)self);"); break;
										case ArrayLengthMemoryLocation.BeforePointer: writer.WriteLinePrefix($"return (int64_t)(*(size_t*)(--self));"); break;
										default: throw new NotImplementedException("Unsupported array length memory location: " + options.arrayLengthMemoryLocation);
									}
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
				else if (method.MethodKind == MethodKind.Constructor || method.MethodKind == MethodKind.StaticConstructor)
				{
					var members = method.ContainingType.GetMembers();
					foreach (var member in members)
					{
						if (member.IsImplicitlyDeclared) continue;
						if (!member.IsStatic && method.MethodKind != MethodKind.Constructor) continue;
						if (member.IsStatic && method.MethodKind != MethodKind.StaticConstructor) continue;

						if (member.Kind == SymbolKind.Field)
						{
							var field = (IFieldSymbol)member;
							if (field.IsConst) continue;

							var syntaxRef = field.DeclaringSyntaxReferences.FirstOrDefault();
							var syntax = (VariableDeclaratorSyntax)syntaxRef.GetSyntax();
							if (syntax.Initializer != null)
							{
								if (!field.IsStatic) writer.WritePrefix($"self->{GetFieldFullName(field)}");
								else writer.WritePrefix(GetFieldFullName(field));
								writer.Write(" = ");
								WriteExpression(syntax.Initializer.Value);
								writer.WriteLine(';');
							}
						}
					}
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

		private bool IsParameterPassByRef(IParameterSymbol parameter)
		{
			switch (parameter.RefKind)
			{
				case RefKind.None: return false;
				case RefKind.In: return false;//parameter.Type.IsValueType && !IsPrimitiveType(parameter.Type);// TODO: limit pass by 'in' to identifier expressions

				case RefKind.Out:
				case RefKind.Ref:
					return true;

				default: throw new NotSupportedException("Parameter ref kind not supported: " + parameter.RefKind);
			}
		}
		
		private void WriteParameters(ImmutableArray<IParameterSymbol> parameters)
		{
			var lastParameter = parameters.LastOrDefault();
			foreach (var parameter in parameters)
			{
				string ptr = string.Empty;
				if (IsParameterPassByRef(parameter)) ptr = "*";
				writer.Write($"{GetTypeFullNameRef(parameter.Type)}{ptr} {GetParameterFullName(parameter)}");
				if (parameter != lastParameter) writer.Write(", ");
			}
		}
		#endregion

		#region Method Body / Syntax Instructions
		private InstructionalBody.Local TryAddLocal(string identifier, ITypeSymbol type)
		{
			InstructionalBody.Local local = null;
			local = instructionalBody.locals.FirstOrDefault(x => x.Equals(identifier, type));
			if (local == null)
			{
				local = new InstructionalBody.Local(block, identifier, type, $"l_{identifier}_{instructionalBody.locals.Count}");
				instructionalBody.locals.Add(local);
			}
			return local;
		}

		private delegate void BlockStartCallbackMethod();
		private BlockStartCallbackMethod BlockStartCallback;
		private void WriteBody(BlockSyntax body)
		{
			var origBlock = block;
			block = body;

			// write special pre block syntax
			if (BlockStartCallback != null)
			{
				BlockStartCallback();
				BlockStartCallback = null;
			}

			// write statements
			foreach (var statement in body.Statements)
			{
				WriteStatement(statement);
			}
			block = origBlock;
		}

		private void WriteStatement(StatementSyntax statement)
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
			}
			else if (statement is ReturnStatementSyntax) WriteReturnStatement((ReturnStatementSyntax)statement);
			else if (statement is ExpressionStatementSyntax) ExpressionStatement((ExpressionStatementSyntax)statement);
			else if (statement is LocalDeclarationStatementSyntax) LocalDeclarationStatement((LocalDeclarationStatementSyntax)statement);
			else if (statement is IfStatementSyntax) IfStatement((IfStatementSyntax)statement);
			else if (statement is WhileStatementSyntax) WhileStatement((WhileStatementSyntax)statement);
			else if (statement is ForStatementSyntax) ForStatement((ForStatementSyntax)statement);
			else if (statement is ForEachStatementSyntax) ForEachStatement((ForEachStatementSyntax)statement);
			else if (statement is BreakStatementSyntax) BreakStatement((BreakStatementSyntax)statement);
			else if (statement is FixedStatementSyntax) FixedStatement((FixedStatementSyntax)statement);
			else if (statement is ThrowStatementSyntax) ThrowStatement((ThrowStatementSyntax)statement);
			else throw new NotSupportedException("Unsupported statement: " + statement.GetType());
			BlockStartCallback = null;
		}

		private void WriteReturnStatement(ReturnStatementSyntax statement)
		{
			writer.WritePrefix("return");
			if (statement.Expression != null)
			{
				writer.Write(' ');
				WriteExpression(statement.Expression);
			}
			writer.WriteLine(';');
		}

		private void ExpressionStatement(ExpressionStatementSyntax statement)
		{
			writer.WritePrefix();
			WriteExpression(statement.Expression);
			writer.WriteLine(';');
		}

		private void WriteLocalDeclaration(VariableDeclarationSyntax declaration, string delimiter, bool onlyWriteDelimiterIfNotLast)
		{
			var typeInfo = semanticModel.GetTypeInfo(declaration.Type);
			var last = declaration.Variables.LastOrDefault();
			foreach (var variable in declaration.Variables)
			{
				var type = semanticModel.GetTypeInfo(declaration.Type).Type;
				var local = TryAddLocal(variable.Identifier.ValueText, type);
				if (variable.Initializer != null)
				{
					writer.WritePrefix(local.name + " = ");
					WriteExpression(variable.Initializer.Value);
					if (!onlyWriteDelimiterIfNotLast) writer.Write(delimiter);
					else if (variable != last) writer.Write(delimiter);
				}
			}
		}

		private void WriteFlowControlStatement(StatementSyntax statement, string multiLine, string singleLine)
		{
			if (statement is BlockSyntax)
			{
				writer.WriteLine(multiLine);
				WriteStatement(statement);
			}
			else
			{
				writer.Write(singleLine);
				writer.disablePrefix = true;
				WriteStatement(statement);
				writer.disablePrefix = false;
			}
		}

		private void LocalDeclarationStatement(LocalDeclarationStatementSyntax statement)
		{
			WriteLocalDeclaration(statement.Declaration, ';' + Environment.NewLine, false);
		}

		private void IfStatement(IfStatementSyntax statement)
		{
			if (statement.Statement == null) return;
			writer.WritePrefix("if (");
			WriteExpression(statement.Condition);
			WriteFlowControlStatement(statement.Statement, ")", ") ");
			if (statement.Else != null) WriteFlowControlStatement(statement.Else.Statement, "else", "else ");
		}

		private void WhileStatement(WhileStatementSyntax statement)
		{
			writer.WritePrefix("while (");
			WriteExpression(statement.Condition);
			WriteFlowControlStatement(statement.Statement, ")", ") ");
		}

		private void ForStatement(ForStatementSyntax statement)
		{
			if (statement.Initializers.Count != 0) throw new NotSupportedException("'for' statement initializers are not supported");

			// variable initialization
			writer.WritePrefix("for (");
			writer.disablePrefix = true;
			WriteLocalDeclaration(statement.Declaration, ", ", true);
			writer.disablePrefix = false;
			writer.Write("; ");

			// condition
			WriteExpression(statement.Condition);
			writer.Write("; ");

			// incrementors
			var lastIncrementor = statement.Incrementors.LastOrDefault();
			foreach (var i in statement.Incrementors)
			{
				WriteExpression(i);
				if (i != lastIncrementor) writer.Write(", ");
			}

			// statement
			WriteFlowControlStatement(statement.Statement, ")", ") ");
		}

		private void ForEachStatement(ForEachStatementSyntax statement)
		{
			var collectionType = semanticModel.GetTypeInfo(statement.Expression).Type;
			if (collectionType.Kind == SymbolKind.ArrayType)
			{
				// get array object
				InstructionalBody.Local localExpressionResult;
				if (statement.Expression is IdentifierNameSyntax)
				{
					var identifierName = (IdentifierNameSyntax)statement.Expression;
					var type = semanticModel.GetTypeInfo(identifierName).Type;
					localExpressionResult = instructionalBody.locals.First(x => x.Equals(identifierName.Identifier.ValueText, type));
				}
				else
				{
					localExpressionResult = TryAddLocal(statement.Identifier.ValueText + "_ex", collectionType);
					writer.WritePrefix($"{localExpressionResult.name} = ");
					WriteExpression(statement.Expression);
					writer.WriteLine(';');
				}

				// get array length method
				var method = FindMethodByName(arrayType, "get_Length");

				// write for statement
				writer.WritePrefix("for (");
				var localIterator = TryAddLocal(statement.Identifier.ValueText + "_i", project.compilation.GetSpecialType(SpecialType.System_Int32));
				writer.Write($"{localIterator.name} = 0; {localIterator.name} != {GetMethodFullName(method)}(({GetTypeFullName(arrayType)}*){localExpressionResult.name}); ++{localIterator.name}");

				// write 
				void WriteLocal()
				{
					var type = semanticModel.GetTypeInfo(statement.Type).Type;
					var local = TryAddLocal(statement.Identifier.ValueText, type);

					void writeExpression()
					{
						writer.Write(localExpressionResult.name);
					}
					writer.WritePrefix($"{local.name} = ");
					WriteArrayElementAccessOffset(writeExpression, collectionType);
					writer.WriteLine($"[{localIterator.name}];");
				}
				BlockStartCallback = WriteLocal;

				// statement
				WriteFlowControlStatement(statement.Statement, ")", ") ");
			}
			else
			{
				throw new NotImplementedException("TODO: add IEnumerable support");
			}
		}

		private void BreakStatement(BreakStatementSyntax statement)
		{
			writer.WriteLinePrefix("break;");
		}

		private void FixedStatement(FixedStatementSyntax statement)
		{
			WriteLocalDeclaration(statement.Declaration, ';' + Environment.NewLine, false);
			WriteStatement(statement.Statement);
		}

		private void ThrowStatement(ThrowStatementSyntax statement)
		{ 
			writer.WriteLinePrefix(';');// TODO
		}

		private void WriteExpression(ExpressionSyntax expression)
		{
			if (expression is LiteralExpressionSyntax) WriteLiteralExpression((LiteralExpressionSyntax)expression);
			else if (expression is IdentifierNameSyntax) WriteIdentifierName((IdentifierNameSyntax)expression);
			else if (expression is MemberAccessExpressionSyntax) MemberAccessExpression((MemberAccessExpressionSyntax)expression);
			else if (expression is ObjectCreationExpressionSyntax) ObjectCreationExpression((ObjectCreationExpressionSyntax)expression);
			else if (expression is ArrayCreationExpressionSyntax) ArrayCreationExpression((ArrayCreationExpressionSyntax)expression);
			else if (expression is StackAllocArrayCreationExpressionSyntax) StackAllocArrayCreationExpression((StackAllocArrayCreationExpressionSyntax)expression);
			else if (expression is AssignmentExpressionSyntax) AssignmentExpression((AssignmentExpressionSyntax)expression);
			else if (expression is PrefixUnaryExpressionSyntax) PrefixUnaryExpression((PrefixUnaryExpressionSyntax)expression);
			else if (expression is PostfixUnaryExpressionSyntax) PostfixUnaryExpression((PostfixUnaryExpressionSyntax)expression);
			else if (expression is InvocationExpressionSyntax) InvocationExpression((InvocationExpressionSyntax)expression);
			else if (expression is ConditionalExpressionSyntax) ConditionalExpression((ConditionalExpressionSyntax)expression);
			else if (expression is BinaryExpressionSyntax) BinaryExpression((BinaryExpressionSyntax)expression);
			else if (expression is CastExpressionSyntax) CastExpression((CastExpressionSyntax)expression);
			else if (expression is ThisExpressionSyntax) ThisExpression((ThisExpressionSyntax)expression);
			else if (expression is ElementAccessExpressionSyntax) ElementAccessExpression((ElementAccessExpressionSyntax)expression);
			else if (expression is ParenthesizedExpressionSyntax) ParenthesizedExpression((ParenthesizedExpressionSyntax)expression);
			else if (expression is SizeOfExpressionSyntax) SizeOfExpression((SizeOfExpressionSyntax)expression);
			else if (expression is TypeOfExpressionSyntax) TypeOfExpression((TypeOfExpressionSyntax)expression);
			else throw new NotImplementedException("Unsupported expression: " + expression.GetType());
		}

		private ExpressionSyntax GetCaller(ExpressionSyntax expression)
		{
			if (expression is MemberAccessExpressionSyntax)
			{
				var accessExpression = (MemberAccessExpressionSyntax)expression;
				expression = accessExpression.Expression;
			}
			else if (expression is IdentifierNameSyntax && expression.Parent is MemberAccessExpressionSyntax)
			{
				return GetCaller((MemberAccessExpressionSyntax)expression.Parent);
			}
			else
			{
				var symbolInfo = semanticModel.GetSymbolInfo(expression);
				if (!symbolInfo.Symbol.IsStatic && symbolInfo.Symbol.ContainingType == method.ContainingType) expression = SyntaxFactory.ThisExpression();
				else throw new NotImplementedException("Failed to find caller for expression: " + expression.ToFullString());
			}

			return expression;
		}

		private ExpressionSyntax WriteCaller(ExpressionSyntax expression)
		{
			var caller = GetCaller(expression);
			WriteExpression(caller);
			return caller;
		}

		private ITypeSymbol GetCallerType(ExpressionSyntax callerExpression, ExpressionSyntax expression)
		{
			if (callerExpression is ThisExpressionSyntax)
			{
				var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
				return symbol.ContainingType;
			}
			return semanticModel.GetTypeInfo(callerExpression).Type;
		}

		private string TryAddStringLiteral(string literalValue)
		{
			string literalName;
			if (!stringLiterals.ContainsKey(literalValue))
			{
				literalName = "StringLiteral_" + stringLiterals.Count.ToString();
				stringLiterals.Add(literalValue, literalName);
				string value;
				if (literalValue.Length > 64) value = literalValue.Substring(0, 64);
				else value = literalValue;
				if (value.Contains('\n')) value = value.Replace("\n", "/n");
				if (value.Contains('\r')) value = value.Replace("\r", "/r");
				stringLiteralWriter.WriteLine($"/* {value} */");
				stringLiteralWriter.Write($"int8_t {literalName}[{GetStringMemorySize(literalValue)}] = ");
				stringLiteralWriter.Write(StringToLiteral(literalValue));
				stringLiteralWriter.WriteLine(';');
			
			}
			else
			{
				literalName = stringLiterals[literalValue];
			}
			return literalName;
		}

		private void WriteLiteralExpression(LiteralExpressionSyntax expression)
		{
			if (expression.IsKind(SyntaxKind.StringLiteralExpression))
			{
				string literalName = TryAddStringLiteral(expression.Token.ValueText);
				writer.Write(literalName);
			}
			else if (expression.IsKind(SyntaxKind.NullLiteralExpression))
			{
				writer.Write('0');
			}
			else if (expression.IsKind(SyntaxKind.NumericLiteralExpression))
			{
				writer.Write(GetFormatedConstValue(expression.Token.Value));
			}
			else if (expression.IsKind(SyntaxKind.CharacterLiteralExpression))
			{
				byte[] data;
				if (options.endianness == Endianness.Little) data = Encoding.Unicode.GetBytes(expression.Token.ValueText);
				else if (options.endianness == Endianness.Big) data = Encoding.BigEndianUnicode.GetBytes(expression.Token.ValueText);
				else throw new NotImplementedException("Char endiannes not implemented: " + options.endianness);
				writer.Write($"0x{BitConverter.ToString(data).Replace("-","")}");
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
			void WriteMethodInvoke(IMethodSymbol method)
			{
				if (IsVirtualMethod(method) && !(method.IsOverride && method.ContainingType.IsSealed))
				{
					var caller = GetCaller(expression);
					if (caller is TypeOfExpressionSyntax)
					{
						WriteCaller(expression);
						writer.Write("->");
					}
					else
					{
						writer.Write($"(({GetRuntimeTypeFullName(method.ContainingType)}*)");
						WriteCaller(expression);
						writer.Write("->CS2X_RuntimeType)->");
					}
					writer.Write(GetVTableMethodFullName(method));
				}
				else
				{
					writer.Write(GetMethodFullName(method));
				}
			}

			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol is ILocalSymbol)
			{
				var local = (ILocalSymbol)symbol;
				var localObj = instructionalBody.locals.First(x => x.Equals(expression.Identifier.ValueText, local.Type));
				writer.Write(localObj.name);
			}
			else if (symbol is IParameterSymbol)
			{
				var parameter = (IParameterSymbol)symbol;
				if (!IsParameterPassByRef(parameter)) writer.Write(GetParameterFullName(parameter));
				else writer.Write($"(*{GetParameterFullName(parameter)})");
			}
			else if (symbol is IFieldSymbol)
			{
				var field = (IFieldSymbol)symbol;
				if (field.IsConst)
				{
					writer.Write(GetFormatedConstValue(field.ConstantValue));
				}
				else if (!field.IsStatic)
				{
					var caller = WriteCaller(expression);
					var type = GetCallerType(caller, expression);
					if (type.IsReferenceType || caller is ThisExpressionSyntax) writer.Write("->");
					else writer.Write('.');
					writer.Write(GetFieldFullName(field));
				}
				else
				{
					writer.Write(GetFieldFullName(field));
				}
			}
			else if (symbol is IPropertySymbol)
			{
				var property = (IPropertySymbol)symbol;
				if (IsAutoProperty(property, out var field))
				{
					if (!property.IsStatic)
					{
						var caller = WriteCaller(expression);
						var type = GetCallerType(caller, expression);
						if (type.IsReferenceType || caller is ThisExpressionSyntax) writer.Write("->");
						else writer.Write('.');
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
						WriteMethodInvoke(property.GetMethod);
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
			else if (symbol is IMethodSymbol)
			{
				var method = (IMethodSymbol)symbol;
				WriteMethodInvoke(method);
			}
			else
			{
				throw new NotSupportedException("IdentifierNameSyntax Symbol not supported: " + symbol.GetType());
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
					if (arg.RefKindKeyword.Text == "out" || arg.RefKindKeyword.Text == "ref") writer.Write('&');
					WriteExpression(arg.Expression);
					if (arg != lastArg) writer.Write(", ");
				}
			}
		}

		private void MemberAccessExpression(MemberAccessExpressionSyntax expression)
		{
			// expression.Expression is the caller and will be writen from the WriteCaller method
			var nameSymbolInfo = semanticModel.GetSymbolInfo(expression.Name);
			if
			(
				nameSymbolInfo.Symbol is IMethodSymbol ||
				nameSymbolInfo.Symbol is IPropertySymbol ||
				nameSymbolInfo.Symbol is IFieldSymbol
			)
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
			if (expression.ArgumentList.Arguments.Count != method.Parameters.Length)// optional parameters
			{
				if (expression.ArgumentList.Arguments.Count > method.Parameters.Length) throw new Exception("Method argument count is larger than parameter count");
				int start = method.Parameters.Length - (method.Parameters.Length - expression.ArgumentList.Arguments.Count);
				writer.Write(", ");
				for (int i = start; i != method.Parameters.Length; ++i)
				{
					var parameter = method.Parameters[i];
					if (!parameter.IsOptional) throw new Exception("Parameter is not optional: " + parameter);
					if (parameter.HasExplicitDefaultValue) 
					{
						writer.Write(GetFormatedConstValue(parameter.ExplicitDefaultValue));
					}
					else
					{
						var reference = parameter.DeclaringSyntaxReferences.First();
						var syntaxDeclaration = (ParameterSyntax)reference.GetSyntax();
						if (IsParameterPassByRef(parameter)) writer.Write('&');
						WriteExpression(syntaxDeclaration.Default.Value);
					};
					if (i != method.Parameters.Length - 1) writer.Write(", ");
				}
			}
			writer.Write(')');

			// write initializer
			if (expression.Initializer != null)
			{
				writer.WriteLine(';');
				IdentifierNameSyntax caller = null;
				InstructionalBody.Local local = null;
				ITypeSymbol type;
				if (expression.Parent is AssignmentExpressionSyntax)
				{
					var parent = (AssignmentExpressionSyntax)expression.Parent;
					caller = (IdentifierNameSyntax)parent.Left;
					type = semanticModel.GetTypeInfo(parent.Left).Type;
				}
				else if (expression.Parent is EqualsValueClauseSyntax && expression.Parent.Parent is VariableDeclaratorSyntax)
				{
					var parent = (VariableDeclaratorSyntax)expression.Parent.Parent;
					local = instructionalBody.locals.Find(x => x.identifier == parent.Identifier.ValueText);
					type = local.type;
				}
				else
				{
					throw new NotSupportedException("Unsupported object creation initializer: " + expression.ToFullString());
				}
				
				var last = expression.Initializer.Expressions.LastOrDefault();
				foreach (AssignmentExpressionSyntax e in expression.Initializer.Expressions)
				{
					writer.WritePrefix();
					if (local == null) WriteExpression(caller);
					else writer.Write(local.name);

					var field = (IFieldSymbol)semanticModel.GetSymbolInfo(e.Left).Symbol;
					if (type.IsReferenceType) writer.Write("->");
					else writer.Write('.');
					writer.Write(GetFieldFullName(field));

					writer.Write(" = ");
					WriteExpression(e.Right);
					if (e != last) writer.WriteLine(';');
				}
			}
		}

		private void ArrayCreationExpression(ArrayCreationExpressionSyntax expression)
		{
			var arrayType = expression.Type;
			var type = semanticModel.GetTypeInfo(arrayType.ElementType).Type;
			foreach (var rank in arrayType.RankSpecifiers)
			{
				if (rank.Sizes.Count != 1) throw new NotSupportedException("Array creation only supports single rank size");
			}
			writer.Write($"{GetNewArrayMethod(type)}(sizeof({GetTypeFullName(type)}), ");
			WriteExpression(arrayType.RankSpecifiers[0].Sizes[0]);// grab first rank size
			writer.Write(')');

			// write initializer
			if (expression.Initializer != null)
			{
				writer.WriteLine(';');
				IdentifierNameSyntax caller = null;
				InstructionalBody.Local local = null;
				if (expression.Parent is AssignmentExpressionSyntax)
				{
					var parent = (AssignmentExpressionSyntax)expression.Parent;
					caller = (IdentifierNameSyntax)parent.Left;
				}
				else if (expression.Parent is EqualsValueClauseSyntax && expression.Parent.Parent is VariableDeclaratorSyntax)
				{
					var parent = (VariableDeclaratorSyntax)expression.Parent.Parent;
					local = instructionalBody.locals.Find(x => x.identifier == parent.Identifier.ValueText);
				}
				else
				{
					throw new NotSupportedException("Unsupported array creation initializer: " + expression.ToFullString());
				}

				void writeExpression()
				{
					if (local == null) WriteExpression(caller);
					else writer.Write(local.name);
				}
				
				var typeArray = semanticModel.GetTypeInfo(arrayType).Type;
				var last = expression.Initializer.Expressions.LastOrDefault();
				int i = 0;
				foreach (ExpressionSyntax e in expression.Initializer.Expressions)
				{
					writer.WritePrefix();
					WriteArrayElementAccessOffset(writeExpression, typeArray);
					writer.Write($"[{i}] = ");
					WriteExpression(e);
					if (e != last) writer.WriteLine(';');
					++i;
				}
			}
		}

		private void StackAllocArrayCreationExpression(StackAllocArrayCreationExpressionSyntax expression)
		{
			if (!(expression.Type is ArrayTypeSyntax)) throw new NotSupportedException("stackalloc only supports array types");
			var arrayType = (ArrayTypeSyntax)expression.Type;
			var typeInfo = semanticModel.GetTypeInfo(expression.Type);
			if (!(typeInfo.Type is IPointerTypeSymbol)) throw new NotImplementedException("stackalloc is not pointer type");
			var ptrType = (IPointerTypeSymbol)typeInfo.Type;
			if (arrayType.RankSpecifiers.Count != 1) throw new NotSupportedException("stackalloc only supports single rank");
			if (arrayType.RankSpecifiers[0].Sizes.Count != 1) throw new NotSupportedException("stackalloc only supports single rank size");
			writer.Write($"alloca(sizeof({GetTypeFullName(ptrType.PointedAtType)}) * ");
			WriteExpression(arrayType.RankSpecifiers[0].Sizes[0]);// fixed arrays should always support this form
			writer.Write(')');
			
			// write initializer
			if (expression.Initializer != null)
			{
				writer.WriteLine(';');
				IdentifierNameSyntax caller = null;
				InstructionalBody.Local local = null;
				if (expression.Parent is AssignmentExpressionSyntax)
				{
					var parent = (AssignmentExpressionSyntax)expression.Parent;
					caller = (IdentifierNameSyntax)parent.Left;
				}
				else if (expression.Parent is EqualsValueClauseSyntax && expression.Parent.Parent is VariableDeclaratorSyntax)
				{
					var parent = (VariableDeclaratorSyntax)expression.Parent.Parent;
					local = instructionalBody.locals.Find(x => x.identifier == parent.Identifier.ValueText);
				}
				else
				{
					throw new NotSupportedException("Unsupported stackalloc initializer: " + expression.ToFullString());
				}
				
				var last = expression.Initializer.Expressions.LastOrDefault();
				int i = 0;
				foreach (ExpressionSyntax e in expression.Initializer.Expressions)
				{
					writer.WritePrefix();
					if (local == null) WriteExpression(caller);
					else writer.Write(local.name);
					writer.Write($"[{i}] = ");
					WriteExpression(e);
					if (e != last) writer.WriteLine(';');
					++i;
				}
			}
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

			// check if we should invoke custom operator method
			var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
			if (symbol != null && symbol.Kind == SymbolKind.Method && expression.OperatorToken.ValueText.Length == 2)
			{
				var method = (IMethodSymbol)symbol;
				if (!method.IsImplicitlyDeclared)
				{
					WriteExpression(expression.Left);
					writer.Write(" = ");
					writer.Write(GetMethodFullName(method));
					writer.Write('(');
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
					return;
				}
			}

			// normal assignment
			WriteExpression(expression.Left);
			writer.Write($" {expression.OperatorToken.ValueText} ");
			WriteExpression(expression.Right);
		}

		private void PrefixUnaryExpression(PrefixUnaryExpressionSyntax expression)
		{
			if (expression.OperatorToken.Text == "-")
			{
				var symbol = semanticModel.GetSymbolInfo(expression).Symbol;
				if (symbol != null && symbol is IMethodSymbol)
				{
					var method = (IMethodSymbol)symbol;
					if (method.MethodKind != MethodKind.BuiltinOperator)
					{
						if (!method.IsStatic || method.MethodKind != MethodKind.UserDefinedOperator) throw new NotSupportedException("Unsupported prefix unary method: " + method.FullName());
						writer.Write(GetMethodFullName(method));
						writer.Write('(');
						WriteExpression(expression.Operand);
						writer.Write(')');
						return;
					}
				}
			}
			writer.Write(expression.OperatorToken.Text);
			WriteExpression(expression.Operand);
		}

		private void PostfixUnaryExpression(PostfixUnaryExpressionSyntax expression)
		{
			WriteExpression(expression.Operand);
			writer.Write(expression.OperatorToken.Text);
		}

		private void InvocationExpression(InvocationExpressionSyntax expression)
		{
			var symbolInfo = semanticModel.GetSymbolInfo(expression);
			var method = (IMethodSymbol)symbolInfo.Symbol;
			bool isCallerValueType = false, isStaticExternCMethod = false;
			ITypeSymbol callerType = null;
			if (!method.IsStatic)
			{
				var caller = GetCaller(expression.Expression);
				if (caller is ThisExpressionSyntax) callerType = method.ContainingType;
				else callerType = semanticModel.GetTypeInfo(caller).Type;
				isCallerValueType = callerType.IsValueType;

				if (callerType.TypeKind == TypeKind.Enum) throw new NotImplementedException("Enum meta data not yet supported: " + expression.ToFullString());
				if (callerType.IsValueType)
				{
					if (method.ContainingType == objectType) throw new NotSupportedException("ValueType boxing invoke not supported: " + expression.ToFullString());
					if (IsVirtualMethod(method)) throw new NotSupportedException("ValueType virtual invoke not supported: " + expression.ToFullString());
				}
			}
			else if (method.IsExtern)
			{
				var nativeExternAttribute = GetNativeExternAttribute(method);
				if (nativeExternAttribute != null)
				{
					isStaticExternCMethod = true;
					var arg = nativeExternAttribute.ConstructorArguments[1];
					if (arg.Value == null) writer.Write(method.Name);
					else writer.Write(arg.Value.ToString());
				}
				else if (!IsInternalCall(method))
				{
					throw new NotSupportedException("Unsupported extern method invoke: " + method.FullName());
				}
			}

			if (!isStaticExternCMethod)
			{
				if (IsVirtualMethod(method))
				{
					if (callerType.IsValueType) throw new NotSupportedException($"Virtual methods cannot be used on structs: {callerType.FullName()}->{method.FullName()}");
					else WriteExpression(expression.Expression);
				}
				else
				{
					WriteExpression(expression.Expression);
				}
			}
			
			writer.Write('(');
			if (!method.IsStatic)
			{
				if (isCallerValueType) writer.Write('&');
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
				if (type != null && type.SpecialType == SpecialType.System_String)
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
						if (expression.Right.IsKind(SyntaxKind.NullLiteralExpression))
						{
							WriteExpression(expression.Left);
							writer.Write($" {expression.OperatorToken.ValueText} ");
							WriteExpression(expression.Right);
							return;
						}
						specialMethod = (IMethodSymbol)type.GetMembers().First(x => x is IMethodSymbol && x.Name == "Equals" && ((IMethodSymbol)x).Parameters.Length == 1 && ((IMethodSymbol)x).Parameters[0].Type.SpecialType == SpecialType.System_String);
					}

					if (specialMethod != null) writer.Write(GetMethodFullName(specialMethod));
					else writer.Write(GetMethodFullName(operatorMethod));
					writer.Write('(');
					WriteExpression(expression.Left);
					writer.Write(", ");
					WriteExpression(expression.Right);
					writer.Write(')');
				}
				else if
				(
					((IsPrimitiveType(operatorMethod.Parameters[0].Type) || operatorMethod.Parameters[0].Type is IPointerTypeSymbol) &&
					(IsPrimitiveType(operatorMethod.Parameters[1].Type) || operatorMethod.Parameters[1].Type is IPointerTypeSymbol)) ||
					(operatorMethod.IsImplicitlyDeclared)
				)
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

		private delegate void WriteArrayElementAccessOffsetCallback();
		private void WriteArrayElementAccessOffset(WriteArrayElementAccessOffsetCallback writeExpressionCallback, ITypeSymbol type)
		{
			if (options.arrayLengthMemoryLocation == ArrayLengthMemoryLocation.AtPointer && type.Kind == SymbolKind.ArrayType)
			{
				writer.Write($"(({GetTypeFullNameRef(type)})(((size_t*)");
				writeExpressionCallback();
				writer.Write(") + 1))");
			}
			else
			{
				writeExpressionCallback();
			}
		}

		private void ElementAccessExpression(ElementAccessExpressionSyntax expression)
		{
			void writeExpression()
			{
				WriteExpression(expression.Expression);
			}

			var type = semanticModel.GetTypeInfo(expression.Expression).Type;
			WriteArrayElementAccessOffset(writeExpression, type);
			writer.Write('[');
			var arguments = expression.ArgumentList.Arguments;
			if (arguments.Count != 1) throw new NotSupportedException("Elements can only have one arg");
			WriteExpression(arguments[0].Expression);
			writer.Write(']');
		}

		private void ParenthesizedExpression(ParenthesizedExpressionSyntax expression)
		{
			writer.Write('(');
			WriteExpression(expression.Expression);
			writer.Write(')');
		}

		private void SizeOfExpression(SizeOfExpressionSyntax expression)
		{
			var type = semanticModel.GetTypeInfo(expression.Type).Type;
			writer.Write($"sizeof({GetTypeFullName(type)})");
		}

		private void TypeOfExpression(TypeOfExpressionSyntax expression)
		{
			var type = semanticModel.GetTypeInfo(expression.Type).Type;
			writer.Write($"(&{GetRuntimeTypeObjFullName(type)})");
		}
		#endregion

		#region C name resolution
		private string GetNewObjectMethod(ITypeSymbol type)
		{
			if (IsAtomicType(type)) return "CS2X_GC_NewAtomic";
			else return "CS2X_GC_New";
		}

		private string GetNewArrayMethod(ITypeSymbol type)
		{
			if (options.arrayLengthMemoryLocation == ArrayLengthMemoryLocation.AtPointer)
			{
				if (IsAtomicType(type)) return "CS2X_GC_NewArrayAtomic";
				else return "CS2X_GC_NewArray";
			}
			else if (options.arrayLengthMemoryLocation == ArrayLengthMemoryLocation.BeforePointer)
			{
				if (IsAtomicType(type)) return "CS2X_GC_NewArrayAtomicHeader";
				else return "CS2X_GC_NewArrayHeader";
			}
			else
			{
				throw new NotImplementedException("Unsupported new array length location: " + options.arrayLengthMemoryLocation);
			}
		}

		private string GetFormatedConstValue(object value)
		{
			string result = value.ToString();
			var type = value.GetType();
			if (type == typeof(float) || type == typeof(double))
			{
				if (!result.Contains('.') && !result.Contains('E')) result += ".0";
				if (type == typeof(float)) result += 'f';
			}
			else if (type == typeof(string))
			{
				result = TryAddStringLiteral(value.ToString());
			}
			return result;
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

		private void CheckType(ITypeSymbol type)
		{
			if (type.TypeKind == TypeKind.Interface) throw new NotSupportedException("Interfaces are not valid runtime types");
		}

		private string GetRuntimeTypeFullName(ITypeSymbol type)
		{
			CheckType(type);
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
			CheckType(type);
			if (type.SpecialType == SpecialType.System_Void)
			{
				return "void";
			}
			else if (IsPrimitiveType(type))
			{
				return GetPrimitiveName(type);
			}
			else if (type.Kind == SymbolKind.ArrayType)
			{
				var arrayType = (IArrayTypeSymbol)type;
				return GetTypeFullName(arrayType.ElementType) + '*';
			}
			else if (type.Kind == SymbolKind.PointerType)
			{
				var arrayType = (IPointerTypeSymbol)type;
				return GetTypeFullName(arrayType.PointedAtType) + '*';
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
				if (type .Kind == SymbolKind.ArrayType)
				{
					ptr += "*";
					var t = (IArrayTypeSymbol)type;
					type = t.ElementType;
				}
				else if (type.Kind == SymbolKind.PointerType)
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

		private string GetVTableMethodFullName(IMethodSymbol method)
		{
			if (!IsVirtualMethod(method)) throw new NotSupportedException("Non virtual method has no vtable method name: " + method.FullName());
			int vTableIndex = GetVirtualMethodOverloadIndex(method);
			string methodName = method.Name;
			ParseImplementationDetail(ref methodName);
			return $"vTable_{methodName}_{vTableIndex}";
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
