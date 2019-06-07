#pragma once
#include "..\3rdParty\Boehm.GC\include\gc.h"
#include "CS2X.GC.Common.h"

void CS2X_GC_Init()
{
	GC_INIT();
}

void CS2X_GC_Collect()
{
	GC_gcollect();
}

void* CS2X_GC_New(size_t size)
{
	void* ptr = GC_malloc(size);
	if (ptr == 0) exit(-1);
	//memset(ptr, 0, size);// GC_malloc will null memory
	return ptr;
}

void* CS2X_GC_NewAtomic(size_t size)
{
	void* ptr = GC_malloc_atomic(size);
	if (ptr == 0) exit(-1);
	//memset(ptr, 0, size);// GC_malloc will null memory
	return ptr;
}

void* CS2X_GC_NewArray(size_t elementSize, size_t length)
{
	void* ptr = CS2X_GC_New(sizeof(size_t) + (elementSize * length));
	if (ptr == 0) exit(-1);
	*((size_t*)ptr) = length;
	return ptr;
}

void* CS2X_GC_NewArrayAtomic(size_t elementSize, size_t length)
{
	void* ptr = CS2X_GC_NewAtomic(sizeof(size_t) + (elementSize * length));
	if (ptr == 0) exit(-1);
	*((size_t*)ptr) = length;
	return ptr;
}

void* CS2X_GC_NewArrayHeader(size_t elementSize, size_t length)
{
	// TODO: GC settings needed!
	size_t* ptr = CS2X_GC_NewArray(elementSize, length);
	return ++ptr;
}

void* CS2X_GC_NewArrayAtomicHeader(size_t elementSize, size_t length)
{
	// TODO: GC settings needed!
	size_t* ptr = CS2X_GC_NewArrayAtomic(elementSize, length);
	return ++ptr;
}

void* CS2X_GC_Resize(void* object, size_t oldSize, size_t newSize)
{
	char* ptr = GC_realloc(object, newSize);
	if (ptr == 0) exit(-1);
	//size_t sizeDiff = newSize - oldSize;// GC_malloc will null memory ??
	//if (sizeDiff > 0) memset(ptr + oldSize, 0, sizeDiff);
	return ptr;
}

void CS2X_GC_Delete(void* object)
{
	GC_free(object);
}

void CS2X_GC_DisableAutoCollections()
{
	/* boehm doesn't support this (do nothing...) */
}

void CS2X_GC_EnableAutoCollections()
{
	/* boehm doesn't support this (do nothing...) */
}