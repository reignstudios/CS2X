namespace System
{
	public readonly struct UInt32
	{
		public const UInt32 MaxValue = 4294967295;
		public const UInt32 MinValue = 0;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.UInt32NumberBufferLength + 1];
			int length = Number.sprintf(str, "%u", this);
			str[Number.UInt32NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
