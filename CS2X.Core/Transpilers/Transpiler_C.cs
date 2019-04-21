using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Symbols;

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
		private TranspiledProject activeTranspiledProject;
		private Project activeProject;
		private StreamWriterEx writer;// active project stream writer

		public Transpiler_C(Solution solution, in Options options)
		: base(solution)
		{
			this.options = options;
		}

		public override void Transpile(string outputPath)
		{
			foreach (var project in solution.projects)
			{
				TranspileProject(outputPath, project);
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
			activeTranspiledProject = transpiledProject;
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
			activeProject = project;
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
			}

			// include references
			foreach (var reference in project.references)
			{
				writer.WriteLine($"#include \"{reference.roslynProject.AssemblyName}.h\"");
			}

			// forward declare types
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Type forward declares */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes) WriteType(type, false);

			// types
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Types */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in project.allTypes) WriteType(type, true);
		}

		private void WriteType(INamedTypeSymbol type, bool writeBody)
		{
			if (IsPrimitiveType(type)) return;

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
			else if(!IsEmptyType(type))
			{
				if (type.TypeKind == TypeKind.Enum) return;

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
				foreach (var t in fieldTypeList)
				{
					foreach (var member in t.GetMembers())
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

		protected override string GetTypeFullName(ITypeSymbol type)
		{
			if (IsPrimitiveType(type)) return GetPrimitiveName(type);
			else return "t_" + base.GetTypeFullName(type);
		}

		private string GetTypeFullNameRef(ITypeSymbol type)
		{
			string result = GetTypeFullName(type);
			if (type.IsReferenceType || type is IPointerTypeSymbol) result += '*';
			return result;
		}

		protected override string GetFieldFullName(IFieldSymbol field)
		{
			string result = base.GetFieldFullName(field);
			if (!field.IsStatic) result = "f_" + result;
			else result = $"f_{GetTypeFullName(field.ContainingType)}_{result}";
			return result;
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
