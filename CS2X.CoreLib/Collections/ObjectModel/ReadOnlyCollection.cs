using System;
using System.Collections.Generic;
using System.Text;

namespace System.Collections.ObjectModel
{
	enum ReadOnlyCollectionType
	{
		Array,
		List
	}

	public class ReadOnlyCollection<T> : IEnumerable<T>
	{
		private object list;
		private ReadOnlyCollectionType type;

		public ReadOnlyCollection(T[] list)
		{
			this.list = list;
			type = ReadOnlyCollectionType.Array;
		}

		public ReadOnlyCollection(List<T> list)
		{
			this.list = list;
			type = ReadOnlyCollectionType.List;
		}

		public int Count
		{
            get
			{
				switch (type)
				{
					case ReadOnlyCollectionType.Array: return ((T[])list).Length;
					case ReadOnlyCollectionType.List: return ((List<T>)list).Count;
					default: throw new NotImplementedException();
				}
			}
        }

        public T this[int index]
		{
            get
			{
				switch (type)
				{
					case ReadOnlyCollectionType.Array: return ((T[])list)[index];
					case ReadOnlyCollectionType.List: return ((List<T>)list)[index];
					default: throw new NotImplementedException();
				}
			}
        }

		public Enumerator GetEnumerator()
		{
			switch (type)
			{
				case ReadOnlyCollectionType.Array: return new Enumerator((T[])list);
				case ReadOnlyCollectionType.List: return new Enumerator(((List<T>)list).GetArray());
				default: throw new NotImplementedException();
			}
		}

		// Will be ignored by CS2X
		#pragma warning disable CS0626
		extern IEnumerator<T> IEnumerable<T>.GetEnumerator();
		extern IEnumerator IEnumerable.GetEnumerator();
		#pragma warning restore CS0626

		// ======================================
		// Enumerator
		// ======================================
		public struct Enumerator : IEnumerator<T>
		{
			private int i;
			private T[] _items;

			public Enumerator(T[] _items)
			{
				i = -1;
				this._items = _items;
			}

			public T Current
			{
				get
				{
					return _items[i];
				}
			}

			// Will be ignored by CS2X
			#pragma warning disable CS0626
			extern object IEnumerator.Current { get; }
			#pragma warning restore CS0626

			public bool MoveNext()
			{
				++i;
				return i < _items.Length;
			}

			public void Reset()
			{
				i = -1;
			}
		}
	}
}
