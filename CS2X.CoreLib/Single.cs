using System.Runtime.CompilerServices;

namespace System
{
	public readonly struct Single
	{
		public const Single MaxValue = (float)3.40282346638528859e+38;
		public const Single MinValue = (float)-3.40282346638528859e+38;
		public const Single Epsilon = (float)1.4e-45;
		public const Single PositiveInfinity = (float)1.0 / (float)0.0;
		public const Single NegativeInfinity = (float)-1.0 / (float)0.0;
		public const Single NaN = (float)0.0 / (float)0.0;

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static unsafe bool IsNaN(float f)
        {
            var bits = BitConverter.SingleToInt32Bits(f);
            return (bits & 0x7FFFFFFF) > 0x7F800000;
        }

		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static unsafe bool IsNegative(float f)
        {
            return BitConverter.SingleToInt32Bits(f) < 0;
        }

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.SingleNumberBufferLength + 1];
			int length = Number.sprintf(str, "%G", this);
			str[Number.SingleNumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
