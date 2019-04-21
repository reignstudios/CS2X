namespace System
{
	[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Event | AttributeTargets.Interface | AttributeTargets.Delegate, Inherited = false)]
	public sealed class ObsoleteAttribute : Attribute
	{
		private readonly bool _error;
		private readonly string _message;

		public ObsoleteAttribute()
		{
		}

		public ObsoleteAttribute(string message)
		{
			_message = message;
		}

		public ObsoleteAttribute(string message, bool error)
		{
			_message = message;
			_error = error;
		}

		public bool IsError
		{
			get
			{
				return _error;
			}
		}

		public string Message
		{
			get
			{
				return _message;
			}
		}
	}
}
