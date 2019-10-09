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

		public unsafe static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length)
		{
			IntPtr sourcePtr = Marshal.GetNativePointerForObject(sourceArray) + (sourceIndex * Marshal.SizeOf<T>());
			IntPtr destinationPtr = Marshal.GetNativePointerForObject(destinationArray) + (destinationIndex * Marshal.SizeOf<T>());
			Buffer.MemoryCopy((void*)sourcePtr, (void*)destinationPtr, length, length);
		}

		public unsafe static void Copy<T>(T[] sourceArray, long sourceIndex, T[] destinationArray, long destinationIndex, long length)
		{
			IntPtr sourcePtr = Marshal.GetNativePointerForObject(sourceArray) + (int)(sourceIndex * Marshal.SizeOf<T>());
			IntPtr destinationPtr = Marshal.GetNativePointerForObject(destinationArray) + (int)(destinationIndex * Marshal.SizeOf<T>());
			Buffer.MemoryCopy((void*)sourcePtr, (void*)destinationPtr, length, length);
		}

		public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length)
		{
			Copy(sourceArray, 0, destinationArray, 0, length);
		}

		public static void Copy<T>(T[] sourceArray, T[] destinationArray, long length)
		{
			Copy(sourceArray, 0, destinationArray, 0, length);
		}

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
