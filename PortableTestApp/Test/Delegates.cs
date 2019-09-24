using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	class Delegates
	{
		private delegate bool FooCallback(bool value);
		private bool someField = true;

		public static bool RunTest()
		{
			FooCallback callback = FooStatic;

			var obj = new Delegates();
			callback += obj.Foo;

			callback = (FooCallback)Delegate.Remove(callback, new FooCallback(FooStatic));
			callback = callback + FooStatic;
			callback = (FooCallback)Delegate.Combine(callback, new FooCallback(FooStatic));

			bool result = callback(true) && !callback.Invoke(false);
			callback = (FooCallback)Delegate.RemoveAll(callback, new FooCallback(FooStatic));
			return result;
		}

		private bool Foo(bool value)
		{
			return value && someField;
		}

		private static bool FooStatic(bool value)
		{
			return value;
		}
	}
}
