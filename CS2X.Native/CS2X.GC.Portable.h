#pragma once
#include "CS2X.GC.Common.h"

void CS2X_GC_Init()
{
	// TODO
}

void CS2X_GC_Collect()
{
	// TODO
}

void* CS2X_GC_New(size_t size)
{
	// TODO
	void* ptr = malloc(size);
	if (ptr == 0) exit(-1);
	memset(ptr, 0, size);
	return ptr;
}

void* CS2X_GC_NewAtomic(size_t size)
{
	// TODO
	void* ptr = malloc(size);
	if (ptr == 0) exit(-1);
	memset(ptr, 0, size);
	return ptr;
}

void* CS2X_GC_NewArray(size_t elementSize, size_t length)
{
	void* ptr = CS2X_GC_New(sizeof(size_t) + (elementSize * length));
	*((size_t*)ptr) = length;
	return ptr;
}

void* CS2X_GC_NewArrayAtomic(size_t elementSize, size_t length)
{
	void* ptr = CS2X_GC_NewAtomic(sizeof(size_t) + (elementSize * length));
	*((size_t*)ptr) = length;
	return ptr;
}

void* CS2X_GC_NewArrayHeader(size_t elementSize, size_t length)
{
	size_t* ptr = CS2X_GC_NewArray(elementSize, length);
	return ++ptr;
}

void* CS2X_GC_NewArrayAtomicHeader(size_t elementSize, size_t length)
{
	size_t* ptr = CS2X_GC_NewArrayAtomic(elementSize, length);
	return ++ptr;
}

/*void* CS2X_GC_NewArray(size_t elementSize, size_t length)
{
	// TODO
	size_t size = sizeof(size_t) + (elementSize * length);
	void* ptr = malloc(size);
	if (ptr == 0) exit(-1);
	memset(ptr, 0, size);
	*((size_t*)ptr) = length;
	return ptr;
}

void* CS2X_GC_NewArrayAtomic(size_t elementSize, size_t length)
{
	// TODO
	size_t size = sizeof(size_t) + (elementSize * length);
	void* ptr = malloc(size);
	if (ptr == 0) exit(-1);
	memset(ptr, 0, size);
	*((size_t*)ptr) = length;
	return ptr;
}*/

void* CS2X_GC_Resize(void* object, size_t oldSize, size_t newSize)
{
	// TODO
	void* ptr = realloc(object, newSize);
	if (ptr == 0) exit(-1);
	size_t sizeDiff = newSize - oldSize;// GC_malloc will null memory ??
	if (sizeDiff > 0) memset((char*)ptr + oldSize, 0, sizeDiff);
	return ptr;
}

void CS2X_GC_Delete(void* object)
{
	// TODO
	free(object);
}