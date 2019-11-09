using System;
using System.Collections.Generic;
using System.Text;

namespace System.IO
{
	public static class Path
	{
		public const char DirectorySeparatorChar = '\\';

		public static string Combine(string path1, string path2)
		{
			string result = string.FastAllocateString(path1.Length + path2.Length + 1);
			int offset = 0;

			string.FillStringChecked(result, offset, path1);
			offset += path1.Length;

			string.FillStringChecked(result, offset, DirectorySeparatorChar);
			offset += 1;

			string.FillStringChecked(result, offset, path2);
			return result;
		}

		public static string Combine(string path1, string path2, string path3)
		{
			string result = string.FastAllocateString(path1.Length + path2.Length + path3.Length + 2);
			int offset = 0;

			string.FillStringChecked(result, offset, path1);
			offset += path1.Length;

			string.FillStringChecked(result, offset, DirectorySeparatorChar);
			offset += 1;

			string.FillStringChecked(result, offset, path2);
			offset += path2.Length;

			string.FillStringChecked(result, offset, DirectorySeparatorChar);
			offset += 1;

			string.FillStringChecked(result, offset, path3);
			return result;
		}

		public static string Combine(string path1, string path2, string path3, string path4)
		{
			string result = string.FastAllocateString(path1.Length + path2.Length + path3.Length + path4.Length + 3);
			int offset = 0;

			string.FillStringChecked(result, offset, path1);
			offset += path1.Length;

			string.FillStringChecked(result, offset, DirectorySeparatorChar);
			offset += 1;

			string.FillStringChecked(result, offset, path2);
			offset += path2.Length;

			string.FillStringChecked(result, offset, DirectorySeparatorChar);
			offset += 1;

			string.FillStringChecked(result, offset, path3);
			offset += path3.Length;

			string.FillStringChecked(result, offset, DirectorySeparatorChar);
			offset += 1;

			string.FillStringChecked(result, offset, path4);
			return result;
		}
	}
}
