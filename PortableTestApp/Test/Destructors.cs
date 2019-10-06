using System;
using System.Collections.Generic;
using System.Text;

namespace PortableTestApp.Test
{
	abstract class DestructorsBase
	{
		public static bool wasFinalized;

		~DestructorsBase()
		{
			wasFinalized = true;
		}
	}

	class Destructors : DestructorsBase
	{
		public static new bool wasFinalized;
		private static Destructors obj = new Destructors();

		public static bool RunTest()
		{
			obj = null;
			GC.Collect();
			return wasFinalized && DestructorsBase.wasFinalized;
		}

		~Destructors()
		{
			wasFinalized = true;
			return;// tests protected return to make sure base destructor is called
		}
	}
}
