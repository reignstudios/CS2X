using System;
using System.Collections.Generic;
using System.Text;
using CS2X;

namespace System.IO
{
	public class FileStream : Stream
	{
		[NativeExtern(NativeTarget.C)]
		internal unsafe static extern IntPtr fopen(byte* filename, [NativeStringParam(NativeStringType.Char)] string mode);

		[NativeExtern(NativeTarget.C)]
		internal static extern int fclose(IntPtr stream);

		[NativeExtern(NativeTarget.C)]
		internal unsafe static extern UIntPtr fread(void* ptr, UIntPtr size, UIntPtr count, IntPtr stream);

		[NativeExtern(NativeTarget.C)]
		internal unsafe static extern UIntPtr fwrite(void* ptr, UIntPtr size, UIntPtr count, IntPtr stream);

		public override long Length => throw new NotImplementedException();

		public override long Position { get => throw new NotImplementedException(); set => throw new NotImplementedException(); }

		private IntPtr stream;

		public unsafe FileStream(string path, FileMode mode, FileAccess access, FileShare share)
		{
			byte[] pathData = Encoding.Default.GetBytes(path);
			fixed (byte* pathDataPtr = pathData)
			{
				// validate mode
				switch (mode)
				{
					case FileMode.CreateNew:
						if (File.ExistsInternal(pathDataPtr)) throw new IOException("File already exists");
						break;

					case FileMode.OpenOrCreate:
						if (access == FileAccess.Read && !File.ExistsInternal(pathDataPtr))// if we're trying to read file, make sure it exists
						{
							stream = fopen(pathDataPtr, "w");
							if (stream == IntPtr.Zero) throw new IOException("Failed to create file");
							fclose(stream);
							stream = IntPtr.Zero;
						}
						break;

					case FileMode.Open:
						if (!File.ExistsInternal(pathDataPtr)) throw new IOException("File doesn't exists");
						break;
				}

				// open file with requested access in byte mode
				switch (access)
				{
					case FileAccess.Read:
						switch (mode)
						{
							case FileMode.OpenOrCreate:
							case FileMode.Open:
								stream = fopen(pathDataPtr, "rb");
								break;
							default: throw new ArgumentException();
						}
						break;

					case FileAccess.Write:
						switch (mode)
						{
							case FileMode.OpenOrCreate:
							case FileMode.Create:
								stream = fopen(pathDataPtr, "wb");
								break;
							case FileMode.Append: stream = fopen(pathDataPtr, "ab"); break;
							default: throw new ArgumentException();
						}
						break;

					case FileAccess.ReadWrite:
						switch (mode)
						{
							case FileMode.OpenOrCreate:
							case FileMode.Create:
							case FileMode.Open:
								stream = fopen(pathDataPtr, "rbwb");
								break;
							default: throw new ArgumentException();
						}
						break;

					default: throw new NotImplementedException();
				}
			}

			// check stream for errors
			if (stream == IntPtr.Zero) throw new IOException("Access error");
		}

		public override void Dispose()
		{
			if (stream != IntPtr.Zero)
			{
				fclose(stream);
				stream = IntPtr.Zero;
			}
		}

		public unsafe override int Read(byte[] buffer, int offset, int count)
		{
			fixed (byte* butterPtr = buffer) return (int)fread(butterPtr + offset, (UIntPtr)sizeof(byte), (UIntPtr)count, stream);
		}

		public unsafe override void Write(byte[] buffer, int offset, int count)
		{
			fixed (byte* butterPtr = buffer) fwrite(butterPtr + offset, (UIntPtr)sizeof(byte), (UIntPtr)count, stream);
		}
	}
}
