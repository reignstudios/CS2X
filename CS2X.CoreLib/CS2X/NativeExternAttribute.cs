using System;

namespace CS2X
{
	[AttributeUsage(AttributeTargets.Method, AllowMultiple = false, Inherited = false)]
	public class NativeExternAttribute : Attribute
	{
		public readonly NativeTarget target;
		public readonly string methodName;

		public NativeExternAttribute(NativeTarget target, string methodName = null)
		{
			this.target = target;
			this.methodName = methodName;
		}
	}
}
