using CS2X;

namespace System
{
	public static class Math
	{
		public const double E = 2.7182818284590452354;
        public const double PI = 3.14159265358979323846;

		[NativeExtern(NativeTarget.C, "fabs")]
		public static extern double Abs(double value);

		[NativeExtern(NativeTarget.C, "fabsf")]
		public static extern float Abs(float value);

		[NativeExtern(NativeTarget.C, "abs")]
		public static extern sbyte Abs(sbyte value);

		[NativeExtern(NativeTarget.C, "abs")]
		public static extern short Abs(short value);

		[NativeExtern(NativeTarget.C, "abs")]
		public static extern int Abs(int value);

		[NativeExtern(NativeTarget.C, "labs")]
		public static extern long Abs(long value);

		[NativeExtern(NativeTarget.C, "sqrt")]
        public static extern double Sqrt(double d);

		[NativeExtern(NativeTarget.C, "pow")]
        public static extern double Pow(double x, double y);

		[NativeExtern(NativeTarget.C, "tan")]
        public static extern double Tan(double a);

		[NativeExtern(NativeTarget.C, "atan")]
		public static extern double Atan(double a);

		[NativeExtern(NativeTarget.C, "atan2")]
		public static extern double Atan2(double y, double x);

		[NativeExtern(NativeTarget.C, "cos")]
		public static extern double Cos(double d);

		[NativeExtern(NativeTarget.C, "sin")]
		public static extern double Sin(double a);

		[NativeExtern(NativeTarget.C, "acos")]
		public static extern double Acos(double d);

		[NativeExtern(NativeTarget.C, "asin")]
		public static extern double Asin(double d);

		[NativeExtern(NativeTarget.C, "fmax")]
		public static extern float Max(float val1, float val2);

		[NativeExtern(NativeTarget.C, "fmin")]
		public static extern float Min(float val1, float val2);

		[NativeExtern(NativeTarget.C, "floor")]
		public static extern double Floor(double d);

		[NativeExtern(NativeTarget.C, "round")]
		public static extern double Round(double a);
	}
}
