using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	class RefOutParameters
	{
		public static bool RunTest()
		{
			int value = 0;
			Foo(ref value, out int value2);

			RefOutParameters obj = null;
			Foo2(ref obj, out var obj2);

			return value == 1 && value2 == 2 && obj != null && obj2 != null;
		}

		private static void Foo(ref int value, out int value2)
		{
			value = 1;
			value2 = 2;
		}

		private static void Foo2(ref RefOutParameters obj, out RefOutParameters obj2)
		{
			obj = new RefOutParameters();
			obj2 = new RefOutParameters();
		}
	}
}
