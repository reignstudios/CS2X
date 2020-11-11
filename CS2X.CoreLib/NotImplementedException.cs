using System;
using System.Collections.Generic;
using System.Text;

namespace System
{
	public class NotImplementedException : Exception
	{
		public NotImplementedException()
		{ }

		public NotImplementedException(string message)
		: base(message)
		{ }
	}
}
