using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	static class Enums
	{
		enum MyEnum : byte
		{
			A = 6,
			B,
			C = 1
		}

		public static bool RunTest()
		{
			var e = MyEnum.B;
			return (int)e == 7 && sizeof(MyEnum) == sizeof(byte) && e.ToString() == "B";
		}
	}
}
