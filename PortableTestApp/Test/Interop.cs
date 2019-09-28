using System;
using System.Runtime.InteropServices;

namespace PortableTestApp.Test
{
	class Interop
	{
		[DllImport("Kernel32.dll", CallingConvention = CallingConvention.StdCall)]
		private static extern uint GetLastError();

		[DllImport("__Internal")]
		private static extern IntPtr GetFuncPtr();

		[DllImport("__Internal")]
		private static extern void InvokeDelegateFuncPtr(IntPtr delegateFuncPtr, IntPtr delegateThisPtr);

		[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
		private delegate int MyDelegate(int value);

		private static bool fooStaticCalled, fooCalled;
		private delegate void FooDelegate();
		private static void FooStatic()
		{
			fooStaticCalled = true;
		}

		private void Foo()
		{
			fooCalled = true;
		}

		public static bool RunTest()
		{
			IntPtr funcPtr = GetFuncPtr();
			var myDelegate = Marshal.GetDelegateForFunctionPointer<MyDelegate>(funcPtr);

			FooDelegate myFooDelegate = FooStatic;
			myFooDelegate += new Interop().Foo;
			IntPtr dFuncPtr = Marshal.GetFunctionPointerForDelegate<FooDelegate>(myFooDelegate, out IntPtr dThisPtr);
			InvokeDelegateFuncPtr(dFuncPtr, dThisPtr);

			return GetLastError() == 0 && myDelegate(123) == 123 && fooStaticCalled && fooCalled;
		}
	}
}
