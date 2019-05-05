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
			public readonly ILocalSymbol local;
			public readonly string name;

			public Local(ILocalSymbol local, string name)
			{
				this.local = local;
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
