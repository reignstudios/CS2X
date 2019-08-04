using System.Runtime.CompilerServices;

namespace System
{
	public struct UIntPtr
	{
		#pragma warning disable CS0626
		public static extern bool operator==(UIntPtr a, UIntPtr b);
		public static extern bool operator!=(UIntPtr a, UIntPtr b);

		public unsafe static extern explicit operator void*(UIntPtr value);
		#pragma warning restore CS0626

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern UIntPtr(void* value);
	}
}
