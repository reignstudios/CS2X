using System;
using System.Collections.Generic;
using System.Text;
using CS2X;

namespace System.IO
{
	public static class File
	{
		[NativeExtern(NativeTarget.C)]
		internal unsafe static extern int access(byte* path, int mode);

		public unsafe static bool Exists(string path)
		{
			byte[] pathData = Encoding.Default.GetBytes(path);
			fixed (byte* pathDataPtr = pathData) return ExistsInternal(pathDataPtr);
		}

		internal unsafe static bool ExistsInternal(byte* path)
		{
			return access(path, 0) == 0;
		}
	}
}
