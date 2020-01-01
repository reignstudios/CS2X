#pragma once
//#include <limits.h>
#include <setjmp.h>
//#include <process.h>

#ifdef _WIN32
#include <windows.h>
#endif

// ================================
// REF BACKUP: utf-16 to utf-32 for posix console writes
// ================================
/*int is_surrogate(char16_t uc) { return (uc - 0xd800u) < 2048u; }
int is_high_surrogate(char16_t uc) { return (uc & 0xfffffc00) == 0xd800; }
int is_low_surrogate(char16_t uc) { return (uc & 0xfffffc00) == 0xdc00; }

char32_t surrogate_to_utf32(char16_t high, char16_t low)
{
	return (high << 10) + low - 0x35fdc00;
}

void convert_utf16_to_utf32(const char16_t *input, size_t input_size, char32_t *output)
{
	const char16_t * const end = input + input_size;
	while (input < end)
	{
		const char16_t uc = *input++;
		if (!is_surrogate(uc))
		{
			*output++ = uc;
		}
		else
		{
			if (is_high_surrogate(uc) && input < end && is_low_surrogate(*input))
			{
				*output++ = surrogate_to_utf32(uc, *input++);
			}
			else
			{
				return;
				//*output++ = U+FFFD;
				// ERROR
			}
		}
	}
}*/

/* ====================================== */
/* Exception helpers */
/* ====================================== */
__declspec(thread) jmp_buf CS2X_ThreadExceptionJmpBuff;
__declspec(thread) void* CS2X_ThreadExceptionObject;

/* ====================================== */
/* Platform Helpers */
/* ====================================== */
void CS2X_DisplayErrorMessage(char* message, char* title)
{
	#ifdef _WIN32
	MessageBoxA(NULL, message, title, MB_OK);
	#else
	printf("%s\n", message);
	#endif
}

void CS2X_DisplayErrorMessageW(wchar_t* message, wchar_t* title)
{
	#ifdef _WIN32
	MessageBoxW(NULL, message, title, MB_OK);
	#else
	wprintf(L"%s\n", message);
	#endif
}