using CS2X;

namespace System
{
	public static class Math
	{
		public const double E = 2.7182818284590452354;
        public const double PI = 3.14159265358979323846;

		[NativeExternC("sqrt")]
        public static extern double Sqrt(double d);

		[NativeExternC("pow")]
        public static extern double Pow(double x, double y);

		[NativeExternC("tan")]
        public static extern double Tan(double a);

		// TODO: use [NativeExternC("max")]
		public static float Max(float val1, float val2)
        {
            // When val1 and val2 are both finite or infinite, return the larger
            //  * We count +0.0 as larger than -0.0 to match MSVC
            // When val1 or val2, but not both, are NaN return the opposite
            //  * We return the opposite if either is NaN to match MSVC

            if (float.IsNaN(val1))
            {
                return val2;
            }

            if (float.IsNaN(val2))
            {
                return val1;
            }

            // We do this comparison first and separately to handle the -0.0 to +0.0 comparision
            // * Doing (val1 < val2) first could get transformed into (val2 >= val1) by the JIT
            //   which would then return an incorrect value

            if (val1 == val2)
            {
                return float.IsNegative(val1) ? val2 : val1;
            }

            return (val1 < val2) ? val2 : val1;
        }

		// TODO: use [NativeExternC("min")]
		public static float Min(float val1, float val2)
        {
            // When val1 and val2 are both finite or infinite, return the smaller
            //  * We count -0.0 as smaller than -0.0 to match MSVC
            // When val1 or val2, but not both, are NaN return the opposite
            //  * We return the opposite if either is NaN to match MSVC

            if (float.IsNaN(val1))
            {
                return val2;
            }

            if (float.IsNaN(val2))
            {
                return val1;
            }

            // We do this comparison first and separately to handle the -0.0 to +0.0 comparision
            // * Doing (val1 < val2) first could get transformed into (val2 >= val1) by the JIT
            //   which would then return an incorrect value

            if (val1 == val2)
            {
                return float.IsNegative(val1) ? val1 : val2;
            }

            return (val1 < val2) ? val1 : val2;
        }
	}
}
