using System;

namespace CS2X
{
	[AttributeUsage(AttributeTargets.Parameter, AllowMultiple = false, Inherited = false)]
	public class NativeStringParamAttribute : Attribute
	{
		public readonly NativeStringType type;

		public NativeStringParamAttribute(NativeStringType type)
		{
			this.type = type;
		}
	}
}
