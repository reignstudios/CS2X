using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace System.IO
{
	public class StreamWriterEx : StreamWriter, IDisposable
	{
		public static Encoding defaultEncoding = Encoding.Default;

		public StreamWriterEx next, prev;
		public string prefix = string.Empty;
		public bool disableWrite, disablePrefix;

		public StreamWriterEx(Stream stream)
		: base(stream, defaultEncoding)
		{
			
		}

		public StreamWriterEx(Stream stream, StreamWriterEx prev)
		: base(stream)
		{
			prev.next = this;
			this.prev = prev;
		}

		public new void Dispose()
		{
			if (prev != null)
			{
				Flush();
				BaseStream.Flush();
				BaseStream.Position = 0;
				prev.Flush();
				prev.BaseStream.Flush();
				BaseStream.CopyTo(prev.BaseStream);
				prev.next = null;
				prev = null;
			}
			if (next != null)
			{
				next.prev = null;
				next = null;
			}
			base.Dispose();
		}

		public void AddTab()
		{
			prefix += '\t';
		}

		public void RemoveTab()
		{
			if (!prefix.EndsWith("\t")) return;
			prefix = prefix.Substring(0, prefix.Length - 1);
		}

		public override void WriteLine()
		{
			if (!disableWrite) base.WriteLine();
		}

		public override void Write(char value)
		{
			if (!disableWrite) base.Write(value);
		}

		public override void WriteLine(char value)
		{
			if (!disableWrite) base.WriteLine(value);
		}

		public override void Write(string value)
		{
			if (!disableWrite) base.Write(value);
		}

		public override void WriteLine(string value)
		{
			if (!disableWrite) base.WriteLine(value);
		}

		public void WritePrefix()
		{
			WritePrefix(string.Empty);
		}

		public void WritePrefix(string value)
		{
			if (!disablePrefix) Write(prefix + value);
			else Write(value);
		}

		public void WritePrefix(char value)
		{
			if (!disablePrefix) Write(prefix + value);
			else Write(value);
		}

		public void WriteLinePrefix()
		{
			WriteLinePrefix(string.Empty);
		}

		public void WriteLinePrefix(string value)
		{
			if (!disablePrefix) WriteLine(prefix + value);
			else WriteLine(value);
		}

		public void WriteLinePrefix(char value)
		{
			if (!disablePrefix) WriteLine(prefix + value);
			else WriteLine(value);
		}
	}
}
