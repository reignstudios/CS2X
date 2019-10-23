using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	static class NumbersToStrings
	{
		public static bool RunTest()
		{
			string i8_Max = SByte.MaxValue.ToString();
			string i8_Min = SByte.MinValue.ToString();
			string i16_Max = Int16.MaxValue.ToString();
			string i16_Min = Int16.MinValue.ToString();
			string i32_Max = Int32.MaxValue.ToString();
			string i32_Min = Int32.MinValue.ToString();
			string i64_Max = Int64.MaxValue.ToString();
			string i64_Min = Int64.MinValue.ToString();

			string ui8_Max = Byte.MaxValue.ToString();
			string ui8_Min = Byte.MinValue.ToString();
			string ui16_Max = UInt16.MaxValue.ToString();
			string ui16_Min = UInt16.MinValue.ToString();
			string ui32_Max = UInt32.MaxValue.ToString();
			string ui32_Min = UInt32.MinValue.ToString();
			string ui64_Max = UInt64.MaxValue.ToString();
			string ui64_Min = UInt64.MinValue.ToString();

			string float32_Max = Single.MaxValue.ToString();
			string float32_Min = Single.MinValue.ToString();
			string float32 = 1234.4321f.ToString();

			string float64_Max = Double.MaxValue.ToString();
			string float64_Min = Double.MinValue.ToString();
			string float64 = 1234.4321.ToString();

			string c_Max = Char.MaxValue.ToString();
			string c_Min = Char.MinValue.ToString();

			return
				i8_Max == "127" && i8_Min == "-128" && ui8_Max == "255" && ui8_Min == "0" &&
				i16_Max == "32767" && i16_Min == "-32768" && ui16_Max == "65535" && ui16_Min == "0" &&
				i32_Max == "2147483647" && i32_Min == "-2147483648" && ui32_Max == "4294967295" && ui32_Min == "0" &&
				i64_Max == "9223372036854775807" && i64_Min == "-9223372036854775808" && ui64_Max == "18446744073709551615" && ui64_Min == "0" &&
				float32_Max == "3.40282E+38" && float32_Min == "1.17549E-38" && float32 == "1234.43" &&
				float64_Max == "1.79769E+308" && float64_Min == "2.22507E-308" && float64 == "1234.43" &&
				c_Max == "\uffff" && c_Min == "\0";
		}
	}
}
