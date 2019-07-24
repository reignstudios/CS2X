using CS2X;
using System;
using System.Collections;
using System.Runtime.CompilerServices;
using System.Collections.Generic;
using System.Runtime.InteropServices;

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
		void MyInterface.MyVirtMethod() { }
		public abstract int MyVirtMethod();

		public void MyFoo()
		{
			Console.WriteLine("MyAbstractClass::MyFoo");
		}
	}

	sealed class MyBaseClass : MyAbstractClass
	{
        public int b, c, d;

		public override int MyVirtMethod()
		{
			Console.WriteLine("MyBaseClass::MyVirtMethod");
			return 0;
		}
	}

	enum MyEnum
	{
		A, B, C
	}

	static class MyExtensions
	{
		public static string Name(this MyEnum e)
		{
			if (e == MyEnum.A) return "A";
			return "TODO";
		}

		public static string Name2(this Program e)
		{
			return "TODO";
		}
	}

	//[NativeType(NativeTarget.C)]
	//struct native_type_t
	//{
	//	public int value;
	//	public int Boo()
	//	{
	//		return value;
	//	}
	//}

	class Program
	{
		public string Name2()
		{
			//native_type_t i2 = new native_type_t();
			//i2.value = i2.Boo();

			return null;
		}

		public int abc = 99;
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
			p.Name2();
			MyExtensions.Name2(p);
			MyAutoProp = 123;
			int i2 = 55;
			{
				var i = abc + i2;
			}
			{
				var i = i2 + p.abc;
			}
		}

		[DllImport("Kernel32.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern uint GetLastError();

		[DllImport("__Internal")]
		private static extern uint MyInternalExtern(uint value);

		static Program()
		{
			MyAutoPropStatic = 555;
			var en = MyEnum.A;
			string e = en.Name();

			uint lastError = GetLastError();
			lastError = MyInternalExtern(44);
		}

		delegate void MyDelegate(string i);
		static MyDelegate myDelegate;

		static void MyDelegateCallbackStatic(string i)
		{
			Console.WriteLine(i);
		}

		void MyDelegateCallback(string i)
		{
			if (this != null) Console.WriteLine(i + "_Program");
		}

		unsafe static void Main(string[] args)
		{
			foreach (string arg in args)
			{
				Console.WriteLine(arg);
			}

			var p = new Program();
			myDelegate = new MyDelegate(p.MyDelegateCallback);
			myDelegate += p.MyDelegateCallback;

			//myDelegate = new MyDelegate(MyDelegateCallbackStatic);
			myDelegate += MyDelegateCallbackStatic;
			myDelegate -= MyDelegateCallbackStatic;
			//myDelegate = MyDelegateCallbackStatic + myDelegate;
			myDelegate = myDelegate + MyDelegateCallbackStatic;
			//myDelegate = (MyDelegate)Delegate.RemoveAll(myDelegate, new MyDelegate(MyDelegateCallback));
			if (myDelegate != null) myDelegate("Invoke");

			value = "lll";
			myEnum = MyEnum.A;

			var m = new MyBaseClass();
			m.MyVirtMethod();
			var m2 = (MyAbstractClass)m;
			m2.MyVirtMethod();
			m.MyFoo();
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
			var a = new int[5] {1, 2, 3, 4, 5};
			if (a.GetType() == typeof(int[])) Console.WriteLine(a.GetType().FullName);
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

			var a2 = stackalloc byte[3] { 1, 2, 3 };

   //         for (int i = 0, i2 = 0; i != a.Length && i2 != 4; ++i, i2 += 2)
			//{
			//	if (i == i2) Console.Write("*");
			//}

			//for (int i = 0; i != a.Length; ++i)
			//{
			//	Console.Write("$");
			//}

            var es = new MyEnumerable<int>();
            foreach (var e in es)
            {
				if (e == 0) Console.Write("T");
            }
			float[] sldkfj;
			float[] sldkfj2;
			//MyG<short[]>[] myGArray;
			MyG<int> myG = new MyG<int>();
			int myGI = myG.DoStuff();
			int myGI2 = myG.DoStuff2<int>(123);
			int myGI3 = myG.DoStuff3<int,float>(55f, 123, 55);
			var myGIS = MyG<Vec3>.DoStuffStatic(true);
			Console.WriteLine(myG.GetType().FullName);
			try
			{
				MyAbstractClass c = new MyBaseClass();
				FooThrow((MyBaseClass)c);
			}
			catch (NotSupportedException e)
			{
				Console.WriteLine("NotSupportedException: " + e.Message);
			}
			catch (Exception e)
			{
				Console.WriteLine("Error: " + e.Message);
			}
		}

		static void TestLoop(int[] es)
		{
            foreach (var e in es) Console.Write("T");
		}

		static void FooThrow(MyBaseClass a)
		{
			throw new NotSupportedException("My Exception!");
		}

        static MyBaseClass i2;
		static double[] Ya()
		{
			return null;
		}

		static string GetValue(object o)
		{
			return o.GetType().FullName;
		}
	}

	class MyG<T> where T : struct
	{
		public T g;

		public T DoStuff()
		{
			return g;
		}

		public static T DoStuffStatic(bool value)
		{
			if (value) return default;
			else return default(T);
		}

		public E DoStuff2<E>(E value)
		{
			return value;
		}

		public E DoStuff3<E,E2>(E2 value2, E value, T value3)
		{
			if (typeof(E2) == typeof(E) && typeof(E) == typeof(T)) return value;
			return value;
		}
	}

	struct Vec3
	{
		public float x, y, z;
	}

	//struct MyS<T>
	//{
	//	public T s;
	//}

	class MyEnumerable<T> : IEnumerable<T>
    {
		public MyEnumerator<T> GetEnumerator()
        {
			MyEnumerator<T> e = new MyEnumerator<T>(new T[3]);
            return e;
        }

		// Will be ignored by CS2X
		#pragma warning disable CS0626
		extern IEnumerator<T> IEnumerable<T>.GetEnumerator();
		extern IEnumerator IEnumerable.GetEnumerator();
		#pragma warning restore CS0626
	}

    struct MyEnumerator<T> : IEnumerator<T>
    {
        private int i;
        private T[] collection;

        public MyEnumerator(T[] collection)
        {
            i = -1;
            this.collection = collection;
        }

        public T Current
        {
            get
            {
                return collection[i];
            }
        }

		// Will be ignored by CS2X
		#pragma warning disable CS0626
        extern object IEnumerator.Current { get; }
		#pragma warning restore CS0626

        public bool MoveNext()
        {
			++i;
            return i < collection.Length;
        }

        public void Reset()
        {
			i = -1;
        }
    }
}