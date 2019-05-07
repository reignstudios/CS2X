using Microsoft.CodeAnalysis;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;
using Microsoft.CodeAnalysis.CSharp.Syntax;

namespace CS2X.Core.Transpilers
{
	class InstructionalBody : StreamWriterEx
	{
		public class Local
		{
			public readonly VariableDeclaratorSyntax variable;
			public readonly ILocalSymbol local;
			public readonly ITypeSymbol type;
			public readonly string name;

			public Local(VariableDeclaratorSyntax variable, ILocalSymbol local, ITypeSymbol type, string name)
			{
				this.variable = variable;
				this.local = local;
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
