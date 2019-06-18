#pragma once
#include "CS2X.GC.Common.h"

void CS2X_GC_Init()
{
	// do nothing...
}

void CS2X_GC_Collect()
{
	// do nothing...
}

void* CS2X_GC_New(size_t size)
{
	void* ptr = malloc(size);
	if (ptr == 0) exit(-1);
	memset(ptr, 0, size);
	return ptr;
}

void* CS2X_GC_NewAtomic(size_t size)
{
	void* ptr = malloc(size);
	if (ptr == 0) exit(-1);
	memset(ptr, 0, size);
	return ptr;
}

void* CS2X_GC_Resize(void* object, size_t oldSize, size_t newSize)
{
	void* ptr = realloc(object, newSize);
	if (ptr == 0) exit(-1);
	size_t sizeDiff = newSize - oldSize;
	if (sizeDiff > 0) memset((char*)ptr + oldSize, 0, sizeDiff);
	return ptr;
}

void CS2X_GC_Delete(void* object)
{
	free(object);
}