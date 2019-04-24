using System;

namespace CS2X
{
	[Flags]
	public enum NativeExternTarget
	{
		C
	}

	[AttributeUsage(AttributeTargets.Method, AllowMultiple = false, Inherited = false)]
	public class NativeExternAttribute : Attribute
	{
		public readonly NativeExternTarget target;
		public readonly string methodName;

		public NativeExternAttribute(NativeExternTarget target, string methodName = null)
		{
			this.target = target;
			this.methodName = methodName;
		}
	}
}
