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

		public readonly ProjectTypes type;
		public readonly OptimizationLevel optimizationLevel;
		public IReadOnlyList<Project> references { get; private set;}
		
		public CSharpCompilation compilation { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> classObjects { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> structObjects { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> interfaceObjects { get; private set; }
		public IReadOnlyList<INamedTypeSymbol> enumObjects { get; private set; }

		public Project(Solution solution, RoslynProject roslynProject)
		{
			this.solution = solution;
			this.roslynProject = roslynProject;

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
			enumObjects = new List<INamedTypeSymbol>();
			classObjects = new List<INamedTypeSymbol>();
			structObjects = new List<INamedTypeSymbol>();
			interfaceObjects = new List<INamedTypeSymbol>();

			// parse lowered objects
			compilation = (CSharpCompilation)await roslynProject.GetCompilationAsync();
			ParseNamespace(compilation.Assembly.GlobalNamespace);
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
				case TypeKind.Enum: ((List<INamedTypeSymbol>)enumObjects).Add(member); break;
				case TypeKind.Class: ((List<INamedTypeSymbol>)classObjects).Add(member); break;
				case TypeKind.Struct: ((List<INamedTypeSymbol>)structObjects).Add(member); break;
				case TypeKind.Interface: ((List<INamedTypeSymbol>)interfaceObjects).Add(member); break;
			}

			// parse sub members
			foreach (var subMember in member.GetTypeMembers())
			{
				ParseMembers(subMember);
			}
		}
	}
}
