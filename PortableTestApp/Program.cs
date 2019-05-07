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
		private static string value;

		static void Main(string[] args)
		{
			//MyPropStatic = 0;
			var v = "Hello World!";
			v = null;
			//Console.WriteLine("Hello World!" + value);
		}
	}
}
