using RoslynSolution = Microsoft.CodeAnalysis.Solution;

using Microsoft.CodeAnalysis.MSBuild;
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.IO;
using Microsoft.Build.Locator;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.FindSymbols;
using System.Linq;

namespace CS2X.Core
{
	public class Solution
	{
		public RoslynSolution roslynSolution { get; private set; }
		public readonly string filename;
		private readonly bool isProjFileName;

		public IReadOnlyList<Project> projects { get; private set; }
		public Project coreLibProject { get; private set; }

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
				foreach (var project in projects)
				{
					await project.Parse();
				}

				// parse generics
				foreach (var project in projects)
				foreach (var type in project.allTypes)
				{
					if (!type.IsGenericType || !type.IsDefinition || type.TypeKind == TypeKind.Interface) continue;
					if (type.Name.Contains("List"))
					{ }

					if (type.TypeKind != TypeKind.Class && type.TypeKind != TypeKind.Struct && type.TypeKind != TypeKind.Delegate) throw new NotSupportedException("Unsupported generic type kind: " + type.TypeKind);
					var implementations = await SymbolFinder.FindReferencesAsync(type, roslynSolution);
					foreach (var implementation in implementations)
					foreach (var location in implementation.Locations)
					{
						var semanticModel = await location.Document.GetSemanticModelAsync();
						int position = location.Location.SourceSpan.Start;
						//var symbol2 = semanticModel.GetEnclosingSymbol(position);
						var symbol = await SymbolFinder.FindSymbolAtPositionAsync(semanticModel, position, workspace);// as INamedTypeSymbol;
						if (symbol != null)// && SymbolUtils.IsResolvedGenericType(symbol))
						{ }
					}
				}
			}
		}
	}
}
