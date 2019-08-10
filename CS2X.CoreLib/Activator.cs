using System;
using System.Collections.Generic;
using System.Text;

namespace System
{
	static class Activator
	{
		#pragma warning disable CS0626
		public static extern T CreateInstance<T>();// required for generic default constructors 'aka where T : new()'
		#pragma warning restore CS0626
	}
}
