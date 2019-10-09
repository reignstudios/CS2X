using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	abstract class NewOverrides
	{
		public int i = 33;
		public int i2 => 88;

		public static bool RunTest()
		{
			var obj = new NewOverridesSuper();
			return obj.i == 44 && obj.i2 == 99 && obj.Foo() == 66 && obj.Foo2() == 2;
		}

		public int Foo()
		{
			return 55;
		}

		public virtual int Foo2()
		{
			return 1;
		}
	}

	class NewOverridesSuper : NewOverrides
	{
		public new int i = 44;
		public new int i2 => 99;

		public new int Foo()
		{
			return 66;
		}

		public new int Foo2()
		{
			return 2;
		}
	}
}
