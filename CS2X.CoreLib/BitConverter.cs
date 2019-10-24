namespace System
{
	public static class BitConverter
	{
		public static unsafe int SingleToInt32Bits(float value)
        {
            return *((int*)&value);
        }
	}
}
