using System;
using System.Collections.Generic;
using System.Text;

namespace System.IO
{
	public class FileStream : Stream
	{
		public override long Length => throw new NotImplementedException();

		public override long Position { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

		public FileStream(string path, FileMode mode, FileAccess access, FileShare share)
		{
			
		}

		public override void Dispose()
		{
			throw new NotImplementedException();
		}

		public override int Read(byte[] buffer, int offset, int count)
		{
			throw new NotImplementedException();
		}

		public override void Write(byte[] buffer, int offset, int count)
		{
			throw new NotImplementedException();
		}
	}
}
