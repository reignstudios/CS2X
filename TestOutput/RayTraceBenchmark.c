/* ############################### */
/* RayTraceBenchmark */
/* Generated with CS2X v0.0.0 */
/* ############################### */
#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdint.h>
#include <uchar.h>
#include <locale.h>
#include <time.h>
#include "..\CS2X.Native\CS2X.GC.Dumby.h"
#include "..\CS2X.Native\CS2X.InstructionHelpers.h"
#define ArrayOffset (sizeof(intptr_t) + sizeof(size_t))
HINSTANCE CS2X_hInstance = 0;

/* =============================== */
/* String literals */
/* =============================== */
/* Array types don't match */
int8_t StringLiteral_0[60] = {0,0,0,0,0,0,0,0,23,0,0,0,65,0,114,0,114,0,97,0,121,0,32,0,116,0,121,0,112,0,101,0,115,0,32,0,100,0,111,0,110,0,39,0,116,0,32,0,109,0,97,0,116,0,99,0,104,0,0,0};
/* sourceIndex out of range */
int8_t StringLiteral_1[62] = {0,0,0,0,0,0,0,0,24,0,0,0,115,0,111,0,117,0,114,0,99,0,101,0,73,0,110,0,100,0,101,0,120,0,32,0,111,0,117,0,116,0,32,0,111,0,102,0,32,0,114,0,97,0,110,0,103,0,101,0,0,0};
/* destinationIndex out of range */
int8_t StringLiteral_2[72] = {0,0,0,0,0,0,0,0,29,0,0,0,100,0,101,0,115,0,116,0,105,0,110,0,97,0,116,0,105,0,111,0,110,0,73,0,110,0,100,0,101,0,120,0,32,0,111,0,117,0,116,0,32,0,111,0,102,0,32,0,114,0,97,0,110,0,103,0,101,0,0,0};
/* /r/n */
int8_t StringLiteral_3[18] = {0,0,0,0,0,0,0,0,2,0,0,0,13,0,10,0,0,0};
/*  */
int8_t StringLiteral_4[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
/* File already exists */
int8_t StringLiteral_5[52] = {0,0,0,0,0,0,0,0,19,0,0,0,70,0,105,0,108,0,101,0,32,0,97,0,108,0,114,0,101,0,97,0,100,0,121,0,32,0,101,0,120,0,105,0,115,0,116,0,115,0,0,0};
/* Failed to create file */
int8_t StringLiteral_6[56] = {0,0,0,0,0,0,0,0,21,0,0,0,70,0,97,0,105,0,108,0,101,0,100,0,32,0,116,0,111,0,32,0,99,0,114,0,101,0,97,0,116,0,101,0,32,0,102,0,105,0,108,0,101,0,0,0};
/* File doesn't exists */
int8_t StringLiteral_7[52] = {0,0,0,0,0,0,0,0,19,0,0,0,70,0,105,0,108,0,101,0,32,0,100,0,111,0,101,0,115,0,110,0,39,0,116,0,32,0,101,0,120,0,105,0,115,0,116,0,115,0,0,0};
/* Access error */
int8_t StringLiteral_8[38] = {0,0,0,0,0,0,0,0,12,0,0,0,65,0,99,0,99,0,101,0,115,0,115,0,32,0,101,0,114,0,114,0,111,0,114,0,0,0};
/* Give the system a little time... */
int8_t StringLiteral_9[78] = {0,0,0,0,0,0,0,0,32,0,0,0,71,0,105,0,118,0,101,0,32,0,116,0,104,0,101,0,32,0,115,0,121,0,115,0,116,0,101,0,109,0,32,0,97,0,32,0,108,0,105,0,116,0,116,0,108,0,101,0,32,0,116,0,105,0,109,0,101,0,46,0,46,0,46,0,0,0};
/* Starting test... */
int8_t StringLiteral_10[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,116,0,97,0,114,0,116,0,105,0,110,0,103,0,32,0,116,0,101,0,115,0,116,0,46,0,46,0,46,0,0,0};

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t2_RayTraceBenchmark_Vec3 t2_RayTraceBenchmark_Vec3;
typedef struct t2_RayTraceBenchmark_Sphere t2_RayTraceBenchmark_Sphere;
typedef struct t2_RayTraceBenchmark_Light t2_RayTraceBenchmark_Light;
typedef struct t2_RayTraceBenchmark_Scene t2_RayTraceBenchmark_Scene;
typedef struct t2_RayTraceBenchmark_Benchmark t2_RayTraceBenchmark_Benchmark;
typedef struct t2_RayTraceBenchmark_BenchmarkMain t2_RayTraceBenchmark_BenchmarkMain;
typedef struct t2_RayTraceBenchmark_Ray t2_RayTraceBenchmark_Ray;
typedef struct t2_System_Activator t2_System_Activator;
typedef struct t2_System_ArgumentException t2_System_ArgumentException;
typedef struct t2_System_ArgumentOutOfRangeException t2_System_ArgumentOutOfRangeException;
typedef struct t2_System_Array t2_System_Array;
typedef struct t2_System_Attribute t2_System_Attribute;
typedef int32_t t2_System_AttributeTargets;
typedef struct t2_System_AttributeUsageAttribute t2_System_AttributeUsageAttribute;
typedef struct t2_System_BitConverter t2_System_BitConverter;
typedef struct t2_System_Buffer t2_System_Buffer;
typedef struct t2_System_Console t2_System_Console;
typedef struct t2_System_Delegate t2_System_Delegate;
typedef struct t2_System_DllNotFoundException t2_System_DllNotFoundException;
typedef struct t2_System_Enum t2_System_Enum;
typedef struct t2_System_Environment t2_System_Environment;
typedef struct t2_System_EqualityComparer t2_System_EqualityComparer;
typedef struct t2_System_Exception t2_System_Exception;
typedef struct t2_System_FlagsAttribute t2_System_FlagsAttribute;
typedef struct t2_System_GC t2_System_GC;
typedef struct t2_System_IndexOutOfRangeException t2_System_IndexOutOfRangeException;
typedef struct t2_System_InvalidCastException t2_System_InvalidCastException;
typedef struct t2_System_Math t2_System_Math;
typedef struct t2_System_MathF t2_System_MathF;
typedef struct t2_System_MulticastDelegate t2_System_MulticastDelegate;
typedef struct t2_System_NotImplementedException t2_System_NotImplementedException;
typedef struct t2_System_NotSupportedException t2_System_NotSupportedException;
typedef struct t2_System_Number t2_System_Number;
typedef struct t2_System_Object t2_System_Object;
typedef struct t2_System_ObsoleteAttribute t2_System_ObsoleteAttribute;
typedef struct t2_System_Random t2_System_Random;
typedef struct t2_System_RuntimeType t2_System_RuntimeType;
typedef struct t2_System_String t2_System_String;
typedef struct t2_System_ThrowArgumentNullException t2_System_ThrowArgumentNullException;
typedef struct t2_System_Type t2_System_Type;
typedef struct t2_System_ValueType t2_System_ValueType;
typedef int32_t t4_System_Collections_ObjectModel_ReadOnlyCollectionType;
typedef struct t3_System_Diagnostics_Debug t3_System_Diagnostics_Debug;
typedef struct t3_System_IO_File t3_System_IO_File;
typedef struct t3_System_IO_FileNotFoundException t3_System_IO_FileNotFoundException;
typedef struct t3_System_IO_FileStream t3_System_IO_FileStream;
typedef struct t3_System_IO_IOException t3_System_IO_IOException;
typedef struct t3_System_IO_Path t3_System_IO_Path;
typedef struct t3_System_IO_Stream t3_System_IO_Stream;
typedef struct t3_System_Reflection_AssemblyCompanyAttribute t3_System_Reflection_AssemblyCompanyAttribute;
typedef struct t3_System_Reflection_AssemblyConfigurationAttribute t3_System_Reflection_AssemblyConfigurationAttribute;
typedef struct t3_System_Reflection_AssemblyCopyrightAttribute t3_System_Reflection_AssemblyCopyrightAttribute;
typedef struct t3_System_Reflection_AssemblyCultureAttribute t3_System_Reflection_AssemblyCultureAttribute;
typedef struct t3_System_Reflection_AssemblyDelaySignAttribute t3_System_Reflection_AssemblyDelaySignAttribute;
typedef struct t3_System_Reflection_AssemblyDescriptionAttribute t3_System_Reflection_AssemblyDescriptionAttribute;
typedef struct t3_System_Reflection_AssemblyFileVersionAttribute t3_System_Reflection_AssemblyFileVersionAttribute;
typedef struct t3_System_Reflection_AssemblyInformationalVersionAttribute t3_System_Reflection_AssemblyInformationalVersionAttribute;
typedef struct t3_System_Reflection_AssemblyKeyFileAttribute t3_System_Reflection_AssemblyKeyFileAttribute;
typedef struct t3_System_Reflection_AssemblyProductAttribute t3_System_Reflection_AssemblyProductAttribute;
typedef struct t3_System_Reflection_AssemblyTitleAttribute t3_System_Reflection_AssemblyTitleAttribute;
typedef struct t3_System_Reflection_AssemblyTrademarkAttribute t3_System_Reflection_AssemblyTrademarkAttribute;
typedef struct t3_System_Reflection_AssemblyVersionAttribute t3_System_Reflection_AssemblyVersionAttribute;
typedef struct t3_System_Reflection_DefaultMemberAttribute t3_System_Reflection_DefaultMemberAttribute;
typedef struct t4_System_Runtime_CompilerServices_ExtensionAttribute t4_System_Runtime_CompilerServices_ExtensionAttribute;
typedef int32_t t4_System_Runtime_CompilerServices_MethodImplOptions;
typedef struct t4_System_Runtime_CompilerServices_MethodImplAttribute t4_System_Runtime_CompilerServices_MethodImplAttribute;
typedef struct t4_System_Runtime_CompilerServices_RuntimeHelpers t4_System_Runtime_CompilerServices_RuntimeHelpers;
typedef int32_t t4_System_Runtime_InteropServices_CallingConvention;
typedef struct t4_System_Runtime_InteropServices_DllImportAttribute t4_System_Runtime_InteropServices_DllImportAttribute;
typedef struct t4_System_Runtime_InteropServices_Marshal t4_System_Runtime_InteropServices_Marshal;
typedef struct t4_System_Runtime_InteropServices_OutAttribute t4_System_Runtime_InteropServices_OutAttribute;
typedef int32_t t4_System_Runtime_InteropServices_LayoutKind;
typedef struct t4_System_Runtime_InteropServices_StructLayoutAttribute t4_System_Runtime_InteropServices_StructLayoutAttribute;
typedef struct t4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute t4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute;
typedef struct t4_System_Runtime_Versioning_TargetFrameworkAttribute t4_System_Runtime_Versioning_TargetFrameworkAttribute;
typedef struct t3_System_Text_Encoding t3_System_Text_Encoding;
typedef struct t3_System_Text_StandardEncoding t3_System_Text_StandardEncoding;
typedef struct t3_System_Text_StringBuilder t3_System_Text_StringBuilder;
typedef struct t3_System_Threading_Thread t3_System_Threading_Thread;
typedef int32_t t2_CS2X_NativeStringType;
typedef struct t2_CS2X_NativeStringParamAttribute t2_CS2X_NativeStringParamAttribute;
typedef struct t2_System_DateTime t2_System_DateTime;
typedef struct t2_System_Guid t2_System_Guid;
typedef struct t2_System_RuntimeTypeHandle t2_System_RuntimeTypeHandle;
typedef int32_t t3_System_IO_FileAccess;
typedef int32_t t3_System_IO_FileMode;
typedef int32_t t3_System_IO_FileShare;
typedef int32_t t3_System_Reflection_MethodImplAttributes;
typedef int32_t t4_System_Runtime_InteropServices_UnmanagedType;

/* =============================== */
/* Type definitions */
/* =============================== */
float f_float_MaxValue;
float f_float_MinValue;
float f_float_Epsilon;
float f_float_PositiveInfinity;
float f_float_NegativeInfinity;
float f_float_NaN;

struct t2_RayTraceBenchmark_Vec3
{
	float f_X_2;
	float f_Y_2;
	float f_Z_2;
};
t2_RayTraceBenchmark_Vec3 f_RayTraceBenchmark_Vec3_Zero;

struct t2_RayTraceBenchmark_Sphere
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_RayTraceBenchmark_Vec3 f_Center_1;
	float f_Radius_1;
	t2_RayTraceBenchmark_Vec3 f_Color_1;
	float f_Reflection_1;
	float f_Transparency_1;
};

struct t2_RayTraceBenchmark_Light
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_RayTraceBenchmark_Vec3 f_Position_1;
	t2_RayTraceBenchmark_Vec3 f_Color_1;
};

struct t2_RayTraceBenchmark_Scene
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_RayTraceBenchmark_Sphere** f_Objects_1;
	t2_RayTraceBenchmark_Light** f_Lights_1;
};

int32_t f_int32_t_MaxValue;
int32_t f_int32_t_MinValue;

struct t2_RayTraceBenchmark_Benchmark
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
int32_t f_RayTraceBenchmark_Benchmark_Width;
int32_t f_RayTraceBenchmark_Benchmark_Height;
float f_RayTraceBenchmark_Benchmark_fov;
float f_RayTraceBenchmark_Benchmark_PI;
int32_t f_RayTraceBenchmark_Benchmark_maxDepth;

struct t2_RayTraceBenchmark_BenchmarkMain
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
t2_System_String* f_RayTraceBenchmark_BenchmarkMain_TimeToComplete;

struct t2_RayTraceBenchmark_Ray
{
	t2_RayTraceBenchmark_Vec3 f_Org_2;
	t2_RayTraceBenchmark_Vec3 f_Dir_2;
};

struct t2_System_Activator
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_ArgumentException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_ArgumentOutOfRangeException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_Array
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_Attribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};


#define f_System_AttributeTargets_Assembly 1
#define f_System_AttributeTargets_Module 2
#define f_System_AttributeTargets_Class 4
#define f_System_AttributeTargets_Struct 8
#define f_System_AttributeTargets_Enum 16
#define f_System_AttributeTargets_Constructor 32
#define f_System_AttributeTargets_Method 64
#define f_System_AttributeTargets_Property 128
#define f_System_AttributeTargets_Field 256
#define f_System_AttributeTargets_Event 512
#define f_System_AttributeTargets_Interface 1024
#define f_System_AttributeTargets_Parameter 2048
#define f_System_AttributeTargets_Delegate 4096
#define f_System_AttributeTargets_ReturnValue 8192
#define f_System_AttributeTargets_GenericParameter 16384
#define f_System_AttributeTargets_All 32767

struct t2_System_AttributeUsageAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_AttributeTargets f__attributeTarget_2;
	char f__AllowMultiple_k__BackingField_2;
	char f__Inherited_k__BackingField_2;
};

struct t2_System_BitConverter
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_Buffer
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_Console
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};


struct t2_System_Delegate
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t2_System_Object* f__target_1;
};

struct t2_System_DllNotFoundException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_Enum
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_Environment
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_EqualityComparer
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_Exception
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_FlagsAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_GC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_IndexOutOfRangeException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_InvalidCastException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

double f_double_MaxValue;
double f_double_MinValue;
double f_double_Epsilon;
double f_double_NegativeInfinity;
double f_double_PositiveInfinity;
double f_double_NaN;

struct t2_System_Math
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
double f_System_Math_E;
double f_System_Math_PI;

struct t2_System_MathF
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
float f_System_MathF_E;
float f_System_MathF_PI;

struct t2_System_MulticastDelegate
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t2_System_Object* f__target_1;
	t2_System_MulticastDelegate* f__next_2;
};

struct t2_System_NotImplementedException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_NotSupportedException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_Number
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
int32_t f_System_Number_Int8NumberBufferLength;
int32_t f_System_Number_Int16NumberBufferLength;
int32_t f_System_Number_Int32NumberBufferLength;
int32_t f_System_Number_Int64NumberBufferLength;
int32_t f_System_Number_UInt8NumberBufferLength;
int32_t f_System_Number_UInt16NumberBufferLength;
int32_t f_System_Number_UInt32NumberBufferLength;
int32_t f_System_Number_UInt64NumberBufferLength;
int32_t f_System_Number_SingleNumberBufferLength;
int32_t f_System_Number_DoubleNumberBufferLength;

struct t2_System_Object
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t2_System_ObsoleteAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	char f__error_2;
	t2_System_String* f__message_2;
};

uint32_t f_uint32_t_MaxValue;
uint32_t f_uint32_t_MinValue;

struct t2_System_Random
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	uint32_t f_seed_1;
};
uint32_t f_System_Random_rand_max;

struct t2_System_RuntimeType
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_Type* f__BaseType_k__BackingField_1;
	t2_System_String* f__Name_k__BackingField_1;
	t2_System_String* f__FullName_k__BackingField_1;
};

char16_t f_char16_t_MaxValue;
char16_t f_char16_t_MinValue;

struct t2_System_String
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__stringLength_1;
	char16_t f__firstChar_1;
};
t2_System_String* f_System_String_Empty;

struct t2_System_ThrowArgumentNullException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t2_System_Type
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_Type* f__BaseType_k__BackingField_1;
	t2_System_String* f__Name_k__BackingField_1;
	t2_System_String* f__FullName_k__BackingField_1;
};

struct t2_System_ValueType
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

#define f_System_Collections_ObjectModel_ReadOnlyCollectionType_Array 0
#define f_System_Collections_ObjectModel_ReadOnlyCollectionType_List 1

struct t3_System_Diagnostics_Debug
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_System_IO_File
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_System_IO_FileNotFoundException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t3_System_IO_FileStream
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f_stream_2;
};

struct t3_System_IO_IOException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t3_System_IO_Path
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
char16_t f_System_IO_Path_DirectorySeparatorChar;

struct t3_System_IO_Stream
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_System_Reflection_AssemblyCompanyAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__company_2;
};

struct t3_System_Reflection_AssemblyConfigurationAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__configuration_2;
};

struct t3_System_Reflection_AssemblyCopyrightAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__copyright_2;
};

struct t3_System_Reflection_AssemblyCultureAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__culture_2;
};

struct t3_System_Reflection_AssemblyDelaySignAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	char f__delaySign_2;
};

struct t3_System_Reflection_AssemblyDescriptionAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__description_2;
};

struct t3_System_Reflection_AssemblyFileVersionAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__version_2;
};

struct t3_System_Reflection_AssemblyInformationalVersionAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__informationalVersion_2;
};

struct t3_System_Reflection_AssemblyKeyFileAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__keyFile_2;
};

struct t3_System_Reflection_AssemblyProductAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__product_2;
};

struct t3_System_Reflection_AssemblyTitleAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__title_2;
};

struct t3_System_Reflection_AssemblyTrademarkAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__trademark_2;
};

struct t3_System_Reflection_AssemblyVersionAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__version_2;
};

struct t3_System_Reflection_DefaultMemberAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__memberName_2;
};

struct t4_System_Runtime_CompilerServices_ExtensionAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

#define f_System_Runtime_CompilerServices_MethodImplOptions_Unmanaged 4
#define f_System_Runtime_CompilerServices_MethodImplOptions_NoInlining 8
#define f_System_Runtime_CompilerServices_MethodImplOptions_ForwardRef 16
#define f_System_Runtime_CompilerServices_MethodImplOptions_Synchronized 32
#define f_System_Runtime_CompilerServices_MethodImplOptions_NoOptimization 64
#define f_System_Runtime_CompilerServices_MethodImplOptions_PreserveSig 128
#define f_System_Runtime_CompilerServices_MethodImplOptions_AggressiveInlining 256
#define f_System_Runtime_CompilerServices_MethodImplOptions_AggressiveOptimization 512
#define f_System_Runtime_CompilerServices_MethodImplOptions_InternalCall 4096

struct t4_System_Runtime_CompilerServices_MethodImplAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t4_System_Runtime_CompilerServices_MethodImplOptions f__Value_k__BackingField_2;
};

struct t4_System_Runtime_CompilerServices_RuntimeHelpers
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

#define f_System_Runtime_InteropServices_CallingConvention_Cdecl 2
#define f_System_Runtime_InteropServices_CallingConvention_StdCall 3
#define f_System_Runtime_InteropServices_CallingConvention_ThisCall 4
#define f_System_Runtime_InteropServices_CallingConvention_FastCall 5

struct t4_System_Runtime_InteropServices_DllImportAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Value_k__BackingField_2;
	t2_System_String* f_EntryPoint_2;
	t4_System_Runtime_InteropServices_CallingConvention f_CallingConvention_2;
};

struct t4_System_Runtime_InteropServices_Marshal
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t4_System_Runtime_InteropServices_OutAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

#define f_System_Runtime_InteropServices_LayoutKind_Sequential 0
#define f_System_Runtime_InteropServices_LayoutKind_Explicit 2
#define f_System_Runtime_InteropServices_LayoutKind_Auto 3

struct t4_System_Runtime_InteropServices_StructLayoutAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t4_System_Runtime_InteropServices_LayoutKind f__Value_k__BackingField_2;
	int32_t f_Pack_2;
	int32_t f_Size_2;
};

struct t4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t4_System_Runtime_InteropServices_CallingConvention f__CallingConvention_k__BackingField_2;
};

struct t4_System_Runtime_Versioning_TargetFrameworkAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__FrameworkDisplayName_k__BackingField_2;
	t2_System_String* f__FrameworkName_k__BackingField_2;
};

struct t3_System_Text_Encoding
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__CodePage_k__BackingField_1;
};
t3_System_Text_Encoding* f_System_Text_Encoding__Default_k__BackingField;
t3_System_Text_Encoding* f_System_Text_Encoding__ASCII_k__BackingField;
t3_System_Text_Encoding* f_System_Text_Encoding__UTF7_k__BackingField;
t3_System_Text_Encoding* f_System_Text_Encoding__UTF8_k__BackingField;
t3_System_Text_Encoding* f_System_Text_Encoding__Unicode_k__BackingField;
t3_System_Text_Encoding* f_System_Text_Encoding__BigEndianUnicode_k__BackingField;
t3_System_Text_Encoding* f_System_Text_Encoding__UTF32_k__BackingField;

struct t3_System_Text_StandardEncoding
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__CodePage_k__BackingField_1;
};

struct t3_System_Text_StringBuilder
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__stringLength_1;
	char16_t f__firstChar_1;
};

struct t3_System_Threading_Thread
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

#define f_CS2X_NativeStringType_Char 0
#define f_CS2X_NativeStringType_WideChar 1

struct t2_CS2X_NativeStringParamAttribute
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_CS2X_NativeStringType f_type_2;
};

uint8_t f_uint8_t_MaxValue;
uint8_t f_uint8_t_MinValue;

struct t2_System_DateTime
{
	intptr_t f__internalDate_2;
};

struct t2_System_Guid
{
	uint8_t f_data_2[16];
};
t2_System_Random* f_System_Guid_random;
t2_System_Guid f_System_Guid_Empty;

int16_t f_int16_t_MaxValue;
int16_t f_int16_t_MinValue;

int64_t f_int64_t_MaxValue;
int64_t f_int64_t_MinValue;

struct t2_System_RuntimeTypeHandle
{
	t2_System_RuntimeType* f_m_type_2;
};

int8_t f_int8_t_MaxValue;
int8_t f_int8_t_MinValue;

uint16_t f_uint16_t_MaxValue;
uint16_t f_uint16_t_MinValue;

uint64_t f_uint64_t_MaxValue;
uint64_t f_uint64_t_MinValue;

uintptr_t f_uintptr_t_Zero;

#define f_System_IO_FileAccess_Read 1
#define f_System_IO_FileAccess_Write 2
#define f_System_IO_FileAccess_ReadWrite 3

#define f_System_IO_FileMode_CreateNew 1
#define f_System_IO_FileMode_Create 2
#define f_System_IO_FileMode_Open 3
#define f_System_IO_FileMode_OpenOrCreate 4
#define f_System_IO_FileMode_Append 6

#define f_System_IO_FileShare_None 0
#define f_System_IO_FileShare_Read 1
#define f_System_IO_FileShare_Write 2
#define f_System_IO_FileShare_ReadWrite 3
#define f_System_IO_FileShare_Delete 4

#define f_System_Reflection_MethodImplAttributes_CodeTypeMask 3
#define f_System_Reflection_MethodImplAttributes_IL 0
#define f_System_Reflection_MethodImplAttributes_Native 1
#define f_System_Reflection_MethodImplAttributes_OPTIL 2
#define f_System_Reflection_MethodImplAttributes_Runtime 3
#define f_System_Reflection_MethodImplAttributes_ManagedMask 4
#define f_System_Reflection_MethodImplAttributes_Unmanaged 4
#define f_System_Reflection_MethodImplAttributes_Managed 0
#define f_System_Reflection_MethodImplAttributes_ForwardRef 16
#define f_System_Reflection_MethodImplAttributes_PreserveSig 128
#define f_System_Reflection_MethodImplAttributes_InternalCall 4096
#define f_System_Reflection_MethodImplAttributes_Synchronized 32
#define f_System_Reflection_MethodImplAttributes_NoInlining 8
#define f_System_Reflection_MethodImplAttributes_AggressiveInlining 256
#define f_System_Reflection_MethodImplAttributes_NoOptimization 64
#define f_System_Reflection_MethodImplAttributes_AggressiveOptimization 512
#define f_System_Reflection_MethodImplAttributes_MaxMethodImplVal 65535



/* =============================== */
/* Runtime Types 'Normal' */
/* =============================== */
typedef struct rt2_System_Single
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Single;
rt2_System_Single rt2_System_Single_OBJ;
int8_t rt2_System_Single_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,105,0,110,0,103,0,108,0,101,0,0,0}; /* Single */
int8_t rt2_System_Single_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,105,0,110,0,103,0,108,0,101,0,0,0}; /* System.Single */

typedef struct rt2_RayTraceBenchmark_Vec3
{
	t2_System_RuntimeType runtimeType;
} rt2_RayTraceBenchmark_Vec3;
rt2_RayTraceBenchmark_Vec3 rt2_RayTraceBenchmark_Vec3_OBJ;
int8_t rt2_RayTraceBenchmark_Vec3_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,86,0,101,0,99,0,51,0,0,0}; /* Vec3 */
int8_t rt2_RayTraceBenchmark_Vec3_METADATA_FullName[58] = {0,0,0,0,0,0,0,0,22,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,86,0,101,0,99,0,51,0,0,0}; /* RayTraceBenchmark.Vec3 */

typedef struct rt2_RayTraceBenchmark_Sphere
{
	t2_System_RuntimeType runtimeType;
} rt2_RayTraceBenchmark_Sphere;
rt2_RayTraceBenchmark_Sphere rt2_RayTraceBenchmark_Sphere_OBJ;
int8_t rt2_RayTraceBenchmark_Sphere_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,112,0,104,0,101,0,114,0,101,0,0,0}; /* Sphere */
int8_t rt2_RayTraceBenchmark_Sphere_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,83,0,112,0,104,0,101,0,114,0,101,0,0,0}; /* RayTraceBenchmark.Sphere */

typedef struct rt2_RayTraceBenchmark_Light
{
	t2_System_RuntimeType runtimeType;
} rt2_RayTraceBenchmark_Light;
rt2_RayTraceBenchmark_Light rt2_RayTraceBenchmark_Light_OBJ;
int8_t rt2_RayTraceBenchmark_Light_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,76,0,105,0,103,0,104,0,116,0,0,0}; /* Light */
int8_t rt2_RayTraceBenchmark_Light_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,76,0,105,0,103,0,104,0,116,0,0,0}; /* RayTraceBenchmark.Light */

typedef struct rt2_RayTraceBenchmark_Scene
{
	t2_System_RuntimeType runtimeType;
} rt2_RayTraceBenchmark_Scene;
rt2_RayTraceBenchmark_Scene rt2_RayTraceBenchmark_Scene_OBJ;
int8_t rt2_RayTraceBenchmark_Scene_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,83,0,99,0,101,0,110,0,101,0,0,0}; /* Scene */
int8_t rt2_RayTraceBenchmark_Scene_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,83,0,99,0,101,0,110,0,101,0,0,0}; /* RayTraceBenchmark.Scene */

typedef struct rt2_System_Int32
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Int32;
rt2_System_Int32 rt2_System_Int32_OBJ;
int8_t rt2_System_Int32_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* Int32 */
int8_t rt2_System_Int32_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* System.Int32 */

typedef struct rt2_RayTraceBenchmark_Benchmark
{
	t2_System_RuntimeType runtimeType;
} rt2_RayTraceBenchmark_Benchmark;
rt2_RayTraceBenchmark_Benchmark rt2_RayTraceBenchmark_Benchmark_OBJ;
int8_t rt2_RayTraceBenchmark_Benchmark_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,0,0}; /* Benchmark */
int8_t rt2_RayTraceBenchmark_Benchmark_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,0,0}; /* RayTraceBenchmark.Benchmark */

typedef struct rt2_RayTraceBenchmark_BenchmarkMain
{
	t2_System_RuntimeType runtimeType;
} rt2_RayTraceBenchmark_BenchmarkMain;
rt2_RayTraceBenchmark_BenchmarkMain rt2_RayTraceBenchmark_BenchmarkMain_OBJ;
int8_t rt2_RayTraceBenchmark_BenchmarkMain_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,77,0,97,0,105,0,110,0,0,0}; /* BenchmarkMain */
int8_t rt2_RayTraceBenchmark_BenchmarkMain_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,77,0,97,0,105,0,110,0,0,0}; /* RayTraceBenchmark.BenchmarkMain */

typedef struct rt2_RayTraceBenchmark_Ray
{
	t2_System_RuntimeType runtimeType;
} rt2_RayTraceBenchmark_Ray;
rt2_RayTraceBenchmark_Ray rt2_RayTraceBenchmark_Ray_OBJ;
int8_t rt2_RayTraceBenchmark_Ray_METADATA_Name[20] = {0,0,0,0,0,0,0,0,3,0,0,0,82,0,97,0,121,0,0,0}; /* Ray */
int8_t rt2_RayTraceBenchmark_Ray_METADATA_FullName[56] = {0,0,0,0,0,0,0,0,21,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,82,0,97,0,121,0,0,0}; /* RayTraceBenchmark.Ray */

typedef struct rt2_System_Activator
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Activator;
rt2_System_Activator rt2_System_Activator_OBJ;
int8_t rt2_System_Activator_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,65,0,99,0,116,0,105,0,118,0,97,0,116,0,111,0,114,0,0,0}; /* Activator */
int8_t rt2_System_Activator_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,99,0,116,0,105,0,118,0,97,0,116,0,111,0,114,0,0,0}; /* System.Activator */

typedef struct rt2_System_ArgumentException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_ArgumentException* self);
} rt2_System_ArgumentException;
rt2_System_ArgumentException rt2_System_ArgumentException_OBJ;
int8_t rt2_System_ArgumentException_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,65,0,114,0,103,0,117,0,109,0,101,0,110,0,116,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* ArgumentException */
int8_t rt2_System_ArgumentException_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,114,0,103,0,117,0,109,0,101,0,110,0,116,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.ArgumentException */

typedef struct rt2_System_ArgumentOutOfRangeException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_ArgumentOutOfRangeException* self);
} rt2_System_ArgumentOutOfRangeException;
rt2_System_ArgumentOutOfRangeException rt2_System_ArgumentOutOfRangeException_OBJ;
int8_t rt2_System_ArgumentOutOfRangeException_METADATA_Name[68] = {0,0,0,0,0,0,0,0,27,0,0,0,65,0,114,0,103,0,117,0,109,0,101,0,110,0,116,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* ArgumentOutOfRangeException */
int8_t rt2_System_ArgumentOutOfRangeException_METADATA_FullName[82] = {0,0,0,0,0,0,0,0,34,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,114,0,103,0,117,0,109,0,101,0,110,0,116,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.ArgumentOutOfRangeException */

typedef struct rt2_System_Array
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Array;
rt2_System_Array rt2_System_Array_OBJ;
int8_t rt2_System_Array_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,65,0,114,0,114,0,97,0,121,0,0,0}; /* Array */
int8_t rt2_System_Array_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,114,0,114,0,97,0,121,0,0,0}; /* System.Array */

typedef struct rt2_System_Attribute
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Attribute;
rt2_System_Attribute rt2_System_Attribute_OBJ;
int8_t rt2_System_Attribute_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* Attribute */
int8_t rt2_System_Attribute_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Attribute */

typedef struct rt2_System_Boolean
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Boolean;
rt2_System_Boolean rt2_System_Boolean_OBJ;
int8_t rt2_System_Boolean_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,0,0}; /* Boolean */
int8_t rt2_System_Boolean_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,0,0}; /* System.Boolean */

typedef struct rt2_System_AttributeTargets
{
	t2_System_RuntimeType runtimeType;
} rt2_System_AttributeTargets;
rt2_System_AttributeTargets rt2_System_AttributeTargets_OBJ;
int8_t rt2_System_AttributeTargets_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,84,0,97,0,114,0,103,0,101,0,116,0,115,0,0,0}; /* AttributeTargets */
int8_t rt2_System_AttributeTargets_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,84,0,97,0,114,0,103,0,101,0,116,0,115,0,0,0}; /* System.AttributeTargets */

typedef struct rt2_System_AttributeUsageAttribute
{
	t2_System_RuntimeType runtimeType;
} rt2_System_AttributeUsageAttribute;
rt2_System_AttributeUsageAttribute rt2_System_AttributeUsageAttribute_OBJ;
int8_t rt2_System_AttributeUsageAttribute_METADATA_Name[60] = {0,0,0,0,0,0,0,0,23,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,85,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AttributeUsageAttribute */
int8_t rt2_System_AttributeUsageAttribute_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,85,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.AttributeUsageAttribute */

typedef struct rt2_System_BitConverter
{
	t2_System_RuntimeType runtimeType;
} rt2_System_BitConverter;
rt2_System_BitConverter rt2_System_BitConverter_OBJ;
int8_t rt2_System_BitConverter_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,66,0,105,0,116,0,67,0,111,0,110,0,118,0,101,0,114,0,116,0,101,0,114,0,0,0}; /* BitConverter */
int8_t rt2_System_BitConverter_METADATA_FullName[52] = {0,0,0,0,0,0,0,0,19,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,105,0,116,0,67,0,111,0,110,0,118,0,101,0,114,0,116,0,101,0,114,0,0,0}; /* System.BitConverter */

typedef struct rt2_System_Buffer
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Buffer;
rt2_System_Buffer rt2_System_Buffer_OBJ;
int8_t rt2_System_Buffer_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,66,0,117,0,102,0,102,0,101,0,114,0,0,0}; /* Buffer */
int8_t rt2_System_Buffer_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,117,0,102,0,102,0,101,0,114,0,0,0}; /* System.Buffer */

typedef struct rt2_System_Console
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Console;
rt2_System_Console rt2_System_Console_OBJ;
int8_t rt2_System_Console_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,67,0,111,0,110,0,115,0,111,0,108,0,101,0,0,0}; /* Console */
int8_t rt2_System_Console_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,110,0,115,0,111,0,108,0,101,0,0,0}; /* System.Console */

typedef struct rt2_System_IntPtr
{
	t2_System_RuntimeType runtimeType;
} rt2_System_IntPtr;
rt2_System_IntPtr rt2_System_IntPtr_OBJ;
int8_t rt2_System_IntPtr_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* IntPtr */
int8_t rt2_System_IntPtr_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* System.IntPtr */

typedef struct rt2_System_Delegate
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Delegate;
rt2_System_Delegate rt2_System_Delegate_OBJ;
int8_t rt2_System_Delegate_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* Delegate */
int8_t rt2_System_Delegate_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* System.Delegate */

typedef struct rt2_System_DllNotFoundException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_DllNotFoundException* self);
} rt2_System_DllNotFoundException;
rt2_System_DllNotFoundException rt2_System_DllNotFoundException_OBJ;
int8_t rt2_System_DllNotFoundException_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,68,0,108,0,108,0,78,0,111,0,116,0,70,0,111,0,117,0,110,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* DllNotFoundException */
int8_t rt2_System_DllNotFoundException_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,108,0,108,0,78,0,111,0,116,0,70,0,111,0,117,0,110,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.DllNotFoundException */

typedef struct rt2_System_Enum
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Enum;
rt2_System_Enum rt2_System_Enum_OBJ;
int8_t rt2_System_Enum_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,69,0,110,0,117,0,109,0,0,0}; /* Enum */
int8_t rt2_System_Enum_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,110,0,117,0,109,0,0,0}; /* System.Enum */

typedef struct rt2_System_Environment
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Environment;
rt2_System_Environment rt2_System_Environment_OBJ;
int8_t rt2_System_Environment_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,69,0,110,0,118,0,105,0,114,0,111,0,110,0,109,0,101,0,110,0,116,0,0,0}; /* Environment */
int8_t rt2_System_Environment_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,110,0,118,0,105,0,114,0,111,0,110,0,109,0,101,0,110,0,116,0,0,0}; /* System.Environment */

typedef struct rt2_System_EqualityComparer
{
	t2_System_RuntimeType runtimeType;
} rt2_System_EqualityComparer;
rt2_System_EqualityComparer rt2_System_EqualityComparer_OBJ;
int8_t rt2_System_EqualityComparer_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,69,0,113,0,117,0,97,0,108,0,105,0,116,0,121,0,67,0,111,0,109,0,112,0,97,0,114,0,101,0,114,0,0,0}; /* EqualityComparer */
int8_t rt2_System_EqualityComparer_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,113,0,117,0,97,0,108,0,105,0,116,0,121,0,67,0,111,0,109,0,112,0,97,0,114,0,101,0,114,0,0,0}; /* System.EqualityComparer */

typedef struct rt2_System_Exception
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_Exception* self);
} rt2_System_Exception;
rt2_System_Exception rt2_System_Exception_OBJ;
int8_t rt2_System_Exception_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* Exception */
int8_t rt2_System_Exception_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.Exception */

typedef struct rt2_System_FlagsAttribute
{
	t2_System_RuntimeType runtimeType;
} rt2_System_FlagsAttribute;
rt2_System_FlagsAttribute rt2_System_FlagsAttribute_OBJ;
int8_t rt2_System_FlagsAttribute_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,70,0,108,0,97,0,103,0,115,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* FlagsAttribute */
int8_t rt2_System_FlagsAttribute_METADATA_FullName[56] = {0,0,0,0,0,0,0,0,21,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,70,0,108,0,97,0,103,0,115,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.FlagsAttribute */

typedef struct rt2_System_GC
{
	t2_System_RuntimeType runtimeType;
} rt2_System_GC;
rt2_System_GC rt2_System_GC_OBJ;
int8_t rt2_System_GC_METADATA_Name[18] = {0,0,0,0,0,0,0,0,2,0,0,0,71,0,67,0,0,0}; /* GC */
int8_t rt2_System_GC_METADATA_FullName[32] = {0,0,0,0,0,0,0,0,9,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,71,0,67,0,0,0}; /* System.GC */

typedef struct rt2_System_IndexOutOfRangeException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_IndexOutOfRangeException* self);
} rt2_System_IndexOutOfRangeException;
rt2_System_IndexOutOfRangeException rt2_System_IndexOutOfRangeException_OBJ;
int8_t rt2_System_IndexOutOfRangeException_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,73,0,110,0,100,0,101,0,120,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* IndexOutOfRangeException */
int8_t rt2_System_IndexOutOfRangeException_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,100,0,101,0,120,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.IndexOutOfRangeException */

typedef struct rt2_System_InvalidCastException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_InvalidCastException* self);
} rt2_System_InvalidCastException;
rt2_System_InvalidCastException rt2_System_InvalidCastException_OBJ;
int8_t rt2_System_InvalidCastException_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,73,0,110,0,118,0,97,0,108,0,105,0,100,0,67,0,97,0,115,0,116,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* InvalidCastException */
int8_t rt2_System_InvalidCastException_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,118,0,97,0,108,0,105,0,100,0,67,0,97,0,115,0,116,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.InvalidCastException */

typedef struct rt2_System_Double
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Double;
rt2_System_Double rt2_System_Double_OBJ;
int8_t rt2_System_Double_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,68,0,111,0,117,0,98,0,108,0,101,0,0,0}; /* Double */
int8_t rt2_System_Double_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,0,0}; /* System.Double */

typedef struct rt2_System_Math
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Math;
rt2_System_Math rt2_System_Math_OBJ;
int8_t rt2_System_Math_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,77,0,97,0,116,0,104,0,0,0}; /* Math */
int8_t rt2_System_Math_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,97,0,116,0,104,0,0,0}; /* System.Math */

typedef struct rt2_System_MathF
{
	t2_System_RuntimeType runtimeType;
} rt2_System_MathF;
rt2_System_MathF rt2_System_MathF_OBJ;
int8_t rt2_System_MathF_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,77,0,97,0,116,0,104,0,70,0,0,0}; /* MathF */
int8_t rt2_System_MathF_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,97,0,116,0,104,0,70,0,0,0}; /* System.MathF */

typedef struct rt2_System_MulticastDelegate
{
	t2_System_RuntimeType runtimeType;
} rt2_System_MulticastDelegate;
rt2_System_MulticastDelegate rt2_System_MulticastDelegate_OBJ;
int8_t rt2_System_MulticastDelegate_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,77,0,117,0,108,0,116,0,105,0,99,0,97,0,115,0,116,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* MulticastDelegate */
int8_t rt2_System_MulticastDelegate_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,117,0,108,0,116,0,105,0,99,0,97,0,115,0,116,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* System.MulticastDelegate */

typedef struct rt2_System_NotImplementedException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_NotImplementedException* self);
} rt2_System_NotImplementedException;
rt2_System_NotImplementedException rt2_System_NotImplementedException_OBJ;
int8_t rt2_System_NotImplementedException_METADATA_Name[60] = {0,0,0,0,0,0,0,0,23,0,0,0,78,0,111,0,116,0,73,0,109,0,112,0,108,0,101,0,109,0,101,0,110,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* NotImplementedException */
int8_t rt2_System_NotImplementedException_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,111,0,116,0,73,0,109,0,112,0,108,0,101,0,109,0,101,0,110,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.NotImplementedException */

typedef struct rt2_System_NotSupportedException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_NotSupportedException* self);
} rt2_System_NotSupportedException;
rt2_System_NotSupportedException rt2_System_NotSupportedException_OBJ;
int8_t rt2_System_NotSupportedException_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,78,0,111,0,116,0,83,0,117,0,112,0,112,0,111,0,114,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* NotSupportedException */
int8_t rt2_System_NotSupportedException_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,111,0,116,0,83,0,117,0,112,0,112,0,111,0,114,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.NotSupportedException */

typedef struct rt2_System_Number
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Number;
rt2_System_Number rt2_System_Number_OBJ;
int8_t rt2_System_Number_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,78,0,117,0,109,0,98,0,101,0,114,0,0,0}; /* Number */
int8_t rt2_System_Number_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,117,0,109,0,98,0,101,0,114,0,0,0}; /* System.Number */

typedef struct rt2_System_Object
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Object;
rt2_System_Object rt2_System_Object_OBJ;
int8_t rt2_System_Object_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,79,0,98,0,106,0,101,0,99,0,116,0,0,0}; /* Object */
int8_t rt2_System_Object_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,0,0}; /* System.Object */

typedef struct rt2_System_ObsoleteAttribute
{
	t2_System_RuntimeType runtimeType;
} rt2_System_ObsoleteAttribute;
rt2_System_ObsoleteAttribute rt2_System_ObsoleteAttribute_OBJ;
int8_t rt2_System_ObsoleteAttribute_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,79,0,98,0,115,0,111,0,108,0,101,0,116,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* ObsoleteAttribute */
int8_t rt2_System_ObsoleteAttribute_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,115,0,111,0,108,0,101,0,116,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.ObsoleteAttribute */

typedef struct rt2_System_UInt32
{
	t2_System_RuntimeType runtimeType;
} rt2_System_UInt32;
rt2_System_UInt32 rt2_System_UInt32_OBJ;
int8_t rt2_System_UInt32_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* UInt32 */
int8_t rt2_System_UInt32_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* System.UInt32 */

typedef struct rt2_System_Random
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Random;
rt2_System_Random rt2_System_Random_OBJ;
int8_t rt2_System_Random_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,82,0,97,0,110,0,100,0,111,0,109,0,0,0}; /* Random */
int8_t rt2_System_Random_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,97,0,110,0,100,0,111,0,109,0,0,0}; /* System.Random */

typedef struct rt2_System_RuntimeType
{
	t2_System_RuntimeType runtimeType;
} rt2_System_RuntimeType;
rt2_System_RuntimeType rt2_System_RuntimeType_OBJ;
int8_t rt2_System_RuntimeType_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* RuntimeType */
int8_t rt2_System_RuntimeType_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* System.RuntimeType */

typedef struct rt2_System_Char
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Char;
rt2_System_Char rt2_System_Char_OBJ;
int8_t rt2_System_Char_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,67,0,104,0,97,0,114,0,0,0}; /* Char */
int8_t rt2_System_Char_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,104,0,97,0,114,0,0,0}; /* System.Char */

typedef struct rt2_System_String
{
	t2_System_RuntimeType runtimeType;
} rt2_System_String;
rt2_System_String rt2_System_String_OBJ;
int8_t rt2_System_String_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,0,0}; /* String */
int8_t rt2_System_String_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,0,0}; /* System.String */

typedef struct rt2_System_ThrowArgumentNullException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t2_System_ThrowArgumentNullException* self);
} rt2_System_ThrowArgumentNullException;
rt2_System_ThrowArgumentNullException rt2_System_ThrowArgumentNullException_OBJ;
int8_t rt2_System_ThrowArgumentNullException_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,84,0,104,0,114,0,111,0,119,0,65,0,114,0,103,0,117,0,109,0,101,0,110,0,116,0,78,0,117,0,108,0,108,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* ThrowArgumentNullException */
int8_t rt2_System_ThrowArgumentNullException_METADATA_FullName[80] = {0,0,0,0,0,0,0,0,33,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,104,0,114,0,111,0,119,0,65,0,114,0,103,0,117,0,109,0,101,0,110,0,116,0,78,0,117,0,108,0,108,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.ThrowArgumentNullException */

typedef struct rt2_System_Type
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Type;
rt2_System_Type rt2_System_Type_OBJ;
int8_t rt2_System_Type_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,84,0,121,0,112,0,101,0,0,0}; /* Type */
int8_t rt2_System_Type_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,121,0,112,0,101,0,0,0}; /* System.Type */

typedef struct rt2_System_ValueType
{
	t2_System_RuntimeType runtimeType;
} rt2_System_ValueType;
rt2_System_ValueType rt2_System_ValueType_OBJ;
int8_t rt2_System_ValueType_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,86,0,97,0,108,0,117,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* ValueType */
int8_t rt2_System_ValueType_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,86,0,97,0,108,0,117,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* System.ValueType */

typedef struct rt4_System_Collections_ObjectModel_ReadOnlyCollectionType
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Collections_ObjectModel_ReadOnlyCollectionType;
rt4_System_Collections_ObjectModel_ReadOnlyCollectionType rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_OBJ;
int8_t rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,82,0,101,0,97,0,100,0,79,0,110,0,108,0,121,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,84,0,121,0,112,0,101,0,0,0}; /* ReadOnlyCollectionType */
int8_t rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_METADATA_FullName[120] = {0,0,0,0,0,0,0,0,53,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,77,0,111,0,100,0,101,0,108,0,46,0,82,0,101,0,97,0,100,0,79,0,110,0,108,0,121,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,84,0,121,0,112,0,101,0,0,0}; /* System.Collections.ObjectModel.ReadOnlyCollectionType */

typedef struct rt3_System_Diagnostics_Debug
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Diagnostics_Debug;
rt3_System_Diagnostics_Debug rt3_System_Diagnostics_Debug_OBJ;
int8_t rt3_System_Diagnostics_Debug_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,68,0,101,0,98,0,117,0,103,0,0,0}; /* Debug */
int8_t rt3_System_Diagnostics_Debug_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,105,0,97,0,103,0,110,0,111,0,115,0,116,0,105,0,99,0,115,0,46,0,68,0,101,0,98,0,117,0,103,0,0,0}; /* System.Diagnostics.Debug */

typedef struct rt3_System_IO_File
{
	t2_System_RuntimeType runtimeType;
} rt3_System_IO_File;
rt3_System_IO_File rt3_System_IO_File_OBJ;
int8_t rt3_System_IO_File_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,70,0,105,0,108,0,101,0,0,0}; /* File */
int8_t rt3_System_IO_File_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,70,0,105,0,108,0,101,0,0,0}; /* System.IO.File */

typedef struct rt3_System_IO_FileNotFoundException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t3_System_IO_FileNotFoundException* self);
} rt3_System_IO_FileNotFoundException;
rt3_System_IO_FileNotFoundException rt3_System_IO_FileNotFoundException_OBJ;
int8_t rt3_System_IO_FileNotFoundException_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,70,0,105,0,108,0,101,0,78,0,111,0,116,0,70,0,111,0,117,0,110,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* FileNotFoundException */
int8_t rt3_System_IO_FileNotFoundException_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,70,0,105,0,108,0,101,0,78,0,111,0,116,0,70,0,111,0,117,0,110,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.IO.FileNotFoundException */

typedef struct rt3_System_IO_FileStream
{
	t2_System_RuntimeType runtimeType;
	int64_t (*vTable_get_Length_0)(t3_System_IO_FileStream* self);
	int64_t (*vTable_get_Position_0)(t3_System_IO_FileStream* self);
	void (*vTable_set_Position_0)(t3_System_IO_FileStream* self, int64_t p_value);
	void (*vTable_Dispose_0)(t3_System_IO_FileStream* self);
	int32_t (*vTable_Read_0)(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	int32_t (*vTable_Read_1)(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	int32_t (*vTable_ReadByte_0)(t3_System_IO_FileStream* self);
	void (*vTable_Write_0)(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	void (*vTable_Write_1)(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	void (*vTable_WriteByte_0)(t3_System_IO_FileStream* self, uint8_t p_value);
} rt3_System_IO_FileStream;
rt3_System_IO_FileStream rt3_System_IO_FileStream_OBJ;
int8_t rt3_System_IO_FileStream_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,70,0,105,0,108,0,101,0,83,0,116,0,114,0,101,0,97,0,109,0,0,0}; /* FileStream */
int8_t rt3_System_IO_FileStream_METADATA_FullName[54] = {0,0,0,0,0,0,0,0,20,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,70,0,105,0,108,0,101,0,83,0,116,0,114,0,101,0,97,0,109,0,0,0}; /* System.IO.FileStream */

typedef struct rt3_System_IO_IOException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t3_System_IO_IOException* self);
} rt3_System_IO_IOException;
rt3_System_IO_IOException rt3_System_IO_IOException_OBJ;
int8_t rt3_System_IO_IOException_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,73,0,79,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* IOException */
int8_t rt3_System_IO_IOException_METADATA_FullName[56] = {0,0,0,0,0,0,0,0,21,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,73,0,79,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.IO.IOException */

typedef struct rt3_System_IO_Path
{
	t2_System_RuntimeType runtimeType;
} rt3_System_IO_Path;
rt3_System_IO_Path rt3_System_IO_Path_OBJ;
int8_t rt3_System_IO_Path_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,80,0,97,0,116,0,104,0,0,0}; /* Path */
int8_t rt3_System_IO_Path_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,80,0,97,0,116,0,104,0,0,0}; /* System.IO.Path */

typedef struct rt3_System_IO_Stream
{
	t2_System_RuntimeType runtimeType;
	int64_t (*vTable_get_Length_0)(t3_System_IO_Stream* self);
	int64_t (*vTable_get_Position_0)(t3_System_IO_Stream* self);
	void (*vTable_set_Position_0)(t3_System_IO_Stream* self, int64_t p_value);
	void (*vTable_Dispose_0)(t3_System_IO_Stream* self);
	int32_t (*vTable_Read_0)(t3_System_IO_Stream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	int32_t (*vTable_Read_1)(t3_System_IO_Stream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	int32_t (*vTable_ReadByte_0)(t3_System_IO_Stream* self);
	void (*vTable_Write_0)(t3_System_IO_Stream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	void (*vTable_Write_1)(t3_System_IO_Stream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
	void (*vTable_WriteByte_0)(t3_System_IO_Stream* self, uint8_t p_value);
} rt3_System_IO_Stream;
rt3_System_IO_Stream rt3_System_IO_Stream_OBJ;
int8_t rt3_System_IO_Stream_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,116,0,114,0,101,0,97,0,109,0,0,0}; /* Stream */
int8_t rt3_System_IO_Stream_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,83,0,116,0,114,0,101,0,97,0,109,0,0,0}; /* System.IO.Stream */

typedef struct rt3_System_Reflection_AssemblyCompanyAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyCompanyAttribute;
rt3_System_Reflection_AssemblyCompanyAttribute rt3_System_Reflection_AssemblyCompanyAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyCompanyAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,109,0,112,0,97,0,110,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyCompanyAttribute */
int8_t rt3_System_Reflection_AssemblyCompanyAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,109,0,112,0,97,0,110,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyCompanyAttribute */

typedef struct rt3_System_Reflection_AssemblyConfigurationAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyConfigurationAttribute;
rt3_System_Reflection_AssemblyConfigurationAttribute rt3_System_Reflection_AssemblyConfigurationAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyConfigurationAttribute_METADATA_Name[74] = {0,0,0,0,0,0,0,0,30,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,110,0,102,0,105,0,103,0,117,0,114,0,97,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyConfigurationAttribute */
int8_t rt3_System_Reflection_AssemblyConfigurationAttribute_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,110,0,102,0,105,0,103,0,117,0,114,0,97,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyConfigurationAttribute */

typedef struct rt3_System_Reflection_AssemblyCopyrightAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyCopyrightAttribute;
rt3_System_Reflection_AssemblyCopyrightAttribute rt3_System_Reflection_AssemblyCopyrightAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyCopyrightAttribute_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyCopyrightAttribute */
int8_t rt3_System_Reflection_AssemblyCopyrightAttribute_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyCopyrightAttribute */

typedef struct rt3_System_Reflection_AssemblyCultureAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyCultureAttribute;
rt3_System_Reflection_AssemblyCultureAttribute rt3_System_Reflection_AssemblyCultureAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyCultureAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyCultureAttribute */
int8_t rt3_System_Reflection_AssemblyCultureAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyCultureAttribute */

typedef struct rt3_System_Reflection_AssemblyDelaySignAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyDelaySignAttribute;
rt3_System_Reflection_AssemblyDelaySignAttribute rt3_System_Reflection_AssemblyDelaySignAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyDelaySignAttribute_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,108,0,97,0,121,0,83,0,105,0,103,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyDelaySignAttribute */
int8_t rt3_System_Reflection_AssemblyDelaySignAttribute_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,108,0,97,0,121,0,83,0,105,0,103,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyDelaySignAttribute */

typedef struct rt3_System_Reflection_AssemblyDescriptionAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyDescriptionAttribute;
rt3_System_Reflection_AssemblyDescriptionAttribute rt3_System_Reflection_AssemblyDescriptionAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyDescriptionAttribute_METADATA_Name[70] = {0,0,0,0,0,0,0,0,28,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,115,0,99,0,114,0,105,0,112,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyDescriptionAttribute */
int8_t rt3_System_Reflection_AssemblyDescriptionAttribute_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,115,0,99,0,114,0,105,0,112,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyDescriptionAttribute */

typedef struct rt3_System_Reflection_AssemblyFileVersionAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyFileVersionAttribute;
rt3_System_Reflection_AssemblyFileVersionAttribute rt3_System_Reflection_AssemblyFileVersionAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyFileVersionAttribute_METADATA_Name[70] = {0,0,0,0,0,0,0,0,28,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,70,0,105,0,108,0,101,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyFileVersionAttribute */
int8_t rt3_System_Reflection_AssemblyFileVersionAttribute_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,70,0,105,0,108,0,101,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyFileVersionAttribute */

typedef struct rt3_System_Reflection_AssemblyInformationalVersionAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyInformationalVersionAttribute;
rt3_System_Reflection_AssemblyInformationalVersionAttribute rt3_System_Reflection_AssemblyInformationalVersionAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_Name[88] = {0,0,0,0,0,0,0,0,37,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,73,0,110,0,102,0,111,0,114,0,109,0,97,0,116,0,105,0,111,0,110,0,97,0,108,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyInformationalVersionAttribute */
int8_t rt3_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_FullName[124] = {0,0,0,0,0,0,0,0,55,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,73,0,110,0,102,0,111,0,114,0,109,0,97,0,116,0,105,0,111,0,110,0,97,0,108,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyInformationalVersionAttribute */

typedef struct rt3_System_Reflection_AssemblyKeyFileAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyKeyFileAttribute;
rt3_System_Reflection_AssemblyKeyFileAttribute rt3_System_Reflection_AssemblyKeyFileAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyKeyFileAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,75,0,101,0,121,0,70,0,105,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyKeyFileAttribute */
int8_t rt3_System_Reflection_AssemblyKeyFileAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,75,0,101,0,121,0,70,0,105,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyKeyFileAttribute */

typedef struct rt3_System_Reflection_AssemblyProductAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyProductAttribute;
rt3_System_Reflection_AssemblyProductAttribute rt3_System_Reflection_AssemblyProductAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyProductAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,80,0,114,0,111,0,100,0,117,0,99,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyProductAttribute */
int8_t rt3_System_Reflection_AssemblyProductAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,80,0,114,0,111,0,100,0,117,0,99,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyProductAttribute */

typedef struct rt3_System_Reflection_AssemblyTitleAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyTitleAttribute;
rt3_System_Reflection_AssemblyTitleAttribute rt3_System_Reflection_AssemblyTitleAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyTitleAttribute_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,105,0,116,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyTitleAttribute */
int8_t rt3_System_Reflection_AssemblyTitleAttribute_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,105,0,116,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyTitleAttribute */

typedef struct rt3_System_Reflection_AssemblyTrademarkAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyTrademarkAttribute;
rt3_System_Reflection_AssemblyTrademarkAttribute rt3_System_Reflection_AssemblyTrademarkAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyTrademarkAttribute_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyTrademarkAttribute */
int8_t rt3_System_Reflection_AssemblyTrademarkAttribute_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyTrademarkAttribute */

typedef struct rt3_System_Reflection_AssemblyVersionAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_AssemblyVersionAttribute;
rt3_System_Reflection_AssemblyVersionAttribute rt3_System_Reflection_AssemblyVersionAttribute_OBJ;
int8_t rt3_System_Reflection_AssemblyVersionAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyVersionAttribute */
int8_t rt3_System_Reflection_AssemblyVersionAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyVersionAttribute */

typedef struct rt3_System_Reflection_DefaultMemberAttribute
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_DefaultMemberAttribute;
rt3_System_Reflection_DefaultMemberAttribute rt3_System_Reflection_DefaultMemberAttribute_OBJ;
int8_t rt3_System_Reflection_DefaultMemberAttribute_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,68,0,101,0,102,0,97,0,117,0,108,0,116,0,77,0,101,0,109,0,98,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* DefaultMemberAttribute */
int8_t rt3_System_Reflection_DefaultMemberAttribute_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,68,0,101,0,102,0,97,0,117,0,108,0,116,0,77,0,101,0,109,0,98,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.DefaultMemberAttribute */

typedef struct rt4_System_Runtime_CompilerServices_ExtensionAttribute
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_CompilerServices_ExtensionAttribute;
rt4_System_Runtime_CompilerServices_ExtensionAttribute rt4_System_Runtime_CompilerServices_ExtensionAttribute_OBJ;
int8_t rt4_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* ExtensionAttribute */
int8_t rt4_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_FullName[114] = {0,0,0,0,0,0,0,0,50,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.CompilerServices.ExtensionAttribute */

typedef struct rt4_System_Runtime_CompilerServices_MethodImplOptions
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_CompilerServices_MethodImplOptions;
rt4_System_Runtime_CompilerServices_MethodImplOptions rt4_System_Runtime_CompilerServices_MethodImplOptions_OBJ;
int8_t rt4_System_Runtime_CompilerServices_MethodImplOptions_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,79,0,112,0,116,0,105,0,111,0,110,0,115,0,0,0}; /* MethodImplOptions */
int8_t rt4_System_Runtime_CompilerServices_MethodImplOptions_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,79,0,112,0,116,0,105,0,111,0,110,0,115,0,0,0}; /* System.Runtime.CompilerServices.MethodImplOptions */

typedef struct rt4_System_Runtime_CompilerServices_MethodImplAttribute
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_CompilerServices_MethodImplAttribute;
rt4_System_Runtime_CompilerServices_MethodImplAttribute rt4_System_Runtime_CompilerServices_MethodImplAttribute_OBJ;
int8_t rt4_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* MethodImplAttribute */
int8_t rt4_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_FullName[116] = {0,0,0,0,0,0,0,0,51,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.CompilerServices.MethodImplAttribute */

typedef struct rt4_System_Runtime_CompilerServices_RuntimeHelpers
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_CompilerServices_RuntimeHelpers;
rt4_System_Runtime_CompilerServices_RuntimeHelpers rt4_System_Runtime_CompilerServices_RuntimeHelpers_OBJ;
int8_t rt4_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,72,0,101,0,108,0,112,0,101,0,114,0,115,0,0,0}; /* RuntimeHelpers */
int8_t rt4_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,72,0,101,0,108,0,112,0,101,0,114,0,115,0,0,0}; /* System.Runtime.CompilerServices.RuntimeHelpers */

typedef struct rt4_System_Runtime_InteropServices_CallingConvention
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_CallingConvention;
rt4_System_Runtime_InteropServices_CallingConvention rt4_System_Runtime_InteropServices_CallingConvention_OBJ;
int8_t rt4_System_Runtime_InteropServices_CallingConvention_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,67,0,97,0,108,0,108,0,105,0,110,0,103,0,67,0,111,0,110,0,118,0,101,0,110,0,116,0,105,0,111,0,110,0,0,0}; /* CallingConvention */
int8_t rt4_System_Runtime_InteropServices_CallingConvention_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,67,0,97,0,108,0,108,0,105,0,110,0,103,0,67,0,111,0,110,0,118,0,101,0,110,0,116,0,105,0,111,0,110,0,0,0}; /* System.Runtime.InteropServices.CallingConvention */

typedef struct rt4_System_Runtime_InteropServices_DllImportAttribute
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_DllImportAttribute;
rt4_System_Runtime_InteropServices_DllImportAttribute rt4_System_Runtime_InteropServices_DllImportAttribute_OBJ;
int8_t rt4_System_Runtime_InteropServices_DllImportAttribute_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,68,0,108,0,108,0,73,0,109,0,112,0,111,0,114,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* DllImportAttribute */
int8_t rt4_System_Runtime_InteropServices_DllImportAttribute_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,68,0,108,0,108,0,73,0,109,0,112,0,111,0,114,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.InteropServices.DllImportAttribute */

typedef struct rt4_System_Runtime_InteropServices_Marshal
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_Marshal;
rt4_System_Runtime_InteropServices_Marshal rt4_System_Runtime_InteropServices_Marshal_OBJ;
int8_t rt4_System_Runtime_InteropServices_Marshal_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,77,0,97,0,114,0,115,0,104,0,97,0,108,0,0,0}; /* Marshal */
int8_t rt4_System_Runtime_InteropServices_Marshal_METADATA_FullName[90] = {0,0,0,0,0,0,0,0,38,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,97,0,114,0,115,0,104,0,97,0,108,0,0,0}; /* System.Runtime.InteropServices.Marshal */

typedef struct rt4_System_Runtime_InteropServices_OutAttribute
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_OutAttribute;
rt4_System_Runtime_InteropServices_OutAttribute rt4_System_Runtime_InteropServices_OutAttribute_OBJ;
int8_t rt4_System_Runtime_InteropServices_OutAttribute_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,79,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* OutAttribute */
int8_t rt4_System_Runtime_InteropServices_OutAttribute_METADATA_FullName[100] = {0,0,0,0,0,0,0,0,43,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,79,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.InteropServices.OutAttribute */

typedef struct rt4_System_Runtime_InteropServices_LayoutKind
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_LayoutKind;
rt4_System_Runtime_InteropServices_LayoutKind rt4_System_Runtime_InteropServices_LayoutKind_OBJ;
int8_t rt4_System_Runtime_InteropServices_LayoutKind_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,76,0,97,0,121,0,111,0,117,0,116,0,75,0,105,0,110,0,100,0,0,0}; /* LayoutKind */
int8_t rt4_System_Runtime_InteropServices_LayoutKind_METADATA_FullName[96] = {0,0,0,0,0,0,0,0,41,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,76,0,97,0,121,0,111,0,117,0,116,0,75,0,105,0,110,0,100,0,0,0}; /* System.Runtime.InteropServices.LayoutKind */

typedef struct rt4_System_Runtime_InteropServices_StructLayoutAttribute
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_StructLayoutAttribute;
rt4_System_Runtime_InteropServices_StructLayoutAttribute rt4_System_Runtime_InteropServices_StructLayoutAttribute_OBJ;
int8_t rt4_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,83,0,116,0,114,0,117,0,99,0,116,0,76,0,97,0,121,0,111,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* StructLayoutAttribute */
int8_t rt4_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_FullName[118] = {0,0,0,0,0,0,0,0,52,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,83,0,116,0,114,0,117,0,99,0,116,0,76,0,97,0,121,0,111,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.InteropServices.StructLayoutAttribute */

typedef struct rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute;
rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_OBJ;
int8_t rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_METADATA_Name[80] = {0,0,0,0,0,0,0,0,33,0,0,0,85,0,110,0,109,0,97,0,110,0,97,0,103,0,101,0,100,0,70,0,117,0,110,0,99,0,116,0,105,0,111,0,110,0,80,0,111,0,105,0,110,0,116,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* UnmanagedFunctionPointerAttribute */
int8_t rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_METADATA_FullName[142] = {0,0,0,0,0,0,0,0,64,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,85,0,110,0,109,0,97,0,110,0,97,0,103,0,101,0,100,0,70,0,117,0,110,0,99,0,116,0,105,0,111,0,110,0,80,0,111,0,105,0,110,0,116,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute */

typedef struct rt4_System_Runtime_Versioning_TargetFrameworkAttribute
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_Versioning_TargetFrameworkAttribute;
rt4_System_Runtime_Versioning_TargetFrameworkAttribute rt4_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ;
int8_t rt4_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,84,0,97,0,114,0,103,0,101,0,116,0,70,0,114,0,97,0,109,0,101,0,119,0,111,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* TargetFrameworkAttribute */
int8_t rt4_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_FullName[114] = {0,0,0,0,0,0,0,0,50,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,105,0,110,0,103,0,46,0,84,0,97,0,114,0,103,0,101,0,116,0,70,0,114,0,97,0,109,0,101,0,119,0,111,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.Versioning.TargetFrameworkAttribute */

typedef struct rt3_System_Text_Encoding
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Text_Encoding;
rt3_System_Text_Encoding rt3_System_Text_Encoding_OBJ;
int8_t rt3_System_Text_Encoding_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* Encoding */
int8_t rt3_System_Text_Encoding_METADATA_FullName[54] = {0,0,0,0,0,0,0,0,20,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,101,0,120,0,116,0,46,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* System.Text.Encoding */

typedef struct rt3_System_Text_StandardEncoding
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Text_StandardEncoding;
rt3_System_Text_StandardEncoding rt3_System_Text_StandardEncoding_OBJ;
int8_t rt3_System_Text_StandardEncoding_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,116,0,97,0,110,0,100,0,97,0,114,0,100,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* StandardEncoding */
int8_t rt3_System_Text_StandardEncoding_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,101,0,120,0,116,0,46,0,83,0,116,0,97,0,110,0,100,0,97,0,114,0,100,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* System.Text.StandardEncoding */

typedef struct rt3_System_Text_StringBuilder
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Text_StringBuilder;
rt3_System_Text_StringBuilder rt3_System_Text_StringBuilder_OBJ;
int8_t rt3_System_Text_StringBuilder_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,66,0,117,0,105,0,108,0,100,0,101,0,114,0,0,0}; /* StringBuilder */
int8_t rt3_System_Text_StringBuilder_METADATA_FullName[64] = {0,0,0,0,0,0,0,0,25,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,101,0,120,0,116,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,66,0,117,0,105,0,108,0,100,0,101,0,114,0,0,0}; /* System.Text.StringBuilder */

typedef struct rt3_System_Threading_Thread
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Threading_Thread;
rt3_System_Threading_Thread rt3_System_Threading_Thread_OBJ;
int8_t rt3_System_Threading_Thread_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,84,0,104,0,114,0,101,0,97,0,100,0,0,0}; /* Thread */
int8_t rt3_System_Threading_Thread_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,104,0,114,0,101,0,97,0,100,0,105,0,110,0,103,0,46,0,84,0,104,0,114,0,101,0,97,0,100,0,0,0}; /* System.Threading.Thread */

typedef struct rt2_CS2X_NativeStringType
{
	t2_System_RuntimeType runtimeType;
} rt2_CS2X_NativeStringType;
rt2_CS2X_NativeStringType rt2_CS2X_NativeStringType_OBJ;
int8_t rt2_CS2X_NativeStringType_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,78,0,97,0,116,0,105,0,118,0,101,0,83,0,116,0,114,0,105,0,110,0,103,0,84,0,121,0,112,0,101,0,0,0}; /* NativeStringType */
int8_t rt2_CS2X_NativeStringType_METADATA_FullName[56] = {0,0,0,0,0,0,0,0,21,0,0,0,67,0,83,0,50,0,88,0,46,0,78,0,97,0,116,0,105,0,118,0,101,0,83,0,116,0,114,0,105,0,110,0,103,0,84,0,121,0,112,0,101,0,0,0}; /* CS2X.NativeStringType */

typedef struct rt2_CS2X_NativeStringParamAttribute
{
	t2_System_RuntimeType runtimeType;
} rt2_CS2X_NativeStringParamAttribute;
rt2_CS2X_NativeStringParamAttribute rt2_CS2X_NativeStringParamAttribute_OBJ;
int8_t rt2_CS2X_NativeStringParamAttribute_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,78,0,97,0,116,0,105,0,118,0,101,0,83,0,116,0,114,0,105,0,110,0,103,0,80,0,97,0,114,0,97,0,109,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* NativeStringParamAttribute */
int8_t rt2_CS2X_NativeStringParamAttribute_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,67,0,83,0,50,0,88,0,46,0,78,0,97,0,116,0,105,0,118,0,101,0,83,0,116,0,114,0,105,0,110,0,103,0,80,0,97,0,114,0,97,0,109,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* CS2X.NativeStringParamAttribute */

typedef struct rt2_System_Byte
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Byte;
rt2_System_Byte rt2_System_Byte_OBJ;
int8_t rt2_System_Byte_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,66,0,121,0,116,0,101,0,0,0}; /* Byte */
int8_t rt2_System_Byte_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,0,0}; /* System.Byte */

typedef struct rt2_System_DateTime
{
	t2_System_RuntimeType runtimeType;
} rt2_System_DateTime;
rt2_System_DateTime rt2_System_DateTime_OBJ;
int8_t rt2_System_DateTime_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,68,0,97,0,116,0,101,0,84,0,105,0,109,0,101,0,0,0}; /* DateTime */
int8_t rt2_System_DateTime_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,97,0,116,0,101,0,84,0,105,0,109,0,101,0,0,0}; /* System.DateTime */

typedef struct rt2_System_Guid
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Guid;
rt2_System_Guid rt2_System_Guid_OBJ;
int8_t rt2_System_Guid_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,71,0,117,0,105,0,100,0,0,0}; /* Guid */
int8_t rt2_System_Guid_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,71,0,117,0,105,0,100,0,0,0}; /* System.Guid */

typedef struct rt2_System_Int16
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Int16;
rt2_System_Int16 rt2_System_Int16_OBJ;
int8_t rt2_System_Int16_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* Int16 */
int8_t rt2_System_Int16_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* System.Int16 */

typedef struct rt2_System_Int64
{
	t2_System_RuntimeType runtimeType;
} rt2_System_Int64;
rt2_System_Int64 rt2_System_Int64_OBJ;
int8_t rt2_System_Int64_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* Int64 */
int8_t rt2_System_Int64_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* System.Int64 */

typedef struct rt2_System_RuntimeTypeHandle
{
	t2_System_RuntimeType runtimeType;
} rt2_System_RuntimeTypeHandle;
rt2_System_RuntimeTypeHandle rt2_System_RuntimeTypeHandle_OBJ;
int8_t rt2_System_RuntimeTypeHandle_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0}; /* RuntimeTypeHandle */
int8_t rt2_System_RuntimeTypeHandle_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0}; /* System.RuntimeTypeHandle */

typedef struct rt2_System_SByte
{
	t2_System_RuntimeType runtimeType;
} rt2_System_SByte;
rt2_System_SByte rt2_System_SByte_OBJ;
int8_t rt2_System_SByte_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,83,0,66,0,121,0,116,0,101,0,0,0}; /* SByte */
int8_t rt2_System_SByte_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,66,0,121,0,116,0,101,0,0,0}; /* System.SByte */

typedef struct rt2_System_UInt16
{
	t2_System_RuntimeType runtimeType;
} rt2_System_UInt16;
rt2_System_UInt16 rt2_System_UInt16_OBJ;
int8_t rt2_System_UInt16_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* UInt16 */
int8_t rt2_System_UInt16_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* System.UInt16 */

typedef struct rt2_System_UInt64
{
	t2_System_RuntimeType runtimeType;
} rt2_System_UInt64;
rt2_System_UInt64 rt2_System_UInt64_OBJ;
int8_t rt2_System_UInt64_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* UInt64 */
int8_t rt2_System_UInt64_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* System.UInt64 */

typedef struct rt2_System_UIntPtr
{
	t2_System_RuntimeType runtimeType;
} rt2_System_UIntPtr;
rt2_System_UIntPtr rt2_System_UIntPtr_OBJ;
int8_t rt2_System_UIntPtr_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,85,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* UIntPtr */
int8_t rt2_System_UIntPtr_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* System.UIntPtr */

typedef struct rt3_System_IO_FileAccess
{
	t2_System_RuntimeType runtimeType;
} rt3_System_IO_FileAccess;
rt3_System_IO_FileAccess rt3_System_IO_FileAccess_OBJ;
int8_t rt3_System_IO_FileAccess_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,70,0,105,0,108,0,101,0,65,0,99,0,99,0,101,0,115,0,115,0,0,0}; /* FileAccess */
int8_t rt3_System_IO_FileAccess_METADATA_FullName[54] = {0,0,0,0,0,0,0,0,20,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,70,0,105,0,108,0,101,0,65,0,99,0,99,0,101,0,115,0,115,0,0,0}; /* System.IO.FileAccess */

typedef struct rt3_System_IO_FileMode
{
	t2_System_RuntimeType runtimeType;
} rt3_System_IO_FileMode;
rt3_System_IO_FileMode rt3_System_IO_FileMode_OBJ;
int8_t rt3_System_IO_FileMode_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,70,0,105,0,108,0,101,0,77,0,111,0,100,0,101,0,0,0}; /* FileMode */
int8_t rt3_System_IO_FileMode_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,70,0,105,0,108,0,101,0,77,0,111,0,100,0,101,0,0,0}; /* System.IO.FileMode */

typedef struct rt3_System_IO_FileShare
{
	t2_System_RuntimeType runtimeType;
} rt3_System_IO_FileShare;
rt3_System_IO_FileShare rt3_System_IO_FileShare_OBJ;
int8_t rt3_System_IO_FileShare_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,70,0,105,0,108,0,101,0,83,0,104,0,97,0,114,0,101,0,0,0}; /* FileShare */
int8_t rt3_System_IO_FileShare_METADATA_FullName[52] = {0,0,0,0,0,0,0,0,19,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,79,0,46,0,70,0,105,0,108,0,101,0,83,0,104,0,97,0,114,0,101,0,0,0}; /* System.IO.FileShare */

typedef struct rt3_System_Reflection_MethodImplAttributes
{
	t2_System_RuntimeType runtimeType;
} rt3_System_Reflection_MethodImplAttributes;
rt3_System_Reflection_MethodImplAttributes rt3_System_Reflection_MethodImplAttributes_OBJ;
int8_t rt3_System_Reflection_MethodImplAttributes_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,115,0,0,0}; /* MethodImplAttributes */
int8_t rt3_System_Reflection_MethodImplAttributes_METADATA_FullName[90] = {0,0,0,0,0,0,0,0,38,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,115,0,0,0}; /* System.Reflection.MethodImplAttributes */

typedef struct rt4_System_Runtime_InteropServices_UnmanagedType
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Runtime_InteropServices_UnmanagedType;
rt4_System_Runtime_InteropServices_UnmanagedType rt4_System_Runtime_InteropServices_UnmanagedType_OBJ;
int8_t rt4_System_Runtime_InteropServices_UnmanagedType_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,85,0,110,0,109,0,97,0,110,0,97,0,103,0,101,0,100,0,84,0,121,0,112,0,101,0,0,0}; /* UnmanagedType */
int8_t rt4_System_Runtime_InteropServices_UnmanagedType_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,85,0,110,0,109,0,97,0,110,0,97,0,103,0,101,0,100,0,84,0,121,0,112,0,101,0,0,0}; /* System.Runtime.InteropServices.UnmanagedType */


/* =============================== */
/* Runtime Types 'Array' */
/* =============================== */
typedef struct rt0_System_Byte___ARRAY
{
	t2_System_RuntimeType runtimeType;
	size_t elementSize;
} rt0_System_Byte___ARRAY;
rt0_System_Byte___ARRAY rt0_System_Byte___ARRAY_OBJ;
int8_t rt0_System_Byte___ARRAY_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,66,0,121,0,116,0,101,0,91,0,93,0,0,0}; /* Byte[] */
int8_t rt0_System_Byte___ARRAY_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,91,0,93,0,0,0}; /* System.Byte[] */

typedef struct rt0_System_Char___ARRAY
{
	t2_System_RuntimeType runtimeType;
	size_t elementSize;
} rt0_System_Char___ARRAY;
rt0_System_Char___ARRAY rt0_System_Char___ARRAY_OBJ;
int8_t rt0_System_Char___ARRAY_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,67,0,104,0,97,0,114,0,91,0,93,0,0,0}; /* Char[] */
int8_t rt0_System_Char___ARRAY_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,104,0,97,0,114,0,91,0,93,0,0,0}; /* System.Char[] */

typedef struct rt0_RayTraceBenchmark_Sphere___ARRAY
{
	t2_System_RuntimeType runtimeType;
	size_t elementSize;
} rt0_RayTraceBenchmark_Sphere___ARRAY;
rt0_RayTraceBenchmark_Sphere___ARRAY rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ;
int8_t rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,83,0,112,0,104,0,101,0,114,0,101,0,91,0,93,0,0,0}; /* Sphere[] */
int8_t rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_FullName[66] = {0,0,0,0,0,0,0,0,26,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,83,0,112,0,104,0,101,0,114,0,101,0,91,0,93,0,0,0}; /* RayTraceBenchmark.Sphere[] */

typedef struct rt0_RayTraceBenchmark_Light___ARRAY
{
	t2_System_RuntimeType runtimeType;
	size_t elementSize;
} rt0_RayTraceBenchmark_Light___ARRAY;
rt0_RayTraceBenchmark_Light___ARRAY rt0_RayTraceBenchmark_Light___ARRAY_OBJ;
int8_t rt0_RayTraceBenchmark_Light___ARRAY_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,76,0,105,0,103,0,104,0,116,0,91,0,93,0,0,0}; /* Light[] */
int8_t rt0_RayTraceBenchmark_Light___ARRAY_METADATA_FullName[64] = {0,0,0,0,0,0,0,0,25,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,76,0,105,0,103,0,104,0,116,0,91,0,93,0,0,0}; /* RayTraceBenchmark.Light[] */

typedef struct rt0_System_Int32___ARRAY
{
	t2_System_RuntimeType runtimeType;
	size_t elementSize;
} rt0_System_Int32___ARRAY;
rt0_System_Int32___ARRAY rt0_System_Int32___ARRAY_OBJ;
int8_t rt0_System_Int32___ARRAY_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,73,0,110,0,116,0,51,0,50,0,91,0,93,0,0,0}; /* Int32[] */
int8_t rt0_System_Int32___ARRAY_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,91,0,93,0,0,0}; /* System.Int32[] */

typedef struct rt0_System_String___ARRAY
{
	t2_System_RuntimeType runtimeType;
	size_t elementSize;
} rt0_System_String___ARRAY;
rt0_System_String___ARRAY rt0_System_String___ARRAY_OBJ;
int8_t rt0_System_String___ARRAY_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,91,0,93,0,0,0}; /* String[] */
int8_t rt0_System_String___ARRAY_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,91,0,93,0,0,0}; /* System.String[] */


/* =============================== */
/* Runtime Types 'Pointer' */
/* =============================== */
typedef struct rt0_System_Byte__PTR
{
	t2_System_RuntimeType runtimeType;
} rt0_System_Byte__PTR;
rt0_System_Byte__PTR rt0_System_Byte__PTR_OBJ;
int8_t rt0_System_Byte__PTR_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,66,0,121,0,116,0,101,0,42,0,0,0}; /* Byte* */
int8_t rt0_System_Byte__PTR_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,42,0,0,0}; /* System.Byte* */


/* =============================== */
/* Forward declare Methods */
/* =============================== */
t2_System_ArgumentException* m2_System_ArgumentException__ctor_0(t2_System_ArgumentException* self);
t2_System_ArgumentException* m2_System_ArgumentException__ctor_1(t2_System_ArgumentException* self, t2_System_String* p_message);
t2_System_ArgumentOutOfRangeException* m2_System_ArgumentOutOfRangeException__ctor_0(t2_System_ArgumentOutOfRangeException* self);
t2_System_ArgumentOutOfRangeException* m2_System_ArgumentOutOfRangeException__ctor_1(t2_System_ArgumentOutOfRangeException* self, t2_System_String* p_message);
int32_t m2_System_Array_get_Length_0(t2_System_Array* self);
int64_t m2_System_Array_get_LongLength_0(t2_System_Array* self);
int32_t m2_System_Array_GetElementSize_0(t2_System_Array* p_array);
void m2_System_Array_Copy_0(t2_System_Array* p_sourceArray, int32_t p_sourceIndex, t2_System_Array* p_destinationArray, int32_t p_destinationIndex, int32_t p_length);
void m2_System_Array_Copy_1(t2_System_Array* p_sourceArray, int64_t p_sourceIndex, t2_System_Array* p_destinationArray, int64_t p_destinationIndex, int64_t p_length);
void m2_System_Array_Copy_2(t2_System_Array* p_sourceArray, t2_System_Array* p_destinationArray, int32_t p_length);
void m2_System_Array_Copy_3(t2_System_Array* p_sourceArray, t2_System_Array* p_destinationArray, int64_t p_length);
void m2_System_Array_FastResize_0(t2_System_Array** p_array, int32_t p_newSize, int32_t p_elementSize);
t2_System_Array* m2_System_Array__ctor_0(t2_System_Array* self);
t2_System_Attribute* m2_System_Attribute__ctor_0(t2_System_Attribute* self);
char m2_char__ctor_0();
t2_System_AttributeTargets m2_System_AttributeTargets__ctor_0();
t2_System_AttributeUsageAttribute* m2_System_AttributeUsageAttribute__ctor_0(t2_System_AttributeUsageAttribute* self, t2_System_AttributeTargets p_validOn);
t2_System_AttributeTargets m2_System_AttributeUsageAttribute_get_ValidOn_0(t2_System_AttributeUsageAttribute* self);
char16_t m2_System_BitConverter_ToChar_0(uint8_t* p_value, int32_t p_startIndex);
int16_t m2_System_BitConverter_ToInt16_0(uint8_t* p_value, int32_t p_startIndex);
int32_t m2_System_BitConverter_ToInt32_0(uint8_t* p_value, int32_t p_startIndex);
int64_t m2_System_BitConverter_ToInt64_0(uint8_t* p_value, int32_t p_startIndex);
uint16_t m2_System_BitConverter_ToUInt16_0(uint8_t* p_value, int32_t p_startIndex);
uint32_t m2_System_BitConverter_ToUInt32_0(uint8_t* p_value, int32_t p_startIndex);
uint64_t m2_System_BitConverter_ToUInt64_0(uint8_t* p_value, int32_t p_startIndex);
float m2_System_BitConverter_ToSingle_0(uint8_t* p_value, int32_t p_startIndex);
double m2_System_BitConverter_ToDouble_0(uint8_t* p_value, int32_t p_startIndex);
int64_t m2_System_BitConverter_DoubleToInt64Bits_0(double p_value);
double m2_System_BitConverter_Int64BitsToDouble_0(int64_t p_value);
int32_t m2_System_BitConverter_SingleToInt32Bits_0(float p_value);
float m2_System_BitConverter_Int32BitsToSingle_0(int32_t p_value);
void m2_System_Buffer_MemoryCopy_0(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy);
void m2_System_Buffer_MemoryCopy_1(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy);
void m2_System_Console_Write_0(t2_System_String* p_s);
void m2_System_Console_WriteLine_0(t2_System_String* p_s);
void m2_System_Console_WriteLine_1();
t2_System_String* m2_System_Console_ReadLine_0();
intptr_t m2_intptr_t_get_Zero_0();
int32_t m2_intptr_t_get_Size_0();
intptr_t m2_intptr_t__ctor_0(int32_t p_value);
intptr_t m2_intptr_t__ctor_1(int64_t p_value);
intptr_t m2_intptr_t__ctor_2(void* p_value);
int32_t m2_intptr_t_ToInt32_0(intptr_t* self);
int64_t m2_intptr_t_ToInt64_0(intptr_t* self);
void* m2_intptr_t_ToPointer_0(intptr_t* self);
intptr_t m2_intptr_t__ctor_3();
t2_System_Object* m2_System_Delegate_get_Target_0(t2_System_Delegate* self);
char m2_System_Delegate_op_Equality_0(t2_System_Delegate* p_a, t2_System_Delegate* p_b);
char m2_System_Delegate_op_Inequality_0(t2_System_Delegate* p_a, t2_System_Delegate* p_b);
t2_System_Delegate* m2_System_Delegate_Combine_0(t2_System_Delegate* p_a, t2_System_Delegate* p_b);
t2_System_Delegate* m2_System_Delegate_Remove_0(t2_System_Delegate* p_source, t2_System_Delegate* p_value);
t2_System_Delegate* m2_System_Delegate_RemoveAll_0(t2_System_Delegate* p_source, t2_System_Delegate* p_value);
t2_System_Delegate* m2_System_Delegate__ctor_0(t2_System_Delegate* self);
t2_System_DllNotFoundException* m2_System_DllNotFoundException__ctor_0(t2_System_DllNotFoundException* self);
t2_System_String* m2_System_Enum_ToString_0(t2_System_Enum* self);
t2_System_Enum* m2_System_Enum__ctor_0(t2_System_Enum* self);
t2_System_String* m2_System_Environment_get_NewLine_0();
void m2_System_Environment_SetEnvironmentVariable_0(t2_System_String* p_variable, t2_System_String* p_value);
t2_System_Exception* m2_System_Exception__ctor_0(t2_System_Exception* self);
t2_System_Exception* m2_System_Exception__ctor_1(t2_System_Exception* self, t2_System_String* p_message);
t2_System_String* m2_System_Exception_get_Message_0(t2_System_Exception* self);
t2_System_FlagsAttribute* m2_System_FlagsAttribute__ctor_0(t2_System_FlagsAttribute* self);
t2_System_IndexOutOfRangeException* m2_System_IndexOutOfRangeException__ctor_0(t2_System_IndexOutOfRangeException* self);
t2_System_InvalidCastException* m2_System_InvalidCastException__ctor_0(t2_System_InvalidCastException* self);
t2_System_String* m2_double_ToString_0(double* self);
double m2_double__ctor_0();
char m2_float_IsNaN_0(float p_f);
char m2_float_IsNegative_0(float p_f);
t2_System_String* m2_float_ToString_0(float* self);
float m2_float__ctor_0();
t2_System_MulticastDelegate* m2_System_MulticastDelegate__ctor_0(t2_System_MulticastDelegate* self);
t2_System_NotImplementedException* m2_System_NotImplementedException__ctor_0(t2_System_NotImplementedException* self);
t2_System_NotImplementedException* m2_System_NotImplementedException__ctor_1(t2_System_NotImplementedException* self, t2_System_String* p_message);
t2_System_NotSupportedException* m2_System_NotSupportedException__ctor_0(t2_System_NotSupportedException* self);
t2_System_NotSupportedException* m2_System_NotSupportedException__ctor_1(t2_System_NotSupportedException* self, t2_System_String* p_message);
t2_System_String* m2_int32_t_ToString_0(int32_t* self);
int32_t m2_int32_t__ctor_0();
t2_System_Type* m2_System_Object_GetType_0(t2_System_Object* self);
t2_System_Object* m2_System_Object__ctor_0(t2_System_Object* self);
t2_System_ObsoleteAttribute* m2_System_ObsoleteAttribute__ctor_0(t2_System_ObsoleteAttribute* self);
t2_System_ObsoleteAttribute* m2_System_ObsoleteAttribute__ctor_1(t2_System_ObsoleteAttribute* self, t2_System_String* p_message);
t2_System_ObsoleteAttribute* m2_System_ObsoleteAttribute__ctor_2(t2_System_ObsoleteAttribute* self, t2_System_String* p_message, char p_error);
char m2_System_ObsoleteAttribute_get_IsError_0(t2_System_ObsoleteAttribute* self);
t2_System_String* m2_System_ObsoleteAttribute_get_Message_0(t2_System_ObsoleteAttribute* self);
t2_System_String* m2_uint32_t_ToString_0(uint32_t* self);
uint32_t m2_uint32_t__ctor_0();
t2_System_Random* m2_System_Random__ctor_0(t2_System_Random* self);
t2_System_Random* m2_System_Random__ctor_1(t2_System_Random* self, int32_t p_seed);
int32_t m2_System_Random_GenerateSeed_0();
int32_t m2_System_Random_Next_0(t2_System_Random* self);
t2_System_RuntimeType* m2_System_RuntimeType__ctor_0(t2_System_RuntimeType* self);
t2_System_String* m2_char16_t_ToString_0(char16_t* self);
char16_t m2_char16_t__ctor_0();
t2_System_String* m2_System_String__ctor_0(t2_System_String* self, char16_t* p_value);
t2_System_String* m2_System_String__ctor_1(t2_System_String* self, char16_t* p_value);
t2_System_String* m2_System_String__ctor_2(t2_System_String* self, char16_t p_c, int32_t p_count);
char16_t m2_System_String_get_Item_0(t2_System_String* self, int32_t p_index);
int32_t m2_System_String_get_Length_0(t2_System_String* self);
t2_System_String* m2_System_String_FastAllocateString_0(int32_t p_length);
char m2_System_String_IsNullOrEmpty_0(t2_System_String* p_value);
void m2_System_String_FillStringChecked_0(t2_System_String* p_dest, int32_t p_destPos, t2_System_String* p_src);
void m2_System_String_FillStringChecked_1(t2_System_String* p_dest, int32_t p_destPos, char16_t p_src);
t2_System_String* m2_System_String_op_Addition_0(t2_System_String* p_str, char16_t p_c);
t2_System_String* m2_System_String_op_Addition_1(char16_t p_c, t2_System_String* p_str);
t2_System_String* m2_System_String_Concat_0(t2_System_String* p_str0, t2_System_String* p_str1);
t2_System_String* m2_System_String_Concat_1(t2_System_String* p_str0, t2_System_String* p_str1, t2_System_String* p_str2);
t2_System_String* m2_System_String_Concat_2(t2_System_String* p_str0, t2_System_String* p_str1, t2_System_String* p_str2, t2_System_String* p_str3);
char m2_System_String_op_Equality_0(t2_System_String* p_value1, t2_System_String* p_value2);
char m2_System_String_op_Inequality_0(t2_System_String* p_value1, t2_System_String* p_value2);
char m2_System_String_Equals_0(t2_System_String* self, t2_System_String* p_value);
void m2_System_String__cctor_0();
t2_System_ThrowArgumentNullException* m2_System_ThrowArgumentNullException__ctor_0(t2_System_ThrowArgumentNullException* self);
t2_System_Type* m2_System_Type_GetTypeFromHandle_0(t2_System_RuntimeTypeHandle p_handle);
char m2_System_Type_IsAssignableFrom_0(t2_System_Type* self, t2_System_Type* p_c);
t2_System_String* m2_System_Type_ToString_0(t2_System_Type* self);
t2_System_Type* m2_System_Type__ctor_0(t2_System_Type* self);
t2_System_ValueType* m2_System_ValueType__ctor_0(t2_System_ValueType* self);
t4_System_Collections_ObjectModel_ReadOnlyCollectionType m4_System_Collections_ObjectModel_ReadOnlyCollectionType__ctor_0();
void m3_System_Diagnostics_Debug_WriteLine_0(t2_System_String* p_message);
char m3_System_IO_File_Exists_0(t2_System_String* p_path);
char m3_System_IO_File_ExistsInternal_0(uint8_t* p_path);
t3_System_IO_FileNotFoundException* m3_System_IO_FileNotFoundException__ctor_0(t3_System_IO_FileNotFoundException* self);
t3_System_IO_FileNotFoundException* m3_System_IO_FileNotFoundException__ctor_1(t3_System_IO_FileNotFoundException* self, t2_System_String* p_message);
int64_t m3_System_IO_FileStream_get_Length_0(t3_System_IO_FileStream* self);
int64_t m3_System_IO_FileStream_get_Position_0(t3_System_IO_FileStream* self);
void m3_System_IO_FileStream_set_Position_0(t3_System_IO_FileStream* self, int64_t p_value);
t3_System_IO_FileStream* m3_System_IO_FileStream__ctor_0(t3_System_IO_FileStream* self, t2_System_String* p_path, t3_System_IO_FileMode p_mode, t3_System_IO_FileAccess p_access, t3_System_IO_FileShare p_share);
void m3_System_IO_FileStream_Dispose_0(t3_System_IO_FileStream* self);
int32_t m3_System_IO_FileStream_Read_0(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
int32_t m3_System_IO_FileStream_Read_1(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
void m3_System_IO_FileStream_Write_0(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
void m3_System_IO_FileStream_Write_1(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count);
t3_System_IO_IOException* m3_System_IO_IOException__ctor_0(t3_System_IO_IOException* self);
t3_System_IO_IOException* m3_System_IO_IOException__ctor_1(t3_System_IO_IOException* self, t2_System_String* p_message);
t2_System_String* m3_System_IO_Path_Combine_0(t2_System_String* p_path1, t2_System_String* p_path2);
t2_System_String* m3_System_IO_Path_Combine_1(t2_System_String* p_path1, t2_System_String* p_path2, t2_System_String* p_path3);
t2_System_String* m3_System_IO_Path_Combine_2(t2_System_String* p_path1, t2_System_String* p_path2, t2_System_String* p_path3, t2_System_String* p_path4);
int32_t m3_System_IO_Stream_ReadByte_0(t3_System_IO_Stream* self);
void m3_System_IO_Stream_WriteByte_0(t3_System_IO_Stream* self, uint8_t p_value);
t3_System_IO_Stream* m3_System_IO_Stream__ctor_0(t3_System_IO_Stream* self);
t3_System_Reflection_AssemblyCompanyAttribute* m3_System_Reflection_AssemblyCompanyAttribute__ctor_0(t3_System_Reflection_AssemblyCompanyAttribute* self, t2_System_String* p_company);
t2_System_String* m3_System_Reflection_AssemblyCompanyAttribute_get_Company_0(t3_System_Reflection_AssemblyCompanyAttribute* self);
t3_System_Reflection_AssemblyConfigurationAttribute* m3_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t3_System_Reflection_AssemblyConfigurationAttribute* self, t2_System_String* p_configuration);
t2_System_String* m3_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0(t3_System_Reflection_AssemblyConfigurationAttribute* self);
t3_System_Reflection_AssemblyCopyrightAttribute* m3_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t3_System_Reflection_AssemblyCopyrightAttribute* self, t2_System_String* p_copyright);
t2_System_String* m3_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0(t3_System_Reflection_AssemblyCopyrightAttribute* self);
t3_System_Reflection_AssemblyCultureAttribute* m3_System_Reflection_AssemblyCultureAttribute__ctor_0(t3_System_Reflection_AssemblyCultureAttribute* self, t2_System_String* p_culture);
t2_System_String* m3_System_Reflection_AssemblyCultureAttribute_get_Culture_0(t3_System_Reflection_AssemblyCultureAttribute* self);
t3_System_Reflection_AssemblyDelaySignAttribute* m3_System_Reflection_AssemblyDelaySignAttribute__ctor_0(t3_System_Reflection_AssemblyDelaySignAttribute* self, char p_delaySign);
char m3_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0(t3_System_Reflection_AssemblyDelaySignAttribute* self);
t3_System_Reflection_AssemblyDescriptionAttribute* m3_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t3_System_Reflection_AssemblyDescriptionAttribute* self, t2_System_String* p_description);
t2_System_String* m3_System_Reflection_AssemblyDescriptionAttribute_get_Description_0(t3_System_Reflection_AssemblyDescriptionAttribute* self);
t3_System_Reflection_AssemblyFileVersionAttribute* m3_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t3_System_Reflection_AssemblyFileVersionAttribute* self, t2_System_String* p_version);
t2_System_String* m3_System_Reflection_AssemblyFileVersionAttribute_get_Version_0(t3_System_Reflection_AssemblyFileVersionAttribute* self);
t3_System_Reflection_AssemblyInformationalVersionAttribute* m3_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t3_System_Reflection_AssemblyInformationalVersionAttribute* self, t2_System_String* p_informationalVersion);
t2_System_String* m3_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0(t3_System_Reflection_AssemblyInformationalVersionAttribute* self);
t3_System_Reflection_AssemblyKeyFileAttribute* m3_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t3_System_Reflection_AssemblyKeyFileAttribute* self, t2_System_String* p_keyFile);
t2_System_String* m3_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0(t3_System_Reflection_AssemblyKeyFileAttribute* self);
t3_System_Reflection_AssemblyProductAttribute* m3_System_Reflection_AssemblyProductAttribute__ctor_0(t3_System_Reflection_AssemblyProductAttribute* self, t2_System_String* p_product);
t2_System_String* m3_System_Reflection_AssemblyProductAttribute_get_Product_0(t3_System_Reflection_AssemblyProductAttribute* self);
t3_System_Reflection_AssemblyTitleAttribute* m3_System_Reflection_AssemblyTitleAttribute__ctor_0(t3_System_Reflection_AssemblyTitleAttribute* self, t2_System_String* p_title);
t2_System_String* m3_System_Reflection_AssemblyTitleAttribute_get_Title_0(t3_System_Reflection_AssemblyTitleAttribute* self);
t3_System_Reflection_AssemblyTrademarkAttribute* m3_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t3_System_Reflection_AssemblyTrademarkAttribute* self, t2_System_String* p_trademark);
t2_System_String* m3_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0(t3_System_Reflection_AssemblyTrademarkAttribute* self);
t3_System_Reflection_AssemblyVersionAttribute* m3_System_Reflection_AssemblyVersionAttribute__ctor_0(t3_System_Reflection_AssemblyVersionAttribute* self, t2_System_String* p_version);
t2_System_String* m3_System_Reflection_AssemblyVersionAttribute_get_Version_0(t3_System_Reflection_AssemblyVersionAttribute* self);
t3_System_Reflection_DefaultMemberAttribute* m3_System_Reflection_DefaultMemberAttribute__ctor_0(t3_System_Reflection_DefaultMemberAttribute* self, t2_System_String* p_memberName);
t2_System_String* m3_System_Reflection_DefaultMemberAttribute_get_MemberName_0(t3_System_Reflection_DefaultMemberAttribute* self);
t4_System_Runtime_CompilerServices_ExtensionAttribute* m4_System_Runtime_CompilerServices_ExtensionAttribute__ctor_0(t4_System_Runtime_CompilerServices_ExtensionAttribute* self);
t4_System_Runtime_CompilerServices_MethodImplOptions m4_System_Runtime_CompilerServices_MethodImplOptions__ctor_0();
t4_System_Runtime_CompilerServices_MethodImplAttribute* m4_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t4_System_Runtime_CompilerServices_MethodImplAttribute* self, t4_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions);
t4_System_Runtime_CompilerServices_MethodImplAttribute* m4_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(t4_System_Runtime_CompilerServices_MethodImplAttribute* self, int16_t p_value);
t4_System_Runtime_CompilerServices_MethodImplAttribute* m4_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2(t4_System_Runtime_CompilerServices_MethodImplAttribute* self);
int32_t m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
t4_System_Runtime_InteropServices_CallingConvention m4_System_Runtime_InteropServices_CallingConvention__ctor_0();
t4_System_Runtime_InteropServices_DllImportAttribute* m4_System_Runtime_InteropServices_DllImportAttribute__ctor_0(t4_System_Runtime_InteropServices_DllImportAttribute* self, t2_System_String* p_dllName);
intptr_t m4_System_Runtime_InteropServices_Marshal_StringToHGlobalAnsi_0(t2_System_String* p_s);
intptr_t m4_System_Runtime_InteropServices_Marshal_StringToHGlobalUni_0(t2_System_String* p_s);
t2_System_String* m4_System_Runtime_InteropServices_Marshal_PtrToStringAnsi_0(intptr_t p_ptr);
t2_System_String* m4_System_Runtime_InteropServices_Marshal_PtrToStringUni_0(intptr_t p_ptr);
intptr_t m4_System_Runtime_InteropServices_Marshal_AllocHGlobal_0(int32_t p_cb);
void m4_System_Runtime_InteropServices_Marshal_FreeHGlobal_0(intptr_t p_hglobal);
intptr_t m4_System_Runtime_InteropServices_Marshal_GetNativePointerForObject_0(t2_System_Object* p_o);
intptr_t m4_System_Runtime_InteropServices_Marshal_GetNativePointerForArray_0(t2_System_Array* p_a);
intptr_t m4_System_Runtime_InteropServices_Marshal_GetHINSTANCE_0();
t4_System_Runtime_InteropServices_OutAttribute* m4_System_Runtime_InteropServices_OutAttribute__ctor_0(t4_System_Runtime_InteropServices_OutAttribute* self);
t4_System_Runtime_InteropServices_LayoutKind m4_System_Runtime_InteropServices_LayoutKind__ctor_0();
t4_System_Runtime_InteropServices_StructLayoutAttribute* m4_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t4_System_Runtime_InteropServices_StructLayoutAttribute* self, t4_System_Runtime_InteropServices_LayoutKind p_layoutKind);
t4_System_Runtime_InteropServices_StructLayoutAttribute* m4_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(t4_System_Runtime_InteropServices_StructLayoutAttribute* self, int16_t p_layoutKind);
t4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute* m4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute__ctor_0(t4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute* self, t4_System_Runtime_InteropServices_CallingConvention p_callingConvention);
t4_System_Runtime_Versioning_TargetFrameworkAttribute* m4_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t4_System_Runtime_Versioning_TargetFrameworkAttribute* self, t2_System_String* p_frameworkName);
void m3_System_Text_Encoding__cctor_0();
int32_t m3_System_Text_Encoding_GetByteCount_0(t3_System_Text_Encoding* self, char16_t* p_chars);
int32_t m3_System_Text_Encoding_GetByteCount_1(t3_System_Text_Encoding* self, t2_System_String* p_s);
int32_t m3_System_Text_Encoding_GetByteCount_2(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count);
int32_t m3_System_Text_Encoding_GetByteCount_3(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_count);
uint8_t* m3_System_Text_Encoding_GetBytes_0(t3_System_Text_Encoding* self, char16_t* p_chars);
uint8_t* m3_System_Text_Encoding_GetBytes_1(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count);
int32_t m3_System_Text_Encoding_GetBytes_2(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex);
int32_t m3_System_Text_Encoding_GetBytes_3(t3_System_Text_Encoding* self, t2_System_String* p_s, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex);
int32_t m3_System_Text_Encoding_GetBytes_4(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteCount);
uint8_t* m3_System_Text_Encoding_GetBytes_5(t3_System_Text_Encoding* self, t2_System_String* p_s);
int32_t m3_System_Text_Encoding_GetCharCount_0(t3_System_Text_Encoding* self, uint8_t* p_bytes);
int32_t m3_System_Text_Encoding_GetCharCount_1(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count);
int32_t m3_System_Text_Encoding_GetCharCount_2(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_count);
int32_t m3_System_Text_Encoding_GetChars_0(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteCount, char16_t* p_chars, int32_t p_charCount);
char16_t* m3_System_Text_Encoding_GetChars_1(t3_System_Text_Encoding* self, uint8_t* p_bytes);
char16_t* m3_System_Text_Encoding_GetChars_2(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count);
int32_t m3_System_Text_Encoding_GetChars_3(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteIndex, int32_t p_byteCount, char16_t* p_chars, int32_t p_charIndex);
t2_System_String* m3_System_Text_Encoding_GetString_0(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteCount);
t2_System_String* m3_System_Text_Encoding_GetString_1(t3_System_Text_Encoding* self, uint8_t* p_bytes);
t2_System_String* m3_System_Text_Encoding_GetString_2(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count);
t3_System_Text_Encoding* m3_System_Text_Encoding__ctor_0(t3_System_Text_Encoding* self);
t3_System_Text_StandardEncoding* m3_System_Text_StandardEncoding__ctor_0(t3_System_Text_StandardEncoding* self);
t3_System_Text_StringBuilder* m3_System_Text_StringBuilder__ctor_0(t3_System_Text_StringBuilder* self);
t3_System_Threading_Thread* m3_System_Threading_Thread__ctor_0(t3_System_Threading_Thread* self);
t2_CS2X_NativeStringType m2_CS2X_NativeStringType__ctor_0();
t2_CS2X_NativeStringParamAttribute* m2_CS2X_NativeStringParamAttribute__ctor_0(t2_CS2X_NativeStringParamAttribute* self, t2_CS2X_NativeStringType p_type);
t2_System_String* m2_uint8_t_ToString_0(uint8_t* self);
uint8_t m2_uint8_t__ctor_0();
t2_System_DateTime m2_System_DateTime__ctor_0();
t2_System_Guid m2_System_Guid_NewGuid_0();
t2_System_String* m2_System_Guid_ToString_0(t2_System_Guid* self);
t2_System_Guid m2_System_Guid__ctor_0();
void m2_System_Guid__cctor_0();
t2_System_String* m2_int16_t_ToString_0(int16_t* self);
int16_t m2_int16_t__ctor_0();
t2_System_String* m2_int64_t_ToString_0(int64_t* self);
int64_t m2_int64_t__ctor_0();
t2_System_RuntimeTypeHandle m2_System_RuntimeTypeHandle__ctor_0(t2_System_RuntimeType* p_type);
t2_System_RuntimeTypeHandle m2_System_RuntimeTypeHandle__ctor_1();
t2_System_String* m2_int8_t_ToString_0(int8_t* self);
int8_t m2_int8_t__ctor_0();
t2_System_String* m2_uint16_t_ToString_0(uint16_t* self);
uint16_t m2_uint16_t__ctor_0();
t2_System_String* m2_uint64_t_ToString_0(uint64_t* self);
uint64_t m2_uint64_t__ctor_0();
int32_t m2_uintptr_t_get_Size_0();
uintptr_t m2_uintptr_t__ctor_0(uint32_t p_value);
uintptr_t m2_uintptr_t__ctor_1(uint64_t p_value);
uintptr_t m2_uintptr_t__ctor_2(void* p_value);
uint32_t m2_uintptr_t_ToUInt32_0(uintptr_t* self);
uint64_t m2_uintptr_t_ToUInt64_0(uintptr_t* self);
void* m2_uintptr_t_ToPointer_0(uintptr_t* self);
uintptr_t m2_uintptr_t__ctor_3();
void m2_uintptr_t__cctor_0();
t3_System_IO_FileAccess m3_System_IO_FileAccess__ctor_0();
t3_System_IO_FileMode m3_System_IO_FileMode__ctor_0();
t3_System_IO_FileShare m3_System_IO_FileShare__ctor_0();
t3_System_Reflection_MethodImplAttributes m3_System_Reflection_MethodImplAttributes__ctor_0();
t4_System_Runtime_InteropServices_UnmanagedType m4_System_Runtime_InteropServices_UnmanagedType__ctor_0();
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3__ctor_0(float p_x, float p_y, float p_z);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Addition_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Subtraction_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_UnaryNegation_0(t2_RayTraceBenchmark_Vec3 p_p1);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Multiply_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Multiply_1(t2_RayTraceBenchmark_Vec3 p_p1, float p_p2);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Multiply_2(float p_p1, t2_RayTraceBenchmark_Vec3 p_p2);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Division_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Division_1(t2_RayTraceBenchmark_Vec3 p_p1, float p_p2);
float m2_RayTraceBenchmark_Vec3_Dot_0(t2_RayTraceBenchmark_Vec3 p_v1, t2_RayTraceBenchmark_Vec3 p_v2);
float m2_RayTraceBenchmark_Vec3_Magnitude_0(t2_RayTraceBenchmark_Vec3 p_v);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_Normalize_0(t2_RayTraceBenchmark_Vec3 p_v);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3__ctor_1();
void m2_RayTraceBenchmark_Vec3__cctor_0();
t2_RayTraceBenchmark_Sphere* m2_RayTraceBenchmark_Sphere__ctor_0(t2_RayTraceBenchmark_Sphere* self, t2_RayTraceBenchmark_Vec3 p_c, float p_r, t2_RayTraceBenchmark_Vec3 p_clr, float p_refl, float p_trans);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Sphere_Normal_0(t2_RayTraceBenchmark_Sphere* p_sphere, t2_RayTraceBenchmark_Vec3 p_pos);
char m2_RayTraceBenchmark_Sphere_Intersect_0(t2_RayTraceBenchmark_Sphere* p_sphere, t2_RayTraceBenchmark_Ray p_ray);
char m2_RayTraceBenchmark_Sphere_Intersect_1(t2_RayTraceBenchmark_Sphere* p_sphere, t2_RayTraceBenchmark_Ray p_ray, float* p_distance);
t2_RayTraceBenchmark_Light* m2_RayTraceBenchmark_Light__ctor_0(t2_RayTraceBenchmark_Light* self, t2_RayTraceBenchmark_Vec3 p_position, t2_RayTraceBenchmark_Vec3 p_color);
t2_RayTraceBenchmark_Scene* m2_RayTraceBenchmark_Scene__ctor_0(t2_RayTraceBenchmark_Scene* self);
t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Benchmark_trace_0(t2_RayTraceBenchmark_Ray p_ray, t2_RayTraceBenchmark_Scene* p_scene, int32_t p_depth);
uint8_t* m2_RayTraceBenchmark_Benchmark_Render_0(t2_RayTraceBenchmark_Scene* p_scene, uint8_t* p_pixels);
void m2_RayTraceBenchmark_BenchmarkMain_Main_0(t2_System_String** p_args);
void m2_RayTraceBenchmark_BenchmarkMain_Start_0();
uint8_t* m2_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRA_0(uint8_t* p_rgb);
int32_t* m2_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRAInt_0(uint8_t* p_rgb);
t2_RayTraceBenchmark_Ray m2_RayTraceBenchmark_Ray__ctor_0();

/* =============================== */
/* Enum ToString Method definitions */
/* =============================== */

/* =============================== */
/* Helper runtime methods */
/* =============================== */
void* CS2X_AllocType(size_t size, t2_System_RuntimeType* runtimeType, void* finalizerFuncPtr)
{
	t2_System_RuntimeType* ptr = CS2X_GC_New(size, finalizerFuncPtr);
	ptr->CS2X_RuntimeType = runtimeType;
	return ptr;
}

void* CS2X_AllocTypeAtomic(size_t size, t2_System_RuntimeType* runtimeType, void* finalizerFuncPtr)
{
	t2_System_RuntimeType* ptr = CS2X_GC_NewAtomic(size, finalizerFuncPtr);
	ptr->CS2X_RuntimeType = runtimeType;
	return ptr;
}

void* CS2X_AllocArrayType(size_t elementSize, size_t length, t2_System_RuntimeType* runtimeType)
{
	t2_System_RuntimeType* ptr = CS2X_GC_New(ArrayOffset + (elementSize * length), 0);
	ptr->CS2X_RuntimeType = runtimeType;
	*((size_t*)ptr + 1) = length;
	return ptr;
}

void* CS2X_AllocArrayTypeAtomic(size_t elementSize, size_t length, t2_System_RuntimeType* runtimeType)
{
	t2_System_RuntimeType* ptr = CS2X_GC_NewAtomic(ArrayOffset + (elementSize * length), 0);
	ptr->CS2X_RuntimeType = runtimeType;
	*((size_t*)ptr + 1) = length;
	return ptr;
}

char CS2X_IsType(t2_System_RuntimeType* runtimeType, t2_System_RuntimeType* isRuntimeType)
{
	t2_System_RuntimeType* runtimeTypeBase = runtimeType;
	while (runtimeTypeBase != 0)
	{
		if (runtimeTypeBase == isRuntimeType) return 1;
		runtimeTypeBase = runtimeTypeBase->f__BaseType_k__BackingField_1;
	}
	return 0;
}

t2_System_Object* CS2X_TestUpCast(t2_System_Object* self, t2_System_RuntimeType* isRuntimeType)
{
	if (self == 0) return 0;
	if (CS2X_IsType(self->CS2X_RuntimeType, isRuntimeType)) return self;
	CS2X_ThreadExceptionObject = m2_System_InvalidCastException__ctor_0(CS2X_AllocType(sizeof(t2_System_InvalidCastException), &rt2_System_InvalidCastException_OBJ, 0));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

/* =============================== */
/* Methods definitions */
/* =============================== */
t2_System_ArgumentException* m2_System_ArgumentException__ctor_0(t2_System_ArgumentException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_ArgumentException* m2_System_ArgumentException__ctor_1(t2_System_ArgumentException* self, t2_System_String* p_message)
{
	m2_System_Exception__ctor_1(self, p_message);
	return self;
}

t2_System_ArgumentOutOfRangeException* m2_System_ArgumentOutOfRangeException__ctor_0(t2_System_ArgumentOutOfRangeException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_ArgumentOutOfRangeException* m2_System_ArgumentOutOfRangeException__ctor_1(t2_System_ArgumentOutOfRangeException* self, t2_System_String* p_message)
{
	m2_System_Exception__ctor_1(self, p_message);
	return self;
}

int32_t m2_System_Array_get_Length_0(t2_System_Array* self)
{
	return (int32_t)(*((intptr_t*)self + 1));
}

int64_t m2_System_Array_get_LongLength_0(t2_System_Array* self)
{
	return (int64_t)(*((intptr_t*)self + 1));
}

int32_t m2_System_Array_GetElementSize_0(t2_System_Array* p_array)
{
	return *(int32_t*)((char*)p_array->CS2X_RuntimeType + sizeof(t2_System_RuntimeType));
}

void m2_System_Array_Copy_0(t2_System_Array* p_sourceArray, int32_t p_sourceIndex, t2_System_Array* p_destinationArray, int32_t p_destinationIndex, int32_t p_length)
{
	int32_t l_elementSize_0;
	uint8_t* l_sourcePtr_1;
	uint8_t* l_destinationPtr_2;
	if (m2_System_Object_GetType_0(p_sourceArray) != m2_System_Object_GetType_0(p_destinationArray))
	{
		CS2X_ThreadExceptionObject = m2_System_Exception__ctor_1(CS2X_AllocType(sizeof(t2_System_Exception), &rt2_System_Exception_OBJ, 0), StringLiteral_0);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if (p_sourceIndex < 0 || (p_sourceIndex + p_length) > m2_System_Array_get_Length_0(p_sourceArray))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_1(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0), StringLiteral_1);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if (p_destinationIndex < 0 || (p_destinationIndex + p_length) > m2_System_Array_get_Length_0(p_destinationArray))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_1(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0), StringLiteral_2);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_elementSize_0 = m2_System_Array_GetElementSize_0(p_sourceArray);
	l_sourcePtr_1 = (uint8_t*)m4_System_Runtime_InteropServices_Marshal_GetNativePointerForArray_0(p_sourceArray) + (p_sourceIndex * l_elementSize_0);
	l_destinationPtr_2 = (uint8_t*)m4_System_Runtime_InteropServices_Marshal_GetNativePointerForArray_0(p_destinationArray) + (p_destinationIndex * l_elementSize_0);
	m2_System_Buffer_MemoryCopy_0((void*)l_sourcePtr_1, (void*)l_destinationPtr_2, p_length * l_elementSize_0, p_length * l_elementSize_0);
}

void m2_System_Array_Copy_1(t2_System_Array* p_sourceArray, int64_t p_sourceIndex, t2_System_Array* p_destinationArray, int64_t p_destinationIndex, int64_t p_length)
{
	int32_t l_elementSize_0;
	uint8_t* l_sourcePtr_1;
	uint8_t* l_destinationPtr_2;
	if (m2_System_Object_GetType_0(p_sourceArray) != m2_System_Object_GetType_0(p_destinationArray))
	{
		CS2X_ThreadExceptionObject = m2_System_Exception__ctor_1(CS2X_AllocType(sizeof(t2_System_Exception), &rt2_System_Exception_OBJ, 0), StringLiteral_0);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if (p_sourceIndex < 0 || (p_sourceIndex + p_length) > m2_System_Array_get_Length_0(p_sourceArray))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_1(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0), StringLiteral_1);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if (p_destinationIndex < 0 || (p_destinationIndex + p_length) > m2_System_Array_get_Length_0(p_destinationArray))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_1(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0), StringLiteral_2);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_elementSize_0 = m2_System_Array_GetElementSize_0(p_sourceArray);
	l_sourcePtr_1 = (uint8_t*)m4_System_Runtime_InteropServices_Marshal_GetNativePointerForArray_0(p_sourceArray) + (p_sourceIndex * l_elementSize_0);
	l_destinationPtr_2 = (uint8_t*)m4_System_Runtime_InteropServices_Marshal_GetNativePointerForArray_0(p_destinationArray) + (p_destinationIndex * l_elementSize_0);
	m2_System_Buffer_MemoryCopy_0(l_sourcePtr_1, l_destinationPtr_2, p_length, p_length);
}

void m2_System_Array_Copy_2(t2_System_Array* p_sourceArray, t2_System_Array* p_destinationArray, int32_t p_length)
{
	m2_System_Array_Copy_0(p_sourceArray, 0, p_destinationArray, 0, p_length);
}

void m2_System_Array_Copy_3(t2_System_Array* p_sourceArray, t2_System_Array* p_destinationArray, int64_t p_length)
{
	m2_System_Array_Copy_1(p_sourceArray, 0, p_destinationArray, 0, p_length);
}

void m2_System_Array_FastResize_0(t2_System_Array** p_array, int32_t p_newSize, int32_t p_elementSize)
{
	t2_System_RuntimeType* runtimeType = (*p_array)->CS2X_RuntimeType;
	size_t oldSize = (size_t)(*((intptr_t*)(*p_array) + 1));
	(*p_array) = CS2X_GC_Resize((*p_array), oldSize, (size_t)(ArrayOffset + (p_elementSize * p_newSize)));
	(*p_array)->CS2X_RuntimeType = runtimeType;
	(*((intptr_t*)(*p_array) + 1)) = p_newSize;
}

t2_System_Array* m2_System_Array__ctor_0(t2_System_Array* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t2_System_Attribute* m2_System_Attribute__ctor_0(t2_System_Attribute* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

char m2_char__ctor_0()
{
	char selfObj = {0};
	return selfObj;
}

t2_System_AttributeTargets m2_System_AttributeTargets__ctor_0()
{
	t2_System_AttributeTargets selfObj = {0};
	return selfObj;
}

t2_System_AttributeUsageAttribute* m2_System_AttributeUsageAttribute__ctor_0(t2_System_AttributeUsageAttribute* self, t2_System_AttributeTargets p_validOn)
{
	m2_System_Attribute__ctor_0(self);
	self->f__attributeTarget_2 = 32767;
	self->f__attributeTarget_2 = p_validOn;
	return self;
}

t2_System_AttributeTargets m2_System_AttributeUsageAttribute_get_ValidOn_0(t2_System_AttributeUsageAttribute* self)
{
	return self->f__attributeTarget_2;
}

char16_t m2_System_BitConverter_ToChar_0(uint8_t* p_value, int32_t p_startIndex)
{
	return (char16_t)m2_System_BitConverter_ToInt16_0(p_value, p_startIndex);
}

int16_t m2_System_BitConverter_ToInt16_0(uint8_t* p_value, int32_t p_startIndex)
{
	uint8_t* l_ptr_0;
	if (p_value == 0)
	{
		CS2X_ThreadExceptionObject = m2_System_ThrowArgumentNullException__ctor_0(CS2X_AllocType(sizeof(t2_System_ThrowArgumentNullException), &rt2_System_ThrowArgumentNullException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if ((uint32_t)p_startIndex >= (uint32_t)m2_System_Array_get_Length_0(p_value))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if (p_startIndex > m2_System_Array_get_Length_0(p_value) - sizeof(int16_t))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentException), &rt2_System_ArgumentException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_ptr_0 = (uint8_t*)(((char*)p_value) + ArrayOffset);
	return *((int16_t*)l_ptr_0);
}

int32_t m2_System_BitConverter_ToInt32_0(uint8_t* p_value, int32_t p_startIndex)
{
	uint8_t* l_ptr_0;
	if (p_value == 0)
	{
		CS2X_ThreadExceptionObject = m2_System_ThrowArgumentNullException__ctor_0(CS2X_AllocType(sizeof(t2_System_ThrowArgumentNullException), &rt2_System_ThrowArgumentNullException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if ((uint32_t)p_startIndex >= (uint32_t)m2_System_Array_get_Length_0(p_value))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if (p_startIndex > m2_System_Array_get_Length_0(p_value) - sizeof(int32_t))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentException), &rt2_System_ArgumentException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_ptr_0 = (uint8_t*)(((char*)p_value) + ArrayOffset);
	return *((int32_t*)l_ptr_0);
}

int64_t m2_System_BitConverter_ToInt64_0(uint8_t* p_value, int32_t p_startIndex)
{
	uint8_t* l_ptr_0;
	if (p_value == 0)
	{
		CS2X_ThreadExceptionObject = m2_System_ThrowArgumentNullException__ctor_0(CS2X_AllocType(sizeof(t2_System_ThrowArgumentNullException), &rt2_System_ThrowArgumentNullException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if ((uint32_t)p_startIndex >= (uint32_t)m2_System_Array_get_Length_0(p_value))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if (p_startIndex > m2_System_Array_get_Length_0(p_value) - sizeof(int64_t))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentException), &rt2_System_ArgumentException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_ptr_0 = (uint8_t*)(((char*)p_value) + ArrayOffset);
	return *((int64_t*)l_ptr_0);
}

uint16_t m2_System_BitConverter_ToUInt16_0(uint8_t* p_value, int32_t p_startIndex)
{
	return (uint16_t)m2_System_BitConverter_ToInt16_0(p_value, p_startIndex);
}

uint32_t m2_System_BitConverter_ToUInt32_0(uint8_t* p_value, int32_t p_startIndex)
{
	return (uint32_t)m2_System_BitConverter_ToInt16_0(p_value, p_startIndex);
}

uint64_t m2_System_BitConverter_ToUInt64_0(uint8_t* p_value, int32_t p_startIndex)
{
	return (uint64_t)m2_System_BitConverter_ToInt16_0(p_value, p_startIndex);
}

float m2_System_BitConverter_ToSingle_0(uint8_t* p_value, int32_t p_startIndex)
{
	return m2_System_BitConverter_Int32BitsToSingle_0(m2_System_BitConverter_ToInt32_0(p_value, p_startIndex));
}

double m2_System_BitConverter_ToDouble_0(uint8_t* p_value, int32_t p_startIndex)
{
	return m2_System_BitConverter_Int64BitsToDouble_0(m2_System_BitConverter_ToInt64_0(p_value, p_startIndex));
}

int64_t m2_System_BitConverter_DoubleToInt64Bits_0(double p_value)
{
	return *((int64_t*)&p_value);
}

double m2_System_BitConverter_Int64BitsToDouble_0(int64_t p_value)
{
	return *((double*)&p_value);
}

int32_t m2_System_BitConverter_SingleToInt32Bits_0(float p_value)
{
	return *((int32_t*)&p_value);
}

float m2_System_BitConverter_Int32BitsToSingle_0(int32_t p_value)
{
	return *((float*)&p_value);
}

void m2_System_Buffer_MemoryCopy_0(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy)
{
	m2_System_Buffer_MemoryCopy_1(p_source, p_destination, (uint64_t)p_destinationSizeInBytes, (uint64_t)p_sourceBytesToCopy);
}

void m2_System_Buffer_MemoryCopy_1(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy)
{
	if (p_sourceBytesToCopy > p_destinationSizeInBytes)
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	memcpy(p_destination, p_source, (uintptr_t)p_sourceBytesToCopy);
}

void m2_System_Console_Write_0(t2_System_String* p_s)
{
	uint8_t* l_printBuff_0;
	char16_t* l_ptr_1;
	l_printBuff_0 = alloca(sizeof(uint8_t) * (m2_System_String_get_Length_0(p_s) + 1));
	l_printBuff_0[m2_System_String_get_Length_0(p_s)] = 0;
	l_ptr_1 = &p_s->f__firstChar_1;
	{
		char16_t* l_ptrOffset_2;
		int32_t l_i_3;
		l_ptrOffset_2 = l_ptr_1;
		for (l_i_3 = 0; l_i_3 != m2_System_String_get_Length_0(p_s); ++l_i_3)
		{
			l_printBuff_0[l_i_3] = (uint8_t)l_ptrOffset_2[l_i_3];
		}
		printf(l_printBuff_0);
	}
}

void m2_System_Console_WriteLine_0(t2_System_String* p_s)
{
	m2_System_Console_Write_0(m2_System_String_Concat_0(p_s, m2_System_Environment_get_NewLine_0()));
}

void m2_System_Console_WriteLine_1()
{
	m2_System_Console_Write_0(m2_System_Environment_get_NewLine_0());
}

t2_System_String* m2_System_Console_ReadLine_0()
{
	uint8_t* l_str_0;
	l_str_0 = alloca(sizeof(uint8_t) * (1024));
	if (gets(l_str_0) == 0)
	{
		return f_System_String_Empty;
	}
	return m3_System_Text_Encoding_GetString_0(f_System_Text_Encoding__ASCII_k__BackingField, l_str_0, (int32_t)strlen(l_str_0));
}

intptr_t m2_intptr_t_get_Zero_0()
{
	return m2_intptr_t__ctor_3();
}

int32_t m2_intptr_t_get_Size_0()
{
	return sizeof(void*);
}

intptr_t m2_intptr_t__ctor_0(int32_t p_value)
{
	return (int32_t)p_value;
}

intptr_t m2_intptr_t__ctor_1(int64_t p_value)
{
	return (int64_t)p_value;
}

intptr_t m2_intptr_t__ctor_2(void* p_value)
{
	return (intptr_t)p_value;
}

int32_t m2_intptr_t_ToInt32_0(intptr_t* self)
{
	return (int32_t)(*self);
}

int64_t m2_intptr_t_ToInt64_0(intptr_t* self)
{
	return (int64_t)(*self);
}

void* m2_intptr_t_ToPointer_0(intptr_t* self)
{
	return (void*)(*self);
}

intptr_t m2_intptr_t__ctor_3()
{
	intptr_t selfObj = {0};
	return selfObj;
}

t2_System_Object* m2_System_Delegate_get_Target_0(t2_System_Delegate* self)
{
	return self->f__target_1;
}

char m2_System_Delegate_op_Equality_0(t2_System_Delegate* p_a, t2_System_Delegate* p_b)
{
	return 1;
}

char m2_System_Delegate_op_Inequality_0(t2_System_Delegate* p_a, t2_System_Delegate* p_b)
{
	return 1;
}

t2_System_Delegate* m2_System_Delegate_Combine_0(t2_System_Delegate* p_a, t2_System_Delegate* p_b)
{
	t2_System_MulticastDelegate* l_ma_0;
	t2_System_MulticastDelegate* l_mb_1;
	t2_System_MulticastDelegate* l_last_2;
	if (p_a == 0)
	{
		return p_b;
	}
	l_ma_0 = (t2_System_MulticastDelegate*)CS2X_TestUpCast(p_a, &rt2_System_MulticastDelegate_OBJ);
	l_mb_1 = (t2_System_MulticastDelegate*)CS2X_TestUpCast(p_b, &rt2_System_MulticastDelegate_OBJ);
	l_last_2 = l_ma_0;
	while (l_last_2->f__next_2 != 0)
	{
		l_last_2 = l_last_2->f__next_2;
	}
	l_last_2->f__next_2 = l_mb_1;
	return p_a;
}

t2_System_Delegate* m2_System_Delegate_Remove_0(t2_System_Delegate* p_source, t2_System_Delegate* p_value)
{
	t2_System_MulticastDelegate* l_next_0;
	t2_System_MulticastDelegate* l_prev_1;
	t2_System_MulticastDelegate* l_last_2;
	t2_System_MulticastDelegate* l_lastPrev_3;
	if (p_source == 0)
	{
		return 0;
	}
	if (p_value == 0)
	{
		return p_source;
	}
	l_next_0 = (t2_System_MulticastDelegate*)CS2X_TestUpCast(p_source, &rt2_System_MulticastDelegate_OBJ);
	l_prev_1 = 0;
	l_last_2 = 0;
	l_lastPrev_3 = 0;
	while (l_next_0 != 0)
	{
		if (l_next_0->f__methodPtr_1 == p_value->f__methodPtr_1 && l_next_0->f__target_1 == p_value->f__target_1)
		{
			l_lastPrev_3 = l_prev_1;
			l_last_2 = l_next_0;
		}
		l_prev_1 = l_next_0;
		l_next_0 = l_next_0->f__next_2;
	}
	if (l_last_2 != 0)
	{
		if (l_last_2 == p_source)
		{
			t2_System_MulticastDelegate* l_multiSource_4;
			l_multiSource_4 = (t2_System_MulticastDelegate*)CS2X_TestUpCast(p_source, &rt2_System_MulticastDelegate_OBJ);
			l_next_0 = l_multiSource_4->f__next_2;
			l_multiSource_4->f__next_2 = 0;
			return l_next_0;
		}
		if (l_lastPrev_3 != 0)
		{
			l_lastPrev_3->f__next_2 = l_last_2->f__next_2;
			l_last_2->f__next_2 = 0;
		}
	}
	return p_source;
}

t2_System_Delegate* m2_System_Delegate_RemoveAll_0(t2_System_Delegate* p_source, t2_System_Delegate* p_value)
{
	t2_System_MulticastDelegate* l_next_0;
	t2_System_MulticastDelegate* l_prev_1;
	if (p_source == 0)
	{
		return 0;
	}
	if (p_value == 0)
	{
		return p_source;
	}
	l_next_0 = (t2_System_MulticastDelegate*)CS2X_TestUpCast(p_source, &rt2_System_MulticastDelegate_OBJ);
	l_prev_1 = 0;
	while (l_next_0 != 0)
	{
		t2_System_MulticastDelegate* l_nextItem_2;
		l_nextItem_2 = l_next_0->f__next_2;
		if (l_next_0->f__methodPtr_1 == p_value->f__methodPtr_1 && l_next_0->f__target_1 == p_value->f__target_1)
		{
			if (l_next_0 == p_source)
			{
				p_source = l_next_0->f__next_2;
				l_next_0->f__next_2 = 0;
			}
			else
			{
				if (l_prev_1 != 0)
				{
					l_prev_1->f__next_2 = l_next_0->f__next_2;
					l_next_0->f__next_2 = 0;
				}
			}
		}
		l_prev_1 = l_next_0;
		l_next_0 = l_nextItem_2;
	}
	return p_source;
}

t2_System_Delegate* m2_System_Delegate__ctor_0(t2_System_Delegate* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t2_System_DllNotFoundException* m2_System_DllNotFoundException__ctor_0(t2_System_DllNotFoundException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_String* m2_System_Enum_ToString_0(t2_System_Enum* self)
{
	return f_System_String_Empty;
}

t2_System_Enum* m2_System_Enum__ctor_0(t2_System_Enum* self)
{
	m2_System_ValueType__ctor_0(self);
	return self;
}

t2_System_String* m2_System_Environment_get_NewLine_0()
{
	return StringLiteral_3;
}

void m2_System_Environment_SetEnvironmentVariable_0(t2_System_String* p_variable, t2_System_String* p_value)
{
	t2_System_String* l_envVar_0;
	int32_t l_encodedCount_1;
	uint8_t* l_encoded_2;
	char16_t* l_envVarPtr_3;
	l_envVar_0 = m2_System_String_Concat_0(m2_System_String_op_Addition_0(p_variable, 0x003D), p_value);
	l_encodedCount_1 = m3_System_Text_Encoding_GetByteCount_1(f_System_Text_Encoding__Default_k__BackingField, l_envVar_0);
	l_encoded_2 = alloca(sizeof(uint8_t) * (l_encodedCount_1));
	l_envVarPtr_3 = ((char*)l_envVar_0) + m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	m3_System_Text_Encoding_GetBytes_4(f_System_Text_Encoding__Default_k__BackingField, l_envVarPtr_3, m2_System_String_get_Length_0(l_envVar_0), l_encoded_2, l_encodedCount_1);
	l_encoded_2[l_encodedCount_1 - 1] = 0;
	_putenv(l_encoded_2);
}

t2_System_Exception* m2_System_Exception__ctor_0(t2_System_Exception* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t2_System_Exception* m2_System_Exception__ctor_1(t2_System_Exception* self, t2_System_String* p_message)
{
	m2_System_Object__ctor_0(self);
	self->f__Message_k__BackingField_1 = p_message;
	return self;
}

t2_System_String* m2_System_Exception_get_Message_0(t2_System_Exception* self)
{
	return self->f__Message_k__BackingField_1;
}

t2_System_FlagsAttribute* m2_System_FlagsAttribute__ctor_0(t2_System_FlagsAttribute* self)
{
	m2_System_Attribute__ctor_0(self);
	return self;
}

t2_System_IndexOutOfRangeException* m2_System_IndexOutOfRangeException__ctor_0(t2_System_IndexOutOfRangeException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_InvalidCastException* m2_System_InvalidCastException__ctor_0(t2_System_InvalidCastException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_String* m2_double_ToString_0(double* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (770));
	l_length_1 = sprintf(l_str_0, "%G", (*self));
	l_str_0[769] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

double m2_double__ctor_0()
{
	double selfObj = {0};
	return selfObj;
}

char m2_float_IsNaN_0(float p_f)
{
	int32_t l_bits_0;
	l_bits_0 = m2_System_BitConverter_SingleToInt32Bits_0(p_f);
	return (l_bits_0 & 2147483647) > 2139095040;
}

char m2_float_IsNegative_0(float p_f)
{
	return m2_System_BitConverter_SingleToInt32Bits_0(p_f) < 0;
}

t2_System_String* m2_float_ToString_0(float* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (115));
	l_length_1 = sprintf(l_str_0, "%G", (*self));
	l_str_0[114] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

float m2_float__ctor_0()
{
	float selfObj = {0};
	return selfObj;
}

t2_System_MulticastDelegate* m2_System_MulticastDelegate__ctor_0(t2_System_MulticastDelegate* self)
{
	m2_System_Delegate__ctor_0(self);
	return self;
}

t2_System_NotImplementedException* m2_System_NotImplementedException__ctor_0(t2_System_NotImplementedException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_NotImplementedException* m2_System_NotImplementedException__ctor_1(t2_System_NotImplementedException* self, t2_System_String* p_message)
{
	m2_System_Exception__ctor_1(self, p_message);
	return self;
}

t2_System_NotSupportedException* m2_System_NotSupportedException__ctor_0(t2_System_NotSupportedException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_NotSupportedException* m2_System_NotSupportedException__ctor_1(t2_System_NotSupportedException* self, t2_System_String* p_message)
{
	m2_System_Exception__ctor_1(self, p_message);
	return self;
}

t2_System_String* m2_int32_t_ToString_0(int32_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (12));
	l_length_1 = sprintf(l_str_0, "%d", (*self));
	l_str_0[11] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

int32_t m2_int32_t__ctor_0()
{
	int32_t selfObj = {0};
	return selfObj;
}

t2_System_Type* m2_System_Object_GetType_0(t2_System_Object* self)
{
	return (t2_System_Type*)self->CS2X_RuntimeType;
}

t2_System_Object* m2_System_Object__ctor_0(t2_System_Object* self)
{
	return self;
}

t2_System_ObsoleteAttribute* m2_System_ObsoleteAttribute__ctor_0(t2_System_ObsoleteAttribute* self)
{
	m2_System_Attribute__ctor_0(self);
	return self;
}

t2_System_ObsoleteAttribute* m2_System_ObsoleteAttribute__ctor_1(t2_System_ObsoleteAttribute* self, t2_System_String* p_message)
{
	m2_System_Attribute__ctor_0(self);
	self->f__message_2 = p_message;
	return self;
}

t2_System_ObsoleteAttribute* m2_System_ObsoleteAttribute__ctor_2(t2_System_ObsoleteAttribute* self, t2_System_String* p_message, char p_error)
{
	m2_System_Attribute__ctor_0(self);
	self->f__message_2 = p_message;
	self->f__error_2 = p_error;
	return self;
}

char m2_System_ObsoleteAttribute_get_IsError_0(t2_System_ObsoleteAttribute* self)
{
	return self->f__error_2;
}

t2_System_String* m2_System_ObsoleteAttribute_get_Message_0(t2_System_ObsoleteAttribute* self)
{
	return self->f__message_2;
}

t2_System_String* m2_uint32_t_ToString_0(uint32_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (11));
	l_length_1 = sprintf(l_str_0, "%u", (*self));
	l_str_0[10] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

uint32_t m2_uint32_t__ctor_0()
{
	uint32_t selfObj = {0};
	return selfObj;
}

t2_System_Random* m2_System_Random__ctor_0(t2_System_Random* self)
{
	m2_System_Random__ctor_1(self, m2_System_Random_GenerateSeed_0());
	return self;
}

t2_System_Random* m2_System_Random__ctor_1(t2_System_Random* self, int32_t p_seed)
{
	m2_System_Object__ctor_0(self);
	self->f_seed_1 = (uint32_t)p_seed;
	return self;
}

int32_t m2_System_Random_GenerateSeed_0()
{
	return (int32_t)time(m2_intptr_t_get_Zero_0());
}

int32_t m2_System_Random_Next_0(t2_System_Random* self)
{
	int32_t l_result_0;
	self->f_seed_1 = self->f_seed_1 * 1103515245 + 12345;
	l_result_0 = (int32_t)((self->f_seed_1 / 65536) % 32768);
	return (int32_t)(l_result_0 / (float)32767) * 2147483647;
}

t2_System_RuntimeType* m2_System_RuntimeType__ctor_0(t2_System_RuntimeType* self)
{
	m2_System_Type__ctor_0(self);
	return self;
}

t2_System_String* m2_char16_t_ToString_0(char16_t* self)
{
	return m2_System_String__ctor_2(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), (*self), 1);
}

char16_t m2_char16_t__ctor_0()
{
	char16_t selfObj = {0};
	return selfObj;
}

t2_System_String* m2_System_String__ctor_0(t2_System_String* self, char16_t* p_value)
{
	int length = 0;
	char16_t* charOffset;
	charOffset = p_value;
	while (*charOffset != 0)
	{
		++charOffset;
		++length;
	}
	self = CS2X_GC_Resize(self, ArrayOffset + sizeof(char16_t), ArrayOffset + sizeof(char16_t) + (sizeof(char16_t) * length));
	self->f__stringLength_1 = length;
	memcpy(&self->f__firstChar_1, p_value, sizeof(char16_t) * length);
	return self;
}

t2_System_String* m2_System_String__ctor_1(t2_System_String* self, char16_t* p_value)
{
	int length = 0;
	char16_t* charBuffer;
	length = *(int*)(((char*)p_value) + sizeof(intptr_t));
	charBuffer = p_value + ArrayOffset;
	self = CS2X_GC_Resize(self, ArrayOffset + sizeof(char16_t), ArrayOffset + sizeof(char16_t) + (sizeof(char16_t) * length));
	self->f__stringLength_1 = length;
	memcpy(&self->f__firstChar_1, charBuffer, sizeof(char16_t) * length);
	return self;
}

t2_System_String* m2_System_String__ctor_2(t2_System_String* self, char16_t p_c, int32_t p_count)
{
	int i;
	char16_t* charBuff;
	self = CS2X_GC_Resize(self, ArrayOffset + sizeof(char16_t), ArrayOffset + sizeof(char16_t) + (sizeof(char16_t) * p_count));
	self->f__stringLength_1 = p_count;
	charBuff = &self->f__firstChar_1;
	for (i = 0; i != p_count; ++i) charBuff[i] = p_c;
	return self;
}

char16_t m2_System_String_get_Item_0(t2_System_String* self, int32_t p_index)
{
	char16_t* l__firstCharPtr_0;
	l__firstCharPtr_0 = &self->f__firstChar_1;
	{
		return l__firstCharPtr_0[p_index];
	}
}

int32_t m2_System_String_get_Length_0(t2_System_String* self)
{
	return self->f__stringLength_1;
}

t2_System_String* m2_System_String_FastAllocateString_0(int32_t p_length)
{
	t2_System_String* result = CS2X_GC_NewAtomic(sizeof(intptr_t) + sizeof(int32_t) + sizeof(char16_t) + (sizeof(char16_t) * p_length), 0);
	result->CS2X_RuntimeType = &rt2_System_String_OBJ;
	result->f__stringLength_1 = p_length;
	return result;
}

char m2_System_String_IsNullOrEmpty_0(t2_System_String* p_value)
{
	return (p_value == 0 || 0 >= (uint32_t)m2_System_String_get_Length_0(p_value)) ? 1 : 0;
}

void m2_System_String_FillStringChecked_0(t2_System_String* p_dest, int32_t p_destPos, t2_System_String* p_src)
{
	char16_t* l_pDest_0;
	char16_t* l_pSrc_1;
	if (m2_System_String_get_Length_0(p_src) > m2_System_String_get_Length_0(p_dest) - p_destPos)
	{
		CS2X_ThreadExceptionObject = m2_System_IndexOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_IndexOutOfRangeException), &rt2_System_IndexOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_pDest_0 = &p_dest->f__firstChar_1;
	l_pSrc_1 = &p_src->f__firstChar_1;
	{
		memcpy(l_pDest_0 + p_destPos, l_pSrc_1, (uintptr_t)(m2_System_String_get_Length_0(p_src) * sizeof(char16_t)));
	}
}

void m2_System_String_FillStringChecked_1(t2_System_String* p_dest, int32_t p_destPos, char16_t p_src)
{
	char16_t* l_pDest_0;
	if (1 > m2_System_String_get_Length_0(p_dest) - p_destPos)
	{
		CS2X_ThreadExceptionObject = m2_System_IndexOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_IndexOutOfRangeException), &rt2_System_IndexOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_pDest_0 = &p_dest->f__firstChar_1;
	{
		l_pDest_0[p_destPos] = p_src;
	}
}

t2_System_String* m2_System_String_op_Addition_0(t2_System_String* p_str, char16_t p_c)
{
	int32_t l_str0Length_0;
	t2_System_String* l_result_1;
	char16_t* l_resultPtr_2;
	if (m2_System_String_IsNullOrEmpty_0(p_str))
	{
		return m2_char16_t_ToString_0(&p_c);
	}
	l_str0Length_0 = m2_System_String_get_Length_0(p_str);
	l_result_1 = m2_System_String_FastAllocateString_0(l_str0Length_0 + 1);
	m2_System_String_FillStringChecked_0(l_result_1, 0, p_str);
	l_resultPtr_2 = &l_result_1->f__firstChar_1;
	l_resultPtr_2[l_str0Length_0] = p_c;
	return l_result_1;
}

t2_System_String* m2_System_String_op_Addition_1(char16_t p_c, t2_System_String* p_str)
{
	int32_t l_str0Length_0;
	t2_System_String* l_result_1;
	char16_t* l_resultPtr_2;
	if (m2_System_String_IsNullOrEmpty_0(p_str))
	{
		return m2_char16_t_ToString_0(&p_c);
	}
	l_str0Length_0 = m2_System_String_get_Length_0(p_str);
	l_result_1 = m2_System_String_FastAllocateString_0(l_str0Length_0 + 1);
	m2_System_String_FillStringChecked_0(l_result_1, 1, p_str);
	l_resultPtr_2 = &l_result_1->f__firstChar_1;
	l_resultPtr_2[0] = p_c;
	return l_result_1;
}

t2_System_String* m2_System_String_Concat_0(t2_System_String* p_str0, t2_System_String* p_str1)
{
	int32_t l_str0Length_0;
	t2_System_String* l_result_1;
	if (m2_System_String_IsNullOrEmpty_0(p_str0))
	{
		if (m2_System_String_IsNullOrEmpty_0(p_str1))
		{
			return f_System_String_Empty;
		}
		return p_str1;
	}
	if (m2_System_String_IsNullOrEmpty_0(p_str1))
	{
		return p_str0;
	}
	l_str0Length_0 = m2_System_String_get_Length_0(p_str0);
	l_result_1 = m2_System_String_FastAllocateString_0(l_str0Length_0 + m2_System_String_get_Length_0(p_str1));
	m2_System_String_FillStringChecked_0(l_result_1, 0, p_str0);
	m2_System_String_FillStringChecked_0(l_result_1, l_str0Length_0, p_str1);
	return l_result_1;
}

t2_System_String* m2_System_String_Concat_1(t2_System_String* p_str0, t2_System_String* p_str1, t2_System_String* p_str2)
{
	int32_t l_totalLength_0;
	t2_System_String* l_result_1;
	if (m2_System_String_IsNullOrEmpty_0(p_str0))
	{
		return m2_System_String_Concat_0(p_str1, p_str2);
	}
	if (m2_System_String_IsNullOrEmpty_0(p_str1))
	{
		return m2_System_String_Concat_0(p_str0, p_str2);
	}
	if (m2_System_String_IsNullOrEmpty_0(p_str2))
	{
		return m2_System_String_Concat_0(p_str0, p_str1);
	}
	l_totalLength_0 = m2_System_String_get_Length_0(p_str0) + m2_System_String_get_Length_0(p_str1) + m2_System_String_get_Length_0(p_str2);
	l_result_1 = m2_System_String_FastAllocateString_0(l_totalLength_0);
	m2_System_String_FillStringChecked_0(l_result_1, 0, p_str0);
	m2_System_String_FillStringChecked_0(l_result_1, m2_System_String_get_Length_0(p_str0), p_str1);
	m2_System_String_FillStringChecked_0(l_result_1, m2_System_String_get_Length_0(p_str0) + m2_System_String_get_Length_0(p_str1), p_str2);
	return l_result_1;
}

t2_System_String* m2_System_String_Concat_2(t2_System_String* p_str0, t2_System_String* p_str1, t2_System_String* p_str2, t2_System_String* p_str3)
{
	int32_t l_totalLength_0;
	t2_System_String* l_result_1;
	if (m2_System_String_IsNullOrEmpty_0(p_str0))
	{
		return m2_System_String_Concat_1(p_str1, p_str2, p_str3);
	}
	if (m2_System_String_IsNullOrEmpty_0(p_str1))
	{
		return m2_System_String_Concat_1(p_str0, p_str2, p_str3);
	}
	if (m2_System_String_IsNullOrEmpty_0(p_str2))
	{
		return m2_System_String_Concat_1(p_str0, p_str1, p_str3);
	}
	if (m2_System_String_IsNullOrEmpty_0(p_str3))
	{
		return m2_System_String_Concat_1(p_str0, p_str1, p_str2);
	}
	l_totalLength_0 = m2_System_String_get_Length_0(p_str0) + m2_System_String_get_Length_0(p_str1) + m2_System_String_get_Length_0(p_str2) + m2_System_String_get_Length_0(p_str3);
	l_result_1 = m2_System_String_FastAllocateString_0(l_totalLength_0);
	m2_System_String_FillStringChecked_0(l_result_1, 0, p_str0);
	m2_System_String_FillStringChecked_0(l_result_1, m2_System_String_get_Length_0(p_str0), p_str1);
	m2_System_String_FillStringChecked_0(l_result_1, m2_System_String_get_Length_0(p_str0) + m2_System_String_get_Length_0(p_str1), p_str2);
	m2_System_String_FillStringChecked_0(l_result_1, m2_System_String_get_Length_0(p_str0) + m2_System_String_get_Length_0(p_str1) + m2_System_String_get_Length_0(p_str2), p_str3);
	return l_result_1;
}

char m2_System_String_op_Equality_0(t2_System_String* p_value1, t2_System_String* p_value2)
{
	return m2_System_String_Equals_0(p_value1, p_value2);
}

char m2_System_String_op_Inequality_0(t2_System_String* p_value1, t2_System_String* p_value2)
{
	return !m2_System_String_Equals_0(p_value1, p_value2);
}

char m2_System_String_Equals_0(t2_System_String* self, t2_System_String* p_value)
{
	char16_t* l_myValuePtr_0;
	char16_t* l_valuePtr_1;
	if (m2_System_String_get_Length_0(self) != m2_System_String_get_Length_0(p_value))
	{
		return 0;
	}
	l_myValuePtr_0 = ((char*)self) + m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	l_valuePtr_1 = ((char*)p_value) + m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	{
		int32_t l_i_2;
		for (l_i_2 = 0; l_i_2 != m2_System_String_get_Length_0(self); ++l_i_2)
		{
			if (l_myValuePtr_0[l_i_2] != l_valuePtr_1[l_i_2])
			{
				return 0;
			}
		}
	}
	return 1;
}

void m2_System_String__cctor_0()
{
	f_System_String_Empty = StringLiteral_4;
}

t2_System_ThrowArgumentNullException* m2_System_ThrowArgumentNullException__ctor_0(t2_System_ThrowArgumentNullException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t2_System_Type* m2_System_Type_GetTypeFromHandle_0(t2_System_RuntimeTypeHandle p_handle)
{
	return p_handle.f_m_type_2;
}

char m2_System_Type_IsAssignableFrom_0(t2_System_Type* self, t2_System_Type* p_c)
{
	t2_System_Type* l_t_0;
	l_t_0 = p_c;
	while (l_t_0 != 0)
	{
		if (l_t_0 == self)
		{
			return 1;
		}
		l_t_0 = l_t_0->f__BaseType_k__BackingField_1;
	}
	return 0;
}

t2_System_String* m2_System_Type_ToString_0(t2_System_Type* self)
{
	return self->f__FullName_k__BackingField_1;
}

t2_System_Type* m2_System_Type__ctor_0(t2_System_Type* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t2_System_ValueType* m2_System_ValueType__ctor_0(t2_System_ValueType* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t4_System_Collections_ObjectModel_ReadOnlyCollectionType m4_System_Collections_ObjectModel_ReadOnlyCollectionType__ctor_0()
{
	t4_System_Collections_ObjectModel_ReadOnlyCollectionType selfObj = {0};
	return selfObj;
}

void m3_System_Diagnostics_Debug_WriteLine_0(t2_System_String* p_message)
{
	char16_t* l_messagePtr_0;
	char16_t* l_newLinePtr_1;
	l_messagePtr_0 = ((char*)p_message) + m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	OutputDebugStringW(l_messagePtr_0);
	l_newLinePtr_1 = ((char*)m2_System_Environment_get_NewLine_0()) + m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	OutputDebugStringW(l_newLinePtr_1);
}

char m3_System_IO_File_Exists_0(t2_System_String* p_path)
{
	uint8_t* l_pathData_0;
	uint8_t* l_pathDataPtr_1;
	l_pathData_0 = m3_System_Text_Encoding_GetBytes_5(f_System_Text_Encoding__Default_k__BackingField, p_path);
	l_pathDataPtr_1 = (uint8_t*)(((char*)l_pathData_0) + ArrayOffset);
	return m3_System_IO_File_ExistsInternal_0(l_pathDataPtr_1);
}

char m3_System_IO_File_ExistsInternal_0(uint8_t* p_path)
{
	return access(p_path, 0) == 0;
}

t3_System_IO_FileNotFoundException* m3_System_IO_FileNotFoundException__ctor_0(t3_System_IO_FileNotFoundException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t3_System_IO_FileNotFoundException* m3_System_IO_FileNotFoundException__ctor_1(t3_System_IO_FileNotFoundException* self, t2_System_String* p_message)
{
	m2_System_Exception__ctor_1(self, p_message);
	return self;
}

int64_t m3_System_IO_FileStream_get_Length_0(t3_System_IO_FileStream* self)
{
	return 	CS2X_ThreadExceptionObject = m2_System_NotImplementedException__ctor_0(CS2X_AllocType(sizeof(t2_System_NotImplementedException), &rt2_System_NotImplementedException_OBJ, 0));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
;
}

int64_t m3_System_IO_FileStream_get_Position_0(t3_System_IO_FileStream* self)
{
	CS2X_ThreadExceptionObject = m2_System_NotImplementedException__ctor_0(CS2X_AllocType(sizeof(t2_System_NotImplementedException), &rt2_System_NotImplementedException_OBJ, 0));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

void m3_System_IO_FileStream_set_Position_0(t3_System_IO_FileStream* self, int64_t p_value)
{
	CS2X_ThreadExceptionObject = m2_System_NotImplementedException__ctor_0(CS2X_AllocType(sizeof(t2_System_NotImplementedException), &rt2_System_NotImplementedException_OBJ, 0));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

t3_System_IO_FileStream* m3_System_IO_FileStream__ctor_0(t3_System_IO_FileStream* self, t2_System_String* p_path, t3_System_IO_FileMode p_mode, t3_System_IO_FileAccess p_access, t3_System_IO_FileShare p_share)
{
	uint8_t* l_pathData_0;
	uint8_t* l_pathDataPtr_1;
	m3_System_IO_Stream__ctor_0(self);
	l_pathData_0 = m3_System_Text_Encoding_GetBytes_5(f_System_Text_Encoding__Default_k__BackingField, p_path);
	l_pathDataPtr_1 = (uint8_t*)(((char*)l_pathData_0) + ArrayOffset);
	{
		switch (p_mode)
		{
			case 1:
				if (m3_System_IO_File_ExistsInternal_0(l_pathDataPtr_1))
				{
					CS2X_ThreadExceptionObject = m3_System_IO_IOException__ctor_1(CS2X_AllocType(sizeof(t3_System_IO_IOException), &rt3_System_IO_IOException_OBJ, 0), StringLiteral_5);
					longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
				}
				break;
			case 4:
				if (p_access == 1 && !m3_System_IO_File_ExistsInternal_0(l_pathDataPtr_1))
				{
					self->f_stream_2 = fopen(l_pathDataPtr_1, "w");
					if (self->f_stream_2 == m2_intptr_t_get_Zero_0())
					{
						CS2X_ThreadExceptionObject = m3_System_IO_IOException__ctor_1(CS2X_AllocType(sizeof(t3_System_IO_IOException), &rt3_System_IO_IOException_OBJ, 0), StringLiteral_6);
						longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
					}
					fclose(self->f_stream_2);
					self->f_stream_2 = m2_intptr_t_get_Zero_0();
				}
				break;
			case 3:
				if (!m3_System_IO_File_ExistsInternal_0(l_pathDataPtr_1))
				{
					CS2X_ThreadExceptionObject = m3_System_IO_IOException__ctor_1(CS2X_AllocType(sizeof(t3_System_IO_IOException), &rt3_System_IO_IOException_OBJ, 0), StringLiteral_7);
					longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
				}
				break;
		}
		switch (p_access)
		{
			case 1:
				switch (p_mode)
				{
					case 4:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "rb");
						break;
					case 3:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "rb");
						break;
					default:
						CS2X_ThreadExceptionObject = m2_System_ArgumentException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentException), &rt2_System_ArgumentException_OBJ, 0));
						longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
				}
				break;
			case 2:
				switch (p_mode)
				{
					case 4:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "wb");
						break;
					case 2:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "wb");
						break;
					case 6:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "ab");
						break;
					default:
						CS2X_ThreadExceptionObject = m2_System_ArgumentException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentException), &rt2_System_ArgumentException_OBJ, 0));
						longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
				}
				break;
			case 3:
				switch (p_mode)
				{
					case 4:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "rbwb");
						break;
					case 2:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "rbwb");
						break;
					case 3:
						self->f_stream_2 = fopen(l_pathDataPtr_1, "rbwb");
						break;
					default:
						CS2X_ThreadExceptionObject = m2_System_ArgumentException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentException), &rt2_System_ArgumentException_OBJ, 0));
						longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
				}
				break;
			default:
				CS2X_ThreadExceptionObject = m2_System_NotImplementedException__ctor_0(CS2X_AllocType(sizeof(t2_System_NotImplementedException), &rt2_System_NotImplementedException_OBJ, 0));
				longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
		}
	}
	if (self->f_stream_2 == m2_intptr_t_get_Zero_0())
	{
		CS2X_ThreadExceptionObject = m3_System_IO_IOException__ctor_1(CS2X_AllocType(sizeof(t3_System_IO_IOException), &rt3_System_IO_IOException_OBJ, 0), StringLiteral_8);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	return self;
}

void m3_System_IO_FileStream_Dispose_0(t3_System_IO_FileStream* self)
{
	if (self->f_stream_2 != m2_intptr_t_get_Zero_0())
	{
		fclose(self->f_stream_2);
		self->f_stream_2 = m2_intptr_t_get_Zero_0();
	}
}

int32_t m3_System_IO_FileStream_Read_0(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count)
{
	return (int32_t)fread(p_buffer + p_offset, (uintptr_t)sizeof(uint8_t), (uintptr_t)p_count, self->f_stream_2);
}

int32_t m3_System_IO_FileStream_Read_1(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count)
{
	uint8_t* l_butterPtr_0;
	l_butterPtr_0 = (uint8_t*)(((char*)p_buffer) + ArrayOffset);
	return (int32_t)fread(l_butterPtr_0 + p_offset, (uintptr_t)sizeof(uint8_t), (uintptr_t)p_count, self->f_stream_2);
}

void m3_System_IO_FileStream_Write_0(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count)
{
	fwrite(p_buffer + p_offset, (uintptr_t)sizeof(uint8_t), (uintptr_t)p_count, self->f_stream_2);
}

void m3_System_IO_FileStream_Write_1(t3_System_IO_FileStream* self, uint8_t* p_buffer, int32_t p_offset, int32_t p_count)
{
	uint8_t* l_butterPtr_0;
	l_butterPtr_0 = (uint8_t*)(((char*)p_buffer) + ArrayOffset);
	fwrite(l_butterPtr_0 + p_offset, (uintptr_t)sizeof(uint8_t), (uintptr_t)p_count, self->f_stream_2);
}

t3_System_IO_IOException* m3_System_IO_IOException__ctor_0(t3_System_IO_IOException* self)
{
	m2_System_Exception__ctor_0(self);
	return self;
}

t3_System_IO_IOException* m3_System_IO_IOException__ctor_1(t3_System_IO_IOException* self, t2_System_String* p_message)
{
	m2_System_Exception__ctor_1(self, p_message);
	return self;
}

t2_System_String* m3_System_IO_Path_Combine_0(t2_System_String* p_path1, t2_System_String* p_path2)
{
	t2_System_String* l_result_0;
	int32_t l_offset_1;
	l_result_0 = m2_System_String_FastAllocateString_0(m2_System_String_get_Length_0(p_path1) + m2_System_String_get_Length_0(p_path2) + 1);
	l_offset_1 = 0;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path1);
	l_offset_1 += m2_System_String_get_Length_0(p_path1);
	m2_System_String_FillStringChecked_1(l_result_0, l_offset_1, 0x005C);
	l_offset_1 += 1;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path2);
	return l_result_0;
}

t2_System_String* m3_System_IO_Path_Combine_1(t2_System_String* p_path1, t2_System_String* p_path2, t2_System_String* p_path3)
{
	t2_System_String* l_result_0;
	int32_t l_offset_1;
	l_result_0 = m2_System_String_FastAllocateString_0(m2_System_String_get_Length_0(p_path1) + m2_System_String_get_Length_0(p_path2) + m2_System_String_get_Length_0(p_path3) + 2);
	l_offset_1 = 0;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path1);
	l_offset_1 += m2_System_String_get_Length_0(p_path1);
	m2_System_String_FillStringChecked_1(l_result_0, l_offset_1, 0x005C);
	l_offset_1 += 1;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path2);
	l_offset_1 += m2_System_String_get_Length_0(p_path2);
	m2_System_String_FillStringChecked_1(l_result_0, l_offset_1, 0x005C);
	l_offset_1 += 1;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path3);
	return l_result_0;
}

t2_System_String* m3_System_IO_Path_Combine_2(t2_System_String* p_path1, t2_System_String* p_path2, t2_System_String* p_path3, t2_System_String* p_path4)
{
	t2_System_String* l_result_0;
	int32_t l_offset_1;
	l_result_0 = m2_System_String_FastAllocateString_0(m2_System_String_get_Length_0(p_path1) + m2_System_String_get_Length_0(p_path2) + m2_System_String_get_Length_0(p_path3) + m2_System_String_get_Length_0(p_path4) + 3);
	l_offset_1 = 0;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path1);
	l_offset_1 += m2_System_String_get_Length_0(p_path1);
	m2_System_String_FillStringChecked_1(l_result_0, l_offset_1, 0x005C);
	l_offset_1 += 1;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path2);
	l_offset_1 += m2_System_String_get_Length_0(p_path2);
	m2_System_String_FillStringChecked_1(l_result_0, l_offset_1, 0x005C);
	l_offset_1 += 1;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path3);
	l_offset_1 += m2_System_String_get_Length_0(p_path3);
	m2_System_String_FillStringChecked_1(l_result_0, l_offset_1, 0x005C);
	l_offset_1 += 1;
	m2_System_String_FillStringChecked_0(l_result_0, l_offset_1, p_path4);
	return l_result_0;
}

int32_t m3_System_IO_Stream_ReadByte_0(t3_System_IO_Stream* self)
{
	uint8_t l_data_0;
	if (((rt3_System_IO_Stream*)self->CS2X_RuntimeType)->vTable_Read_0(self, &l_data_0, 0, 1) == 0)
	{
		return -1;
	}
	return l_data_0;
}

void m3_System_IO_Stream_WriteByte_0(t3_System_IO_Stream* self, uint8_t p_value)
{
	((rt3_System_IO_Stream*)self->CS2X_RuntimeType)->vTable_Write_0(self, &p_value, 0, 1);
}

t3_System_IO_Stream* m3_System_IO_Stream__ctor_0(t3_System_IO_Stream* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t3_System_Reflection_AssemblyCompanyAttribute* m3_System_Reflection_AssemblyCompanyAttribute__ctor_0(t3_System_Reflection_AssemblyCompanyAttribute* self, t2_System_String* p_company)
{
	m2_System_Attribute__ctor_0(self);
	self->f__company_2 = p_company;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyCompanyAttribute_get_Company_0(t3_System_Reflection_AssemblyCompanyAttribute* self)
{
	return self->f__company_2;
}

t3_System_Reflection_AssemblyConfigurationAttribute* m3_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t3_System_Reflection_AssemblyConfigurationAttribute* self, t2_System_String* p_configuration)
{
	m2_System_Attribute__ctor_0(self);
	self->f__configuration_2 = p_configuration;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0(t3_System_Reflection_AssemblyConfigurationAttribute* self)
{
	return self->f__configuration_2;
}

t3_System_Reflection_AssemblyCopyrightAttribute* m3_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t3_System_Reflection_AssemblyCopyrightAttribute* self, t2_System_String* p_copyright)
{
	m2_System_Attribute__ctor_0(self);
	self->f__copyright_2 = p_copyright;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0(t3_System_Reflection_AssemblyCopyrightAttribute* self)
{
	return self->f__copyright_2;
}

t3_System_Reflection_AssemblyCultureAttribute* m3_System_Reflection_AssemblyCultureAttribute__ctor_0(t3_System_Reflection_AssemblyCultureAttribute* self, t2_System_String* p_culture)
{
	m2_System_Attribute__ctor_0(self);
	self->f__culture_2 = p_culture;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyCultureAttribute_get_Culture_0(t3_System_Reflection_AssemblyCultureAttribute* self)
{
	return self->f__culture_2;
}

t3_System_Reflection_AssemblyDelaySignAttribute* m3_System_Reflection_AssemblyDelaySignAttribute__ctor_0(t3_System_Reflection_AssemblyDelaySignAttribute* self, char p_delaySign)
{
	m2_System_Attribute__ctor_0(self);
	self->f__delaySign_2 = p_delaySign;
	return self;
}

char m3_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0(t3_System_Reflection_AssemblyDelaySignAttribute* self)
{
	return self->f__delaySign_2;
}

t3_System_Reflection_AssemblyDescriptionAttribute* m3_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t3_System_Reflection_AssemblyDescriptionAttribute* self, t2_System_String* p_description)
{
	m2_System_Attribute__ctor_0(self);
	self->f__description_2 = p_description;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyDescriptionAttribute_get_Description_0(t3_System_Reflection_AssemblyDescriptionAttribute* self)
{
	return self->f__description_2;
}

t3_System_Reflection_AssemblyFileVersionAttribute* m3_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t3_System_Reflection_AssemblyFileVersionAttribute* self, t2_System_String* p_version)
{
	m2_System_Attribute__ctor_0(self);
	self->f__version_2 = p_version;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyFileVersionAttribute_get_Version_0(t3_System_Reflection_AssemblyFileVersionAttribute* self)
{
	return self->f__version_2;
}

t3_System_Reflection_AssemblyInformationalVersionAttribute* m3_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t3_System_Reflection_AssemblyInformationalVersionAttribute* self, t2_System_String* p_informationalVersion)
{
	m2_System_Attribute__ctor_0(self);
	self->f__informationalVersion_2 = p_informationalVersion;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0(t3_System_Reflection_AssemblyInformationalVersionAttribute* self)
{
	return self->f__informationalVersion_2;
}

t3_System_Reflection_AssemblyKeyFileAttribute* m3_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t3_System_Reflection_AssemblyKeyFileAttribute* self, t2_System_String* p_keyFile)
{
	m2_System_Attribute__ctor_0(self);
	self->f__keyFile_2 = p_keyFile;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0(t3_System_Reflection_AssemblyKeyFileAttribute* self)
{
	return self->f__keyFile_2;
}

t3_System_Reflection_AssemblyProductAttribute* m3_System_Reflection_AssemblyProductAttribute__ctor_0(t3_System_Reflection_AssemblyProductAttribute* self, t2_System_String* p_product)
{
	m2_System_Attribute__ctor_0(self);
	self->f__product_2 = p_product;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyProductAttribute_get_Product_0(t3_System_Reflection_AssemblyProductAttribute* self)
{
	return self->f__product_2;
}

t3_System_Reflection_AssemblyTitleAttribute* m3_System_Reflection_AssemblyTitleAttribute__ctor_0(t3_System_Reflection_AssemblyTitleAttribute* self, t2_System_String* p_title)
{
	m2_System_Attribute__ctor_0(self);
	self->f__title_2 = p_title;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyTitleAttribute_get_Title_0(t3_System_Reflection_AssemblyTitleAttribute* self)
{
	return self->f__title_2;
}

t3_System_Reflection_AssemblyTrademarkAttribute* m3_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t3_System_Reflection_AssemblyTrademarkAttribute* self, t2_System_String* p_trademark)
{
	m2_System_Attribute__ctor_0(self);
	self->f__trademark_2 = p_trademark;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0(t3_System_Reflection_AssemblyTrademarkAttribute* self)
{
	return self->f__trademark_2;
}

t3_System_Reflection_AssemblyVersionAttribute* m3_System_Reflection_AssemblyVersionAttribute__ctor_0(t3_System_Reflection_AssemblyVersionAttribute* self, t2_System_String* p_version)
{
	m2_System_Attribute__ctor_0(self);
	self->f__version_2 = p_version;
	return self;
}

t2_System_String* m3_System_Reflection_AssemblyVersionAttribute_get_Version_0(t3_System_Reflection_AssemblyVersionAttribute* self)
{
	return self->f__version_2;
}

t3_System_Reflection_DefaultMemberAttribute* m3_System_Reflection_DefaultMemberAttribute__ctor_0(t3_System_Reflection_DefaultMemberAttribute* self, t2_System_String* p_memberName)
{
	m2_System_Attribute__ctor_0(self);
	self->f__memberName_2 = p_memberName;
	return self;
}

t2_System_String* m3_System_Reflection_DefaultMemberAttribute_get_MemberName_0(t3_System_Reflection_DefaultMemberAttribute* self)
{
	return self->f__memberName_2;
}

t4_System_Runtime_CompilerServices_ExtensionAttribute* m4_System_Runtime_CompilerServices_ExtensionAttribute__ctor_0(t4_System_Runtime_CompilerServices_ExtensionAttribute* self)
{
	m2_System_Attribute__ctor_0(self);
	return self;
}

t4_System_Runtime_CompilerServices_MethodImplOptions m4_System_Runtime_CompilerServices_MethodImplOptions__ctor_0()
{
	t4_System_Runtime_CompilerServices_MethodImplOptions selfObj = {0};
	return selfObj;
}

t4_System_Runtime_CompilerServices_MethodImplAttribute* m4_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t4_System_Runtime_CompilerServices_MethodImplAttribute* self, t4_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions)
{
	m2_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = p_methodImplOptions;
	return self;
}

t4_System_Runtime_CompilerServices_MethodImplAttribute* m4_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(t4_System_Runtime_CompilerServices_MethodImplAttribute* self, int16_t p_value)
{
	m2_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = (t4_System_Runtime_CompilerServices_MethodImplOptions)p_value;
	return self;
}

t4_System_Runtime_CompilerServices_MethodImplAttribute* m4_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2(t4_System_Runtime_CompilerServices_MethodImplAttribute* self)
{
	m2_System_Attribute__ctor_0(self);
	return self;
}

int32_t m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0()
{
	return sizeof(void*) + sizeof(int32_t);
}

t4_System_Runtime_InteropServices_CallingConvention m4_System_Runtime_InteropServices_CallingConvention__ctor_0()
{
	t4_System_Runtime_InteropServices_CallingConvention selfObj = {0};
	return selfObj;
}

t4_System_Runtime_InteropServices_DllImportAttribute* m4_System_Runtime_InteropServices_DllImportAttribute__ctor_0(t4_System_Runtime_InteropServices_DllImportAttribute* self, t2_System_String* p_dllName)
{
	m2_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = p_dllName;
	return self;
}

intptr_t m4_System_Runtime_InteropServices_Marshal_StringToHGlobalAnsi_0(t2_System_String* p_s)
{
	char16_t* l_chars_0;
	l_chars_0 = ((char*)p_s) + m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	{
		int32_t l_byteCount_1;
		uint8_t* l_buffer_2;
		l_byteCount_1 = m3_System_Text_Encoding_GetByteCount_3(f_System_Text_Encoding__ASCII_k__BackingField, l_chars_0, m2_System_String_get_Length_0(p_s));
		l_buffer_2 = (uint8_t*)malloc((uintptr_t)l_byteCount_1);
		m3_System_Text_Encoding_GetBytes_4(f_System_Text_Encoding__ASCII_k__BackingField, l_chars_0, m2_System_String_get_Length_0(p_s), l_buffer_2, l_byteCount_1);
		return m2_intptr_t__ctor_2(l_buffer_2);
	}
}

intptr_t m4_System_Runtime_InteropServices_Marshal_StringToHGlobalUni_0(t2_System_String* p_s)
{
	char16_t* l_chars_0;
	l_chars_0 = ((char*)p_s) + m4_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	{
		int32_t l_byteCount_1;
		uint8_t* l_buffer_2;
		l_byteCount_1 = m3_System_Text_Encoding_GetByteCount_3(f_System_Text_Encoding__Unicode_k__BackingField, l_chars_0, m2_System_String_get_Length_0(p_s));
		l_buffer_2 = (uint8_t*)malloc((uintptr_t)l_byteCount_1);
		m3_System_Text_Encoding_GetBytes_4(f_System_Text_Encoding__Unicode_k__BackingField, l_chars_0, m2_System_String_get_Length_0(p_s), l_buffer_2, l_byteCount_1);
		return m2_intptr_t__ctor_2(l_buffer_2);
	}
}

t2_System_String* m4_System_Runtime_InteropServices_Marshal_PtrToStringAnsi_0(intptr_t p_ptr)
{
	intptr_t l_length_0;
	l_length_0 = strlen(p_ptr);
	return m3_System_Text_Encoding_GetString_0(f_System_Text_Encoding__ASCII_k__BackingField, (uint8_t*)m2_intptr_t_ToPointer_0(&p_ptr), m2_intptr_t_ToInt32_0(&l_length_0));
}

t2_System_String* m4_System_Runtime_InteropServices_Marshal_PtrToStringUni_0(intptr_t p_ptr)
{
	intptr_t l_length_0;
	l_length_0 = wcslen(p_ptr);
	return m3_System_Text_Encoding_GetString_0(f_System_Text_Encoding__Unicode_k__BackingField, (uint8_t*)m2_intptr_t_ToPointer_0(&p_ptr), m2_intptr_t_ToInt32_0(&l_length_0));
}

intptr_t m4_System_Runtime_InteropServices_Marshal_AllocHGlobal_0(int32_t p_cb)
{
	return (intptr_t)malloc((uintptr_t)p_cb);
}

void m4_System_Runtime_InteropServices_Marshal_FreeHGlobal_0(intptr_t p_hglobal)
{
	free((void*)p_hglobal);
}

intptr_t m4_System_Runtime_InteropServices_Marshal_GetNativePointerForObject_0(t2_System_Object* p_o)
{
	return (intptr_t)p_o;
}

intptr_t m4_System_Runtime_InteropServices_Marshal_GetNativePointerForArray_0(t2_System_Array* p_a)
{
	return (intptr_t)((char*)p_a + ArrayOffset);
}

intptr_t m4_System_Runtime_InteropServices_Marshal_GetHINSTANCE_0()
{
	return CS2X_hInstance;
}

t4_System_Runtime_InteropServices_OutAttribute* m4_System_Runtime_InteropServices_OutAttribute__ctor_0(t4_System_Runtime_InteropServices_OutAttribute* self)
{
	m2_System_Attribute__ctor_0(self);
	return self;
}

t4_System_Runtime_InteropServices_LayoutKind m4_System_Runtime_InteropServices_LayoutKind__ctor_0()
{
	t4_System_Runtime_InteropServices_LayoutKind selfObj = {0};
	return selfObj;
}

t4_System_Runtime_InteropServices_StructLayoutAttribute* m4_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t4_System_Runtime_InteropServices_StructLayoutAttribute* self, t4_System_Runtime_InteropServices_LayoutKind p_layoutKind)
{
	m2_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = p_layoutKind;
	return self;
}

t4_System_Runtime_InteropServices_StructLayoutAttribute* m4_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(t4_System_Runtime_InteropServices_StructLayoutAttribute* self, int16_t p_layoutKind)
{
	m2_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = (t4_System_Runtime_InteropServices_LayoutKind)p_layoutKind;
	return self;
}

t4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute* m4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute__ctor_0(t4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute* self, t4_System_Runtime_InteropServices_CallingConvention p_callingConvention)
{
	m2_System_Attribute__ctor_0(self);
	self->f__CallingConvention_k__BackingField_2 = p_callingConvention;
	return self;
}

t4_System_Runtime_Versioning_TargetFrameworkAttribute* m4_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t4_System_Runtime_Versioning_TargetFrameworkAttribute* self, t2_System_String* p_frameworkName)
{
	m2_System_Attribute__ctor_0(self);
	self->f__FrameworkName_k__BackingField_2 = p_frameworkName;
	return self;
}

void m3_System_Text_Encoding__cctor_0()
{
	f_System_Text_Encoding__Default_k__BackingField = m3_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_System_Text_StandardEncoding), &rt3_System_Text_StandardEncoding_OBJ, 0));
	f_System_Text_Encoding__Default_k__BackingField->f__CodePage_k__BackingField_1 = (int32_t)GetACP();
	f_System_Text_Encoding__ASCII_k__BackingField = m3_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_System_Text_StandardEncoding), &rt3_System_Text_StandardEncoding_OBJ, 0));
	f_System_Text_Encoding__ASCII_k__BackingField->f__CodePage_k__BackingField_1 = 20127;
	f_System_Text_Encoding__UTF7_k__BackingField = m3_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_System_Text_StandardEncoding), &rt3_System_Text_StandardEncoding_OBJ, 0));
	f_System_Text_Encoding__UTF7_k__BackingField->f__CodePage_k__BackingField_1 = 65000;
	f_System_Text_Encoding__UTF8_k__BackingField = m3_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_System_Text_StandardEncoding), &rt3_System_Text_StandardEncoding_OBJ, 0));
	f_System_Text_Encoding__UTF8_k__BackingField->f__CodePage_k__BackingField_1 = 65001;
	f_System_Text_Encoding__Unicode_k__BackingField = m3_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_System_Text_StandardEncoding), &rt3_System_Text_StandardEncoding_OBJ, 0));
	f_System_Text_Encoding__Unicode_k__BackingField->f__CodePage_k__BackingField_1 = 1200;
	f_System_Text_Encoding__BigEndianUnicode_k__BackingField = m3_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_System_Text_StandardEncoding), &rt3_System_Text_StandardEncoding_OBJ, 0));
	f_System_Text_Encoding__BigEndianUnicode_k__BackingField->f__CodePage_k__BackingField_1 = 1201;
	f_System_Text_Encoding__UTF32_k__BackingField = m3_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_System_Text_StandardEncoding), &rt3_System_Text_StandardEncoding_OBJ, 0));
	f_System_Text_Encoding__UTF32_k__BackingField->f__CodePage_k__BackingField_1 = 12000;
}

int32_t m3_System_Text_Encoding_GetByteCount_0(t3_System_Text_Encoding* self, char16_t* p_chars)
{
	return m3_System_Text_Encoding_GetByteCount_2(self, p_chars, 0, m2_System_Array_get_Length_0(p_chars));
}

int32_t m3_System_Text_Encoding_GetByteCount_1(t3_System_Text_Encoding* self, t2_System_String* p_s)
{
	char16_t* l_sBuffer_0;
	l_sBuffer_0 = &p_s->f__firstChar_1;
	{
		uint32_t l_codePage_1;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_1, 0, l_sBuffer_0, -1, 0, 0, 0, 0);
	}
}

int32_t m3_System_Text_Encoding_GetByteCount_2(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count)
{
	char16_t* l_charsPtr_0;
	l_charsPtr_0 = (char16_t*)(((char*)p_chars) + ArrayOffset);
	{
		uint32_t l_codePage_1;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_1, 0, l_charsPtr_0 + p_index, p_count, 0, 0, 0, 0);
	}
}

int32_t m3_System_Text_Encoding_GetByteCount_3(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_count)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return WideCharToMultiByte(l_codePage_0, 0, p_chars, p_count, 0, 0, 0, 0);
}

uint8_t* m3_System_Text_Encoding_GetBytes_0(t3_System_Text_Encoding* self, char16_t* p_chars)
{
	return m3_System_Text_Encoding_GetBytes_1(self, p_chars, 0, m2_System_Array_get_Length_0(p_chars));
}

uint8_t* m3_System_Text_Encoding_GetBytes_1(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count)
{
	char16_t* l_charsPtr_0;
	l_charsPtr_0 = (char16_t*)(((char*)p_chars) + ArrayOffset);
	{
		uint32_t l_codePage_1;
		int32_t l_bufferSize_2;
		uint8_t* l_buffer_3;
		uint8_t* l_bufferPtr_4;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		l_bufferSize_2 = WideCharToMultiByte(l_codePage_1, 0, l_charsPtr_0, -1, 0, 0, 0, 0);
		l_buffer_3 = CS2X_AllocArrayTypeAtomic(sizeof(uint8_t), l_bufferSize_2, &rt0_System_Byte___ARRAY_OBJ);
		l_bufferPtr_4 = (uint8_t*)(((char*)l_buffer_3) + ArrayOffset);
		WideCharToMultiByte(l_codePage_1, 0, l_charsPtr_0 + p_index, p_count, l_bufferPtr_4, l_bufferSize_2, 0, 0);
		return l_buffer_3;
	}
}

int32_t m3_System_Text_Encoding_GetBytes_2(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex)
{
	char16_t* l_charsPtr_0;
	uint8_t* l_bytesPtr_1;
	l_charsPtr_0 = (char16_t*)(((char*)p_chars) + ArrayOffset);
	l_bytesPtr_1 = (uint8_t*)(((char*)p_bytes) + ArrayOffset);
	{
		uint32_t l_codePage_2;
		l_codePage_2 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_2, 0, l_charsPtr_0 + p_charIndex, p_charCount, l_bytesPtr_1 + p_byteIndex, m2_System_Array_get_Length_0(p_bytes), 0, 0);
	}
}

int32_t m3_System_Text_Encoding_GetBytes_3(t3_System_Text_Encoding* self, t2_System_String* p_s, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex)
{
	char16_t* l_sBuffer_0;
	uint8_t* l_bytesPtr_1;
	l_sBuffer_0 = &p_s->f__firstChar_1;
	l_bytesPtr_1 = (uint8_t*)(((char*)p_bytes) + ArrayOffset);
	{
		uint32_t l_codePage_2;
		l_codePage_2 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_2, 0, l_sBuffer_0 + p_charIndex, p_charCount, l_bytesPtr_1 + p_byteIndex, m2_System_Array_get_Length_0(p_bytes), 0, 0);
	}
}

int32_t m3_System_Text_Encoding_GetBytes_4(t3_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteCount)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return WideCharToMultiByte(l_codePage_0, 0, p_chars, p_charCount, p_bytes, p_byteCount, 0, 0);
}

uint8_t* m3_System_Text_Encoding_GetBytes_5(t3_System_Text_Encoding* self, t2_System_String* p_s)
{
	char16_t* l_sBuffer_0;
	l_sBuffer_0 = &p_s->f__firstChar_1;
	{
		uint32_t l_codePage_1;
		int32_t l_bufferSize_2;
		uint8_t* l_buffer_3;
		uint8_t* l_bufferPtr_4;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		l_bufferSize_2 = WideCharToMultiByte(l_codePage_1, 0, l_sBuffer_0, -1, 0, 0, 0, 0);
		l_buffer_3 = CS2X_AllocArrayTypeAtomic(sizeof(uint8_t), l_bufferSize_2, &rt0_System_Byte___ARRAY_OBJ);
		l_bufferPtr_4 = (uint8_t*)(((char*)l_buffer_3) + ArrayOffset);
		WideCharToMultiByte(l_codePage_1, 0, l_sBuffer_0, -1, l_bufferPtr_4, l_bufferSize_2, 0, 0);
		return l_buffer_3;
	}
}

int32_t m3_System_Text_Encoding_GetCharCount_0(t3_System_Text_Encoding* self, uint8_t* p_bytes)
{
	return m3_System_Text_Encoding_GetCharCount_1(self, p_bytes, 0, m2_System_Array_get_Length_0(p_bytes));
}

int32_t m3_System_Text_Encoding_GetCharCount_1(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count)
{
	uint8_t* l_bytesPtr_0;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + ArrayOffset);
	{
		uint32_t l_codePage_1;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, 0, 0);
	}
}

int32_t m3_System_Text_Encoding_GetCharCount_2(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_count)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return MultiByteToWideChar(l_codePage_0, 0, p_bytes, p_count, 0, 0);
}

int32_t m3_System_Text_Encoding_GetChars_0(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteCount, char16_t* p_chars, int32_t p_charCount)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return MultiByteToWideChar(l_codePage_0, 0, p_bytes, p_byteCount, p_chars, p_charCount);
}

char16_t* m3_System_Text_Encoding_GetChars_1(t3_System_Text_Encoding* self, uint8_t* p_bytes)
{
	return m3_System_Text_Encoding_GetChars_2(self, p_bytes, 0, m2_System_Array_get_Length_0(p_bytes));
}

char16_t* m3_System_Text_Encoding_GetChars_2(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count)
{
	uint8_t* l_bytesPtr_0;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + ArrayOffset);
	{
		uint32_t l_codePage_1;
		int32_t l_bufferSize_2;
		char16_t* l_buffer_3;
		char16_t* l_bufferPtr_4;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		l_bufferSize_2 = MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, 0, 0);
		l_buffer_3 = CS2X_AllocArrayTypeAtomic(sizeof(char16_t), l_bufferSize_2, &rt0_System_Char___ARRAY_OBJ);
		l_bufferPtr_4 = (char16_t*)(((char*)l_buffer_3) + ArrayOffset);
		MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, l_bufferPtr_4, l_bufferSize_2);
		return l_buffer_3;
	}
}

int32_t m3_System_Text_Encoding_GetChars_3(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteIndex, int32_t p_byteCount, char16_t* p_chars, int32_t p_charIndex)
{
	uint8_t* l_bytesPtr_0;
	char16_t* l_charsPtr_1;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + ArrayOffset);
	l_charsPtr_1 = (char16_t*)(((char*)p_chars) + ArrayOffset);
	{
		uint32_t l_codePage_2;
		l_codePage_2 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return MultiByteToWideChar(l_codePage_2, 0, l_bytesPtr_0 + p_byteIndex, p_byteCount, l_charsPtr_1 + p_charIndex, m2_System_Array_get_Length_0(p_chars));
	}
}

t2_System_String* m3_System_Text_Encoding_GetString_0(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteCount)
{
	uint32_t l_codePage_0;
	int32_t l_bufferSize_1;
	char16_t* l_buffer_2;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	l_bufferSize_1 = MultiByteToWideChar(l_codePage_0, 0, p_bytes, p_byteCount, 0, 0);
	l_buffer_2 = alloca(sizeof(char16_t) * (l_bufferSize_1 + 1));
	MultiByteToWideChar(l_codePage_0, 0, p_bytes, p_byteCount, l_buffer_2, l_bufferSize_1);
	l_buffer_2[l_bufferSize_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_buffer_2);
}

t2_System_String* m3_System_Text_Encoding_GetString_1(t3_System_Text_Encoding* self, uint8_t* p_bytes)
{
	return m3_System_Text_Encoding_GetString_2(self, p_bytes, 0, m2_System_Array_get_Length_0(p_bytes));
}

t2_System_String* m3_System_Text_Encoding_GetString_2(t3_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count)
{
	uint8_t* l_bytesPtr_0;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + ArrayOffset);
	{
		return m3_System_Text_Encoding_GetString_0(self, l_bytesPtr_0 + p_index, p_count);
	}
}

t3_System_Text_Encoding* m3_System_Text_Encoding__ctor_0(t3_System_Text_Encoding* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t3_System_Text_StandardEncoding* m3_System_Text_StandardEncoding__ctor_0(t3_System_Text_StandardEncoding* self)
{
	m3_System_Text_Encoding__ctor_0(self);
	return self;
}

t3_System_Text_StringBuilder* m3_System_Text_StringBuilder__ctor_0(t3_System_Text_StringBuilder* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t3_System_Threading_Thread* m3_System_Threading_Thread__ctor_0(t3_System_Threading_Thread* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t2_CS2X_NativeStringType m2_CS2X_NativeStringType__ctor_0()
{
	t2_CS2X_NativeStringType selfObj = {0};
	return selfObj;
}

t2_CS2X_NativeStringParamAttribute* m2_CS2X_NativeStringParamAttribute__ctor_0(t2_CS2X_NativeStringParamAttribute* self, t2_CS2X_NativeStringType p_type)
{
	m2_System_Attribute__ctor_0(self);
	self->f_type_2 = p_type;
	return self;
}

t2_System_String* m2_uint8_t_ToString_0(uint8_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (4));
	l_length_1 = sprintf(l_str_0, "%u", (*self));
	l_str_0[3] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

uint8_t m2_uint8_t__ctor_0()
{
	uint8_t selfObj = {0};
	return selfObj;
}

t2_System_DateTime m2_System_DateTime__ctor_0()
{
	t2_System_DateTime selfObj = {0};
	return selfObj;
}

t2_System_Guid m2_System_Guid_NewGuid_0()
{
	t2_System_Guid l_guid_0;
	int32_t l_i_1;
	l_guid_0 = m2_System_Guid__ctor_0();
	for (l_i_1 = 0; l_i_1 != 16; ++l_i_1)
	{
		int32_t l_number_2;
		l_number_2 = (int32_t)((m2_System_Random_Next_0(f_System_Guid_random) / (float)2147483647) * 255);
		l_guid_0.f_data_2[l_i_1] = (uint8_t)l_number_2;
	}
	l_guid_0.f_data_2[7] &= 15;
	l_guid_0.f_data_2[7] |= 64;
	l_guid_0.f_data_2[9] &= 63;
	l_guid_0.f_data_2[9] |= 128;
	return l_guid_0;
}

t2_System_String* m2_System_Guid_ToString_0(t2_System_Guid* self)
{
	uint8_t* l_str_0;
	int32_t l_i_1;
	int32_t l_i2_2;
	char16_t* l_charArray_3;
	l_str_0 = alloca(sizeof(uint8_t) * (37));
	for (l_i_1 = 0, l_i2_2 = 0; l_i_1 != 16; ++l_i_1, l_i2_2 += 2)
	{
		if (l_i_1 == 4 || l_i_1 == 6 || l_i_1 == 8 || l_i_1 == 10)
		{
			char16_t l_delimiter_3;
			l_delimiter_3 = 0x002D;
			m3_System_Text_Encoding_GetBytes_4(f_System_Text_Encoding__ASCII_k__BackingField, &l_delimiter_3, 1, &l_str_0[l_i2_2], 1);
			++l_i2_2;
		}
		sprintf(&l_str_0[l_i2_2], "%02x", (*self).f_data_2[l_i_1]);
	}
	l_str_0[36] = 0;
	l_charArray_3 = alloca(sizeof(char16_t) * (38));
	for (l_i_1 = 0; l_i_1 != 37; ++l_i_1)
	{
		l_charArray_3[l_i_1] = (char16_t)l_str_0[l_i_1];
	}
	l_charArray_3[37] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_3);
}

t2_System_Guid m2_System_Guid__ctor_0()
{
	t2_System_Guid selfObj = {0};
	return selfObj;
}

void m2_System_Guid__cctor_0()
{
	f_System_Guid_random = m2_System_Random__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_Random), &rt2_System_Random_OBJ, 0));
	f_System_Guid_Empty = m2_System_Guid__ctor_0();
}

t2_System_String* m2_int16_t_ToString_0(int16_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (7));
	l_length_1 = sprintf(l_str_0, "%d", (*self));
	l_str_0[6] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

int16_t m2_int16_t__ctor_0()
{
	int16_t selfObj = {0};
	return selfObj;
}

t2_System_String* m2_int64_t_ToString_0(int64_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (21));
	l_length_1 = sprintf(l_str_0, "%lld", (*self));
	l_str_0[20] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

int64_t m2_int64_t__ctor_0()
{
	int64_t selfObj = {0};
	return selfObj;
}

t2_System_RuntimeTypeHandle m2_System_RuntimeTypeHandle__ctor_0(t2_System_RuntimeType* p_type)
{
	t2_System_RuntimeTypeHandle selfObj;
	t2_System_RuntimeTypeHandle* self = &selfObj;
	(*self).f_m_type_2 = p_type;
	return selfObj;
}

t2_System_RuntimeTypeHandle m2_System_RuntimeTypeHandle__ctor_1()
{
	t2_System_RuntimeTypeHandle selfObj = {0};
	return selfObj;
}

t2_System_String* m2_int8_t_ToString_0(int8_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (5));
	l_length_1 = sprintf(l_str_0, "%d", (*self));
	l_str_0[4] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

int8_t m2_int8_t__ctor_0()
{
	int8_t selfObj = {0};
	return selfObj;
}

t2_System_String* m2_uint16_t_ToString_0(uint16_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (6));
	l_length_1 = sprintf(l_str_0, "%u", (*self));
	l_str_0[5] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

uint16_t m2_uint16_t__ctor_0()
{
	uint16_t selfObj = {0};
	return selfObj;
}

t2_System_String* m2_uint64_t_ToString_0(uint64_t* self)
{
	uint8_t* l_str_0;
	int32_t l_length_1;
	char16_t* l_charArray_2;
	int32_t l_i_3;
	l_str_0 = alloca(sizeof(uint8_t) * (21));
	l_length_1 = sprintf(l_str_0, "%llu", (*self));
	l_str_0[20] = 0;
	l_charArray_2 = alloca(sizeof(char16_t) * (l_length_1 + 1));
	for (l_i_3 = 0; l_i_3 != l_length_1; ++l_i_3)
	{
		l_charArray_2[l_i_3] = (char16_t)l_str_0[l_i_3];
	}
	l_charArray_2[l_length_1] = 0x0000;
	return m2_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_System_String), &rt2_System_String_OBJ, 0), l_charArray_2);
}

uint64_t m2_uint64_t__ctor_0()
{
	uint64_t selfObj = {0};
	return selfObj;
}

int32_t m2_uintptr_t_get_Size_0()
{
	return sizeof(void*);
}

uintptr_t m2_uintptr_t__ctor_0(uint32_t p_value)
{
	return (uint32_t)p_value;
}

uintptr_t m2_uintptr_t__ctor_1(uint64_t p_value)
{
	return (uint64_t)p_value;
}

uintptr_t m2_uintptr_t__ctor_2(void* p_value)
{
	return (uintptr_t)p_value;
}

uint32_t m2_uintptr_t_ToUInt32_0(uintptr_t* self)
{
	return (uint32_t)(*self);
}

uint64_t m2_uintptr_t_ToUInt64_0(uintptr_t* self)
{
	return (uint64_t)(*self);
}

void* m2_uintptr_t_ToPointer_0(uintptr_t* self)
{
	return (void*)(*self);
}

uintptr_t m2_uintptr_t__ctor_3()
{
	uintptr_t selfObj = {0};
	return selfObj;
}

void m2_uintptr_t__cctor_0()
{
	f_uintptr_t_Zero = m2_uintptr_t__ctor_3();
}

t3_System_IO_FileAccess m3_System_IO_FileAccess__ctor_0()
{
	t3_System_IO_FileAccess selfObj = {0};
	return selfObj;
}

t3_System_IO_FileMode m3_System_IO_FileMode__ctor_0()
{
	t3_System_IO_FileMode selfObj = {0};
	return selfObj;
}

t3_System_IO_FileShare m3_System_IO_FileShare__ctor_0()
{
	t3_System_IO_FileShare selfObj = {0};
	return selfObj;
}

t3_System_Reflection_MethodImplAttributes m3_System_Reflection_MethodImplAttributes__ctor_0()
{
	t3_System_Reflection_MethodImplAttributes selfObj = {0};
	return selfObj;
}

t4_System_Runtime_InteropServices_UnmanagedType m4_System_Runtime_InteropServices_UnmanagedType__ctor_0()
{
	t4_System_Runtime_InteropServices_UnmanagedType selfObj = {0};
	return selfObj;
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3__ctor_0(float p_x, float p_y, float p_z)
{
	t2_RayTraceBenchmark_Vec3 selfObj;
	t2_RayTraceBenchmark_Vec3* self = &selfObj;
	(*self).f_X_2 = p_x;
	(*self).f_Y_2 = p_y;
	(*self).f_Z_2 = p_z;
	return selfObj;
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Addition_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 + p_p2.f_X_2, p_p1.f_Y_2 + p_p2.f_Y_2, p_p1.f_Z_2 + p_p2.f_Z_2);
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Subtraction_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 - p_p2.f_X_2, p_p1.f_Y_2 - p_p2.f_Y_2, p_p1.f_Z_2 - p_p2.f_Z_2);
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_UnaryNegation_0(t2_RayTraceBenchmark_Vec3 p_p1)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(-p_p1.f_X_2, -p_p1.f_Y_2, -p_p1.f_Z_2);
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Multiply_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 * p_p2.f_X_2, p_p1.f_Y_2 * p_p2.f_Y_2, p_p1.f_Z_2 * p_p2.f_Z_2);
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Multiply_1(t2_RayTraceBenchmark_Vec3 p_p1, float p_p2)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 * p_p2, p_p1.f_Y_2 * p_p2, p_p1.f_Z_2 * p_p2);
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Multiply_2(float p_p1, t2_RayTraceBenchmark_Vec3 p_p2)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(p_p1 * p_p2.f_X_2, p_p1 * p_p2.f_Y_2, p_p1 * p_p2.f_Z_2);
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Division_0(t2_RayTraceBenchmark_Vec3 p_p1, t2_RayTraceBenchmark_Vec3 p_p2)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 / p_p2.f_X_2, p_p1.f_Y_2 / p_p2.f_Y_2, p_p1.f_Z_2 / p_p2.f_Z_2);
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_op_Division_1(t2_RayTraceBenchmark_Vec3 p_p1, float p_p2)
{
	return m2_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 / p_p2, p_p1.f_Y_2 / p_p2, p_p1.f_Z_2 / p_p2);
}

float m2_RayTraceBenchmark_Vec3_Dot_0(t2_RayTraceBenchmark_Vec3 p_v1, t2_RayTraceBenchmark_Vec3 p_v2)
{
	return (p_v1.f_X_2 * p_v2.f_X_2) + (p_v1.f_Y_2 * p_v2.f_Y_2) + (p_v1.f_Z_2 * p_v2.f_Z_2);
}

float m2_RayTraceBenchmark_Vec3_Magnitude_0(t2_RayTraceBenchmark_Vec3 p_v)
{
	return sqrtf((p_v.f_X_2 * p_v.f_X_2) + (p_v.f_Y_2 * p_v.f_Y_2) + (p_v.f_Z_2 * p_v.f_Z_2));
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3_Normalize_0(t2_RayTraceBenchmark_Vec3 p_v)
{
	return m2_RayTraceBenchmark_Vec3_op_Division_1(p_v, sqrtf((p_v.f_X_2 * p_v.f_X_2) + (p_v.f_Y_2 * p_v.f_Y_2) + (p_v.f_Z_2 * p_v.f_Z_2)));
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Vec3__ctor_1()
{
	t2_RayTraceBenchmark_Vec3 selfObj = {0};
	return selfObj;
}

void m2_RayTraceBenchmark_Vec3__cctor_0()
{
	f_RayTraceBenchmark_Vec3_Zero = m2_RayTraceBenchmark_Vec3__ctor_1();
}

t2_RayTraceBenchmark_Sphere* m2_RayTraceBenchmark_Sphere__ctor_0(t2_RayTraceBenchmark_Sphere* self, t2_RayTraceBenchmark_Vec3 p_c, float p_r, t2_RayTraceBenchmark_Vec3 p_clr, float p_refl, float p_trans)
{
	m2_System_Object__ctor_0(self);
	self->f_Center_1 = p_c;
	self->f_Radius_1 = p_r;
	self->f_Color_1 = p_clr;
	self->f_Reflection_1 = p_refl;
	self->f_Transparency_1 = p_trans;
	return self;
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Sphere_Normal_0(t2_RayTraceBenchmark_Sphere* p_sphere, t2_RayTraceBenchmark_Vec3 p_pos)
{
	return m2_RayTraceBenchmark_Vec3_Normalize_0(m2_RayTraceBenchmark_Vec3_op_Subtraction_0(p_pos, p_sphere->f_Center_1));
}

char m2_RayTraceBenchmark_Sphere_Intersect_0(t2_RayTraceBenchmark_Sphere* p_sphere, t2_RayTraceBenchmark_Ray p_ray)
{
	t2_RayTraceBenchmark_Vec3 l_l_0;
	float l_a_1;
	float l_b2_2;
	float l_r2_3;
	l_l_0 = m2_RayTraceBenchmark_Vec3_op_Subtraction_0(p_sphere->f_Center_1, p_ray.f_Org_2);
	l_a_1 = m2_RayTraceBenchmark_Vec3_Dot_0(l_l_0, p_ray.f_Dir_2);
	if (l_a_1 < 0)
	{
		return 0;
	}
	l_b2_2 = m2_RayTraceBenchmark_Vec3_Dot_0(l_l_0, l_l_0) - (l_a_1 * l_a_1);
	l_r2_3 = p_sphere->f_Radius_1 * p_sphere->f_Radius_1;
	if (l_b2_2 > l_r2_3)
	{
		return 0;
	}
	return 1;
}

char m2_RayTraceBenchmark_Sphere_Intersect_1(t2_RayTraceBenchmark_Sphere* p_sphere, t2_RayTraceBenchmark_Ray p_ray, float* p_distance)
{
	t2_RayTraceBenchmark_Vec3 l_l_0;
	float l_a_1;
	float l_b2_2;
	float l_r2_3;
	float l_c_4;
	float l_near_5;
	float l_far_6;
	(*p_distance) = 0;
	l_l_0 = m2_RayTraceBenchmark_Vec3_op_Subtraction_0(p_sphere->f_Center_1, p_ray.f_Org_2);
	l_a_1 = m2_RayTraceBenchmark_Vec3_Dot_0(l_l_0, p_ray.f_Dir_2);
	if (l_a_1 < 0)
	{
		return 0;
	}
	l_b2_2 = m2_RayTraceBenchmark_Vec3_Dot_0(l_l_0, l_l_0) - (l_a_1 * l_a_1);
	l_r2_3 = p_sphere->f_Radius_1 * p_sphere->f_Radius_1;
	if (l_b2_2 > l_r2_3)
	{
		return 0;
	}
	l_c_4 = sqrtf(l_r2_3 - l_b2_2);
	l_near_5 = l_a_1 - l_c_4;
	l_far_6 = l_a_1 + l_c_4;
	(*p_distance) = (l_near_5 < 0) ? l_far_6 : l_near_5;
	return 1;
}

t2_RayTraceBenchmark_Light* m2_RayTraceBenchmark_Light__ctor_0(t2_RayTraceBenchmark_Light* self, t2_RayTraceBenchmark_Vec3 p_position, t2_RayTraceBenchmark_Vec3 p_color)
{
	m2_System_Object__ctor_0(self);
	self->f_Position_1 = p_position;
	self->f_Color_1 = p_color;
	return self;
}

t2_RayTraceBenchmark_Scene* m2_RayTraceBenchmark_Scene__ctor_0(t2_RayTraceBenchmark_Scene* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t2_RayTraceBenchmark_Vec3 m2_RayTraceBenchmark_Benchmark_trace_0(t2_RayTraceBenchmark_Ray p_ray, t2_RayTraceBenchmark_Scene* p_scene, int32_t p_depth)
{
	float l_nearest_0;
	t2_RayTraceBenchmark_Sphere* l_obj_1;
	t2_RayTraceBenchmark_Sphere** l_o_ex_2;
	int32_t l_o_i_3;
	t2_RayTraceBenchmark_Vec3 l_point_of_hit_4;
	t2_RayTraceBenchmark_Vec3 l_normal_5;
	char l_inside_6;
	t2_RayTraceBenchmark_Vec3 l_color_7;
	float l_reflection_ratio_8;
	t2_RayTraceBenchmark_Light** l_l_ex_9;
	int32_t l_l_i_10;
	float l_rayNormDot_11;
	float l_facing_12;
	float l_fresneleffect_13;
	l_nearest_0 = FLT_MAX;
	l_obj_1 = 0;
	l_o_ex_2 = p_scene->f_Objects_1;
	for (l_o_i_3 = 0; l_o_i_3 != m2_System_Array_get_Length_0((t2_System_Array*)l_o_ex_2); ++l_o_i_3)
	{
		t2_RayTraceBenchmark_Sphere* l_o_4;
		float l_distance_5;
		l_o_4 = ((t2_RayTraceBenchmark_Sphere**)(((char*)l_o_ex_2) + ArrayOffset))[l_o_i_3];
		l_distance_5 = FLT_MAX;
		if (m2_RayTraceBenchmark_Sphere_Intersect_1(l_o_4, p_ray, &l_distance_5))
		{
			if (l_distance_5 < l_nearest_0)
			{
				l_nearest_0 = l_distance_5;
				l_obj_1 = l_o_4;
			}
		}
	}
	if (l_obj_1 == 0)
	{
		return f_RayTraceBenchmark_Vec3_Zero;
	}
	l_point_of_hit_4 = m2_RayTraceBenchmark_Vec3_op_Addition_0(p_ray.f_Org_2, (m2_RayTraceBenchmark_Vec3_op_Multiply_1(p_ray.f_Dir_2, l_nearest_0)));
	l_normal_5 = m2_RayTraceBenchmark_Sphere_Normal_0(l_obj_1, l_point_of_hit_4);
	l_inside_6 = 0;
	if (m2_RayTraceBenchmark_Vec3_Dot_0(l_normal_5, p_ray.f_Dir_2) > 0)
	{
		l_inside_6 = 1;
		l_normal_5 = m2_RayTraceBenchmark_Vec3_op_UnaryNegation_0(l_normal_5);
	}
	l_color_7 = f_RayTraceBenchmark_Vec3_Zero;
	l_reflection_ratio_8 = l_obj_1->f_Reflection_1;
	l_l_ex_9 = p_scene->f_Lights_1;
	for (l_l_i_10 = 0; l_l_i_10 != m2_System_Array_get_Length_0((t2_System_Array*)l_l_ex_9); ++l_l_i_10)
	{
		t2_RayTraceBenchmark_Light* l_l_11;
		t2_RayTraceBenchmark_Vec3 l_light_direction_12;
		t2_RayTraceBenchmark_Ray l_r_13;
		char l_blocked_14;
		l_l_11 = ((t2_RayTraceBenchmark_Light**)(((char*)l_l_ex_9) + ArrayOffset))[l_l_i_10];
		l_light_direction_12 = m2_RayTraceBenchmark_Vec3_Normalize_0(m2_RayTraceBenchmark_Vec3_op_Subtraction_0(l_l_11->f_Position_1, l_point_of_hit_4));
		l_r_13.f_Org_2 = m2_RayTraceBenchmark_Vec3_op_Addition_0(l_point_of_hit_4, (m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_5, 1E-05f)));
		l_r_13.f_Dir_2 = l_light_direction_12;
		l_blocked_14 = 0;
		l_o_ex_2 = p_scene->f_Objects_1;
		for (l_o_i_3 = 0; l_o_i_3 != m2_System_Array_get_Length_0((t2_System_Array*)l_o_ex_2); ++l_o_i_3)
		{
			t2_RayTraceBenchmark_Sphere* l_o_15;
			l_o_15 = ((t2_RayTraceBenchmark_Sphere**)(((char*)l_o_ex_2) + ArrayOffset))[l_o_i_3];
			if (m2_RayTraceBenchmark_Sphere_Intersect_0(l_o_15, l_r_13))
			{
				l_blocked_14 = 1;
				break;
			}
		}
		if (!l_blocked_14)
		{
			l_color_7 = m2_RayTraceBenchmark_Vec3_op_Addition_0(l_color_7, m2_RayTraceBenchmark_Vec3_op_Multiply_1(m2_RayTraceBenchmark_Vec3_op_Multiply_0(m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_l_11->f_Color_1, fmaxf(0, m2_RayTraceBenchmark_Vec3_Dot_0(l_normal_5, l_light_direction_12))), l_obj_1->f_Color_1), (1.0f - l_reflection_ratio_8)));
		}
	}
	l_rayNormDot_11 = m2_RayTraceBenchmark_Vec3_Dot_0(p_ray.f_Dir_2, l_normal_5);
	l_facing_12 = fmaxf(0, -l_rayNormDot_11);
	l_fresneleffect_13 = l_reflection_ratio_8 + ((1 - l_reflection_ratio_8) * powf((1 - l_facing_12), 5));
	if (p_depth < 6 && l_reflection_ratio_8 > 0)
	{
		t2_RayTraceBenchmark_Vec3 l_reflection_direction_14;
		t2_RayTraceBenchmark_Ray l_r_15;
		t2_RayTraceBenchmark_Vec3 l_reflection_16;
		l_reflection_direction_14 = m2_RayTraceBenchmark_Vec3_op_Addition_0(p_ray.f_Dir_2, (m2_RayTraceBenchmark_Vec3_op_Multiply_1(m2_RayTraceBenchmark_Vec3_op_Multiply_1(m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_5, 2), l_rayNormDot_11), (-1))));
		l_r_15.f_Org_2 = m2_RayTraceBenchmark_Vec3_op_Addition_0(l_point_of_hit_4, (m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_5, 1E-05f)));
		l_r_15.f_Dir_2 = l_reflection_direction_14;
		l_reflection_16 = m2_RayTraceBenchmark_Benchmark_trace_0(l_r_15, p_scene, p_depth + 1);
		l_color_7 = m2_RayTraceBenchmark_Vec3_op_Addition_0(l_color_7, m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_reflection_16, l_fresneleffect_13));
	}
	if (p_depth < 6 && (l_obj_1->f_Transparency_1 > 0))
	{
		float l_ior_14;
		float l_CE_15;
		float l_eta_16;
		t2_RayTraceBenchmark_Vec3 l_GF_17;
		float l_sin_t1_2_18;
		float l_sin_t2_2_19;
		l_ior_14 = 1.5f;
		l_CE_15 = m2_RayTraceBenchmark_Vec3_Dot_0(p_ray.f_Dir_2, l_normal_5) * (-1);
		l_ior_14 = l_inside_6 ? 1 / l_ior_14 : l_ior_14;
		l_eta_16 = 1 / l_ior_14;
		l_GF_17 = m2_RayTraceBenchmark_Vec3_op_Multiply_1((m2_RayTraceBenchmark_Vec3_op_Addition_0(p_ray.f_Dir_2, m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_5, l_CE_15))), l_eta_16);
		l_sin_t1_2_18 = 1 - (l_CE_15 * l_CE_15);
		l_sin_t2_2_19 = l_sin_t1_2_18 * (l_eta_16 * l_eta_16);
		if (l_sin_t2_2_19 < 1)
		{
			t2_RayTraceBenchmark_Vec3 l_GC_20;
			t2_RayTraceBenchmark_Vec3 l_refraction_direction_21;
			t2_RayTraceBenchmark_Ray l_r_22;
			t2_RayTraceBenchmark_Vec3 l_refraction_23;
			l_GC_20 = m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_5, sqrtf(1 - l_sin_t2_2_19));
			l_refraction_direction_21 = m2_RayTraceBenchmark_Vec3_op_Subtraction_0(l_GF_17, l_GC_20);
			l_r_22.f_Org_2 = m2_RayTraceBenchmark_Vec3_op_Subtraction_0(l_point_of_hit_4, (m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_5, 0.0001f)));
			l_r_22.f_Dir_2 = l_refraction_direction_21;
			l_refraction_23 = m2_RayTraceBenchmark_Benchmark_trace_0(l_r_22, p_scene, p_depth + 1);
			l_color_7 = m2_RayTraceBenchmark_Vec3_op_Addition_0(l_color_7, m2_RayTraceBenchmark_Vec3_op_Multiply_1(m2_RayTraceBenchmark_Vec3_op_Multiply_1(l_refraction_23, (1 - l_fresneleffect_13)), l_obj_1->f_Transparency_1));
		}
	}
	return l_color_7;
}

uint8_t* m2_RayTraceBenchmark_Benchmark_Render_0(t2_RayTraceBenchmark_Scene* p_scene, uint8_t* p_pixels)
{
	t2_RayTraceBenchmark_Vec3 l_eye_0;
	float l_h_1;
	float l_w_2;
	int32_t l_y_3;
	l_eye_0 = f_RayTraceBenchmark_Vec3_Zero;
	l_h_1 = tanf(0.3926991f) * 2;
	l_w_2 = (l_h_1 * 10240) / 5760;
	for (l_y_3 = 0; l_y_3 != 5760; ++l_y_3)
	{
		int32_t l_x_4;
		for (l_x_4 = 0; l_x_4 != 10240; ++l_x_4)
		{
			float l_xx_5;
			float l_yy_6;
			float l_ww_7;
			float l_hh_8;
			t2_RayTraceBenchmark_Vec3 l_dir_9;
			t2_RayTraceBenchmark_Ray l_r_10;
			t2_RayTraceBenchmark_Vec3 l_pixel_11;
			int32_t l_i_12;
			l_xx_5 = l_x_4;
			l_yy_6 = l_y_3;
			l_ww_7 = 10240;
			l_hh_8 = 5760;
			l_dir_9.f_X_2 = ((l_xx_5 - (l_ww_7 / 2.0f)) / l_ww_7) * l_w_2;
			l_dir_9.f_Y_2 = (((l_hh_8 / 2.0f) - l_yy_6) / l_hh_8) * l_h_1;
			l_dir_9.f_Z_2 = -1.0f;
			l_dir_9 = m2_RayTraceBenchmark_Vec3_Normalize_0(l_dir_9);
			l_r_10.f_Org_2 = l_eye_0;
			l_r_10.f_Dir_2 = l_dir_9;
			l_pixel_11 = m2_RayTraceBenchmark_Benchmark_trace_0(l_r_10, p_scene, 0);
			l_i_12 = (l_x_4 * 3) + (l_y_3 * 10240 * 3);
			((uint8_t*)(((char*)p_pixels) + ArrayOffset))[l_i_12] = (uint8_t)fminf(l_pixel_11.f_X_2 * 255, 255);
			((uint8_t*)(((char*)p_pixels) + ArrayOffset))[l_i_12 + 1] = (uint8_t)fminf(l_pixel_11.f_Y_2 * 255, 255);
			((uint8_t*)(((char*)p_pixels) + ArrayOffset))[l_i_12 + 2] = (uint8_t)fminf(l_pixel_11.f_Z_2 * 255, 255);
		}
	}
	return p_pixels;
}

void m2_RayTraceBenchmark_BenchmarkMain_Main_0(t2_System_String** p_args)
{
	m2_RayTraceBenchmark_BenchmarkMain_Start_0();
}

#include <time.h>
#include <stdio.h>
void m2_RayTraceBenchmark_BenchmarkMain_Start_0()
{
	t2_RayTraceBenchmark_Scene* l_scene_0;
	int32_t l_pixelsLength_1;
	uint8_t* l_pixels_2;
	uint8_t* l_data_3;
	l_scene_0 = m2_RayTraceBenchmark_Scene__ctor_0(CS2X_AllocType(sizeof(t2_RayTraceBenchmark_Scene), &rt2_RayTraceBenchmark_Scene_OBJ, 0));
	l_scene_0->f_Objects_1 = CS2X_AllocArrayTypeAtomic(sizeof(t2_RayTraceBenchmark_Sphere), 5, &rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ);
	((t2_RayTraceBenchmark_Sphere**)(((char*)l_scene_0->f_Objects_1) + ArrayOffset))[0] = m2_RayTraceBenchmark_Sphere__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_RayTraceBenchmark_Sphere), &rt2_RayTraceBenchmark_Sphere_OBJ, 0), m2_RayTraceBenchmark_Vec3__ctor_0(0.0f, -10002.0f, -20.0f), 10000, m2_RayTraceBenchmark_Vec3__ctor_0(0.8f, 0.8f, 0.8f), 0, 0);
	((t2_RayTraceBenchmark_Sphere**)(((char*)l_scene_0->f_Objects_1) + ArrayOffset))[1] = m2_RayTraceBenchmark_Sphere__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_RayTraceBenchmark_Sphere), &rt2_RayTraceBenchmark_Sphere_OBJ, 0), m2_RayTraceBenchmark_Vec3__ctor_0(0.0f, 2.0f, -20.0f), 4, m2_RayTraceBenchmark_Vec3__ctor_0(0.8f, 0.5f, 0.5f), 0.5f, 0);
	((t2_RayTraceBenchmark_Sphere**)(((char*)l_scene_0->f_Objects_1) + ArrayOffset))[2] = m2_RayTraceBenchmark_Sphere__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_RayTraceBenchmark_Sphere), &rt2_RayTraceBenchmark_Sphere_OBJ, 0), m2_RayTraceBenchmark_Vec3__ctor_0(5.0f, 0.0f, -15.0f), 2, m2_RayTraceBenchmark_Vec3__ctor_0(0.3f, 0.8f, 0.8f), 0.2f, 0);
	((t2_RayTraceBenchmark_Sphere**)(((char*)l_scene_0->f_Objects_1) + ArrayOffset))[3] = m2_RayTraceBenchmark_Sphere__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_RayTraceBenchmark_Sphere), &rt2_RayTraceBenchmark_Sphere_OBJ, 0), m2_RayTraceBenchmark_Vec3__ctor_0(-5.0f, 0.0f, -15.0f), 2, m2_RayTraceBenchmark_Vec3__ctor_0(0.3f, 0.5f, 0.8f), 0.2f, 0);
	((t2_RayTraceBenchmark_Sphere**)(((char*)l_scene_0->f_Objects_1) + ArrayOffset))[4] = m2_RayTraceBenchmark_Sphere__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_RayTraceBenchmark_Sphere), &rt2_RayTraceBenchmark_Sphere_OBJ, 0), m2_RayTraceBenchmark_Vec3__ctor_0(-2.0f, -1.0f, -10.0f), 1, m2_RayTraceBenchmark_Vec3__ctor_0(0.1f, 0.1f, 0.1f), 0.1f, 0.8f);
	l_scene_0->f_Lights_1 = CS2X_AllocArrayTypeAtomic(sizeof(t2_RayTraceBenchmark_Light), 1, &rt0_RayTraceBenchmark_Light___ARRAY_OBJ);
	((t2_RayTraceBenchmark_Light**)(((char*)l_scene_0->f_Lights_1) + ArrayOffset))[0] = m2_RayTraceBenchmark_Light__ctor_0(CS2X_AllocTypeAtomic(sizeof(t2_RayTraceBenchmark_Light), &rt2_RayTraceBenchmark_Light_OBJ, 0), m2_RayTraceBenchmark_Vec3__ctor_0(-10, 20, 30), m2_RayTraceBenchmark_Vec3__ctor_0(2, 2, 2));
	l_pixelsLength_1 = 176947200;
	l_pixels_2 = CS2X_AllocArrayTypeAtomic(sizeof(uint8_t), l_pixelsLength_1, &rt0_System_Byte___ARRAY_OBJ);
	CS2X_GC_Collect();
	m2_System_Console_WriteLine_0(StringLiteral_9);
	Sleep(2000);
	m2_System_Console_WriteLine_0(StringLiteral_10);
	clock_t tStart = clock();
	l_data_3 = m2_RayTraceBenchmark_Benchmark_Render_0(l_scene_0, l_pixels_2);
	clock_t tEnd = clock();
	printf("%f", (tEnd - tStart) / (double)CLOCKS_PER_SEC);
	m2_System_Console_WriteLine_0(f_RayTraceBenchmark_BenchmarkMain_TimeToComplete);
}

uint8_t* m2_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRA_0(uint8_t* p_rgb)
{
	uint8_t* l_rgba_0;
	int32_t l_i_1;
	int32_t l_i2_2;
	l_rgba_0 = CS2X_AllocArrayTypeAtomic(sizeof(uint8_t), (m2_System_Array_get_Length_0(p_rgb) / 3) * 4, &rt0_System_Byte___ARRAY_OBJ);
	for (l_i_1 = 0, l_i2_2 = 0; l_i_1 != m2_System_Array_get_Length_0(p_rgb); l_i_1 += 3, l_i2_2 += 4)
	{
		((uint8_t*)(((char*)l_rgba_0) + ArrayOffset))[l_i2_2] = ((uint8_t*)(((char*)p_rgb) + ArrayOffset))[l_i_1 + 2];
		((uint8_t*)(((char*)l_rgba_0) + ArrayOffset))[l_i2_2 + 1] = ((uint8_t*)(((char*)p_rgb) + ArrayOffset))[l_i_1 + 1];
		((uint8_t*)(((char*)l_rgba_0) + ArrayOffset))[l_i2_2 + 2] = ((uint8_t*)(((char*)p_rgb) + ArrayOffset))[l_i_1];
		((uint8_t*)(((char*)l_rgba_0) + ArrayOffset))[l_i2_2 + 3] = 255;
	}
	return l_rgba_0;
}

int32_t* m2_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRAInt_0(uint8_t* p_rgb)
{
	int32_t* l_rgba_0;
	int32_t l_i_1;
	int32_t l_i2_2;
	l_rgba_0 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), m2_System_Array_get_Length_0(p_rgb) / 3, &rt0_System_Int32___ARRAY_OBJ);
	for (l_i_1 = 0, l_i2_2 = 0; l_i_1 != m2_System_Array_get_Length_0(p_rgb); l_i_1 += 3, l_i2_2 += 1)
	{
		int32_t l_color_3;
		l_color_3 = ((uint8_t*)(((char*)p_rgb) + ArrayOffset))[l_i_1 + 2];
		l_color_3 |= ((uint8_t*)(((char*)p_rgb) + ArrayOffset))[l_i_1 + 1] << 8;
		l_color_3 |= ((uint8_t*)(((char*)p_rgb) + ArrayOffset))[l_i_1] << 16;
		l_color_3 |= -16777216;
		((int32_t*)(((char*)l_rgba_0) + ArrayOffset))[l_i2_2] = l_color_3;
	}
	return l_rgba_0;
}

t2_RayTraceBenchmark_Ray m2_RayTraceBenchmark_Ray__ctor_0()
{
	t2_RayTraceBenchmark_Ray selfObj = {0};
	return selfObj;
}

/* =============================== */
/* Init Runtime 'CS2X.CoreLib' */
/* =============================== */
void CS2X_InitAssembly_CS2X_CoreLib()
{
	/* Init runtime type objects */
	memset(&rt2_System_Activator_OBJ, 0, sizeof(rt2_System_Activator));
	rt2_System_Activator_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Activator_OBJ;
	rt2_System_Activator_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Activator_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Activator_METADATA_Name;
	rt2_System_Activator_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Activator_METADATA_FullName;
	memset(&rt2_System_ArgumentException_OBJ, 0, sizeof(rt2_System_ArgumentException));
	rt2_System_ArgumentException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_ArgumentException_OBJ;
	rt2_System_ArgumentException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_ArgumentException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_ArgumentException_METADATA_Name;
	rt2_System_ArgumentException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_ArgumentException_METADATA_FullName;
	memset(&rt2_System_ArgumentOutOfRangeException_OBJ, 0, sizeof(rt2_System_ArgumentOutOfRangeException));
	rt2_System_ArgumentOutOfRangeException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_ArgumentOutOfRangeException_OBJ;
	rt2_System_ArgumentOutOfRangeException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_ArgumentOutOfRangeException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_ArgumentOutOfRangeException_METADATA_Name;
	rt2_System_ArgumentOutOfRangeException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_ArgumentOutOfRangeException_METADATA_FullName;
	memset(&rt2_System_Array_OBJ, 0, sizeof(rt2_System_Array));
	rt2_System_Array_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Array_OBJ;
	rt2_System_Array_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Array_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Array_METADATA_Name;
	rt2_System_Array_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Array_METADATA_FullName;
	memset(&rt2_System_Attribute_OBJ, 0, sizeof(rt2_System_Attribute));
	rt2_System_Attribute_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Attribute_OBJ;
	rt2_System_Attribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Attribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Attribute_METADATA_Name;
	rt2_System_Attribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Attribute_METADATA_FullName;
	memset(&rt2_System_Boolean_OBJ, 0, sizeof(rt2_System_Boolean));
	rt2_System_Boolean_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Boolean_OBJ;
	rt2_System_Boolean_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Boolean_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Boolean_METADATA_Name;
	rt2_System_Boolean_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Boolean_METADATA_FullName;
	memset(&rt2_System_AttributeTargets_OBJ, 0, sizeof(rt2_System_AttributeTargets));
	rt2_System_AttributeTargets_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_AttributeTargets_OBJ;
	rt2_System_AttributeTargets_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt2_System_AttributeTargets_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_AttributeTargets_METADATA_Name;
	rt2_System_AttributeTargets_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_AttributeTargets_METADATA_FullName;
	memset(&rt2_System_AttributeUsageAttribute_OBJ, 0, sizeof(rt2_System_AttributeUsageAttribute));
	rt2_System_AttributeUsageAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_AttributeUsageAttribute_OBJ;
	rt2_System_AttributeUsageAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt2_System_AttributeUsageAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_AttributeUsageAttribute_METADATA_Name;
	rt2_System_AttributeUsageAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_AttributeUsageAttribute_METADATA_FullName;
	memset(&rt2_System_BitConverter_OBJ, 0, sizeof(rt2_System_BitConverter));
	rt2_System_BitConverter_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_BitConverter_OBJ;
	rt2_System_BitConverter_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_BitConverter_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_BitConverter_METADATA_Name;
	rt2_System_BitConverter_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_BitConverter_METADATA_FullName;
	memset(&rt2_System_Buffer_OBJ, 0, sizeof(rt2_System_Buffer));
	rt2_System_Buffer_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Buffer_OBJ;
	rt2_System_Buffer_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Buffer_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Buffer_METADATA_Name;
	rt2_System_Buffer_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Buffer_METADATA_FullName;
	memset(&rt2_System_Console_OBJ, 0, sizeof(rt2_System_Console));
	rt2_System_Console_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Console_OBJ;
	rt2_System_Console_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Console_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Console_METADATA_Name;
	rt2_System_Console_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Console_METADATA_FullName;
	memset(&rt2_System_IntPtr_OBJ, 0, sizeof(rt2_System_IntPtr));
	rt2_System_IntPtr_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_IntPtr_OBJ;
	rt2_System_IntPtr_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_IntPtr_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_IntPtr_METADATA_Name;
	rt2_System_IntPtr_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_IntPtr_METADATA_FullName;
	memset(&rt2_System_Delegate_OBJ, 0, sizeof(rt2_System_Delegate));
	rt2_System_Delegate_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Delegate_OBJ;
	rt2_System_Delegate_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Delegate_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Delegate_METADATA_Name;
	rt2_System_Delegate_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Delegate_METADATA_FullName;
	memset(&rt2_System_DllNotFoundException_OBJ, 0, sizeof(rt2_System_DllNotFoundException));
	rt2_System_DllNotFoundException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_DllNotFoundException_OBJ;
	rt2_System_DllNotFoundException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_DllNotFoundException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_DllNotFoundException_METADATA_Name;
	rt2_System_DllNotFoundException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_DllNotFoundException_METADATA_FullName;
	memset(&rt2_System_Enum_OBJ, 0, sizeof(rt2_System_Enum));
	rt2_System_Enum_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Enum_OBJ;
	rt2_System_Enum_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Enum_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Enum_METADATA_Name;
	rt2_System_Enum_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Enum_METADATA_FullName;
	memset(&rt2_System_Environment_OBJ, 0, sizeof(rt2_System_Environment));
	rt2_System_Environment_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Environment_OBJ;
	rt2_System_Environment_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Environment_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Environment_METADATA_Name;
	rt2_System_Environment_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Environment_METADATA_FullName;
	memset(&rt2_System_EqualityComparer_OBJ, 0, sizeof(rt2_System_EqualityComparer));
	rt2_System_EqualityComparer_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_EqualityComparer_OBJ;
	rt2_System_EqualityComparer_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_EqualityComparer_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_EqualityComparer_METADATA_Name;
	rt2_System_EqualityComparer_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_EqualityComparer_METADATA_FullName;
	memset(&rt2_System_Exception_OBJ, 0, sizeof(rt2_System_Exception));
	rt2_System_Exception_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Exception_OBJ;
	rt2_System_Exception_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Exception_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Exception_METADATA_Name;
	rt2_System_Exception_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Exception_METADATA_FullName;
	memset(&rt2_System_FlagsAttribute_OBJ, 0, sizeof(rt2_System_FlagsAttribute));
	rt2_System_FlagsAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_FlagsAttribute_OBJ;
	rt2_System_FlagsAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt2_System_FlagsAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_FlagsAttribute_METADATA_Name;
	rt2_System_FlagsAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_FlagsAttribute_METADATA_FullName;
	memset(&rt2_System_GC_OBJ, 0, sizeof(rt2_System_GC));
	rt2_System_GC_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_GC_OBJ;
	rt2_System_GC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_GC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_GC_METADATA_Name;
	rt2_System_GC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_GC_METADATA_FullName;
	memset(&rt2_System_IndexOutOfRangeException_OBJ, 0, sizeof(rt2_System_IndexOutOfRangeException));
	rt2_System_IndexOutOfRangeException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_IndexOutOfRangeException_OBJ;
	rt2_System_IndexOutOfRangeException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_IndexOutOfRangeException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_IndexOutOfRangeException_METADATA_Name;
	rt2_System_IndexOutOfRangeException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_IndexOutOfRangeException_METADATA_FullName;
	memset(&rt2_System_InvalidCastException_OBJ, 0, sizeof(rt2_System_InvalidCastException));
	rt2_System_InvalidCastException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_InvalidCastException_OBJ;
	rt2_System_InvalidCastException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_InvalidCastException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_InvalidCastException_METADATA_Name;
	rt2_System_InvalidCastException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_InvalidCastException_METADATA_FullName;
	memset(&rt2_System_Double_OBJ, 0, sizeof(rt2_System_Double));
	rt2_System_Double_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Double_OBJ;
	rt2_System_Double_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Double_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Double_METADATA_Name;
	rt2_System_Double_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Double_METADATA_FullName;
	memset(&rt2_System_Math_OBJ, 0, sizeof(rt2_System_Math));
	rt2_System_Math_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Math_OBJ;
	rt2_System_Math_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Math_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Math_METADATA_Name;
	rt2_System_Math_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Math_METADATA_FullName;
	memset(&rt2_System_Single_OBJ, 0, sizeof(rt2_System_Single));
	rt2_System_Single_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Single_OBJ;
	rt2_System_Single_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Single_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Single_METADATA_Name;
	rt2_System_Single_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Single_METADATA_FullName;
	memset(&rt2_System_MathF_OBJ, 0, sizeof(rt2_System_MathF));
	rt2_System_MathF_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_MathF_OBJ;
	rt2_System_MathF_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_MathF_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_MathF_METADATA_Name;
	rt2_System_MathF_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_MathF_METADATA_FullName;
	memset(&rt2_System_MulticastDelegate_OBJ, 0, sizeof(rt2_System_MulticastDelegate));
	rt2_System_MulticastDelegate_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_MulticastDelegate_OBJ;
	rt2_System_MulticastDelegate_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Delegate_OBJ;
	rt2_System_MulticastDelegate_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_MulticastDelegate_METADATA_Name;
	rt2_System_MulticastDelegate_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_MulticastDelegate_METADATA_FullName;
	memset(&rt2_System_NotImplementedException_OBJ, 0, sizeof(rt2_System_NotImplementedException));
	rt2_System_NotImplementedException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_NotImplementedException_OBJ;
	rt2_System_NotImplementedException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_NotImplementedException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_NotImplementedException_METADATA_Name;
	rt2_System_NotImplementedException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_NotImplementedException_METADATA_FullName;
	memset(&rt2_System_NotSupportedException_OBJ, 0, sizeof(rt2_System_NotSupportedException));
	rt2_System_NotSupportedException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_NotSupportedException_OBJ;
	rt2_System_NotSupportedException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_NotSupportedException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_NotSupportedException_METADATA_Name;
	rt2_System_NotSupportedException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_NotSupportedException_METADATA_FullName;
	memset(&rt2_System_Int32_OBJ, 0, sizeof(rt2_System_Int32));
	rt2_System_Int32_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Int32_OBJ;
	rt2_System_Int32_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Int32_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Int32_METADATA_Name;
	rt2_System_Int32_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Int32_METADATA_FullName;
	memset(&rt2_System_Number_OBJ, 0, sizeof(rt2_System_Number));
	rt2_System_Number_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Number_OBJ;
	rt2_System_Number_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Number_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Number_METADATA_Name;
	rt2_System_Number_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Number_METADATA_FullName;
	memset(&rt2_System_Object_OBJ, 0, sizeof(rt2_System_Object));
	rt2_System_Object_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Object_OBJ;
	rt2_System_Object_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt2_System_Object_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Object_METADATA_Name;
	rt2_System_Object_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Object_METADATA_FullName;
	memset(&rt2_System_ObsoleteAttribute_OBJ, 0, sizeof(rt2_System_ObsoleteAttribute));
	rt2_System_ObsoleteAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_ObsoleteAttribute_OBJ;
	rt2_System_ObsoleteAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt2_System_ObsoleteAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_ObsoleteAttribute_METADATA_Name;
	rt2_System_ObsoleteAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_ObsoleteAttribute_METADATA_FullName;
	memset(&rt2_System_UInt32_OBJ, 0, sizeof(rt2_System_UInt32));
	rt2_System_UInt32_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_UInt32_OBJ;
	rt2_System_UInt32_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_UInt32_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_UInt32_METADATA_Name;
	rt2_System_UInt32_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_UInt32_METADATA_FullName;
	memset(&rt2_System_Random_OBJ, 0, sizeof(rt2_System_Random));
	rt2_System_Random_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Random_OBJ;
	rt2_System_Random_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Random_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Random_METADATA_Name;
	rt2_System_Random_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Random_METADATA_FullName;
	memset(&rt2_System_RuntimeType_OBJ, 0, sizeof(rt2_System_RuntimeType));
	rt2_System_RuntimeType_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_RuntimeType_OBJ;
	rt2_System_RuntimeType_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Type_OBJ;
	rt2_System_RuntimeType_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_RuntimeType_METADATA_Name;
	rt2_System_RuntimeType_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_RuntimeType_METADATA_FullName;
	memset(&rt2_System_Char_OBJ, 0, sizeof(rt2_System_Char));
	rt2_System_Char_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Char_OBJ;
	rt2_System_Char_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Char_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Char_METADATA_Name;
	rt2_System_Char_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Char_METADATA_FullName;
	memset(&rt2_System_String_OBJ, 0, sizeof(rt2_System_String));
	rt2_System_String_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_String_OBJ;
	rt2_System_String_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_String_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_String_METADATA_Name;
	rt2_System_String_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_String_METADATA_FullName;
	memset(&rt2_System_ThrowArgumentNullException_OBJ, 0, sizeof(rt2_System_ThrowArgumentNullException));
	rt2_System_ThrowArgumentNullException_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_ThrowArgumentNullException_OBJ;
	rt2_System_ThrowArgumentNullException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt2_System_ThrowArgumentNullException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_ThrowArgumentNullException_METADATA_Name;
	rt2_System_ThrowArgumentNullException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_ThrowArgumentNullException_METADATA_FullName;
	memset(&rt2_System_Type_OBJ, 0, sizeof(rt2_System_Type));
	rt2_System_Type_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Type_OBJ;
	rt2_System_Type_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_Type_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Type_METADATA_Name;
	rt2_System_Type_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Type_METADATA_FullName;
	memset(&rt2_System_ValueType_OBJ, 0, sizeof(rt2_System_ValueType));
	rt2_System_ValueType_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_ValueType_OBJ;
	rt2_System_ValueType_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_System_ValueType_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_ValueType_METADATA_Name;
	rt2_System_ValueType_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_ValueType_METADATA_FullName;
	memset(&rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_OBJ, 0, sizeof(rt4_System_Collections_ObjectModel_ReadOnlyCollectionType));
	rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_OBJ;
	rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_METADATA_Name;
	rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_METADATA_FullName;
	memset(&rt3_System_Diagnostics_Debug_OBJ, 0, sizeof(rt3_System_Diagnostics_Debug));
	rt3_System_Diagnostics_Debug_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Diagnostics_Debug_OBJ;
	rt3_System_Diagnostics_Debug_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_System_Diagnostics_Debug_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Diagnostics_Debug_METADATA_Name;
	rt3_System_Diagnostics_Debug_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Diagnostics_Debug_METADATA_FullName;
	memset(&rt3_System_IO_File_OBJ, 0, sizeof(rt3_System_IO_File));
	rt3_System_IO_File_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_File_OBJ;
	rt3_System_IO_File_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_System_IO_File_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_File_METADATA_Name;
	rt3_System_IO_File_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_File_METADATA_FullName;
	memset(&rt3_System_IO_FileNotFoundException_OBJ, 0, sizeof(rt3_System_IO_FileNotFoundException));
	rt3_System_IO_FileNotFoundException_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_FileNotFoundException_OBJ;
	rt3_System_IO_FileNotFoundException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt3_System_IO_FileNotFoundException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileNotFoundException_METADATA_Name;
	rt3_System_IO_FileNotFoundException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileNotFoundException_METADATA_FullName;
	memset(&rt3_System_IO_FileStream_OBJ, 0, sizeof(rt3_System_IO_FileStream));
	rt3_System_IO_FileStream_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_FileStream_OBJ;
	rt3_System_IO_FileStream_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt3_System_IO_Stream_OBJ;
	rt3_System_IO_FileStream_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileStream_METADATA_Name;
	rt3_System_IO_FileStream_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileStream_METADATA_FullName;
	memset(&rt3_System_IO_IOException_OBJ, 0, sizeof(rt3_System_IO_IOException));
	rt3_System_IO_IOException_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_IOException_OBJ;
	rt3_System_IO_IOException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt3_System_IO_IOException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_IOException_METADATA_Name;
	rt3_System_IO_IOException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_IOException_METADATA_FullName;
	memset(&rt3_System_IO_Path_OBJ, 0, sizeof(rt3_System_IO_Path));
	rt3_System_IO_Path_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_Path_OBJ;
	rt3_System_IO_Path_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_System_IO_Path_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_Path_METADATA_Name;
	rt3_System_IO_Path_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_Path_METADATA_FullName;
	memset(&rt3_System_IO_Stream_OBJ, 0, sizeof(rt3_System_IO_Stream));
	rt3_System_IO_Stream_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_Stream_OBJ;
	rt3_System_IO_Stream_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_System_IO_Stream_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_Stream_METADATA_Name;
	rt3_System_IO_Stream_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_Stream_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyCompanyAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyCompanyAttribute));
	rt3_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyCompanyAttribute_OBJ;
	rt3_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyCompanyAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyCompanyAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyConfigurationAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyConfigurationAttribute));
	rt3_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyConfigurationAttribute_OBJ;
	rt3_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyConfigurationAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyConfigurationAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyCopyrightAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyCopyrightAttribute));
	rt3_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyCopyrightAttribute_OBJ;
	rt3_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyCopyrightAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyCopyrightAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyCultureAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyCultureAttribute));
	rt3_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyCultureAttribute_OBJ;
	rt3_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyCultureAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyCultureAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyDelaySignAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyDelaySignAttribute));
	rt3_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyDelaySignAttribute_OBJ;
	rt3_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyDelaySignAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyDelaySignAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyDescriptionAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyDescriptionAttribute));
	rt3_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyDescriptionAttribute_OBJ;
	rt3_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyDescriptionAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyDescriptionAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyFileVersionAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyFileVersionAttribute));
	rt3_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyFileVersionAttribute_OBJ;
	rt3_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyFileVersionAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyFileVersionAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyInformationalVersionAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyInformationalVersionAttribute));
	rt3_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyInformationalVersionAttribute_OBJ;
	rt3_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyKeyFileAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyKeyFileAttribute));
	rt3_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyKeyFileAttribute_OBJ;
	rt3_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyKeyFileAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyKeyFileAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyProductAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyProductAttribute));
	rt3_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyProductAttribute_OBJ;
	rt3_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyProductAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyProductAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyTitleAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyTitleAttribute));
	rt3_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyTitleAttribute_OBJ;
	rt3_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyTitleAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyTitleAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyTrademarkAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyTrademarkAttribute));
	rt3_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyTrademarkAttribute_OBJ;
	rt3_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyTrademarkAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyTrademarkAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_AssemblyVersionAttribute_OBJ, 0, sizeof(rt3_System_Reflection_AssemblyVersionAttribute));
	rt3_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_AssemblyVersionAttribute_OBJ;
	rt3_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyVersionAttribute_METADATA_Name;
	rt3_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_AssemblyVersionAttribute_METADATA_FullName;
	memset(&rt3_System_Reflection_DefaultMemberAttribute_OBJ, 0, sizeof(rt3_System_Reflection_DefaultMemberAttribute));
	rt3_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_DefaultMemberAttribute_OBJ;
	rt3_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt3_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_DefaultMemberAttribute_METADATA_Name;
	rt3_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_DefaultMemberAttribute_METADATA_FullName;
	memset(&rt4_System_Runtime_CompilerServices_ExtensionAttribute_OBJ, 0, sizeof(rt4_System_Runtime_CompilerServices_ExtensionAttribute));
	rt4_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_CompilerServices_ExtensionAttribute_OBJ;
	rt4_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt4_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_Name;
	rt4_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_FullName;
	memset(&rt4_System_Runtime_CompilerServices_MethodImplOptions_OBJ, 0, sizeof(rt4_System_Runtime_CompilerServices_MethodImplOptions));
	rt4_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_CompilerServices_MethodImplOptions_OBJ;
	rt4_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt4_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplOptions_METADATA_Name;
	rt4_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplOptions_METADATA_FullName;
	memset(&rt4_System_Runtime_CompilerServices_MethodImplAttribute_OBJ, 0, sizeof(rt4_System_Runtime_CompilerServices_MethodImplAttribute));
	rt4_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_CompilerServices_MethodImplAttribute_OBJ;
	rt4_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt4_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_Name;
	rt4_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_FullName;
	memset(&rt4_System_Runtime_CompilerServices_RuntimeHelpers_OBJ, 0, sizeof(rt4_System_Runtime_CompilerServices_RuntimeHelpers));
	rt4_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_CompilerServices_RuntimeHelpers_OBJ;
	rt4_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt4_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_Name;
	rt4_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_CallingConvention_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_CallingConvention));
	rt4_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_CallingConvention_OBJ;
	rt4_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt4_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_CallingConvention_METADATA_Name;
	rt4_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_CallingConvention_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_DllImportAttribute_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_DllImportAttribute));
	rt4_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_DllImportAttribute_OBJ;
	rt4_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt4_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_DllImportAttribute_METADATA_Name;
	rt4_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_DllImportAttribute_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_Marshal_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_Marshal));
	rt4_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_Marshal_OBJ;
	rt4_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt4_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_Marshal_METADATA_Name;
	rt4_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_Marshal_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_OutAttribute_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_OutAttribute));
	rt4_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_OutAttribute_OBJ;
	rt4_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt4_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_OutAttribute_METADATA_Name;
	rt4_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_OutAttribute_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_LayoutKind_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_LayoutKind));
	rt4_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_LayoutKind_OBJ;
	rt4_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt4_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_LayoutKind_METADATA_Name;
	rt4_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_LayoutKind_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_StructLayoutAttribute_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_StructLayoutAttribute));
	rt4_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_StructLayoutAttribute_OBJ;
	rt4_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt4_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_Name;
	rt4_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute));
	rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_OBJ;
	rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_METADATA_Name;
	rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_METADATA_FullName;
	memset(&rt4_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ, 0, sizeof(rt4_System_Runtime_Versioning_TargetFrameworkAttribute));
	rt4_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ;
	rt4_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt4_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_Name;
	rt4_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_FullName;
	memset(&rt3_System_Text_Encoding_OBJ, 0, sizeof(rt3_System_Text_Encoding));
	rt3_System_Text_Encoding_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Text_Encoding_OBJ;
	rt3_System_Text_Encoding_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_System_Text_Encoding_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Text_Encoding_METADATA_Name;
	rt3_System_Text_Encoding_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Text_Encoding_METADATA_FullName;
	memset(&rt3_System_Text_StandardEncoding_OBJ, 0, sizeof(rt3_System_Text_StandardEncoding));
	rt3_System_Text_StandardEncoding_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Text_StandardEncoding_OBJ;
	rt3_System_Text_StandardEncoding_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt3_System_Text_Encoding_OBJ;
	rt3_System_Text_StandardEncoding_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Text_StandardEncoding_METADATA_Name;
	rt3_System_Text_StandardEncoding_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Text_StandardEncoding_METADATA_FullName;
	memset(&rt3_System_Text_StringBuilder_OBJ, 0, sizeof(rt3_System_Text_StringBuilder));
	rt3_System_Text_StringBuilder_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Text_StringBuilder_OBJ;
	rt3_System_Text_StringBuilder_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_System_Text_StringBuilder_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Text_StringBuilder_METADATA_Name;
	rt3_System_Text_StringBuilder_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Text_StringBuilder_METADATA_FullName;
	memset(&rt3_System_Threading_Thread_OBJ, 0, sizeof(rt3_System_Threading_Thread));
	rt3_System_Threading_Thread_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Threading_Thread_OBJ;
	rt3_System_Threading_Thread_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_System_Threading_Thread_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Threading_Thread_METADATA_Name;
	rt3_System_Threading_Thread_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Threading_Thread_METADATA_FullName;
	memset(&rt2_CS2X_NativeStringType_OBJ, 0, sizeof(rt2_CS2X_NativeStringType));
	rt2_CS2X_NativeStringType_OBJ.runtimeType.CS2X_RuntimeType = &rt2_CS2X_NativeStringType_OBJ;
	rt2_CS2X_NativeStringType_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt2_CS2X_NativeStringType_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_CS2X_NativeStringType_METADATA_Name;
	rt2_CS2X_NativeStringType_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_CS2X_NativeStringType_METADATA_FullName;
	memset(&rt2_CS2X_NativeStringParamAttribute_OBJ, 0, sizeof(rt2_CS2X_NativeStringParamAttribute));
	rt2_CS2X_NativeStringParamAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt2_CS2X_NativeStringParamAttribute_OBJ;
	rt2_CS2X_NativeStringParamAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Attribute_OBJ;
	rt2_CS2X_NativeStringParamAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_CS2X_NativeStringParamAttribute_METADATA_Name;
	rt2_CS2X_NativeStringParamAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_CS2X_NativeStringParamAttribute_METADATA_FullName;
	memset(&rt2_System_Byte_OBJ, 0, sizeof(rt2_System_Byte));
	rt2_System_Byte_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Byte_OBJ;
	rt2_System_Byte_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Byte_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Byte_METADATA_Name;
	rt2_System_Byte_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Byte_METADATA_FullName;
	memset(&rt2_System_DateTime_OBJ, 0, sizeof(rt2_System_DateTime));
	rt2_System_DateTime_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_DateTime_OBJ;
	rt2_System_DateTime_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_DateTime_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_DateTime_METADATA_Name;
	rt2_System_DateTime_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_DateTime_METADATA_FullName;
	memset(&rt2_System_Guid_OBJ, 0, sizeof(rt2_System_Guid));
	rt2_System_Guid_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Guid_OBJ;
	rt2_System_Guid_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Guid_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Guid_METADATA_Name;
	rt2_System_Guid_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Guid_METADATA_FullName;
	memset(&rt2_System_Int16_OBJ, 0, sizeof(rt2_System_Int16));
	rt2_System_Int16_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Int16_OBJ;
	rt2_System_Int16_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Int16_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Int16_METADATA_Name;
	rt2_System_Int16_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Int16_METADATA_FullName;
	memset(&rt2_System_Int64_OBJ, 0, sizeof(rt2_System_Int64));
	rt2_System_Int64_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_Int64_OBJ;
	rt2_System_Int64_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_Int64_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_Int64_METADATA_Name;
	rt2_System_Int64_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_Int64_METADATA_FullName;
	memset(&rt2_System_RuntimeTypeHandle_OBJ, 0, sizeof(rt2_System_RuntimeTypeHandle));
	rt2_System_RuntimeTypeHandle_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_RuntimeTypeHandle_OBJ;
	rt2_System_RuntimeTypeHandle_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_RuntimeTypeHandle_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_RuntimeTypeHandle_METADATA_Name;
	rt2_System_RuntimeTypeHandle_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_RuntimeTypeHandle_METADATA_FullName;
	memset(&rt2_System_SByte_OBJ, 0, sizeof(rt2_System_SByte));
	rt2_System_SByte_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_SByte_OBJ;
	rt2_System_SByte_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_SByte_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_SByte_METADATA_Name;
	rt2_System_SByte_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_SByte_METADATA_FullName;
	memset(&rt2_System_UInt16_OBJ, 0, sizeof(rt2_System_UInt16));
	rt2_System_UInt16_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_UInt16_OBJ;
	rt2_System_UInt16_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_UInt16_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_UInt16_METADATA_Name;
	rt2_System_UInt16_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_UInt16_METADATA_FullName;
	memset(&rt2_System_UInt64_OBJ, 0, sizeof(rt2_System_UInt64));
	rt2_System_UInt64_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_UInt64_OBJ;
	rt2_System_UInt64_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_UInt64_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_UInt64_METADATA_Name;
	rt2_System_UInt64_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_UInt64_METADATA_FullName;
	memset(&rt2_System_UIntPtr_OBJ, 0, sizeof(rt2_System_UIntPtr));
	rt2_System_UIntPtr_OBJ.runtimeType.CS2X_RuntimeType = &rt2_System_UIntPtr_OBJ;
	rt2_System_UIntPtr_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_System_UIntPtr_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_System_UIntPtr_METADATA_Name;
	rt2_System_UIntPtr_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_System_UIntPtr_METADATA_FullName;
	memset(&rt3_System_IO_FileAccess_OBJ, 0, sizeof(rt3_System_IO_FileAccess));
	rt3_System_IO_FileAccess_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_FileAccess_OBJ;
	rt3_System_IO_FileAccess_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt3_System_IO_FileAccess_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileAccess_METADATA_Name;
	rt3_System_IO_FileAccess_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileAccess_METADATA_FullName;
	memset(&rt3_System_IO_FileMode_OBJ, 0, sizeof(rt3_System_IO_FileMode));
	rt3_System_IO_FileMode_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_FileMode_OBJ;
	rt3_System_IO_FileMode_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt3_System_IO_FileMode_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileMode_METADATA_Name;
	rt3_System_IO_FileMode_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileMode_METADATA_FullName;
	memset(&rt3_System_IO_FileShare_OBJ, 0, sizeof(rt3_System_IO_FileShare));
	rt3_System_IO_FileShare_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_IO_FileShare_OBJ;
	rt3_System_IO_FileShare_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt3_System_IO_FileShare_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileShare_METADATA_Name;
	rt3_System_IO_FileShare_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_IO_FileShare_METADATA_FullName;
	memset(&rt3_System_Reflection_MethodImplAttributes_OBJ, 0, sizeof(rt3_System_Reflection_MethodImplAttributes));
	rt3_System_Reflection_MethodImplAttributes_OBJ.runtimeType.CS2X_RuntimeType = &rt3_System_Reflection_MethodImplAttributes_OBJ;
	rt3_System_Reflection_MethodImplAttributes_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt3_System_Reflection_MethodImplAttributes_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_MethodImplAttributes_METADATA_Name;
	rt3_System_Reflection_MethodImplAttributes_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_System_Reflection_MethodImplAttributes_METADATA_FullName;
	memset(&rt4_System_Runtime_InteropServices_UnmanagedType_OBJ, 0, sizeof(rt4_System_Runtime_InteropServices_UnmanagedType));
	rt4_System_Runtime_InteropServices_UnmanagedType_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Runtime_InteropServices_UnmanagedType_OBJ;
	rt4_System_Runtime_InteropServices_UnmanagedType_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt4_System_Runtime_InteropServices_UnmanagedType_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedType_METADATA_Name;
	rt4_System_Runtime_InteropServices_UnmanagedType_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedType_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt2_System_Activator_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Activator_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ArgumentException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ArgumentException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ArgumentOutOfRangeException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ArgumentOutOfRangeException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Array_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Array_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Attribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Attribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Boolean_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Boolean_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_AttributeTargets_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_AttributeTargets_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_AttributeUsageAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_AttributeUsageAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_BitConverter_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_BitConverter_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Buffer_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Buffer_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Console_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Console_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_IntPtr_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_IntPtr_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Delegate_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Delegate_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_DllNotFoundException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_DllNotFoundException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Enum_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Enum_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Environment_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Environment_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_EqualityComparer_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_EqualityComparer_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Exception_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Exception_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_FlagsAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_FlagsAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_GC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_GC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_IndexOutOfRangeException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_IndexOutOfRangeException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_InvalidCastException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_InvalidCastException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Double_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Double_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Math_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Math_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Single_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Single_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_MathF_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_MathF_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_MulticastDelegate_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_MulticastDelegate_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_NotImplementedException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_NotImplementedException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_NotSupportedException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_NotSupportedException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Int32_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Int32_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Number_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Number_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Object_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Object_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ObsoleteAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ObsoleteAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UInt32_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UInt32_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Random_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Random_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_RuntimeType_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_RuntimeType_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Char_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Char_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_String_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_String_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ThrowArgumentNullException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ThrowArgumentNullException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Type_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Type_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ValueType_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_ValueType_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Collections_ObjectModel_ReadOnlyCollectionType_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Diagnostics_Debug_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Diagnostics_Debug_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_File_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_File_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileNotFoundException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileNotFoundException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileStream_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileStream_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_IOException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_IOException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_Path_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_Path_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_Stream_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_Stream_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyCompanyAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyCompanyAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyConfigurationAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyConfigurationAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyCopyrightAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyCopyrightAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyCultureAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyCultureAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyDelaySignAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyDelaySignAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyDescriptionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyDescriptionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyFileVersionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyFileVersionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyKeyFileAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyKeyFileAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyProductAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyProductAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyTitleAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyTitleAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyTrademarkAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyTrademarkAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyVersionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_AssemblyVersionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_DefaultMemberAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_DefaultMemberAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplOptions_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplOptions_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_CallingConvention_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_CallingConvention_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_DllImportAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_DllImportAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_Marshal_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_Marshal_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_OutAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_OutAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_LayoutKind_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_LayoutKind_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedFunctionPointerAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Text_Encoding_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Text_Encoding_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Text_StandardEncoding_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Text_StandardEncoding_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Text_StringBuilder_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Text_StringBuilder_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Threading_Thread_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Threading_Thread_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_CS2X_NativeStringType_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_CS2X_NativeStringType_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_CS2X_NativeStringParamAttribute_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_CS2X_NativeStringParamAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Byte_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Byte_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_DateTime_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_DateTime_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Guid_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Guid_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Int16_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Int16_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Int64_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_Int64_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_RuntimeTypeHandle_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_RuntimeTypeHandle_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_SByte_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_SByte_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UInt16_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UInt16_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UInt64_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UInt64_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UIntPtr_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_System_UIntPtr_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileAccess_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileAccess_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileMode_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileMode_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileShare_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_IO_FileShare_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_MethodImplAttributes_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_System_Reflection_MethodImplAttributes_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedType_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Runtime_InteropServices_UnmanagedType_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;

	/* Init runtime type vtabel */
	rt2_System_ArgumentException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_ArgumentOutOfRangeException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_DllNotFoundException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_Exception_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_IndexOutOfRangeException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_InvalidCastException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_NotImplementedException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_NotSupportedException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt2_System_ThrowArgumentNullException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt3_System_IO_FileNotFoundException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt3_System_IO_FileStream_OBJ.vTable_get_Length_0 = &m3_System_IO_FileStream_get_Length_0;
	rt3_System_IO_FileStream_OBJ.vTable_get_Position_0 = &m3_System_IO_FileStream_get_Position_0;
	rt3_System_IO_FileStream_OBJ.vTable_set_Position_0 = &m3_System_IO_FileStream_set_Position_0;
	rt3_System_IO_FileStream_OBJ.vTable_Dispose_0 = &m3_System_IO_FileStream_Dispose_0;
	rt3_System_IO_FileStream_OBJ.vTable_Read_0 = &m3_System_IO_FileStream_Read_0;
	rt3_System_IO_FileStream_OBJ.vTable_Read_1 = &m3_System_IO_FileStream_Read_1;
	rt3_System_IO_FileStream_OBJ.vTable_ReadByte_0 = &m3_System_IO_Stream_ReadByte_0;
	rt3_System_IO_FileStream_OBJ.vTable_Write_0 = &m3_System_IO_FileStream_Write_0;
	rt3_System_IO_FileStream_OBJ.vTable_Write_1 = &m3_System_IO_FileStream_Write_1;
	rt3_System_IO_FileStream_OBJ.vTable_WriteByte_0 = &m3_System_IO_Stream_WriteByte_0;
	rt3_System_IO_IOException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt3_System_IO_Stream_OBJ.vTable_get_Length_0 = 0;
	rt3_System_IO_Stream_OBJ.vTable_get_Position_0 = 0;
	rt3_System_IO_Stream_OBJ.vTable_set_Position_0 = 0;
	rt3_System_IO_Stream_OBJ.vTable_Dispose_0 = 0;
	rt3_System_IO_Stream_OBJ.vTable_Read_0 = 0;
	rt3_System_IO_Stream_OBJ.vTable_Read_1 = 0;
	rt3_System_IO_Stream_OBJ.vTable_ReadByte_0 = &m3_System_IO_Stream_ReadByte_0;
	rt3_System_IO_Stream_OBJ.vTable_Write_0 = 0;
	rt3_System_IO_Stream_OBJ.vTable_Write_1 = 0;
	rt3_System_IO_Stream_OBJ.vTable_WriteByte_0 = &m3_System_IO_Stream_WriteByte_0;

	/* <<< === Array Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt0_System_Byte___ARRAY_OBJ, 0, sizeof(rt0_System_Byte___ARRAY));
	rt0_System_Byte___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Byte___ARRAY_OBJ;
	rt0_System_Byte___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_Byte___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Byte___ARRAY_METADATA_Name;
	rt0_System_Byte___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Byte___ARRAY_METADATA_FullName;
	memset(&rt0_System_Char___ARRAY_OBJ, 0, sizeof(rt0_System_Char___ARRAY));
	rt0_System_Char___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Char___ARRAY_OBJ;
	rt0_System_Char___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_Char___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Char___ARRAY_METADATA_Name;
	rt0_System_Char___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Char___ARRAY_METADATA_FullName;
	memset(&rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ, 0, sizeof(rt0_RayTraceBenchmark_Sphere___ARRAY));
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ;
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_Name;
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_FullName;
	memset(&rt0_RayTraceBenchmark_Light___ARRAY_OBJ, 0, sizeof(rt0_RayTraceBenchmark_Light___ARRAY));
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_RayTraceBenchmark_Light___ARRAY_OBJ;
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_Name;
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_FullName;
	memset(&rt0_System_Int32___ARRAY_OBJ, 0, sizeof(rt0_System_Int32___ARRAY));
	rt0_System_Int32___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Int32___ARRAY_OBJ;
	rt0_System_Int32___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_Int32___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Int32___ARRAY_METADATA_Name;
	rt0_System_Int32___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Int32___ARRAY_METADATA_FullName;
	memset(&rt0_System_String___ARRAY_OBJ, 0, sizeof(rt0_System_String___ARRAY));
	rt0_System_String___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_String___ARRAY_OBJ;
	rt0_System_String___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_String___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_String___ARRAY_METADATA_Name;
	rt0_System_String___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_String___ARRAY_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt0_System_Byte___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Byte___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Char___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Char___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Int32___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Int32___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_String___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_String___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;

	/* Init array runtime type element size */
	rt0_System_Byte___ARRAY_OBJ.elementSize = sizeof(uint8_t);
	rt0_System_Char___ARRAY_OBJ.elementSize = sizeof(char16_t);
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.elementSize = sizeof(t2_RayTraceBenchmark_Sphere*);
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.elementSize = sizeof(t2_RayTraceBenchmark_Light*);
	rt0_System_Int32___ARRAY_OBJ.elementSize = sizeof(int32_t);
	rt0_System_String___ARRAY_OBJ.elementSize = sizeof(t2_System_String*);

	/* <<< === Pointer Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt0_System_Byte__PTR_OBJ, 0, sizeof(rt0_System_Byte__PTR));
	rt0_System_Byte__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Byte__PTR_OBJ;
	rt0_System_Byte__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt0_System_Byte__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Byte__PTR_METADATA_Name;
	rt0_System_Byte__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Byte__PTR_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt0_System_Byte__PTR_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Byte__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
}

void CS2X_InitDllImport_CS2X_CoreLib()
{
	/* Init this project */
}

char CS2X_InvokeStaticConstructors_CS2X_CoreLib_IsInit = 0;
void CS2X_InvokeStaticConstructors_CS2X_CoreLib()
{
	if (CS2X_InvokeStaticConstructors_CS2X_CoreLib_IsInit) return;
	CS2X_InvokeStaticConstructors_CS2X_CoreLib_IsInit = 1;
	/* Init this project */
	m2_System_String__cctor_0();
	m3_System_Text_Encoding__cctor_0();
	m2_System_Guid__cctor_0();
	m2_uintptr_t__cctor_0();
}
/* =============================== */
/* Init Runtime 'RayTraceBenchmark' */
/* =============================== */
void CS2X_InitAssembly_RayTraceBenchmark()
{
	/* Init references */
	CS2X_InitAssembly_CS2X_CoreLib();

	/* Init runtime type objects */
	memset(&rt2_RayTraceBenchmark_Vec3_OBJ, 0, sizeof(rt2_RayTraceBenchmark_Vec3));
	rt2_RayTraceBenchmark_Vec3_OBJ.runtimeType.CS2X_RuntimeType = &rt2_RayTraceBenchmark_Vec3_OBJ;
	rt2_RayTraceBenchmark_Vec3_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_RayTraceBenchmark_Vec3_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Vec3_METADATA_Name;
	rt2_RayTraceBenchmark_Vec3_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Vec3_METADATA_FullName;
	memset(&rt2_RayTraceBenchmark_Sphere_OBJ, 0, sizeof(rt2_RayTraceBenchmark_Sphere));
	rt2_RayTraceBenchmark_Sphere_OBJ.runtimeType.CS2X_RuntimeType = &rt2_RayTraceBenchmark_Sphere_OBJ;
	rt2_RayTraceBenchmark_Sphere_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_RayTraceBenchmark_Sphere_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Sphere_METADATA_Name;
	rt2_RayTraceBenchmark_Sphere_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Sphere_METADATA_FullName;
	memset(&rt2_RayTraceBenchmark_Light_OBJ, 0, sizeof(rt2_RayTraceBenchmark_Light));
	rt2_RayTraceBenchmark_Light_OBJ.runtimeType.CS2X_RuntimeType = &rt2_RayTraceBenchmark_Light_OBJ;
	rt2_RayTraceBenchmark_Light_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_RayTraceBenchmark_Light_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Light_METADATA_Name;
	rt2_RayTraceBenchmark_Light_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Light_METADATA_FullName;
	memset(&rt2_RayTraceBenchmark_Scene_OBJ, 0, sizeof(rt2_RayTraceBenchmark_Scene));
	rt2_RayTraceBenchmark_Scene_OBJ.runtimeType.CS2X_RuntimeType = &rt2_RayTraceBenchmark_Scene_OBJ;
	rt2_RayTraceBenchmark_Scene_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_RayTraceBenchmark_Scene_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Scene_METADATA_Name;
	rt2_RayTraceBenchmark_Scene_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Scene_METADATA_FullName;
	memset(&rt2_RayTraceBenchmark_Benchmark_OBJ, 0, sizeof(rt2_RayTraceBenchmark_Benchmark));
	rt2_RayTraceBenchmark_Benchmark_OBJ.runtimeType.CS2X_RuntimeType = &rt2_RayTraceBenchmark_Benchmark_OBJ;
	rt2_RayTraceBenchmark_Benchmark_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_RayTraceBenchmark_Benchmark_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Benchmark_METADATA_Name;
	rt2_RayTraceBenchmark_Benchmark_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Benchmark_METADATA_FullName;
	memset(&rt2_RayTraceBenchmark_BenchmarkMain_OBJ, 0, sizeof(rt2_RayTraceBenchmark_BenchmarkMain));
	rt2_RayTraceBenchmark_BenchmarkMain_OBJ.runtimeType.CS2X_RuntimeType = &rt2_RayTraceBenchmark_BenchmarkMain_OBJ;
	rt2_RayTraceBenchmark_BenchmarkMain_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_RayTraceBenchmark_BenchmarkMain_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_BenchmarkMain_METADATA_Name;
	rt2_RayTraceBenchmark_BenchmarkMain_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_BenchmarkMain_METADATA_FullName;
	memset(&rt2_RayTraceBenchmark_Ray_OBJ, 0, sizeof(rt2_RayTraceBenchmark_Ray));
	rt2_RayTraceBenchmark_Ray_OBJ.runtimeType.CS2X_RuntimeType = &rt2_RayTraceBenchmark_Ray_OBJ;
	rt2_RayTraceBenchmark_Ray_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt2_RayTraceBenchmark_Ray_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Ray_METADATA_Name;
	rt2_RayTraceBenchmark_Ray_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_RayTraceBenchmark_Ray_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt2_RayTraceBenchmark_Vec3_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Vec3_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Sphere_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Sphere_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Light_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Light_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Scene_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Scene_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Benchmark_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Benchmark_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_BenchmarkMain_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_BenchmarkMain_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Ray_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_RayTraceBenchmark_Ray_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;

	/* <<< === Array Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt0_System_Byte___ARRAY_OBJ, 0, sizeof(rt0_System_Byte___ARRAY));
	rt0_System_Byte___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Byte___ARRAY_OBJ;
	rt0_System_Byte___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_Byte___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Byte___ARRAY_METADATA_Name;
	rt0_System_Byte___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Byte___ARRAY_METADATA_FullName;
	memset(&rt0_System_Char___ARRAY_OBJ, 0, sizeof(rt0_System_Char___ARRAY));
	rt0_System_Char___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Char___ARRAY_OBJ;
	rt0_System_Char___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_Char___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Char___ARRAY_METADATA_Name;
	rt0_System_Char___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Char___ARRAY_METADATA_FullName;
	memset(&rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ, 0, sizeof(rt0_RayTraceBenchmark_Sphere___ARRAY));
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ;
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_Name;
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_FullName;
	memset(&rt0_RayTraceBenchmark_Light___ARRAY_OBJ, 0, sizeof(rt0_RayTraceBenchmark_Light___ARRAY));
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_RayTraceBenchmark_Light___ARRAY_OBJ;
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_Name;
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_FullName;
	memset(&rt0_System_Int32___ARRAY_OBJ, 0, sizeof(rt0_System_Int32___ARRAY));
	rt0_System_Int32___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Int32___ARRAY_OBJ;
	rt0_System_Int32___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_Int32___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Int32___ARRAY_METADATA_Name;
	rt0_System_Int32___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Int32___ARRAY_METADATA_FullName;
	memset(&rt0_System_String___ARRAY_OBJ, 0, sizeof(rt0_System_String___ARRAY));
	rt0_System_String___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_String___ARRAY_OBJ;
	rt0_System_String___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Array_OBJ;
	rt0_System_String___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_String___ARRAY_METADATA_Name;
	rt0_System_String___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_String___ARRAY_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt0_System_Byte___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Byte___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Char___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Char___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Sphere___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_RayTraceBenchmark_Light___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Int32___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Int32___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_String___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_String___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;

	/* Init array runtime type element size */
	rt0_System_Byte___ARRAY_OBJ.elementSize = sizeof(uint8_t);
	rt0_System_Char___ARRAY_OBJ.elementSize = sizeof(char16_t);
	rt0_RayTraceBenchmark_Sphere___ARRAY_OBJ.elementSize = sizeof(t2_RayTraceBenchmark_Sphere*);
	rt0_RayTraceBenchmark_Light___ARRAY_OBJ.elementSize = sizeof(t2_RayTraceBenchmark_Light*);
	rt0_System_Int32___ARRAY_OBJ.elementSize = sizeof(int32_t);
	rt0_System_String___ARRAY_OBJ.elementSize = sizeof(t2_System_String*);

	/* <<< === Pointer Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt0_System_Byte__PTR_OBJ, 0, sizeof(rt0_System_Byte__PTR));
	rt0_System_Byte__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt0_System_Byte__PTR_OBJ;
	rt0_System_Byte__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt0_System_Byte__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt0_System_Byte__PTR_METADATA_Name;
	rt0_System_Byte__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt0_System_Byte__PTR_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt0_System_Byte__PTR_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Byte__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
}

void CS2X_InitDllImport_RayTraceBenchmark()
{
	/* Init references */
	CS2X_InitDllImport_CS2X_CoreLib();

	/* Init this project */
}

char CS2X_InvokeStaticConstructors_RayTraceBenchmark_IsInit = 0;
void CS2X_InvokeStaticConstructors_RayTraceBenchmark()
{
	if (CS2X_InvokeStaticConstructors_RayTraceBenchmark_IsInit) return;
	CS2X_InvokeStaticConstructors_RayTraceBenchmark_IsInit = 1;
	/* Init references */
	CS2X_InvokeStaticConstructors_CS2X_CoreLib();

	/* Init this project */
	m2_RayTraceBenchmark_Vec3__cctor_0();
}

void CS2X_InitStringLiterals()
{
	((t2_System_String*)StringLiteral_0)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_1)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_2)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_3)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_4)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_5)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_6)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_7)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_8)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_9)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_10)->CS2X_RuntimeType = &rt2_System_String_OBJ;
}

/* =============================== */
/* Entry Point */
/* =============================== */
int main(int argc, char** argv)
{
	int i;

	/* Init main thread unahandled exeption jump */
	jmp_buf CS2X_UnhandledThreadExceptionBuff;
	int result = setjmp(CS2X_UnhandledThreadExceptionBuff);
	if (result != 0)
	{
		t2_System_Exception* exception = (t2_System_Exception*)CS2X_ThreadExceptionObject;
		CS2X_DisplayErrorMessageW(&exception->f__Message_k__BackingField_1->f__firstChar_1, L"Unhandled Exception");
		exit(-2);
	}
	else
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_UnhandledThreadExceptionBuff, sizeof(jmp_buf));
	}

	/* Init main thread unahandled exeption jump */
	CS2X_GC_Init();
	CS2X_InitAssembly_RayTraceBenchmark();
	CS2X_InitStringLiterals();
	CS2X_InitDllImport_RayTraceBenchmark();
	CS2X_InvokeStaticConstructors_RayTraceBenchmark();
	t2_System_String** managedArgs = CS2X_AllocArrayTypeAtomic(sizeof(t2_System_String), argc, &rt0_System_String___ARRAY_OBJ);
	for (i = 0; i != argc; ++i)
	{
		int i2, managedArgLength;
		t2_System_String** managedArgsRuntimeOffset;
		managedArgsRuntimeOffset = ((char*)managedArgs) + ArrayOffset;
		managedArgLength = strlen(argv[i]);
		managedArgsRuntimeOffset[i] = m2_System_String_FastAllocateString_0(managedArgLength);
		for (i2 = 0; i2 != managedArgLength; ++i2) (&managedArgsRuntimeOffset[i]->f__firstChar_1)[i2] = (char16_t)argv[i][i2];
	}
	m2_RayTraceBenchmark_BenchmarkMain_Main_0(managedArgs);
	return 0;
}
