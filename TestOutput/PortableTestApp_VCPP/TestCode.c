#include <stdint.h>

uint32_t MyInternalExtern(uint32_t value)
{
	return value;
}

__declspec(dllexport) intptr_t GetFuncPtr()
{
	return &MyInternalExtern;
}

__declspec(dllexport) void InvokeDelegateFuncPtr(intptr_t delegateFuncPtr, intptr_t delegateThisPtr)
{
	((void (*)(intptr_t))delegateFuncPtr)(delegateThisPtr);
}