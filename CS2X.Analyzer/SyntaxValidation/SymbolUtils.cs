using Microsoft.CodeAnalysis;

namespace CS2X.Analyzer.SyntaxValidation
{
	public static class SymbolUtils
	{
		public static bool IsEqual(this ISymbol symbol, ISymbol symbol2)
		{
			return SymbolEqualityComparer.Default.Equals(symbol, symbol2);
		}
	}
}
