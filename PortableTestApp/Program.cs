using System;
using System.Collections;
//using System.Collections.Generic;

namespace PortableTestApp
{
	namespace MyNamespace
	{
		enum MyEnum
		{
			A, B, C
		}
	}

	interface MyInterface
	{
		void MyVirtMethod();
		void MyFoo();
	}

	abstract class MyAbstractClass : MyInterface
	{
		public abstract void MyVirtMethod();
		public void MyFoo()
		{
			Console.Write("MyAbstractClass::MyFoo");
		}
	}

	sealed class MyBaseClass : MyAbstractClass
	{
        public int b, c, d;

		public override void MyVirtMethod()
		{
			Console.Write("MyBaseClass::MyVirtMethod");
		}
	}

	enum MyEnum
	{
		A, B, C
	}

	class Program
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

		static Program()
		{
			MyAutoPropStatic = 555;
		}

		static void Main()//string[] args)
		{
			//var m = new MyBaseClass();
			//m.MyVirtMethod();
			//var m2 = (MyAbstractClass)m;
			//m2.MyVirtMethod();
			//m.MyFoo();
			//return;

			//Console.WriteLine("Hello World!");
            //Console.WriteLine("Hello World!2");
            //return;

			//string value = typeof(int).ToString();
			//Console.WriteLine(value);

			//Program.MyAutoPropStatic = 0;
			//var v = "Hello World!";
			//v = MyAutoPropStatic.ToString();
			////v = myEnum.ToString();// TODO
			//v = GetValue(v.GetType().ToString());
			//Console.WriteLine("Hello World!" + value);

			//foreach (var i in "asdfas")// requires method System.String::get_Chars(int32)
			var a = new int[5];
			//a[0] = new int[3];
			//int b = a.Length;
			//int c = a[0].Length;
            foreach (var aa in a)
            {
                Console.Write("^");
                if (aa == 88) break;
            }

            i2 = new MyBaseClass()
            {
                b = 44,
                c = 33,
                d = 66
            };

            var i = new MyBaseClass()
            {
                b = 44,
                c = 33,
                d = 66
            };

   //         for (int i = 0, i2 = 0; i != a.Length && i2 != 4; ++i, i2 += 2)
			//{
			//	if (i == i2) Console.Write("*");
			//}

			//for (int i = 0; i != a.Length; ++i)
			//{
			//	Console.Write("$");
			//}

            /*var es = new MyE();
            foreach (var e in es)
            {

            }*/
		}
        static MyBaseClass i2;
		static int[] Ya()
		{
			return null;
		}

		static string GetValue(object o)
		{
			return o.ToString();
		}
	}

    /*class MyE : IEnumerable<int>
    {
        public IEnumerator<int> GetEnumerator()
        {
            return new MyEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return null;
        }
    }

    struct MyEnumerator : IEnumerator<int>
    {
        private int i;
        private int[] collection;

        public MyEnumerator(int[] collection)
        {
            i = 0;
            this.collection = collection;
        }

        public void Dispose() { }

        public int Current
        {
            get
            {
                return collection[i];
            }
        }

        object IEnumerator.Current
        {
            get
            {
                return null;
            }
        }

        public bool MoveNext()
        {
            return false;
        }

        public void Reset()
        {

        }
    }*/
}