using CS2X;

namespace System
{
	public sealed class Random
	{
		[NativeExtern(NativeTarget.C)]
		internal static extern void srand(int _Seed);

		[NativeExtern(NativeTarget.C)]
		internal static extern int rand();

		public Random() : this(GenerateSeed())
		{}

		public Random(int seed)
		{
			srand(seed);
		}

		private static int GenerateSeed()
		{
			return (int)DateTime.time(IntPtr.Zero);
		}

		public int Next()
		{
			return rand();
		}
	}
}
