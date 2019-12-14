namespace System
{
	public static class BitConverter
	{
		public static char ToChar(byte[] value, int startIndex)
        {
            return unchecked((char)ToInt16(value, startIndex));
        }

        public unsafe static short ToInt16(byte[] value, int startIndex)
        {
            if (value == null) throw new ThrowArgumentNullException();
            if (unchecked((uint)startIndex) >= unchecked((uint)value.Length)) throw new ArgumentOutOfRangeException();
            if (startIndex > value.Length - sizeof(short)) throw new ArgumentException();
            fixed (byte* ptr = value) return *((short*)ptr);
        }

        public unsafe static int ToInt32(byte[] value, int startIndex)
        {
            if (value == null) throw new ThrowArgumentNullException();
            if (unchecked((uint)startIndex) >= unchecked((uint)value.Length)) throw new ArgumentOutOfRangeException();
            if (startIndex > value.Length - sizeof(int)) throw new ArgumentException();
            fixed (byte* ptr = value) return *((int*)ptr);
        }

        public unsafe static long ToInt64(byte[] value, int startIndex)
        {
            if (value == null) throw new ThrowArgumentNullException();
            if (unchecked((uint)startIndex) >= unchecked((uint)value.Length)) throw new ArgumentOutOfRangeException();
            if (startIndex > value.Length - sizeof(long)) throw new ArgumentException();
            fixed (byte* ptr = value) return *((long*)ptr);
        }

        public static ushort ToUInt16(byte[] value, int startIndex)
        {
            return unchecked((ushort)ToInt16(value, startIndex));
        }

        public static uint ToUInt32(byte[] value, int startIndex)
        {
            return unchecked((uint)ToInt16(value, startIndex));
        }

        public static ulong ToUInt64(byte[] value, int startIndex)
        {
            return unchecked((ulong)ToInt16(value, startIndex));
        }

        public static float ToSingle(byte[] value, int startIndex)
        {
            return Int32BitsToSingle(ToInt32(value, startIndex));
        }

        public static double ToDouble(byte[] value, int startIndex)
        {
            return Int64BitsToDouble(ToInt64(value, startIndex));
        }

        public static unsafe long DoubleToInt64Bits(double value)
        {
            return *((long*)&value);
        }

        public static unsafe double Int64BitsToDouble(long value)
        {
            return *((double*)&value);
        }

        public static unsafe int SingleToInt32Bits(float value)
        {
            return *((int*)&value);
        }

        public static unsafe float Int32BitsToSingle(int value)
        {
            return *((float*)&value);
        }
    }
}
