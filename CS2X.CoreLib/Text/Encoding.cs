using CS2X;

// UTF-16 to UCS2 or UTF-32 to UCS4 (legacy wide char formats)
// https://docs.microsoft.com/en-us/dotnet/api/system.string.normalize?view=netframework-4.8
// string.Normalize() then chars can be converted to byte array

// glibc approch
//iconv_t cd = iconv_open("UTF-16", "UTF-8");
// size_t result = iconv(utf16_to_utf8, (char**)&_utf16, &len16, &_utf8, &len8);
// iconv_close(utf16_to_utf8);

// C89/C99 agnostic but limited wchar_t approch
//char local[32];
//memset(local, 0, sizeof(local));
//strcpy(local, setlocale(LC_ALL, ""));// aka getlocale

//char result[256];
//memset(result, 0, sizeof(result));
//wchar_t value[256] = L"Testing•";
//char* foo = setlocale(LC_ALL, "en_US.utf8");
//int bufferSize = wcstombs(result, value, 256);

//wchar_t result2[256];
//memset(result2, 0, sizeof(result2));
//char* foo2 = setlocale(LC_ALL, "en_US.utf16");
//int bufferSize2 = mbstowcs(result2, result, 256);

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
		internal unsafe static extern int MultiByteToWideChar(uint CodePage, uint dwFlags, byte* lpMultiByteStr, int cbMultiByte, char* lpWideCharStr, int cchWideChar);

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
		}

		#region GetByteCount
		public int GetByteCount(char[] chars)
		{
			return GetByteCount(chars, 0, chars.Length);
		}

		public unsafe int GetByteCount(string s)
		{
			fixed (char* sBuffer = &s._firstChar)
			{
				uint codePage = (uint)CodePage;
				return WideCharToMultiByte(codePage, 0, sBuffer, -1, null, 0, null, null);
			}
		}

		public unsafe int GetByteCount(char[] chars, int index, int count)
		{
			fixed (char* charsPtr = chars)
			{
				uint codePage = (uint)CodePage;
				return WideCharToMultiByte(codePage, 0, charsPtr + index, count, null, 0, null, null);
			}
		}

		public unsafe int GetByteCount(char* chars, int count)
		{
			uint codePage = (uint)CodePage;
			return WideCharToMultiByte(codePage, 0, chars, count, null, 0, null, null);
		}
		#endregion

		#region GetBytes
		public byte[] GetBytes(char[] chars)
		{
			return GetBytes(chars, 0, chars.Length);
		}

		public unsafe byte[] GetBytes(char[] chars, int index, int count)
		{
			fixed (char* charsPtr = chars)
			{
				uint codePage = (uint)CodePage;
				int bufferSize = WideCharToMultiByte(codePage, 0, charsPtr, -1, null, 0, null, null);
				var buffer = new byte[bufferSize];
				fixed (byte* bufferPtr = buffer) WideCharToMultiByte(codePage, 0, charsPtr + index, count, bufferPtr, bufferSize, null, null);
				return buffer;
			}
		}

		public unsafe int GetBytes(char[] chars, int charIndex, int charCount, byte[] bytes, int byteIndex)
		{
			fixed (char* charsPtr = chars)
			fixed (byte* bytesPtr = bytes)
			{
				uint codePage = (uint)CodePage;
				return WideCharToMultiByte(codePage, 0, charsPtr + charIndex, charCount, bytesPtr + byteIndex, bytes.Length, null, null);
			}
		}

		public unsafe int GetBytes(string s, int charIndex, int charCount, byte[] bytes, int byteIndex)
		{
			fixed (char* sBuffer = &s._firstChar)
			fixed (byte* bytesPtr = bytes)
			{
				uint codePage = (uint)CodePage;
				return WideCharToMultiByte(codePage, 0, sBuffer + charIndex, charCount, bytesPtr + byteIndex, bytes.Length, null, null);
			}
		}

		public unsafe int GetBytes(char* chars, int charCount, byte* bytes, int byteCount)
		{
			uint codePage = (uint)CodePage;
			return WideCharToMultiByte(codePage, 0, chars, charCount, bytes, byteCount, null, null);
		}

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
		public int GetCharCount(byte[] bytes)
		{
			return GetCharCount(bytes, 0, bytes.Length);
		}

		public unsafe int GetCharCount(byte[] bytes, int index, int count)
		{
			fixed (byte* bytesPtr = bytes)
			{
				uint codePage = (uint)CodePage;
				return MultiByteToWideChar(codePage, 0, bytesPtr + index, count, null, 0);
			}
		}

		public unsafe int GetCharCount(byte* bytes, int count)
		{
			uint codePage = (uint)CodePage;
			return MultiByteToWideChar(codePage, 0, bytes, count, null, 0);
		}
		#endregion

		#region GetChars
		public unsafe int GetChars(byte* bytes, int byteCount, char* chars, int charCount)
		{
			uint codePage = (uint)CodePage;
			return MultiByteToWideChar(codePage, 0, bytes, byteCount, chars, charCount);
		}

		public char[] GetChars(byte[] bytes)
		{
			return GetChars(bytes, 0, bytes.Length);
		}

		public unsafe char[] GetChars(byte[] bytes, int index, int count)
		{
			fixed (byte* bytesPtr = bytes)
			{
				uint codePage = (uint)CodePage;
				int bufferSize = MultiByteToWideChar(codePage, 0, bytesPtr + index, count, null, 0);
				var buffer = new char[bufferSize];
				fixed (char* bufferPtr = buffer) MultiByteToWideChar(codePage, 0, bytesPtr + index, count, bufferPtr, bufferSize);
				return buffer;
			}
		}

		public unsafe int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
		{
			fixed (byte* bytesPtr = bytes)
			fixed (char* charsPtr = chars)
			{
				uint codePage = (uint)CodePage;
				return MultiByteToWideChar(codePage, 0, bytesPtr + byteIndex, byteCount, charsPtr + charIndex, chars.Length);
			}
		}
		#endregion

		#region GetString
		public unsafe string GetString(byte* bytes, int byteCount)
		{
			uint codePage = (uint)CodePage;
			int bufferSize = MultiByteToWideChar(codePage, 0, bytes, byteCount, null, 0);
			char* buffer = stackalloc char[bufferSize + 1];
			MultiByteToWideChar(codePage, 0, bytes, byteCount, buffer, bufferSize);
			buffer[bufferSize] = '\0';
			return new string(buffer);
		}

		public string GetString(byte[] bytes)
		{
			return GetString(bytes, 0, bytes.Length);
		}

		public unsafe string GetString(byte[] bytes, int index, int count)
		{
			fixed (byte* bytesPtr = bytes)
			{
				return GetString(bytesPtr + index, count);
			}
		}
		#endregion
	}
}
