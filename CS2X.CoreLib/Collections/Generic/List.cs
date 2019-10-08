using System.Runtime.InteropServices;

namespace System.Collections.Generic
{
	public class List<T> : IEnumerable<T>
	{
		private T[] _items;

		public List()
		{
			bool wasEnabled = GC.DisableAutoCollections();
			_items = new T[0];
			if (wasEnabled) GC.EnableAutoCollections();
		}

		public int Count => _items.Length;

		public Enumerator GetEnumerator()
        {
            return new Enumerator(_items);
        }

		// Will be ignored by CS2X
		#pragma warning disable CS0626
		extern IEnumerator<T> IEnumerable<T>.GetEnumerator();
		extern IEnumerator IEnumerable.GetEnumerator();
		#pragma warning restore CS0626

		public void Add(T item)
		{
			int index = _items.Length;
			Array.Resize<T>(ref _items, _items.Length + 1);
			_items[index] = item;
		}

		public void Remove(T item)
		{
			for (int i = _items.Length - 1; i != -1; --i)
			{
				//if (EqualityComparer.GenericCompare<T>(item, _items[i]))
				{
					//Array.Resize<T>(ref _items, _items.Length - 1);
				}
			}
		}

		// =========================================
		// Enumerator
		// =========================================
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
