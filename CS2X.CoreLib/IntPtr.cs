using System.Runtime.CompilerServices;

namespace System
{
	public struct IntPtr
	{
		#pragma warning disable CS0626
		public static extern bool operator==(IntPtr a, IntPtr b);
		public static extern bool operator!=(IntPtr a, IntPtr b);

		public unsafe static extern explicit operator void*(IntPtr value);
		#pragma warning restore CS0626

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern IntPtr(void* value);
	}
}
