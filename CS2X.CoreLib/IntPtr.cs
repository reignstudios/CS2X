using System.Runtime.CompilerServices;

namespace System
{
	public struct IntPtr
	{
		public static IntPtr Zero => new IntPtr();
		public static unsafe int Size => sizeof(void*);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern IntPtr(int value);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern IntPtr(long value);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern IntPtr(void* value);

		#pragma warning disable CS0626
		public static extern bool operator==(IntPtr a, IntPtr b);
		public static extern bool operator!=(IntPtr a, IntPtr b);

		public static extern IntPtr operator +(IntPtr a, int b);
		public static extern IntPtr operator -(IntPtr a, int b);

		public unsafe static extern explicit operator IntPtr(void* value);
		public unsafe static extern explicit operator void*(IntPtr value);

		public static extern explicit operator long(IntPtr value);
		public static extern explicit operator IntPtr(long value);

		public static extern explicit operator int(IntPtr value);
		public static extern explicit operator IntPtr(int value);
		#pragma warning restore CS0626

		public int ToInt32()
		{
			return (int)this;
		}

		public long ToInt64()
		{
			return (long)this;
		}

		public unsafe void* ToPointer()
		{
			return (void*)this;
		}
	}
}
