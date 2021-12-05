using RoslynProject = Microsoft.CodeAnalysis.Project;

using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Linq;
using CS2X.Analyzer.SyntaxValidation;
using Microsoft.CodeAnalysis.FindSymbols;

namespace CS2X.Core
{
	public enum ProjectType
	{
		/// <summary>
		/// Executable
		/// </summary>
		Exe,

		/// <summary>
		/// Dynamic link library
		/// </summary>
		Dll
	}

	public enum ProjectExeType
	{
		/// <summary>
		/// Not Applicable
		/// </summary>
		NA,

		/// <summary>
		/// Console application (standard 'main' entry point)
		/// </summary>
		Console,

		/// <summary>
		/// Windows application (special 'WinMain' entry point)
		/// </summary>
		Windows
	}

	public class Project
	{
		private bool isParsed;

		public readonly Solution solution;
		public readonly RoslynProject roslynProject;
		public readonly bool isCoreLib;

		public readonly ProjectType type;
		public readonly ProjectExeType exeType;
		public readonly OptimizationLevel optimizationLevel;
		public IReadOnlyList<Project> references { get; private set;}
		
		public CSharpCompilation compilation { get; private set; }

		public IReadOnlyList<INamedTypeSymbol> allTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> classTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> structTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> interfaceTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> enumTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> delegateTypes { get; private set; }

		internal Project(Solution solution, RoslynProject roslynProject)
		{
			this.solution = solution;
			this.roslynProject = roslynProject;
			isCoreLib = roslynProject.AllProjectReferences.Count == 0;
			
			// validate compiler options
			var compilationOptions = roslynProject.CompilationOptions;
			if (compilationOptions.Platform != Platform.AnyCpu) throw new Exception("Project platform must be AnyCpu: " + roslynProject.FilePath);

			// get project type
			var kind = compilationOptions.OutputKind;
			if (kind == OutputKind.DynamicallyLinkedLibrary)
			{
				type = ProjectType.Dll;
				exeType = ProjectExeType.NA;
			}
			else if (kind == OutputKind.ConsoleApplication)
			{
				type = ProjectType.Exe;
				exeType = ProjectExeType.Console;
			}
			else if (kind == OutputKind.WindowsApplication)
			{
				type = ProjectType.Exe;
				exeType = ProjectExeType.Windows;
			}
			else
			{
				throw new Exception("Unsuported project kind: " + roslynProject.FilePath);
			}

			// check optimization level
			optimizationLevel = compilationOptions.OptimizationLevel;
		}

		internal async Task Parse()
		{
			if (isParsed) return;
			isParsed = true;

			// gather references
			var references = new List<Project>();
			var sln = roslynProject.Solution;
			foreach (var reference in roslynProject.ProjectReferences)
			{
				var project = solution.projects.FirstOrDefault(x => x.roslynProject.Id == reference.ProjectId);
				if (project == null) throw new Exception("Project reference not found in solution: " + reference.ProjectId);
				references.Add(project);
				await project.Parse();
			}

			this.references = references;

			// get compilation
			compilation = (CSharpCompilation)await roslynProject.GetCompilationAsync();

			// validate syntax rules
			var options = new ProjectAnalyzer.Options()
			{
				breakOnError = false,
				writeSyntaxSuffix = true,
				scanChilderen = true
			};
			var analyzer = new ProjectAnalyzer(compilation, options);
			if (!await analyzer.Analyze(roslynProject)) throw new Exception("Failed to Analyze project: " + roslynProject.FilePath);

			// init main objects
			classTypes = new List<INamedTypeSymbol>();
			structTypes = new List<INamedTypeSymbol>();
			interfaceTypes = new List<INamedTypeSymbol>();
			enumTypes = new List<INamedTypeSymbol>();
			delegateTypes = new List<INamedTypeSymbol>();

			// parse normal members
			ParseNamespace(compilation.Assembly.GlobalNamespace);
			
			// merge all types in one list
			var allTypesList = new List<INamedTypeSymbol>();
			allTypesList.AddRange(classTypes);
			allTypesList.AddRange(structTypes);
			allTypesList.AddRange(interfaceTypes);
			allTypesList.AddRange(enumTypes);
			allTypesList.AddRange(delegateTypes);

			// dependency sort all types
			allTypes = DependencySortTypes(allTypesList);
		}

		public static List<INamedTypeSymbol> DependencySortTypes(IEnumerable<INamedTypeSymbol> types)
		{
			var allTypesDependencyOrderedList = new List<INamedTypeSymbol>();
			foreach (var type in types)
			{
				int index = -1, i = 0;
				foreach (var orderedType in allTypesDependencyOrderedList)
				{
					if (type.IsValueType)
					{
						foreach (var member in orderedType.GetMembers())
						{
							if (member.Kind != SymbolKind.Field) continue;
							var field = (IFieldSymbol)member;
							if (field.Type.FullName() == type.FullName())
							{
								index = i;
								break;
							}
						}
						if (index != -1) break;
					}
					++i;
				}

				if (index == -1) allTypesDependencyOrderedList.Add(type);
				else allTypesDependencyOrderedList.Insert(index, type);
			}
			return allTypesDependencyOrderedList;
		}

		private void ParseNamespace(INamespaceSymbol namespaceSymbol)
		{
			// parse members
			foreach (var member in namespaceSymbol.GetTypeMembers())
			{
				ParseNormalMembers(member);
			}

			// parse sub namespaces
			foreach (var subNamespace in namespaceSymbol.GetNamespaceMembers())
			{
				ParseNamespace(subNamespace);
			}
		}

		private void ParseNormalMembers(INamedTypeSymbol member)
		{
			switch (member.TypeKind)
			{
				case TypeKind.Class: ((List<INamedTypeSymbol>)classTypes).Add(member); break;
				case TypeKind.Struct: ((List<INamedTypeSymbol>)structTypes).Add(member); break;
				case TypeKind.Interface: ((List<INamedTypeSymbol>)interfaceTypes).Add(member); break;
				case TypeKind.Enum: ((List<INamedTypeSymbol>)enumTypes).Add(member); break;
				case TypeKind.Delegate: ((List<INamedTypeSymbol>)delegateTypes).Add(member); break;
				default: throw new NotSupportedException("Unsupported type kind: " + member.TypeKind);
			}

			// parse sub members
			foreach (var subMember in member.GetTypeMembers())
			{
				ParseNormalMembers(subMember);
			}
		}

		public override string ToString()
		{
			return roslynProject != null ? roslynProject.Name : base.ToString();
		}
	}
}
