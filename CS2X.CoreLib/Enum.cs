using System.Runtime.CompilerServices;

namespace System
{
    public abstract class Enum : ValueType
	{
		[MethodImpl(MethodImplOptions.InternalCall)]
		public extern string ToString();
	}
}
