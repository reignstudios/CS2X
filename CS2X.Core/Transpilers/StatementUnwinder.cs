using Microsoft.CodeAnalysis;
using System.Collections.Generic;
using System.IO;

namespace CS2X.Core.Transpilers
{
	class StatementUnwinder : StreamWriterEx
	{
		public static Dictionary<ITypeSymbol, string> allLocals;

		public StatementUnwinder(Stream stream, StreamWriterEx prev)
		: base(stream, prev)
		{
			if (prev != null) prefix = prev.prefix;
		}

		public static void ResetAllLocals()
		{
			if (allLocals == null) allLocals = new Dictionary<ITypeSymbol, string>();
			else allLocals.Clear();
		}
	}
}
