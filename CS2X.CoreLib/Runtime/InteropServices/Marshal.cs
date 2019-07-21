namespace System.Runtime.InteropServices
{
	public static class Marshal
	{
		public static IntPtr StringToHGlobalAnsi(string s)
		{
			return new IntPtr();
		}

		public static IntPtr StringToHGlobalUni(string s)
		{
			return new IntPtr();
		}

		public static void FreeHGlobal(IntPtr hglobal)
		{
			
		}

		public static IntPtr GetFunctionPointerForDelegate(Delegate d)
		{
			return new IntPtr();
		}

		public static Delegate GetDelegateForFunctionPointer(IntPtr ptr, Type t)
		{
			return null;
		}
	}
}
