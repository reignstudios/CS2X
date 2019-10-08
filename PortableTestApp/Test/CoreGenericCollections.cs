using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	static class CoreGenericCollections
	{
		public static bool RunTest()
		{
			var list = new List<int>();
			list.Add(1);
			list.Add(2);
			list.Add(3);

			foreach (int item in list)
			{
				if (item == 0) return false;
			}

			return list.Count == 3;
		}
	}
}
