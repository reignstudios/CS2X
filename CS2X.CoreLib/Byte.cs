namespace System
{
	public readonly struct Byte
	{
		public const Byte MaxValue = 255;
		public const Byte MinValue = 0;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.UInt8NumberBufferLength + 1];
			int length = Number.sprintf(str, "%u", this);
			str[Number.UInt8NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
