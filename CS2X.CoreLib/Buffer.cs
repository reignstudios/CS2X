using CS2X;

namespace System
{
	public static class Buffer
	{
		[NativeExtern(NativeTarget.C)]
		internal static unsafe extern void* memcpy(void* _Dst, void* _Src, void* _Size);

		[NativeExtern(NativeTarget.C)]
		internal static unsafe extern void* malloc(void* _Size);

		[NativeExtern(NativeTarget.C)]
		internal static unsafe extern void free(void* _Block);

		public static unsafe void MemoryCopy(void* source, void* destination, long destinationSizeInBytes, long sourceBytesToCopy)
		{
			MemoryCopy(source, destination, destinationSizeInBytes, sourceBytesToCopy);
		}

		public static unsafe void MemoryCopy(void* source, void* destination, ulong destinationSizeInBytes, ulong sourceBytesToCopy)
		{
			if (sourceBytesToCopy > destinationSizeInBytes)
			{
				//ThrowHelper.ThrowArgumentOutOfRangeException(ExceptionArgument.sourceBytesToCopy);// TODO
			}
			memcpy(destination, source, (void*)sourceBytesToCopy);
		}
	}
}
