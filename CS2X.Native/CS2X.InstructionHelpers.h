#pragma once
#include <limits.h>
#include <setjmp.h>
#include <process.h>

#ifdef _WIN32
#include <windows.h>
#endif

// ================================
// REF BACKUP: for try/catch/finally
// ================================
/*#include <iostream>
#include <setjmp.h>
#include <limits.h>
#include <windows.h>
#include <process.h>

__declspec(thread) jmp_buf IL2X_CurrentThreadExceptionBuff;

#define TRY(jmp, jmpLast, e) \
	memcpy(jmpLast, IL2X_CurrentThreadExceptionBuff, sizeof(jmp_buf)); \
	e = setjmp(jmp); \
	if (e == 0) { memcpy(IL2X_CurrentThreadExceptionBuff, jmp, sizeof(jmp_buf));

#define CATCH_START(e) } switch(e) {
#define CATCH(x, jmpLast) break; case x: memcpy(IL2X_CurrentThreadExceptionBuff, jmpLast, sizeof(jmp_buf));
#define FINALLY(jmpLast, e) break; \
	default: memcpy(IL2X_CurrentThreadExceptionBuff, jmpLast, sizeof(jmp_buf)); \
	if (e != 0) longjmp(jmpLast, e);

#define TRY_END break; }
#define THROW(x) longjmp(IL2X_CurrentThreadExceptionBuff, x)




#define EXCEPTION (1)
#define NOT_IMPLEMENTED_EXCEPTION (2)

void Foo()
{
	THROW(NOT_IMPLEMENTED_EXCEPTION);
}

bool done[2] = { 0 };
void TestThread(void* args)
{
	jmp_buf IL2X_UnhandledThreadExceptionBuff;
	int result = setjmp(IL2X_UnhandledThreadExceptionBuff);
	if (result != 0)
	{
		printf("Unhandled Exception Caught: %d\n", result);
		return;// exit(result);
	}
	else
	{
		memcpy(IL2X_CurrentThreadExceptionBuff, IL2X_UnhandledThreadExceptionBuff, sizeof(jmp_buf));
	}

	jmp_buf IL2X_LOCAL_JMP_0, IL2X_LOCAL_JMP_LAST_0;
	int e_0;
	TRY(IL2X_LOCAL_JMP_0, IL2X_LOCAL_JMP_LAST_0, e_0)
	{
		jmp_buf IL2X_LOCAL_JMP_1, IL2X_LOCAL_JMP_LAST_1;
		int e_1;
		TRY(IL2X_LOCAL_JMP_1, IL2X_LOCAL_JMP_LAST_1, e_1)
		{
			printf("Start\n");
			Foo();
			printf("End\n");
		}
		CATCH_START(e_1)
		CATCH(NOT_IMPLEMENTED_EXCEPTION, IL2X_LOCAL_JMP_LAST_1)
		{
			printf("Catch: NOT_IMPLEMENTED_EXCEPTION\n");
			//THROW(EXCEPTION);
			Sleep(100);
		}
		CATCH(EXCEPTION, IL2X_LOCAL_JMP_LAST_1)
		{
			printf("Catch: EXCEPTION\n");
		}
		TRY_END
	}
	CATCH_START(e_0)
	FINALLY(IL2X_LOCAL_JMP_LAST_0, e_0)
	{
		printf("FINALLY\n");
	}
	TRY_END

	//THROW(EXCEPTION);
	int threadIndex = (int)args;
	done[threadIndex] = true;
}

void main()
{
	uintptr_t threadID = _beginthread(TestThread, 0, (void*)0);
	uintptr_t threadID2 = _beginthread(TestThread, 0, (void*)1);
	while (!done[0] || !done[1]) Sleep(1);
}*/


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
/* C99 Exception helpers */
/* ====================================== */
__declspec(thread) jmp_buf CS2X_ThreadExceptionJmpBuff;
__declspec(thread) void* CS2X_ThreadExceptionObject;

/*#define IL2X_TRY(jmp, jmpLast, i) \
	memcpy(jmpLast, IL2X_ThreadExceptionJmpBuff, sizeof(jmp_buf)); \
	i = setjmp(jmp); \
	if (i == 0) { memcpy(IL2X_ThreadExceptionJmpBuff, jmp, sizeof(jmp_buf));

#define IL2X_CATCH_START } else {
#define IL2X_CATCH(jmpLast) { memcpy(IL2X_ThreadExceptionJmpBuff, jmpLast, sizeof(jmp_buf));
#define IL2X_FINALLY(jmpLast) { memcpy(IL2X_ThreadExceptionJmpBuff, jmpLast, sizeof(jmp_buf));
#define IL2X_CATCH_END }

#define IL2X_TRY_END } if (IL2X_ThreadExceptionObject != 0) longjmp(IL2X_ThreadExceptionJmpBuff, 1);
#define IL2X_THROW(e) IL2X_ThreadExceptionObject = e; longjmp(IL2X_ThreadExceptionJmpBuff, 1)*/

/* ====================================== */
/* overflow helpers */
/* ====================================== */
char CS2X_AddOvf_Int32(int a, int b, int* result)
{
	if (a > INT_MAX - b)
	{
		return 0;
	}
	else
	{
		*result = a + b;
		return 1;
	}
}