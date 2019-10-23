namespace System
{
	public readonly struct SByte
	{
		public const SByte MaxValue = 127;
		public const SByte MinValue = -128;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.Int8NumberBufferLength + 1];
			int length = Number.sprintf(str, "%d", this);
			str[Number.Int8NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
