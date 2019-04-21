using System.Runtime.CompilerServices;

namespace System
{
	public readonly struct Single
	{
		public const float MinValue = (float)-3.40282346638528859e+38;
        public const float Epsilon = (float)1.4e-45;
        public const float MaxValue = (float)3.40282346638528859e+38;
        public const float PositiveInfinity = (float)1.0 / (float)0.0;
        public const float NegativeInfinity = (float)-1.0 / (float)0.0;
        public const float NaN = (float)0.0 / (float)0.0;

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
	}
}
