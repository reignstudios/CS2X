using CS2X;

namespace System
{
	internal static class Number
	{
		internal const int Int8NumberBufferLength = 3 + 1;     // 3 for the longest input: 127
		internal const int Int16NumberBufferLength = 5 + 1;     // 5 for the longest input: 32,767
		internal const int Int32NumberBufferLength = 10 + 1;    // 10 for the longest input: 2,147,483,647
		internal const int Int64NumberBufferLength = 19 + 1;    // 19 for the longest input: 9,223,372,036,854,775,807

		internal const int UInt8NumberBufferLength = 3;    // 3 for the longest input: 255
		internal const int UInt16NumberBufferLength = 5;    // 5 for the longest input: 65,535
		internal const int UInt32NumberBufferLength = 10;   // 10 for the longest input: 4,294,967,295
		internal const int UInt64NumberBufferLength = 20;   // 20 for the longest input: 18,446,744,073,709,551,615

		internal const int SingleNumberBufferLength = 112 + 1 + 1;  // 112 for the longest input + 1 for rounding: 1.40129846E-45
		internal const int DoubleNumberBufferLength = 767 + 1 + 1;  // 767 for the longest input + 1 for rounding: 4.9406564584124654E-324

		[NativeExtern(NativeTarget.C, "sprintf")]
		public static unsafe extern int sprintf(byte* str, [NativeStringParam(NativeStringType.Char)] string format, Int32 number);

		[NativeExtern(NativeTarget.C, "sprintf")]
		public static unsafe extern int sprintf(byte* str, [NativeStringParam(NativeStringType.Char)] string format, Int64 number);

		[NativeExtern(NativeTarget.C, "sprintf")]
		public static unsafe extern int sprintf(byte* str, [NativeStringParam(NativeStringType.Char)] string format, UInt32 number);

		[NativeExtern(NativeTarget.C, "sprintf")]
		public static unsafe extern int sprintf(byte* str, [NativeStringParam(NativeStringType.Char)] string format, UInt64 number);

		[NativeExtern(NativeTarget.C, "sprintf")]
		public static unsafe extern int sprintf(byte* str, [NativeStringParam(NativeStringType.Char)] string format, Single number);

		[NativeExtern(NativeTarget.C, "sprintf")]
		public static unsafe extern int sprintf(byte* str, [NativeStringParam(NativeStringType.Char)] string format, Double number);
	}
}
