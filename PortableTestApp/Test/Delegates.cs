using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	class Delegates
	{
		private delegate bool FooCallback(bool value);
		private bool someField = true;
		private Delegates self;

		public static bool RunTest()
		{
			FooCallback callback = FooStatic;

			var obj = (Delegates)new SuperDelegates();
			obj.self = obj;
			callback += obj.Foo;

			callback = (FooCallback)Delegate.Remove(callback, new FooCallback(FooStatic));
			callback = callback + FooStatic;
			callback = (FooCallback)Delegate.Combine(callback, new FooCallback(FooStatic));

			callback += obj.ReturnSelf().self.FooVirtual;
			bool result = callback(true) && !callback.Invoke(false);
			callback = (FooCallback)Delegate.RemoveAll(callback, new FooCallback(FooStatic));
			return result;
		}

		private Delegates ReturnSelf()
		{
			return this;
		}

		private bool Foo(bool value)
		{
			return value && someField;
		}

		private static bool FooStatic(bool value)
		{
			return value;
		}

		protected virtual bool FooVirtual(bool value)
		{
			return false;
		}
	}

	class SuperDelegates : Delegates
	{
		protected override bool FooVirtual(bool value)
		{
			return value;
		}
	}
}
