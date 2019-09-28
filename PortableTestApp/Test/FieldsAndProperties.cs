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
		static int _myStaticProperty3;
		static int myStaticProperty3
		{
			get
			{
				return _myStaticProperty3;
			}
			set
			{
				_myStaticProperty3 = value;
			}
		}
		static int myStaticField = 44;

		int myProperty => 33;
		int myProperty2 { get; set; }
		int _myProperty3;
		int myProperty3
		{
			get
			{
				return _myProperty3;
			}
			set
			{
				_myProperty3 = value;
			}
		}
		int myField = 44;

		public static bool RunTest()
		{
			var obj = new FieldsAndProperties();
			myStaticProperty2 = 34;
			obj.myProperty2 = 34;
			myStaticProperty3 = 5;
			obj.myProperty3 = 5;
			if (obj.Foo().Foo().myField == 0) return false;
			if (!obj.Foo2().Foo()) return false;
			return myStaticProperty == obj.myProperty && myStaticField == obj.myField && myStaticProperty2 == obj.myProperty2 && myStaticProperty3 == obj.myProperty3;
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
