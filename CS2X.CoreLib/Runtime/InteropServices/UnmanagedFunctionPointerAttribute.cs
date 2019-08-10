namespace System.Runtime.InteropServices
{
	[AttributeUsage(AttributeTargets.Delegate, AllowMultiple = false, Inherited = false)]
	public sealed class UnmanagedFunctionPointerAttribute : Attribute
	{
		public CallingConvention CallingConvention { get; }

		public UnmanagedFunctionPointerAttribute(CallingConvention callingConvention)
		{
			CallingConvention = callingConvention;
		}
	}
}
