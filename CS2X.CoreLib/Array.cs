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

		[MethodImpl(MethodImplOptions.InternalCall)]
		internal static extern int GetElementSize(Array array);

		public unsafe static void Copy(Array sourceArray, int sourceIndex, Array destinationArray, int destinationIndex, int length)
		{
			if (sourceArray.GetType() != destinationArray.GetType()) throw new Exception("Array types don't match");
			if (sourceIndex < 0 || (sourceIndex + length) > sourceArray.Length) throw new ArgumentOutOfRangeException("sourceIndex out of range");
			if (destinationIndex < 0 || (destinationIndex + length) > destinationArray.Length) throw new ArgumentOutOfRangeException("destinationIndex out of range");
			int elementSize = GetElementSize(sourceArray);
			byte* sourcePtr = (byte*)Marshal.GetNativePointerForArray(sourceArray) + (sourceIndex * elementSize);
			byte* destinationPtr = (byte*)Marshal.GetNativePointerForArray(destinationArray) + (destinationIndex * elementSize);
			Buffer.MemoryCopy((void*)sourcePtr, (void*)destinationPtr, length * elementSize, length * elementSize);
		}

		public unsafe static void Copy(Array sourceArray, long sourceIndex, Array destinationArray, long destinationIndex, long length)
		{
			if (sourceArray.GetType() != destinationArray.GetType()) throw new Exception("Array types don't match");
			if (sourceIndex < 0 || (sourceIndex + length) > sourceArray.Length) throw new ArgumentOutOfRangeException("sourceIndex out of range");
			if (destinationIndex < 0 || (destinationIndex + length) > destinationArray.Length) throw new ArgumentOutOfRangeException("destinationIndex out of range");
			int elementSize = GetElementSize(sourceArray);
			byte* sourcePtr = (byte*)Marshal.GetNativePointerForArray(sourceArray) + (sourceIndex * elementSize);
			byte* destinationPtr = (byte*)Marshal.GetNativePointerForArray(destinationArray) + (destinationIndex * elementSize);
			Buffer.MemoryCopy(sourcePtr, destinationPtr, length, length);
		}

		public static void Copy(Array sourceArray, Array destinationArray, int length)
		{
			Copy(sourceArray, 0, destinationArray, 0, length);
		}

		public static void Copy(Array sourceArray, Array destinationArray, long length)
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
