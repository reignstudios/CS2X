using System.Runtime.CompilerServices;
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

		/// <summary>
		/// Returns the native ptr for an object as IntPtr
		/// </summary>
		/// <param name="o">Object to get pointer from</param>
		/// <returns>Pointer to object</returns>
		[MethodImpl(MethodImplOptions.InternalCall)]
		public static extern IntPtr GetNativePointerForObject(object o);

		/// <summary>
		/// Converts a delegate into a function pointer that is callable from unmanaged code.
		/// </summary>
		/// <typeparam name="TDelegate">The type of delegate to convert.</typeparam>
		/// <param name="d">The delegate to be passed to unmanaged code.</param>
		/// <param name="dThisPtr">The native 'this' ptr of the delegate (required when invoking the func ptr)</param>
		/// <returns>A value that can be passed to unmanaged code, which, in turn, can use it to call the underlying managed delegate.</returns>
		[MethodImpl(MethodImplOptions.InternalCall)]
		public static extern IntPtr GetFunctionPointerForDelegate<TDelegate>(TDelegate d, out IntPtr dThisPtr) where TDelegate : Delegate;

		/// <summary>
		/// Converts an unmanaged function pointer to a delegate of a specified type.
		/// </summary>
		/// <typeparam name="TDelegate">The type of the delegate to return.</typeparam>
		/// <param name="ptr">The unmanaged function pointer to convert.</param>
		/// <returns>A instance of the specified delegate type.</returns>
		[MethodImpl(MethodImplOptions.InternalCall)]
		public static extern TDelegate GetDelegateForFunctionPointer<TDelegate>(IntPtr ptr) where TDelegate : Delegate;
	}
}
