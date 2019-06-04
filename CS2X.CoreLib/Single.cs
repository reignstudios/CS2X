using System.Runtime.CompilerServices;

namespace System
{
	public readonly struct Single
	{
		public const float MinValue = -3.40282346638528859e+38f;
        public const float Epsilon = 1.4e-45f;
        public const float MaxValue = 3.40282346638528859e+38f;
        public const float PositiveInfinity = 1.0f / 0.0f;
        public const float NegativeInfinity = -1.0f / 0.0f;
        public const float NaN = 0.0f / 0.0f;

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
