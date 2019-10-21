namespace System
{
	public readonly struct Double
	{
		public const double MaxValue = 1.7976931348623157E+308;
		public const double MinValue = -1.7976931348623157E+308;
		public const double Epsilon = 4.9406564584124654E-324;
		public const double NegativeInfinity = (double)-1.0 / (double)(0.0);
		public const double PositiveInfinity = (double)1.0 / (double)(0.0);
		public const double NaN = (double)0.0 / (double)0.0;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.DoubleNumberBufferLength + 1];
			int length = Number.sprintf(str, "%G", this);
			str[Number.DoubleNumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
