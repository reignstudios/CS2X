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
using Microsoft.CodeAnalysis.CSharp;

using System.Runtime.Loader;
using System.Reflection;

namespace CS2X.Core
{
	public class Solution
	{
		public RoslynSolution roslynSolution { get; private set; }
		public readonly string filename, name;
		private readonly bool isProjFileName;

		public IReadOnlyList<Project> projects { get; private set; }
		public Project coreLibProject { get; private set; }

		//public IReadOnlyList<INamedTypeSymbol> genericTypes { get; private set; }
		//public IReadOnlyList<IMethodSymbol> genericMethods { get; private set; }

		static Solution()
		{
			if (MSBuildLocator.CanRegister)//MSBuildLocator.RegisterDefaults();
			{
				//MSBuildLocator.RegisterDefaults();

				MSBuildLocator.RegisterMSBuildPath(@"C:\Program Files\dotnet\sdk\5.0.100");// TEST
				//MSBuildLocator.RegisterMSBuildPath(@"C:\Program Files\dotnet\sdk\3.1.404");// TEST

				//var instances = MSBuildLocator.QueryVisualStudioInstances();
				//MSBuildLocator.RegisterInstance(instances.First());
			}
		}

		public Solution(string filename)
		{
			this.filename = filename;
			name = Path.GetFileNameWithoutExtension(filename);
			if (!File.Exists(filename)) throw new Exception("File does not exists: " + filename);
			string ext = Path.GetExtension(filename);
			if (ext == ".csproj") isProjFileName = true;
			else if (ext == ".sln") isProjFileName = false;
			else throw new Exception("Invalid file type: " + filename);
		}

		private Assembly Default_Resolving(AssemblyLoadContext context, AssemblyName assemblyName)// TEST
		{
			/*string name = assemblyName.Name;
			if (name.Contains("Orbital"))
			{
				var ca = context.LoadFromAssemblyPath(@"F:\Dev\Reign\Orbital-Framework\Platforms\Win32\NetCore\Orbital.Host\bin\Debug\net5.0\Orbital.Host.dll");
				return ca;
			}

			if (name.Contains("CS2X"))
			{
				var ca = context.LoadFromAssemblyPath(@"F:\Dev\Reign\Orbital-Framework\Submodules\CS2X\CS2X.CoreLib\bin\Debug\net5.0\CS2X.CoreLib.dll");
				return ca;
			}

			if (name.Contains("CoreLib"))
			{ }

			string path = Path.Combine(@"C:\Program Files\dotnet\sdk\5.0.100", name + ".dll");
			var a = context.LoadFromAssemblyPath(path);
			if (a == null)
			{ }
			return a;*/

			return null;
		}

		public async Task Parse(string configuration, string platform)
		{
			//AssemblyLoadContext.Default.Resolving += Default_Resolving;// TEST

			var properties = new Dictionary<string, string>()
			{
			   { "Configuration", configuration },
			   { "Platform", platform }
			};
			using (var workspace = MSBuildWorkspace.Create(properties))
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
				
				/*// find all generics type uses
				var genericTypeList = new HashSet<INamedTypeSymbol>();
				foreach (var project in projects)
				foreach (var type in project.allTypes)
				{
					if (!type.IsGenericType || !type.IsDefinition || type.TypeKind == TypeKind.Interface || type.TypeKind == TypeKind.Enum) continue;
					if (type.TypeKind != TypeKind.Class && type.TypeKind != TypeKind.Struct && type.TypeKind != TypeKind.Delegate) throw new NotSupportedException("Unsupported generic type kind: " + type.TypeKind);
					var implementations = await SymbolFinder.FindReferencesAsync(type, roslynSolution);
					foreach (var implementation in implementations)
					foreach (var location in implementation.Locations)
					{
						var semanticModel = await location.Document.GetSemanticModelAsync();
						int position = location.Location.SourceSpan.Start;
						var symbol = await SymbolFinder.FindSymbolAtPositionAsync(semanticModel, position, workspace);
						if (symbol != null)
						{
							INamedTypeSymbol genericType = null;
							if (symbol is INamedTypeSymbol namedSymbol)
							{
								genericType = namedSymbol;
							}
							else if (symbol is IMethodSymbol methodSymbol)
							{
								genericType = methodSymbol.ContainingType;
							}
							else
							{
								throw new NotSupportedException("Unsupported generic symbol resolver kind: " + symbol.Kind);
							}
							
							//if (SymbolUtils.IsResolvedGenericType(resolvedType))
							//{
							//	genericTypeList.Add(resolvedType);
							//}
							AddGenericTypeRecursive(genericType, genericTypeList);
						}
					}
				}
				genericTypes = genericTypeList.ToList();

				// find all generics method uses
				var genericMethodList = new HashSet<IMethodSymbol>();
				foreach (var project in projects)
				foreach (var type in project.allTypes)
				{
					if (type.TypeKind == TypeKind.Interface || type.TypeKind == TypeKind.Enum) continue;
					if (type.TypeKind != TypeKind.Class && type.TypeKind != TypeKind.Struct && type.TypeKind != TypeKind.Delegate) throw new NotSupportedException("Unsupported generic type kind: " + type.TypeKind);
					
					INamedTypeSymbol resolvedType;
					if (type.IsGenericType)
					{
						resolvedType = genericTypeList.FirstOrDefault(x => SymbolEqualityComparer.Default.Equals(x.OriginalDefinition, type.OriginalDefinition));
						if (resolvedType == null) continue;// no uses of generic type, so skip
					}
					else
					{
						resolvedType = type;
					}

					foreach (var member in resolvedType.GetMembers())
					{
						var method = member as IMethodSymbol;
						if (method == null || !method.IsGenericMethod) continue;
						var implementations = await SymbolFinder.FindReferencesAsync(method, roslynSolution);
						foreach (var implementation in implementations)
						foreach (var location in implementation.Locations)
						{
							var semanticModel = await location.Document.GetSemanticModelAsync();
							int position = location.Location.SourceSpan.Start;
							var resolvedMethod = await SymbolFinder.FindSymbolAtPositionAsync(semanticModel, position, workspace) as IMethodSymbol;
							if (resolvedMethod != null)
							{
								if (SymbolUtils.IsResolvedGenericMethod(resolvedMethod))
								{
									genericMethodList.Add(resolvedMethod);
								}
							}
						}
					}
				}
				genericMethods = genericMethodList.ToList();*/
			}
		}

		//private void AddGenericTypeRecursive(INamedTypeSymbol type, HashSet<INamedTypeSymbol> genericTypeList)
		//{
		//	if (!SymbolUtils.IsResolvedGenericType(type)) return;
		//	genericTypeList.Add(type);

		//	// scan for generic members
		//	foreach (var member in type.GetMembers())
		//	{
		//		if (member is IFieldSymbol field)
		//		{
		//			if (field.Type is INamedTypeSymbol namedType && namedType.IsGenericType)
		//			{

		//				var contructedType = namedType.OriginalDefinition.Construct();
		//				AddGenericTypeRecursive(contructedType, genericTypeList);
		//			}
		//		}
		//		/*else
		//		{
		//			throw new NotSupportedException("Unsupported member: " + member.FullName());
		//		}*/
		//	}
		//}

		public override string ToString()
		{
			return name != null ? name : base.ToString();
		}
	}
}
