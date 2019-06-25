using RoslynSolution = Microsoft.CodeAnalysis.Solution;

using Microsoft.CodeAnalysis.MSBuild;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.IO;
using Microsoft.Build.Locator;
using Microsoft.CodeAnalysis;

namespace CS2X.Core
{
	public class Solution
	{
		public RoslynSolution roslynSolution { get; private set; }
		public readonly string filename;
		private readonly bool isProjFileName;

		public IReadOnlyList<Project> projects { get; private set; }
		public Project coreLibProject { get; private set; }

		// special types
		public IReadOnlyCollection<IMethodSymbol> genericMethods { get; private set; }
		public IReadOnlyCollection<INamedTypeSymbol> genericTypes { get; private set; }
		public IReadOnlyCollection<IArrayTypeSymbol> arrayTypes { get; private set; }
		public IReadOnlyCollection<IPointerTypeSymbol> pointerTypes { get; private set; }

		static Solution()
		{
			if (MSBuildLocator.CanRegister) MSBuildLocator.RegisterDefaults();
		}

		public Solution(string filename)
		{
			this.filename = filename;
			if (!File.Exists(filename)) throw new Exception("File does not exists: " + filename);
			string ext = Path.GetExtension(filename);
			if (ext == ".csproj") isProjFileName = true;
			else if (ext == ".sln") isProjFileName = false;
			else throw new Exception("Invalid file type: " + filename);
		}

		public async Task Parse()
		{
			using (var workspace = MSBuildWorkspace.Create())
			{
				// load projects
				if (!isProjFileName)
				{
					roslynSolution = await workspace.OpenSolutionAsync(filename);
				}
				else
				{
					var csProj = await workspace.OpenProjectAsync(filename);
					roslynSolution = csProj.Solution;
				}

				var projects = new List<Project>();
				foreach (var csProj in roslynSolution.Projects)
				{
					var proj = new Project(this, csProj);
					projects.Add(proj);
					if (proj.isCoreLib) coreLibProject = proj;
				}

				this.projects = projects;

				// parse projects
				genericMethods = new HashSet<IMethodSymbol>();
				genericTypes = new HashSet<INamedTypeSymbol>();
				arrayTypes = new HashSet<IArrayTypeSymbol>();
				pointerTypes = new HashSet<IPointerTypeSymbol>();
				foreach (var project in projects)
				{
					await project.Parse();
					foreach (var method in project.genericMethods) ((HashSet<IMethodSymbol>)genericMethods).Add(method);
					foreach (var type in project.genericTypes) ((HashSet<INamedTypeSymbol>)genericTypes).Add(type);
					foreach (var type in project.arrayTypes) ((HashSet<IArrayTypeSymbol>)arrayTypes).Add(type);
					foreach (var type in project.pointerTypes) ((HashSet<IPointerTypeSymbol>)pointerTypes).Add(type);
				}
			}
		}
	}
}
