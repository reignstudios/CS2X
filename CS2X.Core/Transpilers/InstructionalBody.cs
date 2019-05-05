using Microsoft.CodeAnalysis;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;

namespace CS2X.Core.Transpilers
{
	class InstructionalBody : StreamWriterEx
	{
		public class Local
		{
			public readonly ITypeSymbol type;
			public readonly string name;

			public Local(ITypeSymbol type, string name)
			{
				this.type = type;
				this.name = name;
			}
		}

		public List<Local> locals, expressionLocals;

		public InstructionalBody(Stream stream, StreamWriterEx prev)
		: base(stream, prev)
		{
			locals = new List<Local>();
			expressionLocals = new List<Local>();
			if (prev != null) prefix = prev.prefix;
		}
	}
}
