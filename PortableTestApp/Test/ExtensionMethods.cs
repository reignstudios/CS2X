using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	static class ExtensionMethods
	{
		class MyClass
		{
			public int i;
		}

		struct MyStruct
		{
			public int i;
		}

		public static bool RunTest()
		{
			var myClass = new MyClass();
			var myStruct = new MyStruct();
			myClass.FooClass();
			myStruct.FooStruct();
			return myClass.i == 123 && myStruct.i == 0;
		}

		private static void FooClass(this MyClass self)
		{
			self.i = 123;
		}

		private static void FooStruct(this MyStruct self)
		{
			self.i = 123;
		}
	}
}
