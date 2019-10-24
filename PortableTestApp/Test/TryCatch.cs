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

			MyException objRef = null;
			try
			{
				try
				{
					using (var obj = new MyException(value))
					{
						objRef = obj;
						throw new MyException(value);
					}
				}
				catch (Exception e)
				{
					throw e;
				}
			}
			catch (MyException e)
			{
				return e.Message == value && objRef.isDisposed;
			}
			catch (Exception e)
			{
				return false;
			}

			return false;
		}
	}

	class MyException : Exception, IDisposable
	{
		public bool isDisposed;

		public MyException(string message)
		: base(message)
		{}

		public void Dispose()
		{
			isDisposed = true;
		}
	}
}
