using CS2X;

namespace System
{
	public static class MathF
	{
		public const float E = 2.71828183f;
		public const float PI = 3.14159265f;

		[NativeExtern(NativeTarget.C, "fabsf")]
		public static extern float Abs(float value);

		[NativeExtern(NativeTarget.C, "sqrtf")]
		public static extern float Sqrt(float x);

		[NativeExtern(NativeTarget.C, "powf")]
		public static extern float Pow(float x, float y);

		[NativeExtern(NativeTarget.C, "tanf")]
		public static extern float Tan(float x);

		[NativeExtern(NativeTarget.C, "atanf")]
		public static extern float Atan(float x);

		[NativeExtern(NativeTarget.C, "atan2f")]
		public static extern float Atan2(float y, float x);

		[NativeExtern(NativeTarget.C, "cosf")]
		public static extern float Cos(float x);

		[NativeExtern(NativeTarget.C, "sinf")]
		public static extern float Sin(float x);

		[NativeExtern(NativeTarget.C, "acosf")]
		public static extern float Acos(float x);

		[NativeExtern(NativeTarget.C, "asinf")]
		public static extern float Asin(float x);

		[NativeExtern(NativeTarget.C, "fmaxf")]
		public static extern float Max(float x, float y);

		[NativeExtern(NativeTarget.C, "fminf")]
		public static extern float Min(float x, float y);

		[NativeExtern(NativeTarget.C, "floorf")]
		public static extern float Floor(float x);

		[NativeExtern(NativeTarget.C, "roundf")]
		public static extern float Round(float x);
	}
}
