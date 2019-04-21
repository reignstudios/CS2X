using System.Collections;
using System.Runtime.CompilerServices;

namespace System
{
	public abstract class Array : ICollection//, IEnumerable, IList, IStructuralComparable, IStructuralEquatable, ICloneable
	{
		public IEnumerator GetEnumerator()
		{
			return null;
		}

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

		int ICollection.Count { get { return Length; } }
	}
}
