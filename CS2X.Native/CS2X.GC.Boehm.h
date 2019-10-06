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

void* CS2X_GC_New(size_t size, void* finalizerFuncPtr)
{
	void* ptr = GC_malloc(size);
	if (ptr == 0) exit(-1);
	if (finalizerFuncPtr != 0) GC_register_finalizer(ptr, finalizerFuncPtr, 0, 0, 0);
	return ptr;
}

void* CS2X_GC_NewAtomic(size_t size, void* finalizerFuncPtr)
{
	void* ptr = GC_malloc_atomic(size);
	if (ptr == 0) exit(-1);
	if (finalizerFuncPtr != 0) GC_register_finalizer(ptr, finalizerFuncPtr, 0, 0, 0);
	return ptr;
}

void* CS2X_GC_Resize(void* object, size_t oldSize, size_t newSize)
{
	char* ptr = GC_realloc(object, newSize);
	if (ptr == 0) exit(-1);
	//size_t sizeDiff = newSize - oldSize;// GC_realloc will null memory ??
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