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

		public static implicit operator time_t(long value)
		{
			return new time_t();
		}
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
