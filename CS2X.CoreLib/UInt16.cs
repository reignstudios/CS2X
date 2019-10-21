namespace System
{
	public readonly struct UInt16
	{
		public const UInt16 MaxValue = 65535;
		public const UInt16 MinValue = 0;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.UInt16NumberBufferLength + 1];
			int length = Number.sprintf(str, "%u", this);
			str[Number.UInt16NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
