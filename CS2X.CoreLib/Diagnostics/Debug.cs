using CS2X;

namespace System.Diagnostics
{
	public static class Debug
	{
		[NativeExtern(NativeTarget.C)]
		private static extern unsafe void OutputDebugStringW(char* lpOutputString);

		public unsafe static void WriteLine(string message)
		{
			fixed (char* messagePtr = message) OutputDebugStringW(messagePtr);
			fixed (char* newLinePtr = Environment.NewLine) OutputDebugStringW(newLinePtr);
		}
	}
}
