using CS2X;

namespace System
{
	public sealed class Random
	{
		private const uint rand_max = 32767;
		private uint seed;

		public Random() : this(GenerateSeed())
		{}

		public Random(int seed)
		{
			this.seed = (uint)seed;
		}

		private static int GenerateSeed()
		{
			return (int)DateTime.time(IntPtr.Zero);
		}

		public int Next()
		{
			seed = seed * 1103515245 + 12345;
			int result = (int)((seed / 65536) % 32768);
			return (int)(result / (float)rand_max) * int.MaxValue;
		}
	}
}
