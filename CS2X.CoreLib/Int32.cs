namespace System
{
	public readonly struct Int32
	{
		public const Int32 MaxValue = 2147483647;
		public const Int32 MinValue = -2147483648;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.Int32NumberBufferLength + 1];
			int length = Number.sprintf(str, "%d", this);
			str[Number.Int32NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
