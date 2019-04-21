using System;

namespace CS2X
{
	[AttributeUsage(AttributeTargets.Method, AllowMultiple = false, Inherited = false)]
	public class NativeExternCAttribute : Attribute
	{
		public readonly string methodName;

		public NativeExternCAttribute(string methodName = null)
		{
			this.methodName = methodName;
		}
	}
}
