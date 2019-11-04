using System.Runtime.InteropServices;

namespace System
{
	[StructLayout(LayoutKind.Sequential)]
	public unsafe struct Guid
	{
		private fixed byte data[16];

		private static readonly Random random = new Random();
		public static readonly Guid Empty = new Guid();

		public static Guid NewGuid()
		{
			var guid = new Guid();

			// get random numbers
			for (int i = 0; i != 16; ++i)
			{
				int number = (int)((random.Next() / (float)int.MaxValue) * 255);
				guid.data[i] = (byte)number;
			}

			// set version
			guid.data[7] &= 0x0f;
			guid.data[7] |= 0x40;

			// set variant
			guid.data[9] &= 0x3f;
			guid.data[9] |= 0x80;

			return guid;
		}

		public string ToString()
		{
			const int length = 32 + 4 + 1;
			byte* str = stackalloc byte[length];
			for (int i = 0, i2 = 0; i != 16; ++i, i2 += 2)
			{
				if (i == 4 || i == 6 || i == 8 || i == 10)
				{
					char delimiter = '-';
					Text.Encoding.ASCII.GetBytes(&delimiter, 1, &str[i2], 1);
					++i2;
				}
				Number.sprintf(&str[i2], "%02x", data[i]);
			}
			str[32 + 4] = 0;

			var charArray = stackalloc char[length + 1];
			for (int i = 0; i != length; ++i) charArray[i] = (char)str[i];
			charArray[length] = '\0';
			return new string(charArray);
		}
	}
}
