namespace System.Runtime.InteropServices
{
	//
	// Summary:
	//     Specifies the calling convention required to call methods implemented in unmanaged
	//     code.
	public enum CallingConvention
	{
		//
		// Summary:
		//     The caller cleans the stack. This enables calling functions with varargs, which
		//     makes it appropriate to use for methods that accept a variable number of parameters,
		//     such as Printf.
		Cdecl = 2,
		//
		// Summary:
		//     The callee cleans the stack. This is the default convention for calling unmanaged
		//     functions with platform invoke.
		StdCall = 3,
		//
		// Summary:
		//     The first parameter is the this pointer and is stored in register ECX. Other
		//     parameters are pushed on the stack. This calling convention is used to call methods
		//     on classes exported from an unmanaged DLL.
		ThisCall = 4,
		//
		// Summary:
		//     This calling convention is not supported.
		FastCall = 5
	}
}
