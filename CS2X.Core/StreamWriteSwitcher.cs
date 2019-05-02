using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace CS2X.Core
{
	class StreamWriteSwitcher : IDisposable
	{
		public Stream stream { get; private set; }
		public StreamWriterEx writer { get; private set; }

		public Stream activeStream { get; private set; }
		public StreamWriterEx activeWriter { get; private set; }

		public StreamWriteSwitcher(Stream stream)
		{
			this.stream = stream;
			writer = new StreamWriterEx(stream);
			activeStream = stream;
			activeWriter = writer;
		}

		public void Dispose()
		{
			if (writer != null)
			{
				writer.Dispose();
				writer = null;
			}

			if (stream != null)
			{
				stream.Dispose();
				stream = null;
			}
		}

		public void Switch(Stream stream, StreamWriterEx writer)
		{
			activeStream = stream;
			activeWriter = writer;
		}

		public void Revert()
		{
			activeStream = stream;
			activeWriter = writer;
		}

		public void Flush()
		{
			writer.Flush();
			stream.Flush();
			if (activeWriter != writer) activeWriter.Flush();
			if (activeStream != stream) activeStream.Flush();
		}

		#region Writer
		public void AddTab()
		{
			activeWriter.AddTab();
		}

		public void RemoveTab()
		{
			activeWriter.RemoveTab();
		}

		public void Write(string value)
		{
			activeWriter.Write(value);
		}

		public void WriteLine(string value)
		{
			activeWriter.WriteLine(value);
		}

		public void WriteLine()
		{
			activeWriter.WriteLine();
		}

		public void WriteLine(char value)
		{
			activeWriter.WriteLine(value);
		}

		public void WritePrefix()
		{
			activeWriter.WritePrefix();
		}

		public void WritePrefix(string value)
		{
			activeWriter.WritePrefix(value);
		}

		public void WritePrefix(char value)
		{
			activeWriter.WritePrefix(value);
		}

		public void WriteLinePrefix()
		{
			activeWriter.WriteLinePrefix();
		}

		public void WriteLinePrefix(string value)
		{
			activeWriter.WriteLinePrefix(value);
		}

		public void WriteLinePrefix(char value)
		{
			activeWriter.WriteLinePrefix(value);
		}
		#endregion
	}
}
