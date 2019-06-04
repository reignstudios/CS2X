using RoslynProject = Microsoft.CodeAnalysis.Project;

using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Linq;

namespace CS2X.Core
{
	public enum ProjectTypes
	{
		Exe,
		Dll
	}

	public class Project
	{
		public readonly Solution solution;
		public readonly RoslynProject roslynProject;
		public readonly bool isCoreLib;

		public readonly ProjectTypes type;
		public readonly OptimizationLevel optimizationLevel;
		public IReadOnlyList<Project> references { get; private set;}
		
		public CSharpCompilation compilation { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> allTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> allTypesDependencyOrdered { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> classTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> structTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> interfaceTypes { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> enumTypes { get; private set; }

		public Project(Solution solution, RoslynProject roslynProject)
		{
			this.solution = solution;
			this.roslynProject = roslynProject;
			isCoreLib = roslynProject.AllProjectReferences.Count == 0;

			// validate compiler options
			//var parseOptions = (CSharpParseOptions)roslynProject.ParseOptions;
			//if (parseOptions.LanguageVersion != LanguageVersion.CSharp3) throw new Exception("Project lang version must be 3.0: " + roslynProject.FilePath);

			var compilationOptions = roslynProject.CompilationOptions;
			if (compilationOptions.Platform != Platform.AnyCpu) throw new Exception("Project platform must be AnyCpu: " + roslynProject.FilePath);

			// get project type
			var kind = compilationOptions.OutputKind;
			if (kind == OutputKind.DynamicallyLinkedLibrary) type = ProjectTypes.Dll;
			else if (kind == OutputKind.ConsoleApplication || kind == OutputKind.WindowsApplication) type = ProjectTypes.Exe;
			else throw new Exception("Unsuported project kind: " + roslynProject.FilePath);

			// check optimization level
			optimizationLevel = compilationOptions.OptimizationLevel;
		}

		public async Task Parse()
		{
			// gather references
			var references = new List<Project>();
			var sln = roslynProject.Solution;
			foreach (var reference in roslynProject.AllProjectReferences)
			{
				var project = solution.projects.FirstOrDefault(x => x.roslynProject.Id == reference.ProjectId);
				if (project == null) throw new Exception("Project reference not found in solution: " + reference.ProjectId);
				references.Add(project);
			}

			this.references = references;

			// init main objects
			classTypes = new List<INamedTypeSymbol>();
			structTypes = new List<INamedTypeSymbol>();
			interfaceTypes = new List<INamedTypeSymbol>();
			enumTypes = new List<INamedTypeSymbol>();

			// parse lowered objects
			compilation = (CSharpCompilation)await roslynProject.GetCompilationAsync();
			ParseNamespace(compilation.Assembly.GlobalNamespace);
			
			// merge all types in one list
			var allTypesList = new List<INamedTypeSymbol>();
			allTypesList.AddRange(classTypes);
			allTypesList.AddRange(structTypes);
			allTypesList.AddRange(interfaceTypes);
			allTypesList.AddRange(enumTypes);
			allTypes = allTypesList;

			// dependency sort all types
			var allTypesDependencyOrderedList = new List<INamedTypeSymbol>();
			foreach (var type in allTypesList)
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
			allTypesDependencyOrdered = allTypesDependencyOrderedList;
		}

		private void ParseNamespace(INamespaceSymbol namespaceSymbol)
		{
			// parse members
			foreach (var member in namespaceSymbol.GetTypeMembers())
			{
				ParseMembers(member);
			}

			// parse sub namespaces
			foreach (var subNamespace in namespaceSymbol.GetNamespaceMembers())
			{
				ParseNamespace(subNamespace);
			}
		}

		private void ParseMembers(INamedTypeSymbol member)
		{
			switch (member.TypeKind)
			{
				case TypeKind.Enum: ((List<INamedTypeSymbol>)enumTypes).Add(member); break;
				case TypeKind.Class: ((List<INamedTypeSymbol>)classTypes).Add(member); break;
				case TypeKind.Struct: ((List<INamedTypeSymbol>)structTypes).Add(member); break;
				case TypeKind.Interface: ((List<INamedTypeSymbol>)interfaceTypes).Add(member); break;
			}

			// parse sub members
			foreach (var subMember in member.GetTypeMembers())
			{
				ParseMembers(subMember);
			}
		}
	}
}
