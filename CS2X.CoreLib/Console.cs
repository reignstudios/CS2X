using CS2X;
using System.Text;

namespace System
{
    public static class Console
    {
		[NativeExtern(NativeTarget.C)]
		private static unsafe extern int printf(byte* text);

		[NativeExtern(NativeTarget.C)]
		private static unsafe extern byte* gets(byte* text);

		[NativeExtern(NativeTarget.C)]
		private static unsafe extern IntPtr strlen(byte* str);

		public static unsafe void Write(string s)
        {
			byte* printBuff = stackalloc byte[s.Length + 1];
			printBuff[s.Length] = 0;
			fixed (char* ptr = &s._firstChar)
			{
				// just copy chars as ascii
				char* ptrOffset = ptr;
				for (int i = 0; i != s.Length; ++i) printBuff[i] = (byte)ptrOffset[i];

				// print ascii
				printf(printBuff);
			}
		}

        public static void WriteLine(string s) => Write(s + Environment.NewLine);
        public static void WriteLine() => Write(Environment.NewLine);

		public static unsafe string ReadLine()
		{
			byte* str = stackalloc byte[1024];
			if (gets(str) == null) return string.Empty;
			return Encoding.ASCII.GetString(str, (int)strlen(str));
		}
    }
}
