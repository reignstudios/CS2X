using System.Runtime.CompilerServices;

namespace System
{
	public abstract class Array
	{
		public extern int Length
        {
            [MethodImpl(MethodImplOptions.InternalCall)]
            get;
        }

        public extern long LongLength
        {
            [MethodImpl(MethodImplOptions.InternalCall)]
            get;
        }

		internal int Count => Length;
	}
}
