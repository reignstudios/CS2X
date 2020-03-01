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
using System.Runtime.InteropServices;
using Microsoft.CodeAnalysis.FindSymbols;
using CS2X.Analyzer.SyntaxValidation;

namespace CS2X.Core.Transpilers.C
{
	public sealed partial class Transpiler_C : Transpiler
	{
		class TranspiledProject
		{
			public bool isWritten;
			public readonly Project project;
			public readonly List<TranspiledProject> references = new List<TranspiledProject>();
			public readonly HashSet<INamedTypeSymbol> genericTypes = new HashSet<INamedTypeSymbol>();

			public TranspiledProject(Project project)
			{
				this.project = project;
			}
		}

		public readonly Options options;
		private List<TranspiledProject> transpiledProjects = new List<TranspiledProject>();
		private TranspiledProject transpiledProject;// active transpiling project
		private IMethodSymbol method;// active method
		private StreamWriterEx writer;//, stringLiteralWriter;
		private BlockSyntax block;// active body block
		private List<StatementSyntax> blockStatementsOverride;
		private InstructionalBody instructionalBody;// active instructional body states and values
		private Dictionary<string, string> stringLiterals;// string literals that span all projects
		private Dictionary<ITypeSymbol, string> enumToStringMethods;// string literals that span all projects
		private HashSet<IMethodSymbol> methods;// all methods that span all projects
		private HashSet<IMethodSymbol> genericMethods;// generic methods that span all projects
		private HashSet<INamedTypeSymbol> genericTypes;// generic types that span all projects
		private HashSet<IArrayTypeSymbol> arrayTypes;// array types that span all projects
		private HashSet<IPointerTypeSymbol> pointerTypes;// pointer types that span all projects
		private HashSet<ITypeSymbol> pvalueToIValueTypes;// types to generate pvalue to ivalue helper methods
		private int tryCatchNestingLevel;// used for special local name mangling

		private string stringTypeName, stringRuntimeTypeName;
		private IArrayTypeSymbol stringArrayType;// used if entry point has args

		public Transpiler_C(Solution solution, in Options options)
		: base(solution)
		{
			this.options = options;
		}

		public override void Transpile(string outputPath)
		{
			// get common names
			stringTypeName = GetTypeFullName(specialTypes.stringType);
			stringRuntimeTypeName = GetRuntimeTypeObjFullName(specialTypes.stringType);

			// run clean pass for each exe
			var exeProjects = solution.projects.Where(x => x.type == ProjectType.Exe);
			foreach (var exeProject in exeProjects)
			{
				// allocate helper objects
				methods = new HashSet<IMethodSymbol>();
				genericMethods = new HashSet<IMethodSymbol>();
				genericTypes = new HashSet<INamedTypeSymbol>();
				arrayTypes = new HashSet<IArrayTypeSymbol>();
				pointerTypes = new HashSet<IPointerTypeSymbol>();
				pvalueToIValueTypes = new HashSet<ITypeSymbol>();
				stringLiterals = new Dictionary<string, string>();
				enumToStringMethods = new Dictionary<ITypeSymbol, string>();

				// clear existing transpiled projects
				transpiledProjects.Clear();

				// start processing and writing projects
				for (int i = 0; i != 2; ++i)
				{
					StreamWriterEx.disableWrite = i == 0;// disable write on collection pass for better performance

					if (StreamWriterEx.disableWrite)// collection pass
					{
						using (var stream = new MemoryStream())
						using (writer = new StreamWriterEx(stream))
						{
							// write project
							TranspileProjectsOrdered(exeProject, WriteProject_CollectionPass);

							// make sure all generic types and methods are found by looping over them until no changed detected
							while (true)// TODO: optimize: only parse added generics in each pass
							{
								int typeCount = genericTypes.Count;
								int methodCount = genericMethods.Count;
								foreach (var type in genericTypes.ToArray())
								{
									foreach (var method in type.GetMembers())
									{
										if (method is IMethodSymbol) WriteMethod((IMethodSymbol)method, true);
									}
									WriteType(type, true);
								}
								foreach (var method in genericMethods.ToArray()) WriteMethod(method, true);
								if (typeCount == genericTypes.Count && methodCount == genericMethods.Count) break;
							}
						}
					}
					else// write to disk pass
					{
						// create 'String[]' array type and make sure its runtime type is tracked for C to C# args conversion
						var mainMethod = exeProject.compilation.GetEntryPoint(new System.Threading.CancellationToken());
						if (mainMethod.Parameters.Length != 0)
						{
							stringArrayType = solution.coreLibProject.compilation.CreateArrayTypeSymbol(specialTypes.stringType);
							TrackArrayType(stringArrayType);
						}

						// write to C file
						string filename = exeProject.roslynProject.Name + ".c";
						using (var stream = new FileStream(Path.Combine(outputPath, filename), FileMode.Create, FileAccess.Write, FileShare.Read))
						using (var writerRoot = new StreamWriterEx(stream))
						{
							writer = writerRoot;
							WriteHeader(exeProject);
							WriteStringLiterals();

							// gather list of all types dependency ordered
							var allTypes = new List<INamedTypeSymbol>(genericTypes);
							foreach (var project in solution.projects)
							{
								foreach (var type in project.allTypes)
								{
									if (!type.IsGenericType) allTypes.Add(type);
								}
							}
							allTypes = Project.DependencySortTypes(allTypes);

							// write types
							WriteTypes_ForwardDeclared(allTypes);
							WriteTypes(allTypes);
							WriteRuntimeTypes(allTypes, "Normal");
							WriteRuntimeTypes(arrayTypes, "Array");
							WriteRuntimeTypes(pointerTypes, "Pointer");

							// write methods
							WriteMethods_ForwardDeclared(methods);
							WritePValueToIValueConverterMethods();
							WriteEnumToStringMethods();
							WriteRuntimeHelperMethods();
							WriteMethods(methods);

							// init runtime for each project / assembly
							foreach (var transpiledProject in transpiledProjects) transpiledProject.isWritten = false;// clear isWritten
							TranspileProjectsOrdered(exeProject, WriteRuntimeInitialisation);
						}
					}
				}
			}
		}

		private delegate void TranspileProjectsOrderedCallback(Project project);
		private TranspiledProject TranspileProjectsOrdered(Project project, TranspileProjectsOrderedCallback callback)
		{
			var transpiledProject = transpiledProjects.FirstOrDefault(x => x.project == project);
			if (transpiledProject == null) transpiledProject = new TranspiledProject(project);

			// transpile references first
			foreach (var reference in project.references)
			{
				var transpileReference = transpiledProjects.FirstOrDefault(x => x.project == reference);
				if (transpileReference == null || !transpileReference.isWritten) transpileReference = TranspileProjectsOrdered(reference, callback);
				if (!transpiledProject.references.Contains(transpileReference)) transpiledProject.references.Add(transpileReference);
			}

			// transpile project
			this.transpiledProject = transpiledProject;
			callback(project);

			// mark project as written
			transpiledProject.isWritten = true;

			// finish
			if (!transpiledProjects.Contains(transpiledProject)) transpiledProjects.Add(transpiledProject);
			return transpiledProject;
		}

		private void WriteProject_CollectionPass(Project project)
		{
			// type definitions
			foreach (var type in project.allTypes)
			{
				if (WriteType(type, true)) writer.WriteLine();
			}

			// method definitions
			foreach (var type in project.allTypes)
			{
				if (type.TypeKind == TypeKind.Interface) continue;
				foreach (var method in type.GetMembers())
				{
					if (method is IMethodSymbol && WriteMethod((IMethodSymbol)method, true)) writer.WriteLine();
				}
			}
		}

		private void WriteHeader(Project project)
		{
			// writer info
			writer.WriteLine("/* ############################### */");
			writer.WriteLine($"/* {project.roslynProject.Name} */");
			writer.WriteLine($"/* Generated with CS2X v{Utils.GetAssemblyInfoVersion()} */");
			writer.WriteLine("/* ############################### */");

			// include C standard apis
			writer.WriteLine("#include <stdio.h>");
			writer.WriteLine("#include <math.h>");
			writer.WriteLine("#include <float.h>");
			writer.WriteLine("#include <stdint.h>");
			writer.WriteLine("#include <uchar.h>");
			writer.WriteLine("#include <locale.h>");
			writer.WriteLine("#include <time.h>");
			if (options.api == API.Posix) writer.WriteLine("#include <dlfcn.h>");
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

			// array size offset
			writer.WriteLine("#define ArrayOffset (sizeof(intptr_t) + sizeof(size_t))");

			// WinMain HINSTANCE
			if (options.api == API.Win32 || options.api == API.Win16) writer.WriteLine("HINSTANCE CS2X_hInstance = 0;");
		}

		private void WriteStringLiterals()
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* String literals */");
			writer.WriteLine("/* =============================== */");
			foreach (var literal in stringLiterals)
			{
				string value;
				if (literal.Key.Length > 64) value = literal.Key.Substring(0, 64);
				else value = literal.Key;
				if (value.Contains('\n')) value = value.Replace("\n", "/n");
				if (value.Contains('\r')) value = value.Replace("\r", "/r");
				value = value.Replace("\0", " ");// make sure there are no escape characters
				writer.WriteLine($"/* {value} */");
				writer.Write($"int8_t {literal.Value}[{GetStringMemorySize(literal.Key)}] = ");
				writer.Write(StringToLiteral(literal.Key));
				writer.WriteLine(';');
			}
		}

		private void WriteRuntimeHelperMethods()
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Helper runtime methods */");
			writer.WriteLine("/* =============================== */");
			string runtimeTypeName = GetTypeFullName(specialTypes.runtimeType);

			// alloc GC type and set runtime ptr helper
			writer.WriteLine($"void* CS2X_AllocType(size_t size, {runtimeTypeName}* runtimeType, void* finalizerFuncPtr)");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"{runtimeTypeName}* ptr = CS2X_GC_New(size, finalizerFuncPtr);");
			writer.WriteLinePrefix("ptr->CS2X_RuntimeType = runtimeType;");
			writer.WriteLinePrefix("return ptr;");
			writer.RemoveTab();
			writer.WriteLine('}');

			// alloc atomic GC type and set runtime ptr helper
			writer.WriteLine();
			writer.WriteLine($"void* CS2X_AllocTypeAtomic(size_t size, {runtimeTypeName}* runtimeType, void* finalizerFuncPtr)");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"{runtimeTypeName}* ptr = CS2X_GC_NewAtomic(size, finalizerFuncPtr);");
			writer.WriteLinePrefix("ptr->CS2X_RuntimeType = runtimeType;");
			writer.WriteLinePrefix("return ptr;");
			writer.RemoveTab();
			writer.WriteLine('}');

			// alloc array GC type and set runtime ptr helper and length
			writer.WriteLine();
			writer.WriteLine($"void* CS2X_AllocArrayType(size_t elementSize, size_t length, {runtimeTypeName}* runtimeType)");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"{runtimeTypeName}* ptr = CS2X_GC_New(ArrayOffset + (elementSize * length), 0);");
			writer.WriteLinePrefix("ptr->CS2X_RuntimeType = runtimeType;");
			writer.WriteLinePrefix("*((size_t*)ptr + 1) = length;");
			writer.WriteLinePrefix("return ptr;");
			writer.RemoveTab();
			writer.WriteLine('}');

			// alloc atomic array GC type and set runtime ptr helper and length
			writer.WriteLine();
			writer.WriteLine($"void* CS2X_AllocArrayTypeAtomic(size_t elementSize, size_t length, {runtimeTypeName}* runtimeType)");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"{runtimeTypeName}* ptr = CS2X_GC_NewAtomic(ArrayOffset + (elementSize * length), 0);");
			writer.WriteLinePrefix("ptr->CS2X_RuntimeType = runtimeType;");
			writer.WriteLinePrefix("*((size_t*)ptr + 1) = length;");
			writer.WriteLinePrefix("return ptr;");
			writer.RemoveTab();
			writer.WriteLine('}');

			// 'is' type helper method
			var runtimeTypeBaseTypeField = FindAutoPropertyFieldByName(specialTypes.typeType, "BaseType");
			writer.WriteLine();
			writer.WriteLine($"char CS2X_IsType({runtimeTypeName}* runtimeType, {runtimeTypeName}* isRuntimeType)");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"{runtimeTypeName}* runtimeTypeBase = runtimeType;");
			writer.WriteLinePrefix("while (runtimeTypeBase != 0)");
			writer.WriteLinePrefix('{');
			writer.AddTab();
			writer.WriteLinePrefix("if (runtimeTypeBase == isRuntimeType) return 1;");
			writer.WriteLinePrefix($"runtimeTypeBase = runtimeTypeBase->{GetFieldFullName(runtimeTypeBaseTypeField)};");
			writer.RemoveTab();
			writer.WriteLinePrefix('}');
			writer.WriteLinePrefix("return 0;");
			writer.RemoveTab();
			writer.WriteLine('}');

			// 'up-cast' type helper method
			string objectTypeName = GetTypeFullName(specialTypes.objectType);
			writer.WriteLine();
			writer.WriteLine($"{objectTypeName}* CS2X_TestUpCast({objectTypeName}* self, {runtimeTypeName}* isRuntimeType)");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix("if (self == 0) return 0;");
			writer.WriteLinePrefix("if (CS2X_IsType(self->CS2X_RuntimeType, isRuntimeType)) return self;");
			var castExceptionType = solution.coreLibProject.compilation.GetTypeByMetadataName("System.InvalidCastException");
			var castExceptionTypeConstructor = FindDefaultConstructor(castExceptionType);
			writer.WriteLinePrefix($"CS2X_ThreadExceptionObject = {GetMethodFullName(castExceptionTypeConstructor)}(CS2X_AllocType(sizeof({GetTypeFullName(castExceptionType)}), &{GetRuntimeTypeObjFullName(castExceptionType)}, 0));");
			writer.WriteLinePrefix("longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */");
			writer.RemoveTab();
			writer.WriteLine('}');

			// ref gc object on stack helper
			if (options.refNonLocalGCParamsOnStack)
			{
				writer.WriteLine();
				writer.WriteLine($"void* CS2X_RefObjOnStack(void** stackRef, void* obj)");
				writer.WriteLine('{');
				writer.AddTab();
				writer.WriteLinePrefix("return (*stackRef) = obj;");
				writer.RemoveTab();
				writer.WriteLine('}');
			}
		}

		private void WriteRuntimeInitialisation(Project project)
		{
			// init library
			writer.WriteLine("/* =============================== */");
			writer.WriteLine($"/* Init Runtime '{project.roslynProject.AssemblyName}' */");
			writer.WriteLine("/* =============================== */");
			string assemblyName = GetProjectNameFlat(project);
			writer.WriteLine($"void CS2X_InitAssembly_{assemblyName}()");
			writer.WriteLine('{');
			writer.AddTab();

			if (project.references.Count != 0)
			{
				writer.WriteLinePrefix("/* Init references */");
				foreach (var reference in project.references)
				{
					writer.WriteLinePrefix($"CS2X_InitAssembly_{GetProjectNameFlat(reference)}();");
				}
				writer.WriteLine();
			}

			WriteInitRuntimeTypes(project.allTypes);

			if (genericTypes.Count != 0)
			{
				writer.WriteLine();
				writer.WriteLinePrefix("/* <<< === Generic Runtime Types === >>> */");
				WriteInitRuntimeTypes(genericTypes);
			}

			if (arrayTypes.Count != 0)
			{
				writer.WriteLine();
				writer.WriteLinePrefix("/* <<< === Array Runtime Types === >>> */");
				WriteInitRuntimeTypes(arrayTypes.ToArray());
			}

			if (pointerTypes.Count != 0)
			{
				writer.WriteLine();
				writer.WriteLinePrefix("/* <<< === Pointer Runtime Types === >>> */");
				WriteInitRuntimeTypes(pointerTypes.ToArray());
			}

			writer.RemoveTab();
			writer.WriteLine('}');

			// init dllimport methods
			writer.WriteLine();
			string dllImportInitMethod = $"CS2X_InitDllImport_{assemblyName}";
			writer.WriteLine($"void {dllImportInitMethod}()");
			writer.WriteLine('{');
			writer.AddTab();

			if (project.references.Count != 0)
			{
				writer.WriteLinePrefix("/* Init references */");
				foreach (var reference in project.references)
				{
					writer.WriteLinePrefix($"CS2X_InitDllImport_{GetProjectNameFlat(reference)}();");
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
						if (method.IsExtern && method.IsStatic && WriteDllImportMethodBind(method, out string methodName))
						{
							writer.WriteLinePrefix($"if ({methodName} == 0) {methodName} = &{methodName}_DllNotFoundException;");
						}
					}
				}
			}
			writer.RemoveTab();
			writer.WriteLine('}');

			// init static constructors
			writer.WriteLine();
			string staticConstructorInitMethod = $"CS2X_InvokeStaticConstructors_{assemblyName}";
			string staticConstructorInit_IsInitMethod = staticConstructorInitMethod + "_IsInit";
			writer.WriteLine($"char {staticConstructorInit_IsInitMethod} = 0;");
			writer.WriteLine($"void {staticConstructorInitMethod}()");
			writer.WriteLine('{');
			writer.AddTab();
			writer.WriteLinePrefix($"if ({staticConstructorInit_IsInitMethod}) return;");
			writer.WriteLinePrefix($"{staticConstructorInit_IsInitMethod} = 1;");
			if (project.references.Count != 0)
			{
				writer.WriteLinePrefix("/* Init references */");
				foreach (var reference in project.references)
				{
					if (!IsProjectReferenced(project, reference, false)) writer.WriteLinePrefix($"CS2X_InvokeStaticConstructors_{GetProjectNameFlat(reference)}();");
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
			if (project.type == ProjectType.Exe)
			{
				// init string literals
				if (options.stringLiteralMemoryLocation == StringLiteralMemoryLocation.GlobalProgramMemory_RAM)
				{
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
				}

				// entry point
				var mainMethod = project.compilation.GetEntryPoint(new System.Threading.CancellationToken());
				writer.WriteLine();
				writer.WriteLine("/* =============================== */");
				writer.WriteLine("/* Entry Point */");
				writer.WriteLine("/* =============================== */");
				bool isWinMain = false;
				if (project.type == ProjectType.Exe && project.exeType == ProjectExeType.Windows)
				{
					if (options.api == API.Win32)
					{
						writer.WriteLine("int APIENTRY WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)");
						isWinMain = true;
					}
					else if (options.api == API.Win16)
					{
						writer.WriteLine("int PASCAL WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)");
						isWinMain = true;
					}
				}

				if (!isWinMain)
				{
					if (mainMethod.Parameters.Length == 0) writer.WriteLine("int main()");
					else writer.WriteLine("int main(int argc, char** argv)");
				}
				writer.WriteLine('{');
				writer.AddTab();

				bool wroteLocals = false;
				if (!mainMethod.ReturnsVoid)
				{
					if (mainMethod.ReturnType.SpecialType != SpecialType.System_Int32) throw new Exception("Main method return type can only be void or int");
					writer.WriteLinePrefix("int returnCode;");
					wroteLocals = true;
				}
				if (mainMethod.Parameters.Length != 0)
				{
					writer.WriteLinePrefix("int i;");
					wroteLocals = true;
				}
				if (isWinMain) writer.WriteLinePrefix("CS2X_hInstance = hInstance;");
				if (wroteLocals) writer.WriteLine();


				writer.WriteLinePrefix("/* Init main thread unahandled exeption jump */");
				writer.WriteLinePrefix("jmp_buf CS2X_UnhandledThreadExceptionBuff;");
				writer.WriteLinePrefix("int result = setjmp(CS2X_UnhandledThreadExceptionBuff);");
				writer.WriteLinePrefix("if (result != 0)");
				writer.WriteLinePrefix('{');
				writer.WriteLinePrefix("\tt2_System_Exception* exception = (t2_System_Exception*)CS2X_ThreadExceptionObject;");
				writer.WriteLinePrefix("\tCS2X_DisplayErrorMessageW(&exception->f__Message_k__BackingField_1->f__firstChar_1, L\"Unhandled Exception\");");
				writer.WriteLinePrefix("\texit(-2);");
				writer.WriteLinePrefix('}');
				writer.WriteLinePrefix("else");
				writer.WriteLinePrefix('{');
				writer.WriteLinePrefix("\tmemcpy(CS2X_ThreadExceptionJmpBuff, CS2X_UnhandledThreadExceptionBuff, sizeof(jmp_buf));");
				writer.WriteLinePrefix('}');

				writer.WriteLine();
				writer.WriteLinePrefix("/* Init main thread unahandled exeption jump */");
				writer.WriteLinePrefix("CS2X_GC_Init();");
				writer.WriteLinePrefix($"CS2X_InitAssembly_{assemblyName}();");
				writer.WriteLinePrefix("CS2X_InitStringLiterals();");
				writer.WriteLinePrefix($"{dllImportInitMethod}();");
				writer.WriteLinePrefix($"{staticConstructorInitMethod}();");
				if (mainMethod.Parameters.Length == 0)
				{
					// invoke managed main method
					if (!mainMethod.ReturnsVoid) writer.WritePrefix("returnCode = ");
					else writer.WritePrefix();
					writer.WriteLine($"{GetMethodFullName(mainMethod)}();");
				}
				else
				{
					// GC allocate array and copy args
					if (options.api == API.Win16 && project.exeType == ProjectExeType.Windows)
					{
						throw new NotImplementedException("TODO: manually parse lpCmdLine");
					}
					else
					{
						string argc = (project.exeType == ProjectExeType.Windows) ? "__argc" : "argc";
						string argv = (project.exeType == ProjectExeType.Windows) ? "__argv" : "argv";
						writer.WriteLinePrefix($"{GetTypeFullNameRef(stringArrayType)} managedArgs = {GetNewArrayMethod(specialTypes.stringType)}(sizeof({GetTypeFullName(specialTypes.stringType)}), {argc}, &{GetRuntimeTypeObjFullName(stringArrayType)});");
						writer.WriteLinePrefix($"for (i = 0; i != {argc}; ++i)");
						writer.WriteLinePrefix('{');
						writer.AddTab();
						writer.WriteLinePrefix("int i2, managedArgLength;");
						writer.WriteLinePrefix($"{GetTypeFullNameRef(stringArrayType)} managedArgsRuntimeOffset;");
						writer.WriteLinePrefix("managedArgsRuntimeOffset = ((char*)managedArgs) + ArrayOffset;");
						writer.WriteLinePrefix($"managedArgLength = strlen({argv}[i]);");
						var allocMethod = FindMethodByName(specialTypes.stringType, "FastAllocateString");
						writer.WriteLinePrefix($"managedArgsRuntimeOffset[i] = {GetMethodFullName(allocMethod)}(managedArgLength);");
						var firstCharField = FindFieldByName(specialTypes.stringType, "_firstChar");
						writer.WriteLinePrefix($"for (i2 = 0; i2 != managedArgLength; ++i2) (&managedArgsRuntimeOffset[i]->{GetFieldFullName(firstCharField)})[i2] = (char16_t){argv}[i][i2];");
						writer.RemoveTab();
						writer.WriteLinePrefix('}');
					}

					// invoke managed main method
					if (!mainMethod.ReturnsVoid) writer.WritePrefix("returnCode = ");
					else writer.WritePrefix();
					writer.WriteLine($"{GetMethodFullName(mainMethod)}(managedArgs);");
				}
				//writer.WriteLinePrefix("CS2X_GC_Collect();");// copy .NET Core and don't collect when application exits
				if (!mainMethod.ReturnsVoid) writer.WriteLinePrefix("return returnCode;");
				else writer.WriteLinePrefix("return 0;");
				writer.RemoveTab();
				writer.WriteLine('}');
			}
		}

		private void WriteTypes_ForwardDeclared(IEnumerable<INamedTypeSymbol> types)
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Forward declare Types */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in types) WriteType(type, false);
		}

		private void WriteTypes(IEnumerable<INamedTypeSymbol> types)
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Type definitions */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in types)
			{
				if (WriteType(type, true)) writer.WriteLine();
			}
		}

		private void WriteRuntimeTypes(IEnumerable<ITypeSymbol> types, string catagory)
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine($"/* Runtime Types '{catagory}' */");
			writer.WriteLine("/* =============================== */");
			foreach (var type in types)
			{
				if (WriteRuntimeType(type, writer)) writer.WriteLine();
			}
		}

		private void WritePValueToIValueConverterMethods()
		{
			if (pvalueToIValueTypes.Count != 0)// NOTE: this must happen after all types have been defined
			{
				writer.WriteLine();
				writer.WriteLine("/* =============================== */");
				writer.WriteLine("/* PValue to IValue inline helpers */");
				writer.WriteLine("/* =============================== */");
				foreach (var type in pvalueToIValueTypes.ToArray())
				{
					string typeName = GetTypeFullName(type);
					writer.WriteLine($"{typeName}* CS2X_PValueToIValue_{typeName}({typeName} pvalue, {typeName}* ivalue)");
					writer.WriteLine('{');
					writer.AddTab();
					writer.WriteLinePrefix("(*ivalue) = pvalue;");
					writer.WriteLinePrefix("return ivalue;");
					writer.RemoveTab();
					writer.WriteLine('}');
					writer.WriteLine();
				}
			}
		}

		private void WriteMethods_ForwardDeclared(IEnumerable<IMethodSymbol> methods)
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Forward declare Methods */");
			writer.WriteLine("/* =============================== */");
			foreach (var method in methods)
			{
				WriteMethod(method, false);
			}
		}

		private void WriteMethods(IEnumerable<IMethodSymbol> methods)
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Methods definitions */");
			writer.WriteLine("/* =============================== */");
			foreach (var method in methods)
			{
				if (WriteMethod(method, true)) writer.WriteLine();
			}
		}

		private void WriteEnumToStringMethods()
		{
			writer.WriteLine();
			writer.WriteLine("/* =============================== */");
			writer.WriteLine("/* Enum ToString Method definitions */");
			writer.WriteLine("/* =============================== */");
			foreach (var e in enumToStringMethods)
			{
				writer.WriteLine($"{stringTypeName}* {e.Value}({GetTypeFullName(e.Key)} value)");
				writer.WriteLine('{');
				writer.AddTab();
				writer.WriteLinePrefix($"switch (value)");
				writer.WriteLinePrefix('{');
				writer.AddTab();
				foreach (var member in e.Key.GetMembers())
				{
					if (member.Kind != SymbolKind.Field) continue;
					var field = (IFieldSymbol)member;
					string literalName = stringLiterals[field.Name];
					writer.WriteLinePrefix($"case {field.ConstantValue}: return {literalName};");
				}
				writer.RemoveTab();
				writer.WriteLinePrefix('}');
				var emptyStringField = FindFieldByName(specialTypes.stringType, "Empty");
				writer.WriteLinePrefix($"return {GetFieldFullName(emptyStringField)};");
				writer.RemoveTab();
				writer.WriteLine('}');
			}
		}

		private void WriteInitRuntimeTypes(IEnumerable<ITypeSymbol> types)
		{
			if (types.Count() == 0) return;

			// init runtime type objects
			writer.WriteLinePrefix("/* Init runtime type objects */");
			string baseTypeFieldName = GetFieldFullName(FindAutoPropertyFieldByName(specialTypes.typeType, "BaseType"));
			string nameFieldName = GetFieldFullName(FindAutoPropertyFieldByName(specialTypes.typeType, "Name"));
			string fullNameFieldName = GetFieldFullName(FindAutoPropertyFieldByName(specialTypes.typeType, "FullName"));
			foreach (var type in types)
			{
				if (type.SpecialType == SpecialType.System_Void) continue;
				if (type.TypeKind == TypeKind.Interface) continue;
				if (type.Kind == SymbolKind.NamedType)
				{
					var namedType = (INamedTypeSymbol)type;
					if (namedType.IsGenericType && !IsResolvedGenericType(namedType)) continue;
				}
				if (IsCS2XAttributeType(type)) continue;
				if (GetNativeTypeAttribute(type, NativeTarget.C, out _)) continue;

				string obj = GetRuntimeTypeObjFullName(type);
				writer.WriteLinePrefix($"memset(&{obj}, 0, sizeof({GetRuntimeTypeFullName(type)}));");
				writer.WriteLinePrefix($"{obj}.runtimeType.CS2X_RuntimeType = &{obj};");
				if (type.BaseType != null) writer.WriteLinePrefix($"{obj}.runtimeType.{baseTypeFieldName} = &{GetRuntimeTypeObjFullName(type.BaseType)};");
				else writer.WriteLinePrefix($"{obj}.runtimeType.{baseTypeFieldName} = 0;");
				writer.WriteLinePrefix($"{obj}.runtimeType.{nameFieldName} = ({stringTypeName}*){GetRuntimeTypeMetadataFullName(type)}_Name;");
				writer.WriteLinePrefix($"{obj}.runtimeType.{fullNameFieldName} = ({stringTypeName}*){GetRuntimeTypeMetadataFullName(type)}_FullName;");
			}

			// init string literals
			if (options.stringLiteralMemoryLocation == StringLiteralMemoryLocation.GlobalProgramMemory_RAM)
			{
				writer.WriteLine();
				writer.WriteLinePrefix("/* Init runtime type metadata / string literals */");
				foreach (var type in types)
				{
					if (type.SpecialType == SpecialType.System_Void) continue;
					if (type.TypeKind == TypeKind.Interface) continue;
					if (type.Kind == SymbolKind.NamedType)
					{
						var namedType = (INamedTypeSymbol)type;
						if (namedType.IsGenericType && !IsResolvedGenericType(namedType)) continue;
					}
					if (IsCS2XAttributeType(type)) continue;
					if (GetNativeTypeAttribute(type, NativeTarget.C, out _)) continue;

					string metadata = GetRuntimeTypeMetadataFullName(type);
					writer.WriteLinePrefix($"(({stringTypeName}*){metadata}_Name)->CS2X_RuntimeType = &{stringRuntimeTypeName};");
					writer.WriteLinePrefix($"(({stringTypeName}*){metadata}_FullName)->CS2X_RuntimeType = &{stringRuntimeTypeName};");
				}
			}

			// init vtable
			bool first = true;
			foreach (var type in types)
			{
				if (type.SpecialType == SpecialType.System_Void) continue;
				if (type.TypeKind == TypeKind.Interface) continue;
				if (type.Kind == SymbolKind.NamedType)
				{
					var namedType = (INamedTypeSymbol)type;
					if (namedType.IsGenericType && !IsResolvedGenericType(namedType)) continue;
				}
				if (IsCS2XAttributeType(type)) continue;
				if (GetNativeTypeAttribute(type, NativeTarget.C, out _)) continue;

				string obj = GetRuntimeTypeObjFullName(type);
				var orderedVirtualMethods = GetOrderedVirtualMethods(type);
				foreach (var method in orderedVirtualMethods)
				{
					if (method.MethodKind == MethodKind.DelegateInvoke) continue;// ignore delegate invoke virtual
					if (first)
					{
						first = false;
						writer.WriteLine();
						writer.WriteLinePrefix("/* Init runtime type vtabel */");
					}

					var resolvedMethod = method;
					void WriteResolvedMethod()
					{
						var highestMethod = FindHighestVirtualMethodSlot(type, resolvedMethod);
						if (highestMethod.IsGenericMethod)
						{
							bool AllTypeArgsMatch(ImmutableArray<ITypeSymbol> args1, ImmutableArray<ITypeSymbol> args2)
							{
								if (args1.Length != args2.Length) return false;
								for (int i = 0; i != args1.Length; ++i)
								{
									if (!args1[i].IsEqual(args2[i])) return false;
								}
								return true;
							}

							highestMethod = genericMethods.First
							(
								x =>
								(x.IsEqual(highestMethod) || x.ConstructedFrom.IsEqual(highestMethod)) &&
								AllTypeArgsMatch(x.TypeArguments, resolvedMethod.TypeArguments)
							);
						}
						if (!highestMethod.IsAbstract) writer.WriteLinePrefix($"{obj}.{GetVTableMethodFullName(resolvedMethod)} = &{GetMethodFullName(highestMethod)};");
						else writer.WriteLinePrefix($"{obj}.{GetVTableMethodFullName(resolvedMethod)} = 0;");
					}

					if (method.IsGenericMethod)
					{
						if (IsResolvedGenericMethod(method)) throw new Exception("Expected unresolved generic method");
						foreach (var genericMethod in genericMethods)// write all permutations
						{
							if (genericMethod.ConstructedFrom.IsEqual(method))
							{
								resolvedMethod = genericMethod;
								WriteResolvedMethod();
							}
						}
					}
					else
					{
						WriteResolvedMethod();
					}
				}
			}

			// init array element sizes
			first = true;
			foreach (var type in types)
			{
				if (type.Kind != SymbolKind.ArrayType) continue;
				if (first)
				{
					first = false;
					writer.WriteLine();
					writer.WriteLinePrefix("/* Init array runtime type element size */");
				}

				var arrayType = (IArrayTypeSymbol)type;
				writer.WriteLinePrefix($"{GetRuntimeTypeObjFullName(type)}.elementSize = sizeof({GetTypeFullNameRef(arrayType.ElementType)});");
			}
		}

		private bool ExistsInReference<T>(HashSet<T> collection, T value) where T : class
		{
			foreach (var reference in transpiledProject.references)
			{
				if (collection.Any(x => x.Equals(value))) return true;
			}
			return false;
		}

		private void TrackMethod(IMethodSymbol method)
		{
			if (!ExistsInReference(methods, method))
			{
				methods.Add(method);
			}
		}

		private void TrackGenericMethod(IMethodSymbol genericMethod)
		{
			if (!genericMethod.IsGenericMethod) throw new Exception("TrackGenericMethod failed as method is not generic: " + genericMethod.FullName());
			if (genericMethod.IsDefinition) throw new Exception("TrackGenericMethod failed as method is definition: " + genericMethod.FullName());
			if (!ExistsInReference(genericMethods, genericMethod))
			{
				genericMethods.Add(genericMethod);
				methods.Add(method);
			}
		}

		private void TrackGenericType(INamedTypeSymbol genericType)
		{
			if (!genericType.IsGenericType) throw new Exception("TrackGenericype failed as type is not generic: " + genericType.FullName());
			if (!ExistsInReference(genericTypes, genericType))
			{
				if (genericType.IsDefinition) throw new Exception("CheckIfSpecialType should never hit a generic definition");
				genericTypes.Add(genericType);
				transpiledProject.genericTypes.Add(genericType);
			}
		}

		private void TrackArrayType(IArrayTypeSymbol arrayType)
		{
			if (!ExistsInReference(arrayTypes, arrayType))
			{
				arrayTypes.Add(arrayType);
			}
		}

		private void TrackPointerType(IPointerTypeSymbol pointerType)
		{
			if (!ExistsInReference(pointerTypes, pointerType))
			{
				pointerTypes.Add(pointerType);
			}
		}

		private void TrackPValueToIValueType(ITypeSymbol type)
		{
			if (!ExistsInReference(pvalueToIValueTypes, type))
			{
				pvalueToIValueTypes.Add(type);
			}
		}

		private int GetStringMemorySize(string value)
		{
			return (int)options.ptrSize + sizeof(int) + sizeof(char) + (value.Length * sizeof(char));
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
			else if (options.endianness == Endianness.Big) binaryData = Encoding.BigEndianUnicode.GetBytes(value);
			else throw new NotImplementedException("String endiannes not implemented: " + options.endianness);
			WriteBinary(binaryData);

			// null-terminated char
			result.Append("0,0}");

			return result.ToString();
		}

		private string CharToLiteral(char value)
		{
			// write char unicode data
			byte[] data;
			if (options.endianness == Endianness.Little) data = Encoding.Unicode.GetBytes(new char[1] { value });
			else if (options.endianness == Endianness.Big) data = Encoding.BigEndianUnicode.GetBytes(new char[1] { value });
			else throw new NotImplementedException("Char endiannes not implemented: " + options.endianness);

			// swap bytes for hex literal
			byte first = data[0];
			data[0] = data[1];
			data[1] = first;

			// return formatted hex value
			return $"0x{BitConverter.ToString(data).Replace("-", "")}";
		}
	}
}
