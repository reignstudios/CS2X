using CS2X;

namespace System
{
    public static class Console
    {
		[NativeExtern(NativeExternTarget.C)]
		private static unsafe extern int wprintf(char* text);
		
        public static unsafe void Write(string s)
        {
			//fixed (char* ptr = &s._firstChar) wprintf(ptr); // TODO: use utf-16 to utf-32 conversion on posix systems

			// because some compilers wide chars are 32bit we buffer an extra escape character and write each char seperatly
			// This is a hack and later needs to use encoding
			char* printBuff = stackalloc char[2];
			printBuff[1] = '\0';
			fixed (char* ptr = &s._firstChar)
			{
				char* ptrOffset = ptr;
				while (*ptrOffset != '\0')
				{
					printBuff[0] = *ptrOffset;
					wprintf(printBuff);
					ptrOffset++;
				}
			}
		}

        public static void WriteLine(string s) => Write(s + Environment.NewLine);
        public static void WriteLine() => Write(Environment.NewLine);
    }
}
