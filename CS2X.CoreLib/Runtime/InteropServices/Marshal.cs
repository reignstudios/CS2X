using System.Text;

namespace System.Runtime.InteropServices
{
	public static class Marshal
	{
		public unsafe static IntPtr StringToHGlobalAnsi(string s)
		{
			fixed (char* chars = s)
			{
				int byteCount = Encoding.ASCII.GetByteCount(chars, s.Length);
				byte* buffer = (byte*)Buffer.malloc((void*)byteCount);
				Encoding.ASCII.GetBytes(chars, s.Length, buffer, byteCount);
				return new IntPtr(buffer);
			}
		}

		public unsafe static IntPtr StringToHGlobalUni(string s)
		{
			fixed (char* chars = s)
			{
				int byteCount = Encoding.Unicode.GetByteCount(chars, s.Length);
				byte* buffer = (byte*)Buffer.malloc((void*)byteCount);
				Encoding.Unicode.GetBytes(chars, s.Length, buffer, byteCount);
				return new IntPtr(buffer);
			}
		}

		public unsafe static void FreeHGlobal(IntPtr hglobal)
		{
			Buffer.free((void*)hglobal);
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
