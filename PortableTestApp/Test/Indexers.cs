using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	class Indexers
	{
		private char charVal;
		public char this[int index]
		{
			get
			{
				if (index == 1) return charVal;
				return 'B';
			}
			set
			{
				charVal = value;
			}
		}

		public static bool RunTest()
		{
			var obj = new Indexers();
			obj[1] = 'A';
			return obj[1] == 'A';
		}
	}
}
