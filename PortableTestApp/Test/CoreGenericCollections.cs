﻿using System;
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

			list.Remove(2);

			for (int i = 0; i != list.Count; ++i)
			{
				if (list[i] == 2) return false;
			}

			if (list.Count != 2) return false;

			list.Clear();
			return list.Count == 0;
		}
	}
}
