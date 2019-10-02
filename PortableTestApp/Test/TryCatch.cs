using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	static class TryCatch
	{
		public static bool RunTest()
		{
			const string value = "YAHOO";

			try
			{
				try
				{
					throw new MyException(value);
				}
				catch (Exception e)
				{
					throw e;
				}
			}
			catch (MyException e)
			{
				return e.Message == value;
			}
			catch (Exception e)
			{
				return false;
			}

			return false;
		}
	}

	class MyException : Exception
	{
		public MyException(string message)
		: base(message)
		{}
	}
}
