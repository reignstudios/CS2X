using System;

namespace PortableTestApp
{
	namespace MyNamespace
	{
		enum MyEnum
		{
			A, B, C
		}
	}

	class Program
	{
		public static int abc;
		public int abcStatic;
		public int MyProp { get; private set; }
		public static int MyPropStatic { get; private set; }

		static void Main(string[] args)
		{
			Console.WriteLine("Hello World!");
		}
	}
}
