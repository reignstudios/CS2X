using Microsoft.CodeAnalysis;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Linq;

namespace CS2X.Core.Transpilers
{
	class InstructionalBody : IDisposable
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

		public StreamWriteSwitcher switcher;
		public MemoryStream stream;
		public StreamWriterEx writer;
		public List<Local> locals, expressionLocals;

		public InstructionalBody(StreamWriteSwitcher switcher)
		{
			this.switcher = switcher;
			stream = new MemoryStream();
			writer = new StreamWriterEx(stream);
			switcher.Switch(stream, writer);

			locals = new List<Local>();
			expressionLocals = new List<Local>();
		}

		public void Dispose()
		{
			switcher.Revert();

			// copy streams to global
			writer.Flush();
			stream.Flush();
			stream.Position = 0;
			switcher.Flush();
			stream.CopyTo(switcher.stream);

			// dispose streams
			Utils.DisposeInstance(ref writer);
			Utils.DisposeInstance(ref stream);
		}
	}
}
