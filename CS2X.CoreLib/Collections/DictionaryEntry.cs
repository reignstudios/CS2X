namespace System.Collections
{
	public struct DictionaryEntry
	{
		public DictionaryEntry(object key, object value)
		{
			this.Key = key;
			this.Value = value;
		}

		public object Key { get; set; }
		public object Value { get; set; }
	}
}
