using CS2X;

namespace System
{
	[NativeType(NativeTarget.C)]
	struct time_t
	{
		public static implicit operator long(time_t value)
		{
			return 0;
		}
	}

	public struct DateTime
	{
		private time_t _internalDate;

		public long TODO()
		{
			var i = _internalDate;
			return (long)i;
		}
	}
}
