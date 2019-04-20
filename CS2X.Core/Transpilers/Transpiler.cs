using System;
using System.Collections.Generic;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis.CSharp.Symbols;

namespace CS2X.Core.Transpilers
{
	public abstract class Transpiler
	{
		public readonly Solution solution;

		public Transpiler(Solution solution)
		{
			this.solution = solution;
		}

		public abstract void Transpile(string outputPath);

		protected virtual string GetTypeFullName(INamedTypeSymbol type)
		{
			var result = new StringBuilder(type.Name);

			// prefix base types
			var baseType = type.BaseType;
			while (baseType != null)
			{
				result.Insert(0, baseType.Name + GetTypeDelimiter());
				baseType = baseType.BaseType;
			}

			// write namespace
			var baseNamespace = type.ContainingNamespace;
			while (baseNamespace != null)
			{
				if (baseNamespace.IsGlobalNamespace) break;
				result.Insert(0, baseNamespace.Name + GetnamespaceDelimiter());
				baseNamespace = baseNamespace.ContainingNamespace;
			}

			return result.ToString();
		}

		protected abstract string GetTypeDelimiter();
		protected abstract string GetnamespaceDelimiter();

		protected bool IsEmptyType(INamedTypeSymbol type, bool staticsDontCount = true)
		{
			var currentType = type;
			while (currentType != null)
			{
				var members = currentType.GetMembers().Where(x => x is IFieldSymbol);
				if (members.Count() != 0)
				{
					if (staticsDontCount)
					{
						if (!members.All(x => x.IsStatic)) return false;
					}
					else
					{
						return false;
					}
				}

				currentType = currentType.BaseType;
			}

			return true;
		}
	}
}
