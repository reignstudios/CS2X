using CS2X;

namespace System
{
	public static class GC
	{
		[NativeExtern(NativeTarget.C, "CS2X_GC_Collect")]
		public static extern void Collect();
	}
}
