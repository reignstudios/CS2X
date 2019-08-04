namespace System.Runtime.CompilerServices
{
	public static class RuntimeHelpers
	{
		public unsafe static int OffsetToStringData
		{
			get
			{
				return sizeof(void*) + sizeof(int);
			}
		}
	}
}
