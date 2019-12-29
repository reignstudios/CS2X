using Microsoft.CodeAnalysis;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace CS2X.Core
{
	public static class SymbolUtils
	{
		public static bool IsResolvedGenericType(INamedTypeSymbol type)
		{
			if (!type.IsGenericType || type.IsDefinition) return false;
			var next = type;
			while (next != null)
			{
				if (next.TypeArguments.Any(x => x.TypeKind == TypeKind.TypeParameter)) return false;
				next = next.ContainingType;
			}
			return true;
		}
	}
}
