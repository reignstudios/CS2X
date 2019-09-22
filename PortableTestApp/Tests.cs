/*using PortableTestApp.Tests;

class GlobalNamespaceClass
{
	public const int constInt = 55;
	public static GlobalNamespaceClass staticObj = new GlobalNamespaceClass();
	public GlobalNamespaceClass obj = new GlobalNamespaceClass();
	public int i;

	public GlobalNamespaceClass()
	{
		
	}

	public void SimpleMethod()
	{
		const int localConstInt = 66;
		int local = 55;
		i = local + localConstInt + Method(i, this) + i;
	}

	public int Method(int value, GlobalNamespaceClass obj)
	{
		if (obj == null) return 0;
		i -= value + staticObj.Method(obj.i, null);
		return i + value + i;
	}
}

namespace PortableTestApp.Tests
{
	// interface
	interface NormalInterface
	{
		int p { get; set; }
	}

	// class
	class NormalClass : NormalInterface
	{
		public int i;
		public int p { get; set; }
	}

	// struct
	struct NormalStruct : NormalInterface
	{
		public int i;
		public int p { get; set; }
	}

	// static class
	static class StaticClass
	{
		public static int i;
	
		// nested static class
		public static class SubStaticClass
		{
			public static int i;

			// nested nested static class
			public static class SubSubStaticClass
			{
				public static int i;
			}
		}
	}

	// generic interface
	interface GenericInterface<T>
	{
		T p { get; set; }
	}

	// generic class
	class GenericClass<T> : GenericInterface<T>
	{
		public T i;
		public T p { get; set; }
	}

	// generic struct
	struct GenericStruct<T> : GenericInterface<T>
	{
		public T i;
		public T p { get; set; }
	}
}
*/