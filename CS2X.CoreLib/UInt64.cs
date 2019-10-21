namespace System
{
	public readonly struct UInt64
	{
		public const UInt64 MaxValue = 18446744073709551615;
		public const UInt64 MinValue = 0;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.UInt64NumberBufferLength + 1];
			int length = Number.sprintf(str, "%llu", this);
			str[Number.UInt64NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
