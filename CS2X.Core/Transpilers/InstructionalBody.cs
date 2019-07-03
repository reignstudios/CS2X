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
			public readonly BlockSyntax block;
			public readonly string identifier;
			public readonly ITypeSymbol type;
			public readonly string name;

			public Local(BlockSyntax block, string identifier, ITypeSymbol type, string name)
			{
				this.block = block;
				this.identifier = identifier;
				this.type = type;
				this.name = name;
			}

			public bool Equals(string identifier, ITypeSymbol type)
			{
				return this.identifier == identifier && this.type.Equals(type);
			}
		}

		public class SpecialLocal
		{
			public readonly BlockSyntax block;
			public readonly string type, name;

			public SpecialLocal(BlockSyntax block, string type, string name)
			{
				this.block = block;
				this.type = type;
				this.name = name;
			}
		}

		public List<Local> locals;
		public List<SpecialLocal> specialLocals;

		public InstructionalBody(Stream stream, StreamWriterEx prev)
		: base(stream, prev)
		{
			locals = new List<Local>();
			specialLocals = new List<SpecialLocal>();
			if (prev != null) prefix = prev.prefix;
		}
	}
}
