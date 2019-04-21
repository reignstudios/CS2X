using System.Runtime.CompilerServices;

namespace System
{
	public sealed class String
	{
		[NonSerialized]
		private int _stringLength;

		[NonSerialized]
		internal char _firstChar;// TODO: change back to private when Console is implemented correctly

		[Intrinsic]
        public static readonly string Empty;

		//[MethodImpl(MethodImplOptions.InternalCall)]
		//public extern String(char[] value);

		// Gets the character at a specified position.
        //
        /*[IndexerName("Chars")]
        public extern char this[int index]
        {
            [MethodImpl(MethodImplOptions.InternalCall)]
            get;
        }*/

		// Gets the length of this string
        //
        // This is a EE implemented function so that the JIT can recognise it specially
        // and eliminate checks on character fetches in a loop like:
        //        for(int i = 0; i < str.Length; i++) str[i]
        // The actual code generated for this will be one instruction and will be inlined.
        //
        public extern int Length
        {
            [MethodImpl(MethodImplOptions.InternalCall)]
            get;
        }

		[MethodImpl(MethodImplOptions.InternalCall)]
        internal static extern string FastAllocateString(int length);
		
        public static bool IsNullOrEmpty(string value)
        {
            return (value == null || 0u >= (uint)value.Length) ? true : false;
        }

		private static unsafe void FillStringChecked(string dest, int destPos, string src)
		{
			if (src.Length > dest.Length - destPos)
			{
				throw new IndexOutOfRangeException();
			}

			fixed (char* pDest = &dest._firstChar)
			fixed (char* pSrc = &src._firstChar)
			{
				Buffer.memcpy(pDest + destPos, pSrc, (void*)(src.Length * sizeof(char)));
			}
		}

		public static string Concat(string str0, string str1)
        {
            if (IsNullOrEmpty(str0))
            {
                if (IsNullOrEmpty(str1))
                {
                    return string.Empty;
                }
                return str1;
            }

            if (IsNullOrEmpty(str1))
            {
                return str0;
            }

            int str0Length = str0.Length;

            string result = FastAllocateString(str0Length + str1.Length);

            FillStringChecked(result, 0, str0);
            FillStringChecked(result, str0Length, str1);

            return result;
        }

		public static string Concat(string str0, string str1, string str2)
		{
			if (IsNullOrEmpty(str0))
			{
				return Concat(str1, str2);
			}

			if (IsNullOrEmpty(str1))
			{
				return Concat(str0, str2);
			}

			if (IsNullOrEmpty(str2))
			{
				return Concat(str0, str1);
			}

			int totalLength = str0.Length + str1.Length + str2.Length;

			string result = FastAllocateString(totalLength);
			FillStringChecked(result, 0, str0);
			FillStringChecked(result, str0.Length, str1);
			FillStringChecked(result, str0.Length + str1.Length, str2);

			return result;
		}

		public static string Concat(string str0, string str1, string str2, string str3)
		{
			if (IsNullOrEmpty(str0))
			{
				return Concat(str1, str2, str3);
			}

			if (IsNullOrEmpty(str1))
			{
				return Concat(str0, str2, str3);
			}

			if (IsNullOrEmpty(str2))
			{
				return Concat(str0, str1, str3);
			}

			if (IsNullOrEmpty(str3))
			{
				return Concat(str0, str1, str2);
			}

			int totalLength = str0.Length + str1.Length + str2.Length + str3.Length;

			string result = FastAllocateString(totalLength);
			FillStringChecked(result, 0, str0);
			FillStringChecked(result, str0.Length, str1);
			FillStringChecked(result, str0.Length + str1.Length, str2);
			FillStringChecked(result, str0.Length + str1.Length + str2.Length, str3);

			return result;
		}
	}
}
