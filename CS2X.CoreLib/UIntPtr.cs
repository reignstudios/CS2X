using System.Runtime.CompilerServices;

namespace System
{
	public struct UIntPtr
	{
		public static readonly UIntPtr Zero = new UIntPtr();
		public static unsafe int Size => sizeof(void*);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern UIntPtr(uint value);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern UIntPtr(ulong value);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern UIntPtr(void* value);

		#pragma warning disable CS0626
		public static extern bool operator==(UIntPtr a, UIntPtr b);
		public static extern bool operator!=(UIntPtr a, UIntPtr b);

		public static extern UIntPtr operator +(UIntPtr a, uint b);
		public static extern UIntPtr operator -(UIntPtr a, uint b);

		public unsafe static extern explicit operator UIntPtr(void* value);
		public unsafe static extern explicit operator void*(UIntPtr value);

		public static extern explicit operator ulong(UIntPtr value);
		public static extern explicit operator UIntPtr(ulong value);

		public static extern explicit operator uint(UIntPtr value);
		public static extern explicit operator UIntPtr(uint value);
		#pragma warning restore CS0626

		public uint ToUInt32()
		{
			return (uint)this;
		}

		public ulong ToUInt64()
		{
			return (ulong)this;
		}

		public unsafe void* ToPointer()
		{
			return (void*)this;
		}
	}
}
