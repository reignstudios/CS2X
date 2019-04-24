using CS2X;

namespace System
{
	public static class Math
	{
		public const double E = 2.7182818284590452354;
        public const double PI = 3.14159265358979323846;

		[NativeExtern(NativeExternTarget.C, "sqrt")]
        public static extern double Sqrt(double d);

		[NativeExtern(NativeExternTarget.C, "pow")]
        public static extern double Pow(double x, double y);

		[NativeExtern(NativeExternTarget.C, "tan")]
        public static extern double Tan(double a);

		[NativeExtern(NativeExternTarget.C, "max")]
		public static extern float Max(float val1, float val2);

		[NativeExtern(NativeExternTarget.C, "min")]
		public static extern float Min(float val1, float val2);
	}
}
