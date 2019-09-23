namespace PortableTestApp.Test
{
	static class Generics
	{
		public static bool RunTest()
		{
			var obj = new GenericClass<int>();
			var obj2 = new GenericClass<object>();
			var obj3 = new GenericClass2<double>();
			var obj4 = (GenericClass<double>)obj3;
			var obj5 = new GenericClass<long>.B<object>();
			obj.i = 1;
			obj.p = 2;
			obj2.i = obj;
			obj2.p = obj;
			obj5.i = 77;
			obj5.i2 = null;
			return Foo<int>(true) == 0 && Foo<object>(true) == null &&
				obj.Foo(1) == 1 && obj2.Foo(obj) == obj &&
				obj.Foo2<object>(obj, new GenericClass<object>()) == 2 && obj2.Foo2(obj2, new GenericClass<object>()) == obj &&
				obj.Boo<object>(5, obj2) == obj2 &&
				obj4.MyVirt<object>(obj3) && obj4.MyVirt(string.Empty) &&
				obj3.MyVirt2<object>(obj3) &&
				obj5.Aaa<object>(null);
		}

		private static T Foo<T>(bool value)
		{
			if (value) return default(T);
			else return default;
		}
	}

	interface GenericInterface<T>
	{
		T p { get; set; }
		E Boo<E>(T value1, E value2) where E : class;
	}

	class GenericClass<T> : GenericInterface<T>
	{
		public T i;
		public T p { get; set; }

		public T Foo(T value)
		{
			return value;
		}

		public T Foo2<E>(GenericClass<T> value1, GenericClass<E> value2) where E : class
		{
			if (value1 == null) return i;
			if (value2 == null) return value1.i;
			return value1.p;
		}

		public E Boo<E>(T value1, E value2) where E : class
		{
			if (value2 == null) return null;
			return value2;
		}

		public class B<E>
		{
			public T i;
			public E i2;

			public bool Aaa<T>(T t)
			{
				return t == null;
			}
		}

		public virtual bool MyVirt<E>(E value) where E : class
		{
			return false;
		}

		public virtual bool MyVirt2<E>(E value) where E : class
		{
			return false;
		}
	}

	class GenericClass2<T> : GenericClass<T>
	{
		public override bool MyVirt<E>(E value)
		{
			return value != null;
		}

		public override bool MyVirt2<E>(E value)
		{
			//if (base.MyVirt2<E>(value)) return false;
			return value != null;
		}
	}
}
