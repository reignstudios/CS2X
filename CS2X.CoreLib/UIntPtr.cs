namespace System
{
	public struct UIntPtr
	{
		#pragma warning disable CS0626
		public static extern bool operator==(UIntPtr a, UIntPtr b);
		public static extern bool operator!=(UIntPtr a, UIntPtr b);
		#pragma warning restore CS0626
	}
}
