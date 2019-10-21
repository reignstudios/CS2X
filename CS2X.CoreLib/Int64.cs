namespace System
{
	public readonly struct Int64
	{
		public const Int64 MaxValue = 9223372036854775807;
		public const Int64 MinValue = -9223372036854775808;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.Int64NumberBufferLength + 1];
			int length = Number.sprintf(str, "%lld", this);
			str[Number.Int64NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
