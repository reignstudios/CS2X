using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace CS2X.Core.Transpilers
{
	class MemoryWriter : IDisposable
	{
		public StreamWriteSwitcher switcher;
		public MemoryStream stream;
		public StreamWriterEx writer;

		public MemoryWriter(StreamWriteSwitcher switcher)
		{
			this.switcher = switcher;
			stream = new MemoryStream();
			writer = new StreamWriterEx(stream);
			switcher.Switch(stream, writer);
		}

		public void Dispose()
		{
			switcher.RollBack();

			// copy streams to global
			writer.Flush();
			stream.Flush();
			stream.Position = 0;
			switcher.Flush();
			switcher.FlushPrev();
			stream.CopyTo(switcher.stream);

			// dispose streams
			Utils.DisposeInstance(ref writer);
			Utils.DisposeInstance(ref stream);
		}
	}
}
