using System.Runtime.CompilerServices;

namespace System
{
	public static class BitConverter
	{
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static unsafe int SingleToInt32Bits(float value)
        {
            return *((int*)&value);
        }
	}
}
