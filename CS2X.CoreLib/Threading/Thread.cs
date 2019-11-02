using CS2X;

namespace System.Threading
{
	public sealed class Thread
	{
		[NativeExtern(NativeTarget.C, "Sleep")]
		public static extern void Sleep(int millisecondsTimeout);
	}
}
