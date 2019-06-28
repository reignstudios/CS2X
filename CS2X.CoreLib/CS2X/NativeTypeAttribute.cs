using System;

namespace CS2X
{
	[AttributeUsage(AttributeTargets.Struct, AllowMultiple = false, Inherited = false)]
	public class NativeTypeAttribute : Attribute
	{
		public readonly NativeTarget target;
		public readonly string typeName;

		public NativeTypeAttribute(NativeTarget target, string typeName = null)
		{
			this.target = target;
			this.typeName = typeName;
		}
	}
}
