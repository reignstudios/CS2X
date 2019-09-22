namespace PortableTestApp.Test
{
	static class ClassNesting
	{
		public static bool RunTest()
		{
			var subObj = new SubClass();
			var subSubObj = new SubClass.SubSubClass();
			return subObj.i != subSubObj.i && SubClass.i2 != SubClass.SubSubClass.i2 && subSubObj.Foo() && SubClass.SubSubClass.StaticFoo();
		}

		class SubClass
		{
			public int i = 100;
			public static int i2 = 101;

			public class SubSubClass
			{
				public int i = 200;
				public static int i2 = 201;

				public bool Foo()
				{
					return true;
				}

				public static bool StaticFoo()
				{
					return true;
				}
			}
		}
	}
}
