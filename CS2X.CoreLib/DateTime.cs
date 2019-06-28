using CS2X;

namespace System
{
	[NativeType(NativeTarget.C)]
	struct time_t
	{
		#pragma warning disable CS0626
		public static extern implicit operator long(time_t value);
		public static extern implicit operator time_t(long value);
		#pragma warning restore CS0626
	}

	public struct DateTime
	{
		private time_t _internalDate;

		public long TODO()
		{
			_internalDate = 123;
			var i = _internalDate;
			return (long)i;
		}
	}
}
