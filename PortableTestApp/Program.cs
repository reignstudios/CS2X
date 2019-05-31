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

	/*interface MyInterface
	{
		void MyVirtMethod();
	}

	abstract class MyAbstractClass : MyInterface
	{
		public abstract void MyVirtMethod();
	}

	class MyBaseClass : MyAbstractClass
	{
		public override void MyVirtMethod()
		{
			Console.WriteLine("MyBaseClass");
		}
	}*/

	enum MyEnum
	{
		A, B, C
	}

	class Program// : MyBaseClass
	{
		public int abc;
		public static int abcStatic;

		public int MyAutoProp { get; private set; }
		public static int MyAutoPropStatic { get; private set; }

		private int _MyProp;
		public int MyProp
		{
			get { return _MyProp; }
			set { _MyProp = value; }
		}

		private static int _MyPropStatic;
		public static int MyPropStatic
		{
			get { return _MyPropStatic; }
			set { _MyPropStatic = value; }
		}

		private static string value;
		private static MyEnum myEnum;

		/*public override void MyVirtMethod()
		{
			Console.WriteLine("Program");
			base.MyVirtMethod();
		}*/

		void Foo2()
		{
			MyProp = 123;
			int i = MyProp;

			MyPropStatic = 321;
			int i2 = MyPropStatic;
		}

		void Foo(Program p)
		{
			MyAutoProp = 123;
			int i2 = 55;
			{
				var i = abc + i2;
			}
			{
				var i = i2 + p.abc;
			}
		}

		static void Main()//string[] args)
		{
			Console.Write("Hello World!");return;
			//object blaa = MyAutoPropStatic;// boxing
			Program.MyAutoPropStatic = 0;
			var v = "Hello World!";
			v = MyAutoPropStatic.ToString();
			//v = myEnum.ToString();// TODO
			v = GetValue(v.GetType().ToString());
			Console.WriteLine("Hello World!" + value);

			//foreach (var i in "asdfas")// requires IL System.String::get_Chars(int32)
			/*var a = new int[123];
			foreach (var i in a)
			{
				
			}*/
		}

		static string GetValue(object o)
		{
			return o.ToString();
		}
	}
}
