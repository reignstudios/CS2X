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

        public abstract int Read(byte[] buffer, int offset, int count);
        public virtual int ReadByte()
        {
            byte[] oneByteArray = new byte[1];
            int r = Read(oneByteArray, 0, 1);
            if (r == 0) return -1;
            return oneByteArray[0];
        }

        public abstract void Write(byte[] buffer, int offset, int count);
        public virtual void WriteByte(byte value)
        {
            byte[] oneByteArray = new byte[1];
            oneByteArray[0] = value;
            Write(oneByteArray, 0, 1);
        }
    }
}
