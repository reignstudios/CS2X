namespace System
{
	public class NotSupportedException : Exception
	{
		public NotSupportedException()
		{ }

		public NotSupportedException(string message)
		: base(message)
		{}
	}
}
