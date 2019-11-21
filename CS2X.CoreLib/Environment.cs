using CS2X;
using System.Text;

namespace System
{
	public static class Environment
	{
		[NativeExtern(NativeTarget.C, "_putenv")]
		private static unsafe extern int putenv(byte* _EnvString);

		public static string NewLine => "\r\n";// TODO: POSIX version

		public unsafe static void SetEnvironmentVariable(string variable, string value)
		{
			string envVar = variable + '=' + value;
			int encodedCount = Encoding.Default.GetByteCount(envVar);
			byte* encoded = stackalloc byte[encodedCount];
			fixed (char* envVarPtr = envVar) Encoding.Default.GetBytes(envVarPtr, envVar.Length, encoded, encodedCount);
			encoded[encodedCount - 1] = 0;
			putenv(encoded);
		}
	}
}
