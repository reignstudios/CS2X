using System.Reflection;
using System.Runtime.CompilerServices;

namespace System
{
	public abstract class Type
	{
		public Type BaseType { get; }
		public string Name { get; }
		public string FullName { get; }

		[MethodImpl(MethodImplOptions.InternalCall)]
		public static extern Type GetTypeFromHandle(RuntimeTypeHandle handle);

		public bool IsAssignableFrom(Type c)
		{
			var t = c;
			while (t != null)
			{
				if (t == this) return true;
				t = t.BaseType;
			}
			return false;
		}

		public string ToString()
		{
			return FullName;
		}
	}
}
