using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace System.IO
{
	public class StreamWriterEx : StreamWriter
	{
		public string prefix = string.Empty;
		public bool disableWrite;

		public StreamWriterEx(Stream stream)
		: base(stream)
		{
			
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
			Write(prefix + value);
		}

		public void WritePrefix(char value)
		{
			Write(prefix + value);
		}

		public void WriteLinePrefix()
		{
			WriteLinePrefix(string.Empty);
		}

		public void WriteLinePrefix(string value)
		{
			WriteLine(prefix + value);
		}

		public void WriteLinePrefix(char value)
		{
			WriteLine(prefix + value);
		}
	}
}
