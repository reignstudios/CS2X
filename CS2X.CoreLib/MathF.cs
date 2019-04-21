using CS2X;
using System.Runtime.CompilerServices;

namespace System
{
	public static class MathF
	{
		public const float E = 2.71828183f;
		public const float PI = 3.14159265f;

		[NativeExternC("sqrtf")]
		public static extern float Sqrt(float x);

		[NativeExternC("powf")]
		public static extern float Pow(float x, float y);

		[NativeExternC("tanf")]
		public static extern float Tan(float a);

		// TODO: use [NativeExternC("maxf")]
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static float Max(float x, float y)
		{
			return Math.Max(x, y);
		}

		// TODO: use [NativeExternC("minf")]
		[MethodImpl(MethodImplOptions.AggressiveInlining)]
		public static float Min(float x, float y)
		{
			return Math.Min(x, y);
		}
	}
}
