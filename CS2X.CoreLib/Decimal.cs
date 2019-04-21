namespace System
{
	public readonly struct Decimal// : IFormattable, IComparable, IConvertible, IComparable<decimal>, IEquatable<decimal>, IDeserializationCallback, ISpanFormattable
	{
		private readonly int flags;
        private readonly int hi;
        private readonly int lo;
        private readonly int mid;
	}
}
