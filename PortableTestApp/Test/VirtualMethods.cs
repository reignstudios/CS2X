namespace PortableTestApp.Test
{
	abstract class VirtualMethods_Base
	{
		public virtual bool VirtualFoo(bool value)
		{
			return false;
		}

		public abstract bool AbstractFoo(bool value);
	}

	sealed class VirtualMethods : VirtualMethods_Base
	{
		public override bool VirtualFoo(bool value)
		{
			return value;
		}

		public override bool AbstractFoo(bool value)
		{
			return value;
		}

		public static bool RunTest()
		{
			var obj = new VirtualMethods();
			var objBase = (VirtualMethods_Base)obj;
			return obj.VirtualFoo(true) && obj.AbstractFoo(true) && objBase.VirtualFoo(true) && objBase.AbstractFoo(true);
		}
	}
}
