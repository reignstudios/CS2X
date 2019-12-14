using System.Runtime.CompilerServices;

namespace System
{
	public sealed class String
	{
		private int _stringLength;
		internal char _firstChar;

        public static readonly string Empty = "";

		[MethodImpl(MethodImplOptions.InternalCall)]
		public unsafe extern String(char* value);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public extern String(char[] value);

		[MethodImpl(MethodImplOptions.InternalCall)]
		public extern String(char c, int count);

		public unsafe char this[int index]
        {
			get
			{
				fixed (char* _firstCharPtr = &_firstChar)
				{
					return _firstCharPtr[index];
				}
			}
        }

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

		internal static unsafe void FillStringChecked(string dest, int destPos, string src)
		{
			if (src.Length > dest.Length - destPos) throw new IndexOutOfRangeException();
			fixed (char* pDest = &dest._firstChar)
			fixed (char* pSrc = &src._firstChar)
			{
				Buffer.memcpy(pDest + destPos, pSrc, (UIntPtr)(src.Length * sizeof(char)));
			}
		}

		internal static unsafe void FillStringChecked(string dest, int destPos, char src)
		{
			if (1 > dest.Length - destPos) throw new IndexOutOfRangeException();
			fixed (char* pDest = &dest._firstChar)
			{
				pDest[destPos] = src;
			}
		}

		public static unsafe string operator+(string str, char c)
		{
			if (IsNullOrEmpty(str)) return c.ToString();

			int str0Length = str.Length;
			string result = FastAllocateString(str0Length + 1);
			FillStringChecked(result, 0, str);
			fixed (char* resultPtr = &result._firstChar) resultPtr[str0Length] = c;
			return result;
		}

		public static unsafe string operator +(char c, string str)
		{
			if (IsNullOrEmpty(str)) return c.ToString();

			int str0Length = str.Length;
			string result = FastAllocateString(str0Length + 1);
			FillStringChecked(result, 1, str);
			fixed (char* resultPtr = &result._firstChar) resultPtr[0] = c;
			return result;
		}

		public static string Concat(string str0, string str1)
        {
            if (IsNullOrEmpty(str0))
            {
                if (IsNullOrEmpty(str1))
                {
                    return Empty;
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

		public static bool operator==(string value1, string value2)
		{
			return value1.Equals(value2);
		}

		public static bool operator!=(string value1, string value2)
		{
			return !value1.Equals(value2);
		}

		public unsafe bool Equals(string value)
		{
			if (this.Length != value.Length) return false;
			fixed (char* myValuePtr = this)
			fixed (char* valuePtr = value)
			{
				for (int i = 0; i != Length; ++i)
				{
					if (myValuePtr[i] != valuePtr[i]) return false;
				}
			}
			return true;
		}
	}
}
