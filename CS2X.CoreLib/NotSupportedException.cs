namespace System
{
	public class NotSupportedException : Exception
	{
		public NotSupportedException(string message)
		: base(message)
		{}

		//public override string Message => base.Message;
	}
}
