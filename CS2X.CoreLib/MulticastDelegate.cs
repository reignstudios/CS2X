namespace System
{
	public abstract class MulticastDelegate : Delegate
	{
		private object _self;
		private IntPtr _func;
		private MulticastDelegate _prev, _next;
	}
}
