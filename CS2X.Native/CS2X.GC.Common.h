#pragma once
#include <stdlib.h>

#ifdef _WIN32
#include <malloc.h>
#include <windows.h>
#else
#include <alloca.h>
#include <string.h>
#include <wchar.h>
#endif

/* ====================================== */
/* manual allocation methods (non-GC heap) */
/* ====================================== */
void* CS2X_Malloc(size_t size)
{
	void* ptr = malloc(size);
	if (ptr == 0) exit(-1);
	memset(ptr, 0, size);
	return ptr;
}

void CS2X_Delete(void* ptr)
{
	return free(ptr);
}