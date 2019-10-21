namespace System
{
	public readonly struct Int16
	{
		public const Int16 MaxValue = 32767;
		public const Int16 MinValue = -32768;

		public unsafe string ToString()
		{
			byte* str = stackalloc byte[Number.Int16NumberBufferLength + 1];
			int length = Number.sprintf(str, "%d", this);
			str[Number.Int16NumberBufferLength] = 0;
			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
