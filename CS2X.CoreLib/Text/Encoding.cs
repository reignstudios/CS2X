using CS2X;

namespace System.Text
{
	public abstract class Encoding
	{
		public static Encoding Default { get; }
		public static Encoding ASCII { get; }
		public static Encoding UTF7 { get; }
		public static Encoding UTF8 { get; }
		public static Encoding Unicode { get; }
		public static Encoding BigEndianUnicode { get; }
		public static Encoding UTF32 { get; }

		public int CodePage { get; protected set; }

		[NativeExtern(NativeTarget.C)]
		private static extern uint GetACP();

		[NativeExtern(NativeTarget.C)]
		internal unsafe static extern int WideCharToMultiByte(uint CodePage, uint dwFlags, char* lpWideCharStr, int cchWideChar, byte* lpMultiByteStr, int cbMultiByte, byte* lpDefaultChar, int* lpUsedDefaultChar);

		[NativeExtern(NativeTarget.C)] 
		internal unsafe static extern void MultiByteToWideChar(uint CodePage, uint dwFlags, byte* lpMultiByteStr, int cbMultiByte, char* lpWideCharStr, int cchWideChar);

		static Encoding()
		{
			Default = new StandardEncoding();
			Default.CodePage = (int)GetACP();

			ASCII = new StandardEncoding();
			ASCII.CodePage = 20127;

			UTF7 = new StandardEncoding();
			UTF7.CodePage = 65000;

			UTF8 = new StandardEncoding();
			UTF8.CodePage = 65001;

			Unicode = new StandardEncoding();
			Unicode.CodePage = 1200;

			BigEndianUnicode = new StandardEncoding();
			BigEndianUnicode.CodePage = 1201;

			UTF32 = new StandardEncoding();
			UTF32.CodePage = 12000;

			//UINT codePage = GetACP();
			//CP_UTF8
			////char buffer[256] = { 0 };
			//char* buffer = 0;
			//wchar_t* value = L"に";
			////iconv_t cd = iconv_open("WCHAR_T", "UTF-8");
			//int bufferSize = WideCharToMultiByte(codePage, 0, value, -1, 0, 0, 0, 0);
			//buffer = malloc(bufferSize);
			//WideCharToMultiByte(codePage, 0, value, -1, buffer, bufferSize, 0, 0);

			//wchar_t value2[256] = { 0 };
			//int valueSize = MultiByteToWideChar(codePage, 0, buffer, bufferSize, value2, 256);
		}

		#region GetByteCount
		public int GetByteCount(char[] chars)
		{
			return 0;
		}

		public int GetByteCount(string s)
		{
			return 0;
		}

		public int GetByteCount(char[] chars, int index, int count)
		{
			return 0;
		}

		public unsafe int GetByteCount(char* chars, int count)
		{
			return 0;
		}
		#endregion

		#region GetBytes
		//public byte[] GetBytes(char[] chars);
		//public byte[] GetBytes(char[] chars, int index, int count);
		//public int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex);
		//public int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex);
		//public unsafe int GetBytes(char* chars, int charCount, byte* bytes, int byteCount);
		public unsafe byte[] GetBytes(string s)
		{
			fixed (char* sBuffer = &s._firstChar)
			{
				uint codePage = (uint)CodePage;
				int bufferSize = WideCharToMultiByte(codePage, 0, sBuffer, -1, null, 0, null, null);
				var buffer = new byte[bufferSize];
				fixed (byte* bufferPtr = buffer) WideCharToMultiByte(codePage, 0, sBuffer, -1, bufferPtr, bufferSize, null, null);
				return buffer;
			}
		}
		#endregion

		#region GetCharCount
		//public int GetCharCount(byte[] bytes);
		//public int GetCharCount(byte[] bytes, int index, int count);
		//public unsafe int GetCharCount(byte* bytes, int count);
		#endregion

		#region GetChars
		//public unsafe int GetChars(byte* bytes, int byteCount, char* chars, int charCount);
		//public char[] GetChars(byte[] bytes);
		//public char[] GetChars(byte[] bytes, int index, int count);
		//public int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex);
		#endregion

		#region GetString
		public string GetString(byte[] bytes)
		{
			return GetString(bytes, 0, bytes.Length);
		}

		public string GetString(byte[] bytes, int index, int count)
		{
			return null;
		}
		#endregion
	}
}
