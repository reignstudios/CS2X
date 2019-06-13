namespace System
{
	public class Exception
	{
		public Exception()
		{
			
		}

		public Exception(string message)
		{
			this.Message = message;
		}
		
		//public Exception InnerException
		//{
		//	get
		//	{
		//		return null;
		//	}
		//}

		public virtual string Message { get; private set; }
		
		//public virtual string StackTrace
		//{
		//	get
		//	{
		//		return null;
		//	}
		//}
	}
}
