using CS2X;

namespace System
{
	public struct DateTime
	{
		private IntPtr _internalDate;

		[NativeExtern(NativeTarget.C)]
		internal static extern IntPtr time(IntPtr _Time);
	}
}
