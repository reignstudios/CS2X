namespace System.IO
{
	public abstract class Stream : IDisposable
	{
        public abstract long Length
        {
            get;
        }

        public abstract long Position
        {
            get;
            set;
        }

        public abstract void Dispose();

        protected unsafe abstract int Read(byte* buffer, int offset, int count);
        public abstract int Read(byte[] buffer, int offset, int count);
        public unsafe virtual int ReadByte()
        {
            byte data;
            if (Read(&data, 0, 1) == 0) return -1;
            return data;
        }

        protected unsafe abstract void Write(byte* buffer, int offset, int count);
        public abstract void Write(byte[] buffer, int offset, int count);
        public unsafe virtual void WriteByte(byte value)
        {
            Write(&value, 0, 1);
        }
    }
}
