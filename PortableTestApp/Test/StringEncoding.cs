using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	static class StringEncoding
	{
		public static bool RunTest()
		{
			const string convertString = "Some Data";
			var data = Encoding.UTF8.GetBytes(convertString);
			string result = Encoding.UTF8.GetString(data);
			return result == convertString;
		}
	}
}
