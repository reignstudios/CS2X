using System.Collections;
using System.Collections.Generic;

namespace PortableTestApp.Test
{
	static class FlowControlAndEnumerators
	{
		public static bool RunTest()
		{
			var values = new int[3]
			{
				1, 2, 3
			};

			var values2 = new int[3];
			values2[0] = 3;
			values2[1] = 2;
			values2[2] = 1;

			foreach (int value in values)
			foreach (int value2 in values2)
			{
				if (value == 0 || value2 == 0) return false;
			}

			for (int i = 0, i2 = 2; i != values.Length; ++i, --i2)
			{
				if (values[i] != values2[i2]) return false;
			}

			int l = 0;
			while (l != 3)
			{
				l++;
			}

			do
			{
				l -= 1;
			} while (l != 0);

			if (l == 0)
			{
				switch (l)
				{
					case 5 + 0:
					case 6:
						return false;

					case 0: l = 4; break;

					default:
					{
						return false;
					}
				}
			}
			else if (l == -1)
			{
				return false;
			}
			else
			{
				return false;
			}

			var myEnumerable = new MyEnumerable<int>();
			myEnumerable.Set(40, 0);
			myEnumerable.Set(41, 1);
			myEnumerable.Set(42, 2);
			foreach (int e in myEnumerable)
			{
				if (e == 0) return false;
			}

			return true;
		}
	}

	// MyEnumerable<T> should be a class
	class MyEnumerable<T> : IEnumerable<T>
    {
		private MyEnumerator<T> e = new MyEnumerator<T>(new T[3]);

		public void Set(T value, int index)
		{
			e.Set(value, index);
		}

		public MyEnumerator<T> GetEnumerator()
        {
            return e;
        }

		// Will be ignored by CS2X
		#pragma warning disable CS0626
		extern IEnumerator<T> IEnumerable<T>.GetEnumerator();
		extern IEnumerator IEnumerable.GetEnumerator();
		#pragma warning restore CS0626
	}

	// MyEnumerator should be a struct
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

		public void Set(T value, int index)
		{
			collection[index] = value;
		}
    }
}
