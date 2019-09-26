using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	class FieldsAndProperties
	{
		struct MyStruct
		{
			public int i;

			public bool Foo()
			{
				return i == 0;
			}
		}

		static int myStaticProperty => 33;
		static int myStaticProperty2 {get; set;}
		static int myStaticField = 44;

		int myProperty => 33;
		int myProperty2 { get; set; }
		int myField = 44;

		public static bool RunTest()
		{
			var obj = new FieldsAndProperties();
			myStaticProperty2 = 34;
			obj.myProperty2 = 34;
			if (obj.Foo().Foo().myField == 0) return false;
			if (!obj.Foo2().Foo()) return false;
			return myStaticProperty == obj.myProperty && myStaticField == obj.myField && myStaticProperty2 == obj.myProperty2;
		}

		FieldsAndProperties Foo()
		{
			return this;
		}

		MyStruct Foo2()
		{
			return new MyStruct();
		}
	}
}
