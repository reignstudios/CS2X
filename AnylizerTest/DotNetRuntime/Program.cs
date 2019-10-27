using System;
using System.Collections;
using System.Collections.Generic;

namespace DotNetRuntime
{
	class Program
	{
		static void Main(string[] args)
		{
			var i = new int[] { 2 };
			Console.WriteLine("Hello World!");
		}
	}

	interface MyI
	{
		void Foo();
		int Boo
		{
			get; set;
		}
	}

	struct MyE<T> : IEnumerator<T>
	{
		public T Current => throw new NotImplementedException();

		object IEnumerator.Current => throw new NotImplementedException();

		public void Dispose()
		{
			throw new NotImplementedException();
		}

		public bool MoveNext()
		{
			throw new NotImplementedException();
		}

		public void Reset()
		{
			throw new NotImplementedException();
		}
	}
}
