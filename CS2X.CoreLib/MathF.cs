using CS2X;
using System.Runtime.CompilerServices;

namespace System
{
	public static class MathF
	{
		public const float E = 2.71828183f;
		public const float PI = 3.14159265f;

		[NativeExtern(NativeTarget.C, "sqrtf")]
		public static extern float Sqrt(float x);

		[NativeExtern(NativeTarget.C, "powf")]
		public static extern float Pow(float x, float y);

		[NativeExtern(NativeTarget.C, "tanf")]
		public static extern float Tan(float a);

		[NativeExtern(NativeTarget.C, "fmaxf")]
		public static extern float Max(float x, float y);

		[NativeExtern(NativeTarget.C, "fminf")]
		public static extern float Min(float x, float y);
	}
}
