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

		public List(T[] collection)
		{
			_items = new T[collection.Length];
			Array.Copy(collection, 0, _items, 0, collection.Length);
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

		public T this[int index]
		{
			get
			{
				return _items[index];
			}
			set
			{
				_items[index] = value;
			}
		}

		private void ShiftItemsDown(int index)
		{
			for (int i = index; i < (_items.Length - 1); ++i)
			{
				int i2 = i + 1;
				_items[i] = _items[i2];
			}
		}

		private void ShiftItemsUp(int index)
		{
			for (int i = _items.Length; i > index; --i)
			{
				int i2 = i - 1;
				_items[i] = _items[i2];
			}
		}

		public void Add(T item)
		{
			int index = _items.Length;
			Array.Resize<T>(ref _items, _items.Length + 1);
			_items[index] = item;
		}

		public void AddRange(T[] collection)
		{
			int index = _items.Length;
			Array.Resize<T>(ref _items, _items.Length + collection.Length);
			Array.Copy(collection, 0, _items, index, collection.Length);
		}

		public void AddRange(List<T> collection)
		{
			AddRange(collection._items);
		}

		public void Remove(T item)
		{
			for (int i = _items.Length - 1; i != -1; --i)
			{
				if (EqualityComparer.GenericCompare<T>(item, _items[i]))
				{
					ShiftItemsDown(i);
					Array.Resize<T>(ref _items, _items.Length - 1);
				}
			}
		}

		public void Clear()
		{
			Array.Resize<T>(ref _items, 0);
		}

		public bool Contains(T item)
		{
			foreach (T i in _items)
			{
				if (EqualityComparer.GenericCompare<T>(item, i)) return true;
			}
			return false;
		}

		public int IndexOf(T item)
		{
			for (int i = 0; i != _items.Length; ++i)
			{
				if (EqualityComparer.GenericCompare<T>(item, _items[i])) return i;
			}
			return -1;
		}

		public void Insert(int index, T item)
		{
			if (index < 0 || index > _items.Length) throw new ArgumentOutOfRangeException();
			Array.Resize<T>(ref _items, _items.Length + 1);
			ShiftItemsUp(index);
			_items[index] = item;
		}

		public void RemoveAt(int index)
		{
			if (index < 0 || index > _items.Length) throw new ArgumentOutOfRangeException();
			ShiftItemsDown(index);
			Array.Resize<T>(ref _items, _items.Length - 1);
		}

		public void Reverse()
		{
			if (_items.Length == 0) return;
			for (int i = 0, i2 = (_items.Length - 1); i != i2; ++i, --i2)
			{
				T prev = _items[i];
				_items[i] = _items[i2];
				_items[i2] = prev;
			}
		}

		public T[] ToArray()
		{
			var itemsCopy = new T[_items.Length];
			Array.Copy(_items, itemsCopy, _items.Length);
			return itemsCopy;
		}

		/// <summary>
		/// Gets lists backing array without copying it
		/// </summary>
		/// <returns>Backing array</returns>
		public T[] GetArray()
		{
			return _items;
		}

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
