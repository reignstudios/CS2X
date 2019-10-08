using System;
using System.Collections.Generic;
using System.Text;

namespace System
{
	public class ArgumentOutOfRangeException : Exception
	{
		public ArgumentOutOfRangeException()
		{ }

		public ArgumentOutOfRangeException(string message)
		: base(message)
		{ }
	}
}
