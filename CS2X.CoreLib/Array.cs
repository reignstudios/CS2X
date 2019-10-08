using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

namespace System
{
	public abstract class Array
	{
		public extern int Length
        {
            [MethodImpl(MethodImplOptions.InternalCall)]
            get;
        }

        public extern long LongLength
        {
            [MethodImpl(MethodImplOptions.InternalCall)]
            get;
        }

		internal int Count => Length;

		public static void Resize<T>(ref T[] array, int newSize)
		{
			if (newSize < 0) throw new ArgumentOutOfRangeException("'newSize' must be 0 or greater");

			if (array == null)
			{
				array = new T[newSize];
				return;
			}

			if (array.Length != newSize)
			{
				Array arrayRef = array;
				FastResize(ref arrayRef, newSize, Marshal.SizeOf<T>());// optimized GC resize method
				array = (T[])arrayRef;
			}
		}

		[MethodImpl(MethodImplOptions.InternalCall)]
		private static extern void FastResize(ref Array array, int newSize, int elementSize);
	}
}
