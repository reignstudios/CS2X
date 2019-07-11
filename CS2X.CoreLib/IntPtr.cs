namespace System
{
	public struct IntPtr
	{
		#pragma warning disable CS0626
		public static extern bool operator==(IntPtr a, IntPtr b);
		public static extern bool operator!=(IntPtr a, IntPtr b);
		#pragma warning restore CS0626
	}
}
