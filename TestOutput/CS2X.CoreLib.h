/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#pragma once
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <uchar.h>
#include <locale.h>
#include <time.h>
#include "..\CS2X.Native\CS2X.GC.Boehm.h"
#include "..\CS2X.Native\CS2X.InstructionHelpers.h"
#include "_StringLiterals.h"

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t_System_Activator t_System_Activator;
typedef struct t_System_Array t_System_Array;
typedef struct t_System_Attribute t_System_Attribute;
typedef int32_t t_System_AttributeTargets;
typedef struct t_System_AttributeUsageAttribute t_System_AttributeUsageAttribute;
typedef struct t_System_BitConverter t_System_BitConverter;
typedef struct t_System_Buffer t_System_Buffer;
typedef struct t_System_Console t_System_Console;
typedef struct t_System_Delegate t_System_Delegate;
typedef struct t_System_DllNotFoundException t_System_DllNotFoundException;
typedef struct t_System_Enum t_System_Enum;
typedef struct t_System_Environment t_System_Environment;
typedef struct t_System_Exception t_System_Exception;
typedef struct t_System_FlagsAttribute t_System_FlagsAttribute;
typedef struct t_System_GC t_System_GC;
typedef struct t_System_IndexOutOfRangeException t_System_IndexOutOfRangeException;
typedef struct t_System_InvalidCastException t_System_InvalidCastException;
typedef struct t_System_Math t_System_Math;
typedef struct t_System_MathF t_System_MathF;
typedef struct t_System_MulticastDelegate t_System_MulticastDelegate;
typedef struct t_System_NotSupportedException t_System_NotSupportedException;
typedef struct t_System_Number t_System_Number;
typedef struct t_System_Object t_System_Object;
typedef struct t_System_ObsoleteAttribute t_System_ObsoleteAttribute;
typedef struct t_System_RuntimeType t_System_RuntimeType;
typedef struct t_System_String t_System_String;
typedef struct t_System_Type t_System_Type;
typedef struct t_System_ValueType t_System_ValueType;
typedef struct t_System_Reflection_AssemblyCompanyAttribute t_System_Reflection_AssemblyCompanyAttribute;
typedef struct t_System_Reflection_AssemblyConfigurationAttribute t_System_Reflection_AssemblyConfigurationAttribute;
typedef struct t_System_Reflection_AssemblyCopyrightAttribute t_System_Reflection_AssemblyCopyrightAttribute;
typedef struct t_System_Reflection_AssemblyCultureAttribute t_System_Reflection_AssemblyCultureAttribute;
typedef struct t_System_Reflection_AssemblyDelaySignAttribute t_System_Reflection_AssemblyDelaySignAttribute;
typedef struct t_System_Reflection_AssemblyDescriptionAttribute t_System_Reflection_AssemblyDescriptionAttribute;
typedef struct t_System_Reflection_AssemblyFileVersionAttribute t_System_Reflection_AssemblyFileVersionAttribute;
typedef struct t_System_Reflection_AssemblyInformationalVersionAttribute t_System_Reflection_AssemblyInformationalVersionAttribute;
typedef struct t_System_Reflection_AssemblyKeyFileAttribute t_System_Reflection_AssemblyKeyFileAttribute;
typedef struct t_System_Reflection_AssemblyProductAttribute t_System_Reflection_AssemblyProductAttribute;
typedef struct t_System_Reflection_AssemblyTitleAttribute t_System_Reflection_AssemblyTitleAttribute;
typedef struct t_System_Reflection_AssemblyTrademarkAttribute t_System_Reflection_AssemblyTrademarkAttribute;
typedef struct t_System_Reflection_AssemblyVersionAttribute t_System_Reflection_AssemblyVersionAttribute;
typedef struct t_System_Reflection_DefaultMemberAttribute t_System_Reflection_DefaultMemberAttribute;
typedef struct t_System_Runtime_CompilerServices_ExtensionAttribute t_System_Runtime_CompilerServices_ExtensionAttribute;
typedef int32_t t_System_Runtime_CompilerServices_MethodImplOptions;
typedef struct t_System_Runtime_CompilerServices_MethodImplAttribute t_System_Runtime_CompilerServices_MethodImplAttribute;
typedef struct t_System_Runtime_CompilerServices_RuntimeHelpers t_System_Runtime_CompilerServices_RuntimeHelpers;
typedef int32_t t_System_Runtime_InteropServices_CallingConvention;
typedef struct t_System_Runtime_InteropServices_DllImportAttribute t_System_Runtime_InteropServices_DllImportAttribute;
typedef struct t_System_Runtime_InteropServices_Marshal t_System_Runtime_InteropServices_Marshal;
typedef struct t_System_Runtime_InteropServices_OutAttribute t_System_Runtime_InteropServices_OutAttribute;
typedef int32_t t_System_Runtime_InteropServices_LayoutKind;
typedef struct t_System_Runtime_InteropServices_StructLayoutAttribute t_System_Runtime_InteropServices_StructLayoutAttribute;
typedef struct t_System_Runtime_Versioning_TargetFrameworkAttribute t_System_Runtime_Versioning_TargetFrameworkAttribute;
typedef struct t_System_Text_Encoding t_System_Text_Encoding;
typedef struct t_System_Text_StandardEncoding t_System_Text_StandardEncoding;
typedef struct t_System_Text_StringBuilder t_System_Text_StringBuilder;
typedef struct t_System_DateTime t_System_DateTime;
typedef struct t_System_RuntimeTypeHandle t_System_RuntimeTypeHandle;
typedef int32_t t_System_Reflection_MethodImplAttributes;

/* =============================== */
/* Type definitions */
/* =============================== */
struct t_System_Activator
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Array
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Attribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
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

struct t_System_AttributeUsageAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_AttributeTargets f__attributeTarget_2;
	char f__AllowMultiple_k__BackingField_2;
	char f__Inherited_k__BackingField_2;
};

struct t_System_BitConverter
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Buffer
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Console
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Delegate
{
	t_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t_System_Object* f__target_1;
};

struct t_System_DllNotFoundException
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__Message_k__BackingField_1;
};

struct t_System_Enum
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Environment
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Exception
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__Message_k__BackingField_1;
};

struct t_System_FlagsAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_GC
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_IndexOutOfRangeException
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__Message_k__BackingField_1;
};

struct t_System_InvalidCastException
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__Message_k__BackingField_1;
};

struct t_System_Math
{
	t_System_RuntimeType* CS2X_RuntimeType;
};
double f_System_Math_E;
double f_System_Math_PI;

struct t_System_MathF
{
	t_System_RuntimeType* CS2X_RuntimeType;
};
float f_System_MathF_E;
float f_System_MathF_PI;

struct t_System_MulticastDelegate
{
	t_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t_System_Object* f__target_1;
	t_System_MulticastDelegate* f__next_2;
};

struct t_System_NotSupportedException
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__Message_k__BackingField_1;
};

struct t_System_Number
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Object
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_ObsoleteAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	char f__error_2;
	t_System_String* f__message_2;
};

struct t_System_RuntimeType
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_Type* f__BaseType_k__BackingField_1;
	t_System_String* f__Name_k__BackingField_1;
	t_System_String* f__FullName_k__BackingField_1;
};

struct t_System_String
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__stringLength_1;
	char16_t f__firstChar_1;
};
t_System_String* f_System_String_Empty;

struct t_System_Type
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_Type* f__BaseType_k__BackingField_1;
	t_System_String* f__Name_k__BackingField_1;
	t_System_String* f__FullName_k__BackingField_1;
};

struct t_System_ValueType
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Reflection_AssemblyCompanyAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__company_2;
};

struct t_System_Reflection_AssemblyConfigurationAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__configuration_2;
};

struct t_System_Reflection_AssemblyCopyrightAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__copyright_2;
};

struct t_System_Reflection_AssemblyCultureAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__culture_2;
};

struct t_System_Reflection_AssemblyDelaySignAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	char f__delaySign_2;
};

struct t_System_Reflection_AssemblyDescriptionAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__description_2;
};

struct t_System_Reflection_AssemblyFileVersionAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__version_2;
};

struct t_System_Reflection_AssemblyInformationalVersionAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__informationalVersion_2;
};

struct t_System_Reflection_AssemblyKeyFileAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__keyFile_2;
};

struct t_System_Reflection_AssemblyProductAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__product_2;
};

struct t_System_Reflection_AssemblyTitleAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__title_2;
};

struct t_System_Reflection_AssemblyTrademarkAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__trademark_2;
};

struct t_System_Reflection_AssemblyVersionAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__version_2;
};

struct t_System_Reflection_DefaultMemberAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__memberName_2;
};

struct t_System_Runtime_CompilerServices_ExtensionAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
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

struct t_System_Runtime_CompilerServices_MethodImplAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_Runtime_CompilerServices_MethodImplOptions f__Value_k__BackingField_2;
};

struct t_System_Runtime_CompilerServices_RuntimeHelpers
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

#define f_System_Runtime_InteropServices_CallingConvention_Cdecl 2
#define f_System_Runtime_InteropServices_CallingConvention_StdCall 3
#define f_System_Runtime_InteropServices_CallingConvention_ThisCall 4
#define f_System_Runtime_InteropServices_CallingConvention_FastCall 5

struct t_System_Runtime_InteropServices_DllImportAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__Value_k__BackingField_2;
	t_System_String* f_EntryPoint_2;
	t_System_Runtime_InteropServices_CallingConvention f_CallingConvention_2;
};

struct t_System_Runtime_InteropServices_Marshal
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Runtime_InteropServices_OutAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

#define f_System_Runtime_InteropServices_LayoutKind_Sequential 0
#define f_System_Runtime_InteropServices_LayoutKind_Explicit 2
#define f_System_Runtime_InteropServices_LayoutKind_Auto 3

struct t_System_Runtime_InteropServices_StructLayoutAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_Runtime_InteropServices_LayoutKind f__Value_k__BackingField_2;
	int32_t f_Pack_2;
	int32_t f_Size_2;
};

struct t_System_Runtime_Versioning_TargetFrameworkAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__FrameworkDisplayName_k__BackingField_2;
	t_System_String* f__FrameworkName_k__BackingField_2;
};

struct t_System_Text_Encoding
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__CodePage_k__BackingField_1;
};
t_System_Text_Encoding* f_System_Text_Encoding__Default_k__BackingField;
t_System_Text_Encoding* f_System_Text_Encoding__ASCII_k__BackingField;
t_System_Text_Encoding* f_System_Text_Encoding__UTF7_k__BackingField;
t_System_Text_Encoding* f_System_Text_Encoding__UTF8_k__BackingField;
t_System_Text_Encoding* f_System_Text_Encoding__Unicode_k__BackingField;
t_System_Text_Encoding* f_System_Text_Encoding__BigEndianUnicode_k__BackingField;
t_System_Text_Encoding* f_System_Text_Encoding__UTF32_k__BackingField;

struct t_System_Text_StandardEncoding
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__CodePage_k__BackingField_1;
};

struct t_System_Text_StringBuilder
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__stringLength_1;
	char16_t f__firstChar_1;
};

struct t_System_DateTime
{
	time_t f__internalDate_2;
};

struct t_System_RuntimeTypeHandle
{
	t_System_RuntimeType* f_m_type_2;
};

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
/* Runtime Types */
/* =============================== */
typedef struct rt_System_Activator
{
	t_System_RuntimeType runtimeType;
} rt_System_Activator;
rt_System_Activator rt_System_Activator_OBJ;
int8_t rt_System_Activator_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,65,0,99,0,116,0,105,0,118,0,97,0,116,0,111,0,114,0,0,0}; /* Activator */
int8_t rt_System_Activator_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,99,0,116,0,105,0,118,0,97,0,116,0,111,0,114,0,0,0}; /* System.Activator */

typedef struct rt_System_Array
{
	t_System_RuntimeType runtimeType;
} rt_System_Array;
rt_System_Array rt_System_Array_OBJ;
int8_t rt_System_Array_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,65,0,114,0,114,0,97,0,121,0,0,0}; /* Array */
int8_t rt_System_Array_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,114,0,114,0,97,0,121,0,0,0}; /* System.Array */

typedef struct rt_System_Attribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Attribute;
rt_System_Attribute rt_System_Attribute_OBJ;
int8_t rt_System_Attribute_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* Attribute */
int8_t rt_System_Attribute_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Attribute */

typedef struct rt_System_Boolean
{
	t_System_RuntimeType runtimeType;
} rt_System_Boolean;
rt_System_Boolean rt_System_Boolean_OBJ;
int8_t rt_System_Boolean_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,0,0}; /* Boolean */
int8_t rt_System_Boolean_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,0,0}; /* System.Boolean */

typedef struct rt_System_AttributeTargets
{
	t_System_RuntimeType runtimeType;
} rt_System_AttributeTargets;
rt_System_AttributeTargets rt_System_AttributeTargets_OBJ;
int8_t rt_System_AttributeTargets_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,84,0,97,0,114,0,103,0,101,0,116,0,115,0,0,0}; /* AttributeTargets */
int8_t rt_System_AttributeTargets_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,84,0,97,0,114,0,103,0,101,0,116,0,115,0,0,0}; /* System.AttributeTargets */

typedef struct rt_System_AttributeUsageAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_AttributeUsageAttribute;
rt_System_AttributeUsageAttribute rt_System_AttributeUsageAttribute_OBJ;
int8_t rt_System_AttributeUsageAttribute_METADATA_Name[60] = {0,0,0,0,0,0,0,0,23,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,85,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AttributeUsageAttribute */
int8_t rt_System_AttributeUsageAttribute_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,85,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.AttributeUsageAttribute */

typedef struct rt_System_BitConverter
{
	t_System_RuntimeType runtimeType;
} rt_System_BitConverter;
rt_System_BitConverter rt_System_BitConverter_OBJ;
int8_t rt_System_BitConverter_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,66,0,105,0,116,0,67,0,111,0,110,0,118,0,101,0,114,0,116,0,101,0,114,0,0,0}; /* BitConverter */
int8_t rt_System_BitConverter_METADATA_FullName[52] = {0,0,0,0,0,0,0,0,19,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,105,0,116,0,67,0,111,0,110,0,118,0,101,0,114,0,116,0,101,0,114,0,0,0}; /* System.BitConverter */

typedef struct rt_System_Buffer
{
	t_System_RuntimeType runtimeType;
} rt_System_Buffer;
rt_System_Buffer rt_System_Buffer_OBJ;
int8_t rt_System_Buffer_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,66,0,117,0,102,0,102,0,101,0,114,0,0,0}; /* Buffer */
int8_t rt_System_Buffer_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,117,0,102,0,102,0,101,0,114,0,0,0}; /* System.Buffer */

typedef struct rt_System_Console
{
	t_System_RuntimeType runtimeType;
} rt_System_Console;
rt_System_Console rt_System_Console_OBJ;
int8_t rt_System_Console_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,67,0,111,0,110,0,115,0,111,0,108,0,101,0,0,0}; /* Console */
int8_t rt_System_Console_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,110,0,115,0,111,0,108,0,101,0,0,0}; /* System.Console */

typedef struct rt_System_IntPtr
{
	t_System_RuntimeType runtimeType;
} rt_System_IntPtr;
rt_System_IntPtr rt_System_IntPtr_OBJ;
int8_t rt_System_IntPtr_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* IntPtr */
int8_t rt_System_IntPtr_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* System.IntPtr */

typedef struct rt_System_Delegate
{
	t_System_RuntimeType runtimeType;
} rt_System_Delegate;
rt_System_Delegate rt_System_Delegate_OBJ;
int8_t rt_System_Delegate_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* Delegate */
int8_t rt_System_Delegate_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* System.Delegate */

typedef struct rt_System_DllNotFoundException
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_get_Message_0)(t_System_DllNotFoundException* self);
} rt_System_DllNotFoundException;
rt_System_DllNotFoundException rt_System_DllNotFoundException_OBJ;
int8_t rt_System_DllNotFoundException_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,68,0,108,0,108,0,78,0,111,0,116,0,70,0,111,0,117,0,110,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* DllNotFoundException */
int8_t rt_System_DllNotFoundException_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,108,0,108,0,78,0,111,0,116,0,70,0,111,0,117,0,110,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.DllNotFoundException */

typedef struct rt_System_Enum
{
	t_System_RuntimeType runtimeType;
} rt_System_Enum;
rt_System_Enum rt_System_Enum_OBJ;
int8_t rt_System_Enum_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,69,0,110,0,117,0,109,0,0,0}; /* Enum */
int8_t rt_System_Enum_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,110,0,117,0,109,0,0,0}; /* System.Enum */

typedef struct rt_System_Environment
{
	t_System_RuntimeType runtimeType;
} rt_System_Environment;
rt_System_Environment rt_System_Environment_OBJ;
int8_t rt_System_Environment_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,69,0,110,0,118,0,105,0,114,0,111,0,110,0,109,0,101,0,110,0,116,0,0,0}; /* Environment */
int8_t rt_System_Environment_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,110,0,118,0,105,0,114,0,111,0,110,0,109,0,101,0,110,0,116,0,0,0}; /* System.Environment */

typedef struct rt_System_Exception
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_get_Message_0)(t_System_Exception* self);
} rt_System_Exception;
rt_System_Exception rt_System_Exception_OBJ;
int8_t rt_System_Exception_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* Exception */
int8_t rt_System_Exception_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.Exception */

typedef struct rt_System_FlagsAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_FlagsAttribute;
rt_System_FlagsAttribute rt_System_FlagsAttribute_OBJ;
int8_t rt_System_FlagsAttribute_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,70,0,108,0,97,0,103,0,115,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* FlagsAttribute */
int8_t rt_System_FlagsAttribute_METADATA_FullName[56] = {0,0,0,0,0,0,0,0,21,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,70,0,108,0,97,0,103,0,115,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.FlagsAttribute */

typedef struct rt_System_GC
{
	t_System_RuntimeType runtimeType;
} rt_System_GC;
rt_System_GC rt_System_GC_OBJ;
int8_t rt_System_GC_METADATA_Name[18] = {0,0,0,0,0,0,0,0,2,0,0,0,71,0,67,0,0,0}; /* GC */
int8_t rt_System_GC_METADATA_FullName[32] = {0,0,0,0,0,0,0,0,9,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,71,0,67,0,0,0}; /* System.GC */

typedef struct rt_System_IndexOutOfRangeException
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_get_Message_0)(t_System_IndexOutOfRangeException* self);
} rt_System_IndexOutOfRangeException;
rt_System_IndexOutOfRangeException rt_System_IndexOutOfRangeException_OBJ;
int8_t rt_System_IndexOutOfRangeException_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,73,0,110,0,100,0,101,0,120,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* IndexOutOfRangeException */
int8_t rt_System_IndexOutOfRangeException_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,100,0,101,0,120,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.IndexOutOfRangeException */

typedef struct rt_System_InvalidCastException
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_get_Message_0)(t_System_InvalidCastException* self);
} rt_System_InvalidCastException;
rt_System_InvalidCastException rt_System_InvalidCastException_OBJ;
int8_t rt_System_InvalidCastException_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,73,0,110,0,118,0,97,0,108,0,105,0,100,0,67,0,97,0,115,0,116,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* InvalidCastException */
int8_t rt_System_InvalidCastException_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,118,0,97,0,108,0,105,0,100,0,67,0,97,0,115,0,116,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.InvalidCastException */

typedef struct rt_System_Double
{
	t_System_RuntimeType runtimeType;
} rt_System_Double;
rt_System_Double rt_System_Double_OBJ;
int8_t rt_System_Double_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,68,0,111,0,117,0,98,0,108,0,101,0,0,0}; /* Double */
int8_t rt_System_Double_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,0,0}; /* System.Double */

typedef struct rt_System_Math
{
	t_System_RuntimeType runtimeType;
} rt_System_Math;
rt_System_Math rt_System_Math_OBJ;
int8_t rt_System_Math_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,77,0,97,0,116,0,104,0,0,0}; /* Math */
int8_t rt_System_Math_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,97,0,116,0,104,0,0,0}; /* System.Math */

typedef struct rt_System_Single
{
	t_System_RuntimeType runtimeType;
} rt_System_Single;
rt_System_Single rt_System_Single_OBJ;
int8_t rt_System_Single_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,105,0,110,0,103,0,108,0,101,0,0,0}; /* Single */
int8_t rt_System_Single_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,105,0,110,0,103,0,108,0,101,0,0,0}; /* System.Single */

typedef struct rt_System_MathF
{
	t_System_RuntimeType runtimeType;
} rt_System_MathF;
rt_System_MathF rt_System_MathF_OBJ;
int8_t rt_System_MathF_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,77,0,97,0,116,0,104,0,70,0,0,0}; /* MathF */
int8_t rt_System_MathF_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,97,0,116,0,104,0,70,0,0,0}; /* System.MathF */

typedef struct rt_System_MulticastDelegate
{
	t_System_RuntimeType runtimeType;
} rt_System_MulticastDelegate;
rt_System_MulticastDelegate rt_System_MulticastDelegate_OBJ;
int8_t rt_System_MulticastDelegate_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,77,0,117,0,108,0,116,0,105,0,99,0,97,0,115,0,116,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* MulticastDelegate */
int8_t rt_System_MulticastDelegate_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,117,0,108,0,116,0,105,0,99,0,97,0,115,0,116,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* System.MulticastDelegate */

typedef struct rt_System_NotSupportedException
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_get_Message_0)(t_System_NotSupportedException* self);
} rt_System_NotSupportedException;
rt_System_NotSupportedException rt_System_NotSupportedException_OBJ;
int8_t rt_System_NotSupportedException_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,78,0,111,0,116,0,83,0,117,0,112,0,112,0,111,0,114,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* NotSupportedException */
int8_t rt_System_NotSupportedException_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,111,0,116,0,83,0,117,0,112,0,112,0,111,0,114,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* System.NotSupportedException */

typedef struct rt_System_Number
{
	t_System_RuntimeType runtimeType;
} rt_System_Number;
rt_System_Number rt_System_Number_OBJ;
int8_t rt_System_Number_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,78,0,117,0,109,0,98,0,101,0,114,0,0,0}; /* Number */
int8_t rt_System_Number_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,117,0,109,0,98,0,101,0,114,0,0,0}; /* System.Number */

typedef struct rt_System_Object
{
	t_System_RuntimeType runtimeType;
} rt_System_Object;
rt_System_Object rt_System_Object_OBJ;
int8_t rt_System_Object_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,79,0,98,0,106,0,101,0,99,0,116,0,0,0}; /* Object */
int8_t rt_System_Object_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,0,0}; /* System.Object */

typedef struct rt_System_ObsoleteAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_ObsoleteAttribute;
rt_System_ObsoleteAttribute rt_System_ObsoleteAttribute_OBJ;
int8_t rt_System_ObsoleteAttribute_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,79,0,98,0,115,0,111,0,108,0,101,0,116,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* ObsoleteAttribute */
int8_t rt_System_ObsoleteAttribute_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,115,0,111,0,108,0,101,0,116,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.ObsoleteAttribute */

typedef struct rt_System_RuntimeType
{
	t_System_RuntimeType runtimeType;
} rt_System_RuntimeType;
rt_System_RuntimeType rt_System_RuntimeType_OBJ;
int8_t rt_System_RuntimeType_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* RuntimeType */
int8_t rt_System_RuntimeType_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* System.RuntimeType */

typedef struct rt_System_Char
{
	t_System_RuntimeType runtimeType;
} rt_System_Char;
rt_System_Char rt_System_Char_OBJ;
int8_t rt_System_Char_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,67,0,104,0,97,0,114,0,0,0}; /* Char */
int8_t rt_System_Char_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,104,0,97,0,114,0,0,0}; /* System.Char */

typedef struct rt_System_Int32
{
	t_System_RuntimeType runtimeType;
} rt_System_Int32;
rt_System_Int32 rt_System_Int32_OBJ;
int8_t rt_System_Int32_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* Int32 */
int8_t rt_System_Int32_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* System.Int32 */

typedef struct rt_System_String
{
	t_System_RuntimeType runtimeType;
} rt_System_String;
rt_System_String rt_System_String_OBJ;
int8_t rt_System_String_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,0,0}; /* String */
int8_t rt_System_String_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,0,0}; /* System.String */

typedef struct rt_System_Type
{
	t_System_RuntimeType runtimeType;
} rt_System_Type;
rt_System_Type rt_System_Type_OBJ;
int8_t rt_System_Type_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,84,0,121,0,112,0,101,0,0,0}; /* Type */
int8_t rt_System_Type_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,121,0,112,0,101,0,0,0}; /* System.Type */

typedef struct rt_System_ValueType
{
	t_System_RuntimeType runtimeType;
} rt_System_ValueType;
rt_System_ValueType rt_System_ValueType_OBJ;
int8_t rt_System_ValueType_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,86,0,97,0,108,0,117,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* ValueType */
int8_t rt_System_ValueType_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,86,0,97,0,108,0,117,0,101,0,84,0,121,0,112,0,101,0,0,0}; /* System.ValueType */

typedef struct rt_System_Reflection_AssemblyCompanyAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyCompanyAttribute;
rt_System_Reflection_AssemblyCompanyAttribute rt_System_Reflection_AssemblyCompanyAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyCompanyAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,109,0,112,0,97,0,110,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyCompanyAttribute */
int8_t rt_System_Reflection_AssemblyCompanyAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,109,0,112,0,97,0,110,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyCompanyAttribute */

typedef struct rt_System_Reflection_AssemblyConfigurationAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyConfigurationAttribute;
rt_System_Reflection_AssemblyConfigurationAttribute rt_System_Reflection_AssemblyConfigurationAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyConfigurationAttribute_METADATA_Name[74] = {0,0,0,0,0,0,0,0,30,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,110,0,102,0,105,0,103,0,117,0,114,0,97,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyConfigurationAttribute */
int8_t rt_System_Reflection_AssemblyConfigurationAttribute_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,110,0,102,0,105,0,103,0,117,0,114,0,97,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyConfigurationAttribute */

typedef struct rt_System_Reflection_AssemblyCopyrightAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyCopyrightAttribute;
rt_System_Reflection_AssemblyCopyrightAttribute rt_System_Reflection_AssemblyCopyrightAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyCopyrightAttribute_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyCopyrightAttribute */
int8_t rt_System_Reflection_AssemblyCopyrightAttribute_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyCopyrightAttribute */

typedef struct rt_System_Reflection_AssemblyCultureAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyCultureAttribute;
rt_System_Reflection_AssemblyCultureAttribute rt_System_Reflection_AssemblyCultureAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyCultureAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyCultureAttribute */
int8_t rt_System_Reflection_AssemblyCultureAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyCultureAttribute */

typedef struct rt_System_Reflection_AssemblyDelaySignAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyDelaySignAttribute;
rt_System_Reflection_AssemblyDelaySignAttribute rt_System_Reflection_AssemblyDelaySignAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyDelaySignAttribute_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,108,0,97,0,121,0,83,0,105,0,103,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyDelaySignAttribute */
int8_t rt_System_Reflection_AssemblyDelaySignAttribute_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,108,0,97,0,121,0,83,0,105,0,103,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyDelaySignAttribute */

typedef struct rt_System_Reflection_AssemblyDescriptionAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyDescriptionAttribute;
rt_System_Reflection_AssemblyDescriptionAttribute rt_System_Reflection_AssemblyDescriptionAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyDescriptionAttribute_METADATA_Name[70] = {0,0,0,0,0,0,0,0,28,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,115,0,99,0,114,0,105,0,112,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyDescriptionAttribute */
int8_t rt_System_Reflection_AssemblyDescriptionAttribute_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,115,0,99,0,114,0,105,0,112,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyDescriptionAttribute */

typedef struct rt_System_Reflection_AssemblyFileVersionAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyFileVersionAttribute;
rt_System_Reflection_AssemblyFileVersionAttribute rt_System_Reflection_AssemblyFileVersionAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyFileVersionAttribute_METADATA_Name[70] = {0,0,0,0,0,0,0,0,28,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,70,0,105,0,108,0,101,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyFileVersionAttribute */
int8_t rt_System_Reflection_AssemblyFileVersionAttribute_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,70,0,105,0,108,0,101,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyFileVersionAttribute */

typedef struct rt_System_Reflection_AssemblyInformationalVersionAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyInformationalVersionAttribute;
rt_System_Reflection_AssemblyInformationalVersionAttribute rt_System_Reflection_AssemblyInformationalVersionAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_Name[88] = {0,0,0,0,0,0,0,0,37,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,73,0,110,0,102,0,111,0,114,0,109,0,97,0,116,0,105,0,111,0,110,0,97,0,108,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyInformationalVersionAttribute */
int8_t rt_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_FullName[124] = {0,0,0,0,0,0,0,0,55,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,73,0,110,0,102,0,111,0,114,0,109,0,97,0,116,0,105,0,111,0,110,0,97,0,108,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyInformationalVersionAttribute */

typedef struct rt_System_Reflection_AssemblyKeyFileAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyKeyFileAttribute;
rt_System_Reflection_AssemblyKeyFileAttribute rt_System_Reflection_AssemblyKeyFileAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyKeyFileAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,75,0,101,0,121,0,70,0,105,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyKeyFileAttribute */
int8_t rt_System_Reflection_AssemblyKeyFileAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,75,0,101,0,121,0,70,0,105,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyKeyFileAttribute */

typedef struct rt_System_Reflection_AssemblyProductAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyProductAttribute;
rt_System_Reflection_AssemblyProductAttribute rt_System_Reflection_AssemblyProductAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyProductAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,80,0,114,0,111,0,100,0,117,0,99,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyProductAttribute */
int8_t rt_System_Reflection_AssemblyProductAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,80,0,114,0,111,0,100,0,117,0,99,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyProductAttribute */

typedef struct rt_System_Reflection_AssemblyTitleAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyTitleAttribute;
rt_System_Reflection_AssemblyTitleAttribute rt_System_Reflection_AssemblyTitleAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyTitleAttribute_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,105,0,116,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyTitleAttribute */
int8_t rt_System_Reflection_AssemblyTitleAttribute_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,105,0,116,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyTitleAttribute */

typedef struct rt_System_Reflection_AssemblyTrademarkAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyTrademarkAttribute;
rt_System_Reflection_AssemblyTrademarkAttribute rt_System_Reflection_AssemblyTrademarkAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyTrademarkAttribute_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyTrademarkAttribute */
int8_t rt_System_Reflection_AssemblyTrademarkAttribute_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyTrademarkAttribute */

typedef struct rt_System_Reflection_AssemblyVersionAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_AssemblyVersionAttribute;
rt_System_Reflection_AssemblyVersionAttribute rt_System_Reflection_AssemblyVersionAttribute_OBJ;
int8_t rt_System_Reflection_AssemblyVersionAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* AssemblyVersionAttribute */
int8_t rt_System_Reflection_AssemblyVersionAttribute_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.AssemblyVersionAttribute */

typedef struct rt_System_Reflection_DefaultMemberAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_DefaultMemberAttribute;
rt_System_Reflection_DefaultMemberAttribute rt_System_Reflection_DefaultMemberAttribute_OBJ;
int8_t rt_System_Reflection_DefaultMemberAttribute_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,68,0,101,0,102,0,97,0,117,0,108,0,116,0,77,0,101,0,109,0,98,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* DefaultMemberAttribute */
int8_t rt_System_Reflection_DefaultMemberAttribute_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,68,0,101,0,102,0,97,0,117,0,108,0,116,0,77,0,101,0,109,0,98,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Reflection.DefaultMemberAttribute */

typedef struct rt_System_Runtime_CompilerServices_ExtensionAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_CompilerServices_ExtensionAttribute;
rt_System_Runtime_CompilerServices_ExtensionAttribute rt_System_Runtime_CompilerServices_ExtensionAttribute_OBJ;
int8_t rt_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* ExtensionAttribute */
int8_t rt_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_FullName[114] = {0,0,0,0,0,0,0,0,50,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.CompilerServices.ExtensionAttribute */

typedef struct rt_System_Runtime_CompilerServices_MethodImplOptions
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_CompilerServices_MethodImplOptions;
rt_System_Runtime_CompilerServices_MethodImplOptions rt_System_Runtime_CompilerServices_MethodImplOptions_OBJ;
int8_t rt_System_Runtime_CompilerServices_MethodImplOptions_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,79,0,112,0,116,0,105,0,111,0,110,0,115,0,0,0}; /* MethodImplOptions */
int8_t rt_System_Runtime_CompilerServices_MethodImplOptions_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,79,0,112,0,116,0,105,0,111,0,110,0,115,0,0,0}; /* System.Runtime.CompilerServices.MethodImplOptions */

typedef struct rt_System_Runtime_CompilerServices_MethodImplAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_CompilerServices_MethodImplAttribute;
rt_System_Runtime_CompilerServices_MethodImplAttribute rt_System_Runtime_CompilerServices_MethodImplAttribute_OBJ;
int8_t rt_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* MethodImplAttribute */
int8_t rt_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_FullName[116] = {0,0,0,0,0,0,0,0,51,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.CompilerServices.MethodImplAttribute */

typedef struct rt_System_Runtime_CompilerServices_RuntimeHelpers
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_CompilerServices_RuntimeHelpers;
rt_System_Runtime_CompilerServices_RuntimeHelpers rt_System_Runtime_CompilerServices_RuntimeHelpers_OBJ;
int8_t rt_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,72,0,101,0,108,0,112,0,101,0,114,0,115,0,0,0}; /* RuntimeHelpers */
int8_t rt_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,72,0,101,0,108,0,112,0,101,0,114,0,115,0,0,0}; /* System.Runtime.CompilerServices.RuntimeHelpers */

typedef struct rt_System_Runtime_InteropServices_CallingConvention
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_InteropServices_CallingConvention;
rt_System_Runtime_InteropServices_CallingConvention rt_System_Runtime_InteropServices_CallingConvention_OBJ;
int8_t rt_System_Runtime_InteropServices_CallingConvention_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,67,0,97,0,108,0,108,0,105,0,110,0,103,0,67,0,111,0,110,0,118,0,101,0,110,0,116,0,105,0,111,0,110,0,0,0}; /* CallingConvention */
int8_t rt_System_Runtime_InteropServices_CallingConvention_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,67,0,97,0,108,0,108,0,105,0,110,0,103,0,67,0,111,0,110,0,118,0,101,0,110,0,116,0,105,0,111,0,110,0,0,0}; /* System.Runtime.InteropServices.CallingConvention */

typedef struct rt_System_Runtime_InteropServices_DllImportAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_InteropServices_DllImportAttribute;
rt_System_Runtime_InteropServices_DllImportAttribute rt_System_Runtime_InteropServices_DllImportAttribute_OBJ;
int8_t rt_System_Runtime_InteropServices_DllImportAttribute_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,68,0,108,0,108,0,73,0,109,0,112,0,111,0,114,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* DllImportAttribute */
int8_t rt_System_Runtime_InteropServices_DllImportAttribute_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,68,0,108,0,108,0,73,0,109,0,112,0,111,0,114,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.InteropServices.DllImportAttribute */

typedef struct rt_System_Runtime_InteropServices_Marshal
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_InteropServices_Marshal;
rt_System_Runtime_InteropServices_Marshal rt_System_Runtime_InteropServices_Marshal_OBJ;
int8_t rt_System_Runtime_InteropServices_Marshal_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,77,0,97,0,114,0,115,0,104,0,97,0,108,0,0,0}; /* Marshal */
int8_t rt_System_Runtime_InteropServices_Marshal_METADATA_FullName[90] = {0,0,0,0,0,0,0,0,38,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,97,0,114,0,115,0,104,0,97,0,108,0,0,0}; /* System.Runtime.InteropServices.Marshal */

typedef struct rt_System_Runtime_InteropServices_OutAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_InteropServices_OutAttribute;
rt_System_Runtime_InteropServices_OutAttribute rt_System_Runtime_InteropServices_OutAttribute_OBJ;
int8_t rt_System_Runtime_InteropServices_OutAttribute_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,79,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* OutAttribute */
int8_t rt_System_Runtime_InteropServices_OutAttribute_METADATA_FullName[100] = {0,0,0,0,0,0,0,0,43,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,79,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.InteropServices.OutAttribute */

typedef struct rt_System_Runtime_InteropServices_LayoutKind
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_InteropServices_LayoutKind;
rt_System_Runtime_InteropServices_LayoutKind rt_System_Runtime_InteropServices_LayoutKind_OBJ;
int8_t rt_System_Runtime_InteropServices_LayoutKind_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,76,0,97,0,121,0,111,0,117,0,116,0,75,0,105,0,110,0,100,0,0,0}; /* LayoutKind */
int8_t rt_System_Runtime_InteropServices_LayoutKind_METADATA_FullName[96] = {0,0,0,0,0,0,0,0,41,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,76,0,97,0,121,0,111,0,117,0,116,0,75,0,105,0,110,0,100,0,0,0}; /* System.Runtime.InteropServices.LayoutKind */

typedef struct rt_System_Runtime_InteropServices_StructLayoutAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_InteropServices_StructLayoutAttribute;
rt_System_Runtime_InteropServices_StructLayoutAttribute rt_System_Runtime_InteropServices_StructLayoutAttribute_OBJ;
int8_t rt_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,83,0,116,0,114,0,117,0,99,0,116,0,76,0,97,0,121,0,111,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* StructLayoutAttribute */
int8_t rt_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_FullName[118] = {0,0,0,0,0,0,0,0,52,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,83,0,116,0,114,0,117,0,99,0,116,0,76,0,97,0,121,0,111,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.InteropServices.StructLayoutAttribute */

typedef struct rt_System_Runtime_Versioning_TargetFrameworkAttribute
{
	t_System_RuntimeType runtimeType;
} rt_System_Runtime_Versioning_TargetFrameworkAttribute;
rt_System_Runtime_Versioning_TargetFrameworkAttribute rt_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ;
int8_t rt_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,84,0,97,0,114,0,103,0,101,0,116,0,70,0,114,0,97,0,109,0,101,0,119,0,111,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* TargetFrameworkAttribute */
int8_t rt_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_FullName[114] = {0,0,0,0,0,0,0,0,50,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,105,0,110,0,103,0,46,0,84,0,97,0,114,0,103,0,101,0,116,0,70,0,114,0,97,0,109,0,101,0,119,0,111,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0}; /* System.Runtime.Versioning.TargetFrameworkAttribute */

typedef struct rt_System_Text_Encoding
{
	t_System_RuntimeType runtimeType;
} rt_System_Text_Encoding;
rt_System_Text_Encoding rt_System_Text_Encoding_OBJ;
int8_t rt_System_Text_Encoding_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* Encoding */
int8_t rt_System_Text_Encoding_METADATA_FullName[54] = {0,0,0,0,0,0,0,0,20,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,101,0,120,0,116,0,46,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* System.Text.Encoding */

typedef struct rt_System_Text_StandardEncoding
{
	t_System_RuntimeType runtimeType;
} rt_System_Text_StandardEncoding;
rt_System_Text_StandardEncoding rt_System_Text_StandardEncoding_OBJ;
int8_t rt_System_Text_StandardEncoding_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,116,0,97,0,110,0,100,0,97,0,114,0,100,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* StandardEncoding */
int8_t rt_System_Text_StandardEncoding_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,101,0,120,0,116,0,46,0,83,0,116,0,97,0,110,0,100,0,97,0,114,0,100,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* System.Text.StandardEncoding */

typedef struct rt_System_Text_StringBuilder
{
	t_System_RuntimeType runtimeType;
} rt_System_Text_StringBuilder;
rt_System_Text_StringBuilder rt_System_Text_StringBuilder_OBJ;
int8_t rt_System_Text_StringBuilder_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,66,0,117,0,105,0,108,0,100,0,101,0,114,0,0,0}; /* StringBuilder */
int8_t rt_System_Text_StringBuilder_METADATA_FullName[64] = {0,0,0,0,0,0,0,0,25,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,101,0,120,0,116,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,66,0,117,0,105,0,108,0,100,0,101,0,114,0,0,0}; /* System.Text.StringBuilder */

typedef struct rt_System_Byte
{
	t_System_RuntimeType runtimeType;
} rt_System_Byte;
rt_System_Byte rt_System_Byte_OBJ;
int8_t rt_System_Byte_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,66,0,121,0,116,0,101,0,0,0}; /* Byte */
int8_t rt_System_Byte_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,0,0}; /* System.Byte */

typedef struct rt_System_DateTime
{
	t_System_RuntimeType runtimeType;
} rt_System_DateTime;
rt_System_DateTime rt_System_DateTime_OBJ;
int8_t rt_System_DateTime_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,68,0,97,0,116,0,101,0,84,0,105,0,109,0,101,0,0,0}; /* DateTime */
int8_t rt_System_DateTime_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,97,0,116,0,101,0,84,0,105,0,109,0,101,0,0,0}; /* System.DateTime */

typedef struct rt_System_Int16
{
	t_System_RuntimeType runtimeType;
} rt_System_Int16;
rt_System_Int16 rt_System_Int16_OBJ;
int8_t rt_System_Int16_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* Int16 */
int8_t rt_System_Int16_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* System.Int16 */

typedef struct rt_System_Int64
{
	t_System_RuntimeType runtimeType;
} rt_System_Int64;
rt_System_Int64 rt_System_Int64_OBJ;
int8_t rt_System_Int64_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* Int64 */
int8_t rt_System_Int64_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* System.Int64 */

typedef struct rt_System_RuntimeTypeHandle
{
	t_System_RuntimeType runtimeType;
} rt_System_RuntimeTypeHandle;
rt_System_RuntimeTypeHandle rt_System_RuntimeTypeHandle_OBJ;
int8_t rt_System_RuntimeTypeHandle_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0}; /* RuntimeTypeHandle */
int8_t rt_System_RuntimeTypeHandle_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0}; /* System.RuntimeTypeHandle */

typedef struct rt_System_SByte
{
	t_System_RuntimeType runtimeType;
} rt_System_SByte;
rt_System_SByte rt_System_SByte_OBJ;
int8_t rt_System_SByte_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,83,0,66,0,121,0,116,0,101,0,0,0}; /* SByte */
int8_t rt_System_SByte_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,66,0,121,0,116,0,101,0,0,0}; /* System.SByte */

typedef struct rt_System_UInt16
{
	t_System_RuntimeType runtimeType;
} rt_System_UInt16;
rt_System_UInt16 rt_System_UInt16_OBJ;
int8_t rt_System_UInt16_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* UInt16 */
int8_t rt_System_UInt16_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,49,0,54,0,0,0}; /* System.UInt16 */

typedef struct rt_System_UInt32
{
	t_System_RuntimeType runtimeType;
} rt_System_UInt32;
rt_System_UInt32 rt_System_UInt32_OBJ;
int8_t rt_System_UInt32_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* UInt32 */
int8_t rt_System_UInt32_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,51,0,50,0,0,0}; /* System.UInt32 */

typedef struct rt_System_UInt64
{
	t_System_RuntimeType runtimeType;
} rt_System_UInt64;
rt_System_UInt64 rt_System_UInt64_OBJ;
int8_t rt_System_UInt64_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* UInt64 */
int8_t rt_System_UInt64_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,54,0,52,0,0,0}; /* System.UInt64 */

typedef struct rt_System_UIntPtr
{
	t_System_RuntimeType runtimeType;
} rt_System_UIntPtr;
rt_System_UIntPtr rt_System_UIntPtr_OBJ;
int8_t rt_System_UIntPtr_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,85,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* UIntPtr */
int8_t rt_System_UIntPtr_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0}; /* System.UIntPtr */

typedef struct rt_System_Reflection_MethodImplAttributes
{
	t_System_RuntimeType runtimeType;
} rt_System_Reflection_MethodImplAttributes;
rt_System_Reflection_MethodImplAttributes rt_System_Reflection_MethodImplAttributes_OBJ;
int8_t rt_System_Reflection_MethodImplAttributes_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,115,0,0,0}; /* MethodImplAttributes */
int8_t rt_System_Reflection_MethodImplAttributes_METADATA_FullName[90] = {0,0,0,0,0,0,0,0,38,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,115,0,0,0}; /* System.Reflection.MethodImplAttributes */

/* =============================== */
/* ARRAY Runtime Types */
/* =============================== */
typedef struct rt_System_Byte___ARRAY
{
	t_System_RuntimeType runtimeType;
} rt_System_Byte___ARRAY;
rt_System_Byte___ARRAY rt_System_Byte___ARRAY_OBJ;
int8_t rt_System_Byte___ARRAY_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,66,0,121,0,116,0,101,0,91,0,93,0,0,0}; /* Byte[] */
int8_t rt_System_Byte___ARRAY_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,91,0,93,0,0,0}; /* System.Byte[] */

typedef struct rt_System_Char___ARRAY
{
	t_System_RuntimeType runtimeType;
} rt_System_Char___ARRAY;
rt_System_Char___ARRAY rt_System_Char___ARRAY_OBJ;
int8_t rt_System_Char___ARRAY_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,67,0,104,0,97,0,114,0,91,0,93,0,0,0}; /* Char[] */
int8_t rt_System_Char___ARRAY_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,104,0,97,0,114,0,91,0,93,0,0,0}; /* System.Char[] */

/* =============================== */
/* POINTER Runtime Types */
/* =============================== */
typedef struct rt_System_Void__PTR
{
	t_System_RuntimeType runtimeType;
} rt_System_Void__PTR;
rt_System_Void__PTR rt_System_Void__PTR_OBJ;
int8_t rt_System_Void__PTR_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,86,0,111,0,105,0,100,0,42,0,0,0}; /* Void* */
int8_t rt_System_Void__PTR_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,86,0,111,0,105,0,100,0,42,0,0,0}; /* System.Void* */

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
int32_t m_System_Array_get_Length_0(t_System_Array* self);
int64_t m_System_Array_get_LongLength_0(t_System_Array* self);
int32_t m_System_Array_get_Count_0(t_System_Array* self);
t_System_Array* m_System_Array__ctor_0(t_System_Array* self);
t_System_Attribute* m_System_Attribute__ctor_0(t_System_Attribute* self);
char m_char__ctor_0();
t_System_AttributeTargets m_System_AttributeTargets__ctor_0();
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute__ctor_0(t_System_AttributeUsageAttribute* self, t_System_AttributeTargets p_validOn);
t_System_AttributeTargets m_System_AttributeUsageAttribute_get_ValidOn_0(t_System_AttributeUsageAttribute* self);
int32_t m_System_BitConverter_SingleToInt32Bits_0(float p_value);
void m_System_Buffer_MemoryCopy_0(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy);
void m_System_Buffer_MemoryCopy_1(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy);
void m_System_Console_Write_0(t_System_String* p_s);
void m_System_Console_WriteLine_0(t_System_String* p_s);
void m_System_Console_WriteLine_1();
intptr_t m_intptr_t__ctor_0(void* p_value);
intptr_t m_intptr_t__ctor_1();
t_System_Object* m_System_Delegate_get_Target_0(t_System_Delegate* self);
char m_System_Delegate_op_Equality_0(t_System_Delegate* p_a, t_System_Delegate* p_b);
char m_System_Delegate_op_Inequality_0(t_System_Delegate* p_a, t_System_Delegate* p_b);
t_System_Delegate* m_System_Delegate_Combine_0(t_System_Delegate* p_a, t_System_Delegate* p_b);
t_System_Delegate* m_System_Delegate_Remove_0(t_System_Delegate* p_source, t_System_Delegate* p_value);
t_System_Delegate* m_System_Delegate_RemoveAll_0(t_System_Delegate* p_source, t_System_Delegate* p_value);
t_System_Delegate* m_System_Delegate__ctor_0(t_System_Delegate* self);
t_System_DllNotFoundException* m_System_DllNotFoundException__ctor_0(t_System_DllNotFoundException* self);
t_System_Enum* m_System_Enum__ctor_0(t_System_Enum* self);
t_System_String* m_System_Environment_get_NewLine_0();
t_System_Exception* m_System_Exception__ctor_0(t_System_Exception* self);
t_System_Exception* m_System_Exception__ctor_1(t_System_Exception* self, t_System_String* p_message);
t_System_String* m_System_Exception_get_Message_0(t_System_Exception* self);
t_System_FlagsAttribute* m_System_FlagsAttribute__ctor_0(t_System_FlagsAttribute* self);
t_System_IndexOutOfRangeException* m_System_IndexOutOfRangeException__ctor_0(t_System_IndexOutOfRangeException* self);
t_System_InvalidCastException* m_System_InvalidCastException__ctor_0(t_System_InvalidCastException* self);
double m_double__ctor_0();
char m_float_IsNaN_0(float p_f);
char m_float_IsNegative_0(float p_f);
float m_float__ctor_0();
t_System_MulticastDelegate* m_System_MulticastDelegate__ctor_0(t_System_MulticastDelegate* self);
t_System_NotSupportedException* m_System_NotSupportedException__ctor_0(t_System_NotSupportedException* self, t_System_String* p_message);
t_System_Type* m_System_Object_GetType_0(t_System_Object* self);
t_System_Object* m_System_Object__ctor_0(t_System_Object* self);
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_0(t_System_ObsoleteAttribute* self);
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_1(t_System_ObsoleteAttribute* self, t_System_String* p_message);
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_2(t_System_ObsoleteAttribute* self, t_System_String* p_message, char p_error);
char m_System_ObsoleteAttribute_get_IsError_0(t_System_ObsoleteAttribute* self);
t_System_String* m_System_ObsoleteAttribute_get_Message_0(t_System_ObsoleteAttribute* self);
t_System_RuntimeType* m_System_RuntimeType__ctor_0(t_System_RuntimeType* self);
char16_t m_char16_t__ctor_0();
t_System_String* m_int32_t_ToString_0(int32_t* self);
int32_t m_int32_t__ctor_0();
t_System_String* m_System_String__ctor_0(t_System_String* self, char16_t* p_value);
char16_t m_System_String_get_Item_0(t_System_String* self, int32_t p_index);
int32_t m_System_String_get_Length_0(t_System_String* self);
t_System_String* m_System_String_FastAllocateString_0(int32_t p_length);
char m_System_String_IsNullOrEmpty_0(t_System_String* p_value);
void m_System_String_FillStringChecked_0(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src);
t_System_String* m_System_String_Concat_0(t_System_String* p_str0, t_System_String* p_str1);
t_System_String* m_System_String_Concat_1(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2);
t_System_String* m_System_String_Concat_2(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2, t_System_String* p_str3);
char m_System_String_op_Equality_0(t_System_String* p_value1, t_System_String* p_value2);
char m_System_String_op_Inequality_0(t_System_String* p_value1, t_System_String* p_value2);
char m_System_String_Equals_0(t_System_String* self, t_System_String* p_value);
t_System_Type* m_System_Type_GetTypeFromHandle_0(t_System_RuntimeTypeHandle p_handle);
t_System_Type* m_System_Type__ctor_0(t_System_Type* self);
t_System_ValueType* m_System_ValueType__ctor_0(t_System_ValueType* self);
t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute__ctor_0(t_System_Reflection_AssemblyCompanyAttribute* self, t_System_String* p_company);
t_System_String* m_System_Reflection_AssemblyCompanyAttribute_get_Company_0(t_System_Reflection_AssemblyCompanyAttribute* self);
t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t_System_Reflection_AssemblyConfigurationAttribute* self, t_System_String* p_configuration);
t_System_String* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0(t_System_Reflection_AssemblyConfigurationAttribute* self);
t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t_System_Reflection_AssemblyCopyrightAttribute* self, t_System_String* p_copyright);
t_System_String* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0(t_System_Reflection_AssemblyCopyrightAttribute* self);
t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute__ctor_0(t_System_Reflection_AssemblyCultureAttribute* self, t_System_String* p_culture);
t_System_String* m_System_Reflection_AssemblyCultureAttribute_get_Culture_0(t_System_Reflection_AssemblyCultureAttribute* self);
t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute__ctor_0(t_System_Reflection_AssemblyDelaySignAttribute* self, char p_delaySign);
char m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0(t_System_Reflection_AssemblyDelaySignAttribute* self);
t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t_System_Reflection_AssemblyDescriptionAttribute* self, t_System_String* p_description);
t_System_String* m_System_Reflection_AssemblyDescriptionAttribute_get_Description_0(t_System_Reflection_AssemblyDescriptionAttribute* self);
t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t_System_Reflection_AssemblyFileVersionAttribute* self, t_System_String* p_version);
t_System_String* m_System_Reflection_AssemblyFileVersionAttribute_get_Version_0(t_System_Reflection_AssemblyFileVersionAttribute* self);
t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t_System_Reflection_AssemblyInformationalVersionAttribute* self, t_System_String* p_informationalVersion);
t_System_String* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0(t_System_Reflection_AssemblyInformationalVersionAttribute* self);
t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t_System_Reflection_AssemblyKeyFileAttribute* self, t_System_String* p_keyFile);
t_System_String* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0(t_System_Reflection_AssemblyKeyFileAttribute* self);
t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute__ctor_0(t_System_Reflection_AssemblyProductAttribute* self, t_System_String* p_product);
t_System_String* m_System_Reflection_AssemblyProductAttribute_get_Product_0(t_System_Reflection_AssemblyProductAttribute* self);
t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute__ctor_0(t_System_Reflection_AssemblyTitleAttribute* self, t_System_String* p_title);
t_System_String* m_System_Reflection_AssemblyTitleAttribute_get_Title_0(t_System_Reflection_AssemblyTitleAttribute* self);
t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t_System_Reflection_AssemblyTrademarkAttribute* self, t_System_String* p_trademark);
t_System_String* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0(t_System_Reflection_AssemblyTrademarkAttribute* self);
t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute__ctor_0(t_System_Reflection_AssemblyVersionAttribute* self, t_System_String* p_version);
t_System_String* m_System_Reflection_AssemblyVersionAttribute_get_Version_0(t_System_Reflection_AssemblyVersionAttribute* self);
t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute__ctor_0(t_System_Reflection_DefaultMemberAttribute* self, t_System_String* p_memberName);
t_System_String* m_System_Reflection_DefaultMemberAttribute_get_MemberName_0(t_System_Reflection_DefaultMemberAttribute* self);
t_System_Runtime_CompilerServices_ExtensionAttribute* m_System_Runtime_CompilerServices_ExtensionAttribute__ctor_0(t_System_Runtime_CompilerServices_ExtensionAttribute* self);
t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplOptions__ctor_0();
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t_System_Runtime_CompilerServices_MethodImplAttribute* self, t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions);
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(t_System_Runtime_CompilerServices_MethodImplAttribute* self, int16_t p_value);
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2(t_System_Runtime_CompilerServices_MethodImplAttribute* self);
int32_t m_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
t_System_Runtime_InteropServices_CallingConvention m_System_Runtime_InteropServices_CallingConvention__ctor_0();
t_System_Runtime_InteropServices_DllImportAttribute* m_System_Runtime_InteropServices_DllImportAttribute__ctor_0(t_System_Runtime_InteropServices_DllImportAttribute* self, t_System_String* p_dllName);
intptr_t m_System_Runtime_InteropServices_Marshal_StringToHGlobalAnsi_0(t_System_String* p_s);
intptr_t m_System_Runtime_InteropServices_Marshal_StringToHGlobalUni_0(t_System_String* p_s);
void m_System_Runtime_InteropServices_Marshal_FreeHGlobal_0(intptr_t p_hglobal);
intptr_t m_System_Runtime_InteropServices_Marshal_GetNativePointerForObject_0(t_System_Object* p_o);
t_System_Runtime_InteropServices_OutAttribute* m_System_Runtime_InteropServices_OutAttribute__ctor_0(t_System_Runtime_InteropServices_OutAttribute* self);
t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_LayoutKind__ctor_0();
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t_System_Runtime_InteropServices_StructLayoutAttribute* self, t_System_Runtime_InteropServices_LayoutKind p_layoutKind);
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(t_System_Runtime_InteropServices_StructLayoutAttribute* self, int16_t p_layoutKind);
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t_System_Runtime_Versioning_TargetFrameworkAttribute* self, t_System_String* p_frameworkName);
void m_System_Text_Encoding__cctor_0();
int32_t m_System_Text_Encoding_GetByteCount_0(t_System_Text_Encoding* self, char16_t* p_chars);
int32_t m_System_Text_Encoding_GetByteCount_1(t_System_Text_Encoding* self, t_System_String* p_s);
int32_t m_System_Text_Encoding_GetByteCount_2(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count);
int32_t m_System_Text_Encoding_GetByteCount_3(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_count);
uint8_t* m_System_Text_Encoding_GetBytes_0(t_System_Text_Encoding* self, char16_t* p_chars);
uint8_t* m_System_Text_Encoding_GetBytes_1(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count);
int32_t m_System_Text_Encoding_GetBytes_2(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex);
int32_t m_System_Text_Encoding_GetBytes_3(t_System_Text_Encoding* self, t_System_String* p_s, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex);
int32_t m_System_Text_Encoding_GetBytes_4(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteCount);
uint8_t* m_System_Text_Encoding_GetBytes_5(t_System_Text_Encoding* self, t_System_String* p_s);
int32_t m_System_Text_Encoding_GetCharCount_0(t_System_Text_Encoding* self, uint8_t* p_bytes);
int32_t m_System_Text_Encoding_GetCharCount_1(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count);
int32_t m_System_Text_Encoding_GetCharCount_2(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_count);
int32_t m_System_Text_Encoding_GetChars_0(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteCount, char16_t* p_chars, int32_t p_charCount);
char16_t* m_System_Text_Encoding_GetChars_1(t_System_Text_Encoding* self, uint8_t* p_bytes);
char16_t* m_System_Text_Encoding_GetChars_2(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count);
int32_t m_System_Text_Encoding_GetChars_3(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteIndex, int32_t p_byteCount, char16_t* p_chars, int32_t p_charIndex);
t_System_String* m_System_Text_Encoding_GetString_0(t_System_Text_Encoding* self, uint8_t* p_bytes);
t_System_String* m_System_Text_Encoding_GetString_1(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count);
t_System_Text_Encoding* m_System_Text_Encoding__ctor_0(t_System_Text_Encoding* self);
t_System_Text_StandardEncoding* m_System_Text_StandardEncoding__ctor_0(t_System_Text_StandardEncoding* self);
t_System_Text_StringBuilder* m_System_Text_StringBuilder__ctor_0(t_System_Text_StringBuilder* self);
uint8_t m_uint8_t__ctor_0();
time_t m_time_t__ctor_0();
int64_t m_System_DateTime_TODO_0(t_System_DateTime* self);
t_System_DateTime m_System_DateTime__ctor_0();
int16_t m_int16_t__ctor_0();
int64_t m_int64_t__ctor_0();
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor_0(t_System_RuntimeType* p_type);
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor_1();
int8_t m_int8_t__ctor_0();
uint16_t m_uint16_t__ctor_0();
uint32_t m_uint32_t__ctor_0();
uint64_t m_uint64_t__ctor_0();
uintptr_t m_uintptr_t__ctor_0(void* p_value);
uintptr_t m_uintptr_t__ctor_1();
t_System_Reflection_MethodImplAttributes m_System_Reflection_MethodImplAttributes__ctor_0();

/* =============================== */
/* Helper runtime methods */
/* =============================== */
void* CS2X_AllocType(size_t size, t_System_RuntimeType* runtimeType)
{
	t_System_RuntimeType* ptr = CS2X_GC_New(size);
	ptr->CS2X_RuntimeType = runtimeType;
	return ptr;
}

void* CS2X_AllocTypeAtomic(size_t size, t_System_RuntimeType* runtimeType)
{
	t_System_RuntimeType* ptr = CS2X_GC_NewAtomic(size);
	ptr->CS2X_RuntimeType = runtimeType;
	return ptr;
}

void* CS2X_AllocArrayType(size_t elementSize, size_t length, t_System_RuntimeType* runtimeType)
{
	t_System_RuntimeType* ptr = CS2X_GC_New((sizeof(size_t) * 2) + (elementSize * length));
	ptr->CS2X_RuntimeType = runtimeType;
	*((size_t*)ptr + 1) = length;
	return ptr;
}

void* CS2X_AllocArrayTypeAtomic(size_t elementSize, size_t length, t_System_RuntimeType* runtimeType)
{
	t_System_RuntimeType* ptr = CS2X_GC_NewAtomic((sizeof(size_t) * 2) + (elementSize * length));
	ptr->CS2X_RuntimeType = runtimeType;
	*((size_t*)ptr + 1) = length;
	return ptr;
}

char CS2X_IsType(t_System_RuntimeType* runtimeType, t_System_RuntimeType* isRuntimeType)
{
	t_System_RuntimeType* runtimeTypeBase = runtimeType;
	while (runtimeTypeBase != 0)
	{
		if (runtimeTypeBase == isRuntimeType) return 1;
		runtimeTypeBase = runtimeTypeBase->f__BaseType_k__BackingField_1;
	}
	return 0;
}

t_System_Object* CS2X_TestUpCast(t_System_Object* self, t_System_RuntimeType* isRuntimeType)
{
	if (self == 0) return 0;
	if (CS2X_IsType(self->CS2X_RuntimeType, isRuntimeType)) return self;
	CS2X_ThreadExceptionObject = m_System_InvalidCastException__ctor_0(CS2X_AllocType(sizeof(t_System_InvalidCastException), &rt_System_InvalidCastException_OBJ));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

/* =============================== */
/* Method definitions */
/* =============================== */
int32_t m_System_Array_get_Length_0(t_System_Array* self)
{
	return (int32_t)(*((size_t*)self + 1));
}

int64_t m_System_Array_get_LongLength_0(t_System_Array* self)
{
	return (int64_t)(*((size_t*)self + 1));
}

int32_t m_System_Array_get_Count_0(t_System_Array* self)
{
	return m_System_Array_get_Length_0(self);
}

t_System_Array* m_System_Array__ctor_0(t_System_Array* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_System_Attribute* m_System_Attribute__ctor_0(t_System_Attribute* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

char m_char__ctor_0()
{
	char selfObj = {0};
	return selfObj;
}

t_System_AttributeTargets m_System_AttributeTargets__ctor_0()
{
	t_System_AttributeTargets selfObj = {0};
	return selfObj;
}

t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute__ctor_0(t_System_AttributeUsageAttribute* self, t_System_AttributeTargets p_validOn)
{
	m_System_Attribute__ctor_0(self);
	self->f__attributeTarget_2 = 32767;
	self->f__attributeTarget_2 = p_validOn;
	return self;
}

t_System_AttributeTargets m_System_AttributeUsageAttribute_get_ValidOn_0(t_System_AttributeUsageAttribute* self)
{
	return self->f__attributeTarget_2;
}

int32_t m_System_BitConverter_SingleToInt32Bits_0(float p_value)
{
	return *((int32_t*)&p_value);
}

void m_System_Buffer_MemoryCopy_0(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy)
{
	m_System_Buffer_MemoryCopy_0(p_source, p_destination, p_destinationSizeInBytes, p_sourceBytesToCopy);
}

void m_System_Buffer_MemoryCopy_1(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy)
{
	if (p_sourceBytesToCopy > p_destinationSizeInBytes)
	{
	}
	memcpy(p_destination, p_source, (void*)p_sourceBytesToCopy);
}

void m_System_Console_Write_0(t_System_String* p_s)
{
	char16_t* l_printBuff_0;
	int32_t l_count_1;
	char16_t* l_ptr_2;
	l_printBuff_0 = alloca(sizeof(char16_t) * 2);
	l_printBuff_0[1] = 0x0000;
	l_count_1 = 0;
	l_ptr_2 = &p_s->f__firstChar_1;
	{
		char16_t* l_ptrOffset_3;
		l_ptrOffset_3 = l_ptr_2;
		while (*l_ptrOffset_3 != 0x0000)
		{
			if (l_count_1 == m_System_String_get_Length_0(p_s)) break;
			l_printBuff_0[0] = *l_ptrOffset_3;
			wprintf(l_printBuff_0);
			++l_ptrOffset_3;
			++l_count_1;
		}
	}
}

void m_System_Console_WriteLine_0(t_System_String* p_s)
{
	m_System_Console_Write_0(m_System_String_Concat_0(p_s, m_System_Environment_get_NewLine_0()));
}

void m_System_Console_WriteLine_1()
{
	m_System_Console_Write_0(m_System_Environment_get_NewLine_0());
}

intptr_t m_intptr_t__ctor_0(void* p_value)
{
	intptr_t selfObj;
	intptr_t* self = &selfObj;
	return (intptr_t)p_value;
	return selfObj;
}

intptr_t m_intptr_t__ctor_1()
{
	intptr_t selfObj = {0};
	return selfObj;
}

t_System_Object* m_System_Delegate_get_Target_0(t_System_Delegate* self)
{
	return self->f__target_1;
}

char m_System_Delegate_op_Equality_0(t_System_Delegate* p_a, t_System_Delegate* p_b)
{
	return 1;
}

char m_System_Delegate_op_Inequality_0(t_System_Delegate* p_a, t_System_Delegate* p_b)
{
	return 1;
}

t_System_Delegate* m_System_Delegate_Combine_0(t_System_Delegate* p_a, t_System_Delegate* p_b)
{
	t_System_MulticastDelegate* l_ma_0;
	t_System_MulticastDelegate* l_mb_1;
	t_System_MulticastDelegate* l_last_2;
	if (p_a == 0) return p_b;
	l_ma_0 = (t_System_MulticastDelegate*)CS2X_TestUpCast(p_a, &rt_System_MulticastDelegate_OBJ);
	l_mb_1 = (t_System_MulticastDelegate*)CS2X_TestUpCast(p_b, &rt_System_MulticastDelegate_OBJ);
	l_last_2 = l_ma_0;
	while (l_last_2->f__next_2 != 0) l_last_2 = l_last_2->f__next_2;
	l_last_2->f__next_2 = l_mb_1;
	return p_a;
}

t_System_Delegate* m_System_Delegate_Remove_0(t_System_Delegate* p_source, t_System_Delegate* p_value)
{
	t_System_MulticastDelegate* l_next_0;
	t_System_MulticastDelegate* l_prev_1;
	t_System_MulticastDelegate* l_last_2;
	t_System_MulticastDelegate* l_lastPrev_3;
	if (p_source == 0) return 0;
	if (p_value == 0) return p_source;
	l_next_0 = (t_System_MulticastDelegate*)CS2X_TestUpCast(p_source, &rt_System_MulticastDelegate_OBJ);
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
			t_System_MulticastDelegate* l_multiSource_4;
			l_multiSource_4 = (t_System_MulticastDelegate*)CS2X_TestUpCast(p_source, &rt_System_MulticastDelegate_OBJ);
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

t_System_Delegate* m_System_Delegate_RemoveAll_0(t_System_Delegate* p_source, t_System_Delegate* p_value)
{
	t_System_MulticastDelegate* l_next_0;
	t_System_MulticastDelegate* l_prev_1;
	if (p_source == 0) return 0;
	if (p_value == 0) return p_source;
	l_next_0 = (t_System_MulticastDelegate*)CS2X_TestUpCast(p_source, &rt_System_MulticastDelegate_OBJ);
	l_prev_1 = 0;
	while (l_next_0 != 0)
	{
		t_System_MulticastDelegate* l_nextItem_2;
		l_nextItem_2 = l_next_0->f__next_2;
		if (l_next_0->f__methodPtr_1 == p_value->f__methodPtr_1 && l_next_0->f__target_1 == p_value->f__target_1)
		{
			if (l_next_0 == p_source)
			{
				p_source = l_next_0->f__next_2;
				l_next_0->f__next_2 = 0;
			}
			else
			if (l_prev_1 != 0)
			{
				l_prev_1->f__next_2 = l_next_0->f__next_2;
				l_next_0->f__next_2 = 0;
			}
		}
		l_prev_1 = l_next_0;
		l_next_0 = l_nextItem_2;
	}
	return p_source;
}

t_System_Delegate* m_System_Delegate__ctor_0(t_System_Delegate* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_System_DllNotFoundException* m_System_DllNotFoundException__ctor_0(t_System_DllNotFoundException* self)
{
	m_System_Exception__ctor_0(self);
	return self;
}

t_System_Enum* m_System_Enum__ctor_0(t_System_Enum* self)
{
	m_System_ValueType__ctor_0(self);
	return self;
}

t_System_String* m_System_Environment_get_NewLine_0()
{
	return StringLiteral_0;
}

t_System_Exception* m_System_Exception__ctor_0(t_System_Exception* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_System_Exception* m_System_Exception__ctor_1(t_System_Exception* self, t_System_String* p_message)
{
	m_System_Object__ctor_0(self);
	self->f__Message_k__BackingField_1 = p_message;
	return self;
}

t_System_String* m_System_Exception_get_Message_0(t_System_Exception* self)
{
	return self->f__Message_k__BackingField_1;
}

t_System_FlagsAttribute* m_System_FlagsAttribute__ctor_0(t_System_FlagsAttribute* self)
{
	m_System_Attribute__ctor_0(self);
	return self;
}

t_System_IndexOutOfRangeException* m_System_IndexOutOfRangeException__ctor_0(t_System_IndexOutOfRangeException* self)
{
	m_System_Exception__ctor_0(self);
	return self;
}

t_System_InvalidCastException* m_System_InvalidCastException__ctor_0(t_System_InvalidCastException* self)
{
	m_System_Exception__ctor_0(self);
	return self;
}

double m_double__ctor_0()
{
	double selfObj = {0};
	return selfObj;
}

char m_float_IsNaN_0(float p_f)
{
	int32_t l_bits_0;
	l_bits_0 = m_System_BitConverter_SingleToInt32Bits_0(p_f);
	return (l_bits_0 & 2147483647) > 2139095040;
}

char m_float_IsNegative_0(float p_f)
{
	return m_System_BitConverter_SingleToInt32Bits_0(p_f) < 0;
}

float m_float__ctor_0()
{
	float selfObj = {0};
	return selfObj;
}

t_System_MulticastDelegate* m_System_MulticastDelegate__ctor_0(t_System_MulticastDelegate* self)
{
	m_System_Delegate__ctor_0(self);
	return self;
}

t_System_NotSupportedException* m_System_NotSupportedException__ctor_0(t_System_NotSupportedException* self, t_System_String* p_message)
{
	m_System_Exception__ctor_1(self, p_message);
	return self;
}

t_System_Type* m_System_Object_GetType_0(t_System_Object* self)
{
	return (t_System_Type*)self->CS2X_RuntimeType;
}

t_System_Object* m_System_Object__ctor_0(t_System_Object* self)
{
	return self;
}

t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_0(t_System_ObsoleteAttribute* self)
{
	m_System_Attribute__ctor_0(self);
	return self;
}

t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_1(t_System_ObsoleteAttribute* self, t_System_String* p_message)
{
	m_System_Attribute__ctor_0(self);
	self->f__message_2 = p_message;
	return self;
}

t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_2(t_System_ObsoleteAttribute* self, t_System_String* p_message, char p_error)
{
	m_System_Attribute__ctor_0(self);
	self->f__message_2 = p_message;
	self->f__error_2 = p_error;
	return self;
}

char m_System_ObsoleteAttribute_get_IsError_0(t_System_ObsoleteAttribute* self)
{
	return self->f__error_2;
}

t_System_String* m_System_ObsoleteAttribute_get_Message_0(t_System_ObsoleteAttribute* self)
{
	return self->f__message_2;
}

t_System_RuntimeType* m_System_RuntimeType__ctor_0(t_System_RuntimeType* self)
{
	m_System_Type__ctor_0(self);
	return self;
}

char16_t m_char16_t__ctor_0()
{
	char16_t selfObj = {0};
	return selfObj;
}

t_System_String* m_int32_t_ToString_0(int32_t* self)
{
	return f_System_String_Empty;
}

int32_t m_int32_t__ctor_0()
{
	int32_t selfObj = {0};
	return selfObj;
}

t_System_String* m_System_String__ctor_0(t_System_String* self, char16_t* p_value)
{
	int length = 0;
	char16_t* charOffset;
	charOffset = p_value;
	while (*charOffset != 0)
	{
		++charOffset;
		++length;
	}
	CS2X_GC_Resize(self, sizeof(intptr_t) + sizeof(int32_t) + sizeof(char16_t), sizeof(intptr_t) + sizeof(int32_t) + sizeof(char16_t) + (sizeof(char16_t) * length));
	self->f__stringLength_1 = length;
	memcpy(&self->f__firstChar_1, p_value, sizeof(char16_t) * length);
	return self;
}

char16_t m_System_String_get_Item_0(t_System_String* self, int32_t p_index)
{
	char16_t* l__firstCharPtr_0;
	l__firstCharPtr_0 = &self->f__firstChar_1;
	{
		return l__firstCharPtr_0[p_index];
	}
}

int32_t m_System_String_get_Length_0(t_System_String* self)
{
	return self->f__stringLength_1;
}

t_System_String* m_System_String_FastAllocateString_0(int32_t p_length)
{
	t_System_String* result = CS2X_GC_NewAtomic(sizeof(intptr_t) + sizeof(int32_t) + sizeof(char16_t) + (sizeof(char16_t) * p_length));
	result->CS2X_RuntimeType = &rt_System_String_OBJ;
	result->f__stringLength_1 = p_length;
	return result;
}

char m_System_String_IsNullOrEmpty_0(t_System_String* p_value)
{
	return (p_value == 0 || 0 >= (uint32_t)m_System_String_get_Length_0(p_value)) ? 1 : 0;
}

void m_System_String_FillStringChecked_0(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src)
{
	char16_t* l_pDest_0;
	char16_t* l_pSrc_1;
	if (m_System_String_get_Length_0(p_src) > m_System_String_get_Length_0(p_dest) - p_destPos)
	{
		CS2X_ThreadExceptionObject = m_System_IndexOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t_System_IndexOutOfRangeException), &rt_System_IndexOutOfRangeException_OBJ));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	l_pDest_0 = &p_dest->f__firstChar_1;
	l_pSrc_1 = &p_src->f__firstChar_1;
	{
		memcpy(l_pDest_0 + p_destPos, l_pSrc_1, (void*)(m_System_String_get_Length_0(p_src) * sizeof(char16_t)));
	}
}

t_System_String* m_System_String_Concat_0(t_System_String* p_str0, t_System_String* p_str1)
{
	int32_t l_str0Length_0;
	t_System_String* l_result_1;
	if (m_System_String_IsNullOrEmpty_0(p_str0))
	{
		if (m_System_String_IsNullOrEmpty_0(p_str1))
		{
			return f_System_String_Empty;
		}
		return p_str1;
	}
	if (m_System_String_IsNullOrEmpty_0(p_str1))
	{
		return p_str0;
	}
	l_str0Length_0 = m_System_String_get_Length_0(p_str0);
	l_result_1 = m_System_String_FastAllocateString_0(l_str0Length_0 + m_System_String_get_Length_0(p_str1));
	m_System_String_FillStringChecked_0(l_result_1, 0, p_str0);
	m_System_String_FillStringChecked_0(l_result_1, l_str0Length_0, p_str1);
	return l_result_1;
}

t_System_String* m_System_String_Concat_1(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2)
{
	int32_t l_totalLength_0;
	t_System_String* l_result_1;
	if (m_System_String_IsNullOrEmpty_0(p_str0))
	{
		return m_System_String_Concat_0(p_str1, p_str2);
	}
	if (m_System_String_IsNullOrEmpty_0(p_str1))
	{
		return m_System_String_Concat_0(p_str0, p_str2);
	}
	if (m_System_String_IsNullOrEmpty_0(p_str2))
	{
		return m_System_String_Concat_0(p_str0, p_str1);
	}
	l_totalLength_0 = m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1) + m_System_String_get_Length_0(p_str2);
	l_result_1 = m_System_String_FastAllocateString_0(l_totalLength_0);
	m_System_String_FillStringChecked_0(l_result_1, 0, p_str0);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0), p_str1);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1), p_str2);
	return l_result_1;
}

t_System_String* m_System_String_Concat_2(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2, t_System_String* p_str3)
{
	int32_t l_totalLength_0;
	t_System_String* l_result_1;
	if (m_System_String_IsNullOrEmpty_0(p_str0))
	{
		return m_System_String_Concat_1(p_str1, p_str2, p_str3);
	}
	if (m_System_String_IsNullOrEmpty_0(p_str1))
	{
		return m_System_String_Concat_1(p_str0, p_str2, p_str3);
	}
	if (m_System_String_IsNullOrEmpty_0(p_str2))
	{
		return m_System_String_Concat_1(p_str0, p_str1, p_str3);
	}
	if (m_System_String_IsNullOrEmpty_0(p_str3))
	{
		return m_System_String_Concat_1(p_str0, p_str1, p_str2);
	}
	l_totalLength_0 = m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1) + m_System_String_get_Length_0(p_str2) + m_System_String_get_Length_0(p_str3);
	l_result_1 = m_System_String_FastAllocateString_0(l_totalLength_0);
	m_System_String_FillStringChecked_0(l_result_1, 0, p_str0);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0), p_str1);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1), p_str2);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1) + m_System_String_get_Length_0(p_str2), p_str3);
	return l_result_1;
}

char m_System_String_op_Equality_0(t_System_String* p_value1, t_System_String* p_value2)
{
	return m_System_String_Equals_0(p_value1, p_value2);
}

char m_System_String_op_Inequality_0(t_System_String* p_value1, t_System_String* p_value2)
{
	return !m_System_String_Equals_0(p_value1, p_value2);
}

char m_System_String_Equals_0(t_System_String* self, t_System_String* p_value)
{
	if (m_System_String_get_Length_0(self) != m_System_String_get_Length_0(p_value)) return 0;
	return 1;
}

t_System_Type* m_System_Type_GetTypeFromHandle_0(t_System_RuntimeTypeHandle p_handle)
{
	return p_handle.f_m_type_2;
}

t_System_Type* m_System_Type__ctor_0(t_System_Type* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_System_ValueType* m_System_ValueType__ctor_0(t_System_ValueType* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute__ctor_0(t_System_Reflection_AssemblyCompanyAttribute* self, t_System_String* p_company)
{
	m_System_Attribute__ctor_0(self);
	self->f__company_2 = p_company;
	return self;
}

t_System_String* m_System_Reflection_AssemblyCompanyAttribute_get_Company_0(t_System_Reflection_AssemblyCompanyAttribute* self)
{
	return self->f__company_2;
}

t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t_System_Reflection_AssemblyConfigurationAttribute* self, t_System_String* p_configuration)
{
	m_System_Attribute__ctor_0(self);
	self->f__configuration_2 = p_configuration;
	return self;
}

t_System_String* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0(t_System_Reflection_AssemblyConfigurationAttribute* self)
{
	return self->f__configuration_2;
}

t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t_System_Reflection_AssemblyCopyrightAttribute* self, t_System_String* p_copyright)
{
	m_System_Attribute__ctor_0(self);
	self->f__copyright_2 = p_copyright;
	return self;
}

t_System_String* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0(t_System_Reflection_AssemblyCopyrightAttribute* self)
{
	return self->f__copyright_2;
}

t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute__ctor_0(t_System_Reflection_AssemblyCultureAttribute* self, t_System_String* p_culture)
{
	m_System_Attribute__ctor_0(self);
	self->f__culture_2 = p_culture;
	return self;
}

t_System_String* m_System_Reflection_AssemblyCultureAttribute_get_Culture_0(t_System_Reflection_AssemblyCultureAttribute* self)
{
	return self->f__culture_2;
}

t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute__ctor_0(t_System_Reflection_AssemblyDelaySignAttribute* self, char p_delaySign)
{
	m_System_Attribute__ctor_0(self);
	self->f__delaySign_2 = p_delaySign;
	return self;
}

char m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0(t_System_Reflection_AssemblyDelaySignAttribute* self)
{
	return self->f__delaySign_2;
}

t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t_System_Reflection_AssemblyDescriptionAttribute* self, t_System_String* p_description)
{
	m_System_Attribute__ctor_0(self);
	self->f__description_2 = p_description;
	return self;
}

t_System_String* m_System_Reflection_AssemblyDescriptionAttribute_get_Description_0(t_System_Reflection_AssemblyDescriptionAttribute* self)
{
	return self->f__description_2;
}

t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t_System_Reflection_AssemblyFileVersionAttribute* self, t_System_String* p_version)
{
	m_System_Attribute__ctor_0(self);
	self->f__version_2 = p_version;
	return self;
}

t_System_String* m_System_Reflection_AssemblyFileVersionAttribute_get_Version_0(t_System_Reflection_AssemblyFileVersionAttribute* self)
{
	return self->f__version_2;
}

t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t_System_Reflection_AssemblyInformationalVersionAttribute* self, t_System_String* p_informationalVersion)
{
	m_System_Attribute__ctor_0(self);
	self->f__informationalVersion_2 = p_informationalVersion;
	return self;
}

t_System_String* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0(t_System_Reflection_AssemblyInformationalVersionAttribute* self)
{
	return self->f__informationalVersion_2;
}

t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t_System_Reflection_AssemblyKeyFileAttribute* self, t_System_String* p_keyFile)
{
	m_System_Attribute__ctor_0(self);
	self->f__keyFile_2 = p_keyFile;
	return self;
}

t_System_String* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0(t_System_Reflection_AssemblyKeyFileAttribute* self)
{
	return self->f__keyFile_2;
}

t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute__ctor_0(t_System_Reflection_AssemblyProductAttribute* self, t_System_String* p_product)
{
	m_System_Attribute__ctor_0(self);
	self->f__product_2 = p_product;
	return self;
}

t_System_String* m_System_Reflection_AssemblyProductAttribute_get_Product_0(t_System_Reflection_AssemblyProductAttribute* self)
{
	return self->f__product_2;
}

t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute__ctor_0(t_System_Reflection_AssemblyTitleAttribute* self, t_System_String* p_title)
{
	m_System_Attribute__ctor_0(self);
	self->f__title_2 = p_title;
	return self;
}

t_System_String* m_System_Reflection_AssemblyTitleAttribute_get_Title_0(t_System_Reflection_AssemblyTitleAttribute* self)
{
	return self->f__title_2;
}

t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t_System_Reflection_AssemblyTrademarkAttribute* self, t_System_String* p_trademark)
{
	m_System_Attribute__ctor_0(self);
	self->f__trademark_2 = p_trademark;
	return self;
}

t_System_String* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0(t_System_Reflection_AssemblyTrademarkAttribute* self)
{
	return self->f__trademark_2;
}

t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute__ctor_0(t_System_Reflection_AssemblyVersionAttribute* self, t_System_String* p_version)
{
	m_System_Attribute__ctor_0(self);
	self->f__version_2 = p_version;
	return self;
}

t_System_String* m_System_Reflection_AssemblyVersionAttribute_get_Version_0(t_System_Reflection_AssemblyVersionAttribute* self)
{
	return self->f__version_2;
}

t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute__ctor_0(t_System_Reflection_DefaultMemberAttribute* self, t_System_String* p_memberName)
{
	m_System_Attribute__ctor_0(self);
	self->f__memberName_2 = p_memberName;
	return self;
}

t_System_String* m_System_Reflection_DefaultMemberAttribute_get_MemberName_0(t_System_Reflection_DefaultMemberAttribute* self)
{
	return self->f__memberName_2;
}

t_System_Runtime_CompilerServices_ExtensionAttribute* m_System_Runtime_CompilerServices_ExtensionAttribute__ctor_0(t_System_Runtime_CompilerServices_ExtensionAttribute* self)
{
	m_System_Attribute__ctor_0(self);
	return self;
}

t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplOptions__ctor_0()
{
	t_System_Runtime_CompilerServices_MethodImplOptions selfObj = {0};
	return selfObj;
}

t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t_System_Runtime_CompilerServices_MethodImplAttribute* self, t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions)
{
	m_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = p_methodImplOptions;
	return self;
}

t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(t_System_Runtime_CompilerServices_MethodImplAttribute* self, int16_t p_value)
{
	m_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = (t_System_Runtime_CompilerServices_MethodImplOptions)p_value;
	return self;
}

t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2(t_System_Runtime_CompilerServices_MethodImplAttribute* self)
{
	m_System_Attribute__ctor_0(self);
	return self;
}

int32_t m_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0()
{
	return sizeof(void*) + sizeof(int32_t);
}

t_System_Runtime_InteropServices_CallingConvention m_System_Runtime_InteropServices_CallingConvention__ctor_0()
{
	t_System_Runtime_InteropServices_CallingConvention selfObj = {0};
	return selfObj;
}

t_System_Runtime_InteropServices_DllImportAttribute* m_System_Runtime_InteropServices_DllImportAttribute__ctor_0(t_System_Runtime_InteropServices_DllImportAttribute* self, t_System_String* p_dllName)
{
	m_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = p_dllName;
	return self;
}

intptr_t m_System_Runtime_InteropServices_Marshal_StringToHGlobalAnsi_0(t_System_String* p_s)
{
	char16_t* l_chars_0;
	l_chars_0 = ((char*)p_s) + m_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	{
		int32_t l_byteCount_1;
		uint8_t* l_buffer_2;
		l_byteCount_1 = m_System_Text_Encoding_GetByteCount_3(f_System_Text_Encoding__ASCII_k__BackingField, l_chars_0, m_System_String_get_Length_0(p_s));
		l_buffer_2 = (uint8_t*)malloc((void*)l_byteCount_1);
		m_System_Text_Encoding_GetBytes_4(f_System_Text_Encoding__ASCII_k__BackingField, l_chars_0, m_System_String_get_Length_0(p_s), l_buffer_2, l_byteCount_1);
		return m_intptr_t__ctor_0(l_buffer_2);
	}
}

intptr_t m_System_Runtime_InteropServices_Marshal_StringToHGlobalUni_0(t_System_String* p_s)
{
	char16_t* l_chars_0;
	l_chars_0 = ((char*)p_s) + m_System_Runtime_CompilerServices_RuntimeHelpers_get_OffsetToStringData_0();
	{
		int32_t l_byteCount_1;
		uint8_t* l_buffer_2;
		l_byteCount_1 = m_System_Text_Encoding_GetByteCount_3(f_System_Text_Encoding__Unicode_k__BackingField, l_chars_0, m_System_String_get_Length_0(p_s));
		l_buffer_2 = (uint8_t*)malloc((void*)l_byteCount_1);
		m_System_Text_Encoding_GetBytes_4(f_System_Text_Encoding__Unicode_k__BackingField, l_chars_0, m_System_String_get_Length_0(p_s), l_buffer_2, l_byteCount_1);
		return m_intptr_t__ctor_0(l_buffer_2);
	}
}

void m_System_Runtime_InteropServices_Marshal_FreeHGlobal_0(intptr_t p_hglobal)
{
	free((void*)p_hglobal);
}

intptr_t m_System_Runtime_InteropServices_Marshal_GetNativePointerForObject_0(t_System_Object* p_o)
{
	return (intptr_t)p_o;
}

t_System_Runtime_InteropServices_OutAttribute* m_System_Runtime_InteropServices_OutAttribute__ctor_0(t_System_Runtime_InteropServices_OutAttribute* self)
{
	m_System_Attribute__ctor_0(self);
	return self;
}

t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_LayoutKind__ctor_0()
{
	t_System_Runtime_InteropServices_LayoutKind selfObj = {0};
	return selfObj;
}

t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t_System_Runtime_InteropServices_StructLayoutAttribute* self, t_System_Runtime_InteropServices_LayoutKind p_layoutKind)
{
	m_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = p_layoutKind;
	return self;
}

t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(t_System_Runtime_InteropServices_StructLayoutAttribute* self, int16_t p_layoutKind)
{
	m_System_Attribute__ctor_0(self);
	self->f__Value_k__BackingField_2 = (t_System_Runtime_InteropServices_LayoutKind)p_layoutKind;
	return self;
}

t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t_System_Runtime_Versioning_TargetFrameworkAttribute* self, t_System_String* p_frameworkName)
{
	m_System_Attribute__ctor_0(self);
	self->f__FrameworkName_k__BackingField_2 = p_frameworkName;
	return self;
}

void m_System_Text_Encoding__cctor_0()
{
	f_System_Text_Encoding__Default_k__BackingField = m_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_Text_StandardEncoding), &rt_System_Text_StandardEncoding_OBJ));
	f_System_Text_Encoding__Default_k__BackingField->f__CodePage_k__BackingField_1 = (int32_t)GetACP();
	f_System_Text_Encoding__ASCII_k__BackingField = m_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_Text_StandardEncoding), &rt_System_Text_StandardEncoding_OBJ));
	f_System_Text_Encoding__ASCII_k__BackingField->f__CodePage_k__BackingField_1 = 20127;
	f_System_Text_Encoding__UTF7_k__BackingField = m_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_Text_StandardEncoding), &rt_System_Text_StandardEncoding_OBJ));
	f_System_Text_Encoding__UTF7_k__BackingField->f__CodePage_k__BackingField_1 = 65000;
	f_System_Text_Encoding__UTF8_k__BackingField = m_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_Text_StandardEncoding), &rt_System_Text_StandardEncoding_OBJ));
	f_System_Text_Encoding__UTF8_k__BackingField->f__CodePage_k__BackingField_1 = 65001;
	f_System_Text_Encoding__Unicode_k__BackingField = m_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_Text_StandardEncoding), &rt_System_Text_StandardEncoding_OBJ));
	f_System_Text_Encoding__Unicode_k__BackingField->f__CodePage_k__BackingField_1 = 1200;
	f_System_Text_Encoding__BigEndianUnicode_k__BackingField = m_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_Text_StandardEncoding), &rt_System_Text_StandardEncoding_OBJ));
	f_System_Text_Encoding__BigEndianUnicode_k__BackingField->f__CodePage_k__BackingField_1 = 1201;
	f_System_Text_Encoding__UTF32_k__BackingField = m_System_Text_StandardEncoding__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_Text_StandardEncoding), &rt_System_Text_StandardEncoding_OBJ));
	f_System_Text_Encoding__UTF32_k__BackingField->f__CodePage_k__BackingField_1 = 12000;
}

int32_t m_System_Text_Encoding_GetByteCount_0(t_System_Text_Encoding* self, char16_t* p_chars)
{
	return m_System_Text_Encoding_GetByteCount_2(self, p_chars, 0, m_System_Array_get_Length_0(p_chars));
}

int32_t m_System_Text_Encoding_GetByteCount_1(t_System_Text_Encoding* self, t_System_String* p_s)
{
	char16_t* l_sBuffer_0;
	l_sBuffer_0 = &p_s->f__firstChar_1;
	{
		uint32_t l_codePage_1;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_1, 0, l_sBuffer_0, -1, 0, 0, 0, 0);
	}
}

int32_t m_System_Text_Encoding_GetByteCount_2(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count)
{
	char16_t* l_charsPtr_0;
	l_charsPtr_0 = (char16_t*)(((char*)p_chars) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_1;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_1, 0, l_charsPtr_0 + p_index, p_count, 0, 0, 0, 0);
	}
}

int32_t m_System_Text_Encoding_GetByteCount_3(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_count)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return WideCharToMultiByte(l_codePage_0, 0, p_chars, p_count, 0, 0, 0, 0);
}

uint8_t* m_System_Text_Encoding_GetBytes_0(t_System_Text_Encoding* self, char16_t* p_chars)
{
	return m_System_Text_Encoding_GetBytes_1(self, p_chars, 0, m_System_Array_get_Length_0(p_chars));
}

uint8_t* m_System_Text_Encoding_GetBytes_1(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_index, int32_t p_count)
{
	char16_t* l_charsPtr_0;
	l_charsPtr_0 = (char16_t*)(((char*)p_chars) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_1;
		int32_t l_bufferSize_2;
		uint8_t* l_buffer_3;
		uint8_t* l_bufferPtr_4;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		l_bufferSize_2 = WideCharToMultiByte(l_codePage_1, 0, l_charsPtr_0, -1, 0, 0, 0, 0);
		l_buffer_3 = CS2X_AllocArrayTypeAtomic(sizeof(uint8_t), l_bufferSize_2, &rt_System_Byte___ARRAY_OBJ);
		l_bufferPtr_4 = (uint8_t*)(((char*)l_buffer_3) + (sizeof(size_t)*2));
		WideCharToMultiByte(l_codePage_1, 0, l_charsPtr_0 + p_index, p_count, l_bufferPtr_4, l_bufferSize_2, 0, 0);
		return l_buffer_3;
	}
}

int32_t m_System_Text_Encoding_GetBytes_2(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex)
{
	char16_t* l_charsPtr_0;
	uint8_t* l_bytesPtr_1;
	l_charsPtr_0 = (char16_t*)(((char*)p_chars) + (sizeof(size_t)*2));
	l_bytesPtr_1 = (uint8_t*)(((char*)p_bytes) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_2;
		l_codePage_2 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_2, 0, l_charsPtr_0 + p_charIndex, p_charCount, l_bytesPtr_1 + p_byteIndex, m_System_Array_get_Length_0(p_bytes), 0, 0);
	}
}

int32_t m_System_Text_Encoding_GetBytes_3(t_System_Text_Encoding* self, t_System_String* p_s, int32_t p_charIndex, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteIndex)
{
	char16_t* l_sBuffer_0;
	uint8_t* l_bytesPtr_1;
	l_sBuffer_0 = &p_s->f__firstChar_1;
	l_bytesPtr_1 = (uint8_t*)(((char*)p_bytes) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_2;
		l_codePage_2 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return WideCharToMultiByte(l_codePage_2, 0, l_sBuffer_0 + p_charIndex, p_charCount, l_bytesPtr_1 + p_byteIndex, m_System_Array_get_Length_0(p_bytes), 0, 0);
	}
}

int32_t m_System_Text_Encoding_GetBytes_4(t_System_Text_Encoding* self, char16_t* p_chars, int32_t p_charCount, uint8_t* p_bytes, int32_t p_byteCount)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return WideCharToMultiByte(l_codePage_0, 0, p_chars, p_charCount, p_bytes, p_byteCount, 0, 0);
}

uint8_t* m_System_Text_Encoding_GetBytes_5(t_System_Text_Encoding* self, t_System_String* p_s)
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
		l_buffer_3 = CS2X_AllocArrayTypeAtomic(sizeof(uint8_t), l_bufferSize_2, &rt_System_Byte___ARRAY_OBJ);
		l_bufferPtr_4 = (uint8_t*)(((char*)l_buffer_3) + (sizeof(size_t)*2));
		WideCharToMultiByte(l_codePage_1, 0, l_sBuffer_0, -1, l_bufferPtr_4, l_bufferSize_2, 0, 0);
		return l_buffer_3;
	}
}

int32_t m_System_Text_Encoding_GetCharCount_0(t_System_Text_Encoding* self, uint8_t* p_bytes)
{
	return m_System_Text_Encoding_GetCharCount_1(self, p_bytes, 0, m_System_Array_get_Length_0(p_bytes));
}

int32_t m_System_Text_Encoding_GetCharCount_1(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count)
{
	uint8_t* l_bytesPtr_0;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_1;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, 0, 0);
	}
}

int32_t m_System_Text_Encoding_GetCharCount_2(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_count)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return MultiByteToWideChar(l_codePage_0, 0, p_bytes, p_count, 0, 0);
}

int32_t m_System_Text_Encoding_GetChars_0(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteCount, char16_t* p_chars, int32_t p_charCount)
{
	uint32_t l_codePage_0;
	l_codePage_0 = (uint32_t)self->f__CodePage_k__BackingField_1;
	return MultiByteToWideChar(l_codePage_0, 0, p_bytes, p_byteCount, p_chars, p_charCount);
}

char16_t* m_System_Text_Encoding_GetChars_1(t_System_Text_Encoding* self, uint8_t* p_bytes)
{
	return m_System_Text_Encoding_GetChars_2(self, p_bytes, 0, m_System_Array_get_Length_0(p_bytes));
}

char16_t* m_System_Text_Encoding_GetChars_2(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count)
{
	uint8_t* l_bytesPtr_0;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_1;
		int32_t l_bufferSize_2;
		char16_t* l_buffer_3;
		char16_t* l_bufferPtr_4;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		l_bufferSize_2 = MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, 0, 0);
		l_buffer_3 = CS2X_AllocArrayTypeAtomic(sizeof(char16_t), l_bufferSize_2, &rt_System_Char___ARRAY_OBJ);
		l_bufferPtr_4 = (char16_t*)(((char*)l_buffer_3) + (sizeof(size_t)*2));
		MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, l_bufferPtr_4, l_bufferSize_2);
		return l_buffer_3;
	}
}

int32_t m_System_Text_Encoding_GetChars_3(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_byteIndex, int32_t p_byteCount, char16_t* p_chars, int32_t p_charIndex)
{
	uint8_t* l_bytesPtr_0;
	char16_t* l_charsPtr_1;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + (sizeof(size_t)*2));
	l_charsPtr_1 = (char16_t*)(((char*)p_chars) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_2;
		l_codePage_2 = (uint32_t)self->f__CodePage_k__BackingField_1;
		return MultiByteToWideChar(l_codePage_2, 0, l_bytesPtr_0 + p_byteIndex, p_byteCount, l_charsPtr_1 + p_charIndex, m_System_Array_get_Length_0(p_chars));
	}
}

t_System_String* m_System_Text_Encoding_GetString_0(t_System_Text_Encoding* self, uint8_t* p_bytes)
{
	return m_System_Text_Encoding_GetString_1(self, p_bytes, 0, m_System_Array_get_Length_0(p_bytes));
}

t_System_String* m_System_Text_Encoding_GetString_1(t_System_Text_Encoding* self, uint8_t* p_bytes, int32_t p_index, int32_t p_count)
{
	uint8_t* l_bytesPtr_0;
	l_bytesPtr_0 = (uint8_t*)(((char*)p_bytes) + (sizeof(size_t)*2));
	{
		uint32_t l_codePage_1;
		int32_t l_bufferSize_2;
		char16_t* l_buffer_3;
		l_codePage_1 = (uint32_t)self->f__CodePage_k__BackingField_1;
		l_bufferSize_2 = MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, 0, 0);
		l_buffer_3 = alloca(sizeof(char16_t) * l_bufferSize_2);
		MultiByteToWideChar(l_codePage_1, 0, l_bytesPtr_0 + p_index, p_count, l_buffer_3, l_bufferSize_2);
		return m_System_String__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_System_String), &rt_System_String_OBJ), l_buffer_3);
	}
}

t_System_Text_Encoding* m_System_Text_Encoding__ctor_0(t_System_Text_Encoding* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_System_Text_StandardEncoding* m_System_Text_StandardEncoding__ctor_0(t_System_Text_StandardEncoding* self)
{
	m_System_Text_Encoding__ctor_0(self);
	return self;
}

t_System_Text_StringBuilder* m_System_Text_StringBuilder__ctor_0(t_System_Text_StringBuilder* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

uint8_t m_uint8_t__ctor_0()
{
	uint8_t selfObj = {0};
	return selfObj;
}

time_t m_time_t__ctor_0()
{
	time_t selfObj = {0};
	return selfObj;
}

int64_t m_System_DateTime_TODO_0(t_System_DateTime* self)
{
	time_t l_i_0;
	self->f__internalDate_2 = 123;
	l_i_0 = self->f__internalDate_2;
	return (int64_t)l_i_0;
}

t_System_DateTime m_System_DateTime__ctor_0()
{
	t_System_DateTime selfObj = {0};
	return selfObj;
}

int16_t m_int16_t__ctor_0()
{
	int16_t selfObj = {0};
	return selfObj;
}

int64_t m_int64_t__ctor_0()
{
	int64_t selfObj = {0};
	return selfObj;
}

t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor_0(t_System_RuntimeType* p_type)
{
	t_System_RuntimeTypeHandle selfObj;
	t_System_RuntimeTypeHandle* self = &selfObj;
	self->f_m_type_2 = p_type;
	return selfObj;
}

t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor_1()
{
	t_System_RuntimeTypeHandle selfObj = {0};
	return selfObj;
}

int8_t m_int8_t__ctor_0()
{
	int8_t selfObj = {0};
	return selfObj;
}

uint16_t m_uint16_t__ctor_0()
{
	uint16_t selfObj = {0};
	return selfObj;
}

uint32_t m_uint32_t__ctor_0()
{
	uint32_t selfObj = {0};
	return selfObj;
}

uint64_t m_uint64_t__ctor_0()
{
	uint64_t selfObj = {0};
	return selfObj;
}

uintptr_t m_uintptr_t__ctor_0(void* p_value)
{
	uintptr_t selfObj;
	uintptr_t* self = &selfObj;
	return (uintptr_t)p_value;
	return selfObj;
}

uintptr_t m_uintptr_t__ctor_1()
{
	uintptr_t selfObj = {0};
	return selfObj;
}

t_System_Reflection_MethodImplAttributes m_System_Reflection_MethodImplAttributes__ctor_0()
{
	t_System_Reflection_MethodImplAttributes selfObj = {0};
	return selfObj;
}

/* =============================== */
/* Init Library */
/* =============================== */
void CS2X_InitLib_CS2X_CoreLib()
{
	/* Init runtime type objects */
	memset(&rt_System_Activator_OBJ, 0, sizeof(rt_System_Activator));
	rt_System_Activator_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Activator_OBJ;
	rt_System_Activator_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Activator_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Activator_METADATA_Name;
	rt_System_Activator_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Activator_METADATA_FullName;
	memset(&rt_System_Array_OBJ, 0, sizeof(rt_System_Array));
	rt_System_Array_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Array_OBJ;
	rt_System_Array_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Array_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Array_METADATA_Name;
	rt_System_Array_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Array_METADATA_FullName;
	memset(&rt_System_Attribute_OBJ, 0, sizeof(rt_System_Attribute));
	rt_System_Attribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Attribute_OBJ;
	rt_System_Attribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Attribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Attribute_METADATA_Name;
	rt_System_Attribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Attribute_METADATA_FullName;
	memset(&rt_System_Boolean_OBJ, 0, sizeof(rt_System_Boolean));
	rt_System_Boolean_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Boolean_OBJ;
	rt_System_Boolean_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Boolean_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Boolean_METADATA_Name;
	rt_System_Boolean_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Boolean_METADATA_FullName;
	memset(&rt_System_AttributeTargets_OBJ, 0, sizeof(rt_System_AttributeTargets));
	rt_System_AttributeTargets_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_AttributeTargets_OBJ;
	rt_System_AttributeTargets_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_System_AttributeTargets_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_AttributeTargets_METADATA_Name;
	rt_System_AttributeTargets_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_AttributeTargets_METADATA_FullName;
	memset(&rt_System_AttributeUsageAttribute_OBJ, 0, sizeof(rt_System_AttributeUsageAttribute));
	rt_System_AttributeUsageAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_AttributeUsageAttribute_OBJ;
	rt_System_AttributeUsageAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_AttributeUsageAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_AttributeUsageAttribute_METADATA_Name;
	rt_System_AttributeUsageAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_AttributeUsageAttribute_METADATA_FullName;
	memset(&rt_System_BitConverter_OBJ, 0, sizeof(rt_System_BitConverter));
	rt_System_BitConverter_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_BitConverter_OBJ;
	rt_System_BitConverter_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_BitConverter_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_BitConverter_METADATA_Name;
	rt_System_BitConverter_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_BitConverter_METADATA_FullName;
	memset(&rt_System_Buffer_OBJ, 0, sizeof(rt_System_Buffer));
	rt_System_Buffer_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Buffer_OBJ;
	rt_System_Buffer_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Buffer_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Buffer_METADATA_Name;
	rt_System_Buffer_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Buffer_METADATA_FullName;
	memset(&rt_System_Console_OBJ, 0, sizeof(rt_System_Console));
	rt_System_Console_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Console_OBJ;
	rt_System_Console_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Console_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Console_METADATA_Name;
	rt_System_Console_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Console_METADATA_FullName;
	memset(&rt_System_IntPtr_OBJ, 0, sizeof(rt_System_IntPtr));
	rt_System_IntPtr_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_IntPtr_OBJ;
	rt_System_IntPtr_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_IntPtr_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_IntPtr_METADATA_Name;
	rt_System_IntPtr_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_IntPtr_METADATA_FullName;
	memset(&rt_System_Delegate_OBJ, 0, sizeof(rt_System_Delegate));
	rt_System_Delegate_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Delegate_OBJ;
	rt_System_Delegate_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Delegate_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Delegate_METADATA_Name;
	rt_System_Delegate_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Delegate_METADATA_FullName;
	memset(&rt_System_DllNotFoundException_OBJ, 0, sizeof(rt_System_DllNotFoundException));
	rt_System_DllNotFoundException_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_DllNotFoundException_OBJ;
	rt_System_DllNotFoundException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Exception_OBJ;
	rt_System_DllNotFoundException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_DllNotFoundException_METADATA_Name;
	rt_System_DllNotFoundException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_DllNotFoundException_METADATA_FullName;
	memset(&rt_System_Enum_OBJ, 0, sizeof(rt_System_Enum));
	rt_System_Enum_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Enum_OBJ;
	rt_System_Enum_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Enum_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Enum_METADATA_Name;
	rt_System_Enum_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Enum_METADATA_FullName;
	memset(&rt_System_Environment_OBJ, 0, sizeof(rt_System_Environment));
	rt_System_Environment_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Environment_OBJ;
	rt_System_Environment_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Environment_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Environment_METADATA_Name;
	rt_System_Environment_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Environment_METADATA_FullName;
	memset(&rt_System_Exception_OBJ, 0, sizeof(rt_System_Exception));
	rt_System_Exception_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Exception_OBJ;
	rt_System_Exception_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Exception_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Exception_METADATA_Name;
	rt_System_Exception_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Exception_METADATA_FullName;
	memset(&rt_System_FlagsAttribute_OBJ, 0, sizeof(rt_System_FlagsAttribute));
	rt_System_FlagsAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_FlagsAttribute_OBJ;
	rt_System_FlagsAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_FlagsAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_FlagsAttribute_METADATA_Name;
	rt_System_FlagsAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_FlagsAttribute_METADATA_FullName;
	memset(&rt_System_GC_OBJ, 0, sizeof(rt_System_GC));
	rt_System_GC_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_GC_OBJ;
	rt_System_GC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_GC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_GC_METADATA_Name;
	rt_System_GC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_GC_METADATA_FullName;
	memset(&rt_System_IndexOutOfRangeException_OBJ, 0, sizeof(rt_System_IndexOutOfRangeException));
	rt_System_IndexOutOfRangeException_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_IndexOutOfRangeException_OBJ;
	rt_System_IndexOutOfRangeException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Exception_OBJ;
	rt_System_IndexOutOfRangeException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_IndexOutOfRangeException_METADATA_Name;
	rt_System_IndexOutOfRangeException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_IndexOutOfRangeException_METADATA_FullName;
	memset(&rt_System_InvalidCastException_OBJ, 0, sizeof(rt_System_InvalidCastException));
	rt_System_InvalidCastException_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_InvalidCastException_OBJ;
	rt_System_InvalidCastException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Exception_OBJ;
	rt_System_InvalidCastException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_InvalidCastException_METADATA_Name;
	rt_System_InvalidCastException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_InvalidCastException_METADATA_FullName;
	memset(&rt_System_Double_OBJ, 0, sizeof(rt_System_Double));
	rt_System_Double_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Double_OBJ;
	rt_System_Double_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Double_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Double_METADATA_Name;
	rt_System_Double_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Double_METADATA_FullName;
	memset(&rt_System_Math_OBJ, 0, sizeof(rt_System_Math));
	rt_System_Math_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Math_OBJ;
	rt_System_Math_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Math_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Math_METADATA_Name;
	rt_System_Math_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Math_METADATA_FullName;
	memset(&rt_System_Single_OBJ, 0, sizeof(rt_System_Single));
	rt_System_Single_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Single_OBJ;
	rt_System_Single_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Single_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Single_METADATA_Name;
	rt_System_Single_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Single_METADATA_FullName;
	memset(&rt_System_MathF_OBJ, 0, sizeof(rt_System_MathF));
	rt_System_MathF_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_MathF_OBJ;
	rt_System_MathF_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_MathF_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_MathF_METADATA_Name;
	rt_System_MathF_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_MathF_METADATA_FullName;
	memset(&rt_System_MulticastDelegate_OBJ, 0, sizeof(rt_System_MulticastDelegate));
	rt_System_MulticastDelegate_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_MulticastDelegate_OBJ;
	rt_System_MulticastDelegate_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Delegate_OBJ;
	rt_System_MulticastDelegate_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_MulticastDelegate_METADATA_Name;
	rt_System_MulticastDelegate_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_MulticastDelegate_METADATA_FullName;
	memset(&rt_System_NotSupportedException_OBJ, 0, sizeof(rt_System_NotSupportedException));
	rt_System_NotSupportedException_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_NotSupportedException_OBJ;
	rt_System_NotSupportedException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Exception_OBJ;
	rt_System_NotSupportedException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_NotSupportedException_METADATA_Name;
	rt_System_NotSupportedException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_NotSupportedException_METADATA_FullName;
	memset(&rt_System_Number_OBJ, 0, sizeof(rt_System_Number));
	rt_System_Number_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Number_OBJ;
	rt_System_Number_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Number_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Number_METADATA_Name;
	rt_System_Number_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Number_METADATA_FullName;
	memset(&rt_System_Object_OBJ, 0, sizeof(rt_System_Object));
	rt_System_Object_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Object_OBJ;
	rt_System_Object_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt_System_Object_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Object_METADATA_Name;
	rt_System_Object_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Object_METADATA_FullName;
	memset(&rt_System_ObsoleteAttribute_OBJ, 0, sizeof(rt_System_ObsoleteAttribute));
	rt_System_ObsoleteAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_ObsoleteAttribute_OBJ;
	rt_System_ObsoleteAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_ObsoleteAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_ObsoleteAttribute_METADATA_Name;
	rt_System_ObsoleteAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_ObsoleteAttribute_METADATA_FullName;
	memset(&rt_System_RuntimeType_OBJ, 0, sizeof(rt_System_RuntimeType));
	rt_System_RuntimeType_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_RuntimeType_OBJ;
	rt_System_RuntimeType_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Type_OBJ;
	rt_System_RuntimeType_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_RuntimeType_METADATA_Name;
	rt_System_RuntimeType_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_RuntimeType_METADATA_FullName;
	memset(&rt_System_Char_OBJ, 0, sizeof(rt_System_Char));
	rt_System_Char_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Char_OBJ;
	rt_System_Char_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Char_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Char_METADATA_Name;
	rt_System_Char_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Char_METADATA_FullName;
	memset(&rt_System_Int32_OBJ, 0, sizeof(rt_System_Int32));
	rt_System_Int32_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Int32_OBJ;
	rt_System_Int32_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Int32_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Int32_METADATA_Name;
	rt_System_Int32_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Int32_METADATA_FullName;
	memset(&rt_System_String_OBJ, 0, sizeof(rt_System_String));
	rt_System_String_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_String_OBJ;
	rt_System_String_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_String_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_String_METADATA_Name;
	rt_System_String_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_String_METADATA_FullName;
	memset(&rt_System_Type_OBJ, 0, sizeof(rt_System_Type));
	rt_System_Type_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Type_OBJ;
	rt_System_Type_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Type_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Type_METADATA_Name;
	rt_System_Type_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Type_METADATA_FullName;
	memset(&rt_System_ValueType_OBJ, 0, sizeof(rt_System_ValueType));
	rt_System_ValueType_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_ValueType_OBJ;
	rt_System_ValueType_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_ValueType_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_ValueType_METADATA_Name;
	rt_System_ValueType_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_ValueType_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyCompanyAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyCompanyAttribute));
	rt_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyCompanyAttribute_OBJ;
	rt_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyCompanyAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyCompanyAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyCompanyAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyConfigurationAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyConfigurationAttribute));
	rt_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyConfigurationAttribute_OBJ;
	rt_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyConfigurationAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyConfigurationAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyConfigurationAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyCopyrightAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyCopyrightAttribute));
	rt_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyCopyrightAttribute_OBJ;
	rt_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyCopyrightAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyCopyrightAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyCopyrightAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyCultureAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyCultureAttribute));
	rt_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyCultureAttribute_OBJ;
	rt_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyCultureAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyCultureAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyCultureAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyDelaySignAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyDelaySignAttribute));
	rt_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyDelaySignAttribute_OBJ;
	rt_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyDelaySignAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyDelaySignAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyDelaySignAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyDescriptionAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyDescriptionAttribute));
	rt_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyDescriptionAttribute_OBJ;
	rt_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyDescriptionAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyDescriptionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyDescriptionAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyFileVersionAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyFileVersionAttribute));
	rt_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyFileVersionAttribute_OBJ;
	rt_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyFileVersionAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyFileVersionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyFileVersionAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyInformationalVersionAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyInformationalVersionAttribute));
	rt_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyInformationalVersionAttribute_OBJ;
	rt_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyInformationalVersionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyKeyFileAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyKeyFileAttribute));
	rt_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyKeyFileAttribute_OBJ;
	rt_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyKeyFileAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyKeyFileAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyKeyFileAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyProductAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyProductAttribute));
	rt_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyProductAttribute_OBJ;
	rt_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyProductAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyProductAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyProductAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyTitleAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyTitleAttribute));
	rt_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyTitleAttribute_OBJ;
	rt_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyTitleAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyTitleAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyTitleAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyTrademarkAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyTrademarkAttribute));
	rt_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyTrademarkAttribute_OBJ;
	rt_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyTrademarkAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyTrademarkAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyTrademarkAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_AssemblyVersionAttribute_OBJ, 0, sizeof(rt_System_Reflection_AssemblyVersionAttribute));
	rt_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_AssemblyVersionAttribute_OBJ;
	rt_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyVersionAttribute_METADATA_Name;
	rt_System_Reflection_AssemblyVersionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_AssemblyVersionAttribute_METADATA_FullName;
	memset(&rt_System_Reflection_DefaultMemberAttribute_OBJ, 0, sizeof(rt_System_Reflection_DefaultMemberAttribute));
	rt_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_DefaultMemberAttribute_OBJ;
	rt_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_DefaultMemberAttribute_METADATA_Name;
	rt_System_Reflection_DefaultMemberAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_DefaultMemberAttribute_METADATA_FullName;
	memset(&rt_System_Runtime_CompilerServices_ExtensionAttribute_OBJ, 0, sizeof(rt_System_Runtime_CompilerServices_ExtensionAttribute));
	rt_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_CompilerServices_ExtensionAttribute_OBJ;
	rt_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_Name;
	rt_System_Runtime_CompilerServices_ExtensionAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_FullName;
	memset(&rt_System_Runtime_CompilerServices_MethodImplOptions_OBJ, 0, sizeof(rt_System_Runtime_CompilerServices_MethodImplOptions));
	rt_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_CompilerServices_MethodImplOptions_OBJ;
	rt_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_MethodImplOptions_METADATA_Name;
	rt_System_Runtime_CompilerServices_MethodImplOptions_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_MethodImplOptions_METADATA_FullName;
	memset(&rt_System_Runtime_CompilerServices_MethodImplAttribute_OBJ, 0, sizeof(rt_System_Runtime_CompilerServices_MethodImplAttribute));
	rt_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_CompilerServices_MethodImplAttribute_OBJ;
	rt_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_Name;
	rt_System_Runtime_CompilerServices_MethodImplAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_FullName;
	memset(&rt_System_Runtime_CompilerServices_RuntimeHelpers_OBJ, 0, sizeof(rt_System_Runtime_CompilerServices_RuntimeHelpers));
	rt_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_CompilerServices_RuntimeHelpers_OBJ;
	rt_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_Name;
	rt_System_Runtime_CompilerServices_RuntimeHelpers_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_FullName;
	memset(&rt_System_Runtime_InteropServices_CallingConvention_OBJ, 0, sizeof(rt_System_Runtime_InteropServices_CallingConvention));
	rt_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_InteropServices_CallingConvention_OBJ;
	rt_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_CallingConvention_METADATA_Name;
	rt_System_Runtime_InteropServices_CallingConvention_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_CallingConvention_METADATA_FullName;
	memset(&rt_System_Runtime_InteropServices_DllImportAttribute_OBJ, 0, sizeof(rt_System_Runtime_InteropServices_DllImportAttribute));
	rt_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_InteropServices_DllImportAttribute_OBJ;
	rt_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_DllImportAttribute_METADATA_Name;
	rt_System_Runtime_InteropServices_DllImportAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_DllImportAttribute_METADATA_FullName;
	memset(&rt_System_Runtime_InteropServices_Marshal_OBJ, 0, sizeof(rt_System_Runtime_InteropServices_Marshal));
	rt_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_InteropServices_Marshal_OBJ;
	rt_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_Marshal_METADATA_Name;
	rt_System_Runtime_InteropServices_Marshal_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_Marshal_METADATA_FullName;
	memset(&rt_System_Runtime_InteropServices_OutAttribute_OBJ, 0, sizeof(rt_System_Runtime_InteropServices_OutAttribute));
	rt_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_InteropServices_OutAttribute_OBJ;
	rt_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_OutAttribute_METADATA_Name;
	rt_System_Runtime_InteropServices_OutAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_OutAttribute_METADATA_FullName;
	memset(&rt_System_Runtime_InteropServices_LayoutKind_OBJ, 0, sizeof(rt_System_Runtime_InteropServices_LayoutKind));
	rt_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_InteropServices_LayoutKind_OBJ;
	rt_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_LayoutKind_METADATA_Name;
	rt_System_Runtime_InteropServices_LayoutKind_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_LayoutKind_METADATA_FullName;
	memset(&rt_System_Runtime_InteropServices_StructLayoutAttribute_OBJ, 0, sizeof(rt_System_Runtime_InteropServices_StructLayoutAttribute));
	rt_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_InteropServices_StructLayoutAttribute_OBJ;
	rt_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_Name;
	rt_System_Runtime_InteropServices_StructLayoutAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_FullName;
	memset(&rt_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ, 0, sizeof(rt_System_Runtime_Versioning_TargetFrameworkAttribute));
	rt_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ;
	rt_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Attribute_OBJ;
	rt_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_Name;
	rt_System_Runtime_Versioning_TargetFrameworkAttribute_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_FullName;
	memset(&rt_System_Text_Encoding_OBJ, 0, sizeof(rt_System_Text_Encoding));
	rt_System_Text_Encoding_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Text_Encoding_OBJ;
	rt_System_Text_Encoding_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Text_Encoding_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Text_Encoding_METADATA_Name;
	rt_System_Text_Encoding_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Text_Encoding_METADATA_FullName;
	memset(&rt_System_Text_StandardEncoding_OBJ, 0, sizeof(rt_System_Text_StandardEncoding));
	rt_System_Text_StandardEncoding_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Text_StandardEncoding_OBJ;
	rt_System_Text_StandardEncoding_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Text_Encoding_OBJ;
	rt_System_Text_StandardEncoding_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Text_StandardEncoding_METADATA_Name;
	rt_System_Text_StandardEncoding_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Text_StandardEncoding_METADATA_FullName;
	memset(&rt_System_Text_StringBuilder_OBJ, 0, sizeof(rt_System_Text_StringBuilder));
	rt_System_Text_StringBuilder_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Text_StringBuilder_OBJ;
	rt_System_Text_StringBuilder_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_System_Text_StringBuilder_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Text_StringBuilder_METADATA_Name;
	rt_System_Text_StringBuilder_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Text_StringBuilder_METADATA_FullName;
	memset(&rt_System_Byte_OBJ, 0, sizeof(rt_System_Byte));
	rt_System_Byte_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Byte_OBJ;
	rt_System_Byte_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Byte_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Byte_METADATA_Name;
	rt_System_Byte_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Byte_METADATA_FullName;
	memset(&rt_System_DateTime_OBJ, 0, sizeof(rt_System_DateTime));
	rt_System_DateTime_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_DateTime_OBJ;
	rt_System_DateTime_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_DateTime_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_DateTime_METADATA_Name;
	rt_System_DateTime_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_DateTime_METADATA_FullName;
	memset(&rt_System_Int16_OBJ, 0, sizeof(rt_System_Int16));
	rt_System_Int16_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Int16_OBJ;
	rt_System_Int16_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Int16_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Int16_METADATA_Name;
	rt_System_Int16_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Int16_METADATA_FullName;
	memset(&rt_System_Int64_OBJ, 0, sizeof(rt_System_Int64));
	rt_System_Int64_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Int64_OBJ;
	rt_System_Int64_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_Int64_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Int64_METADATA_Name;
	rt_System_Int64_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Int64_METADATA_FullName;
	memset(&rt_System_RuntimeTypeHandle_OBJ, 0, sizeof(rt_System_RuntimeTypeHandle));
	rt_System_RuntimeTypeHandle_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_RuntimeTypeHandle_OBJ;
	rt_System_RuntimeTypeHandle_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_RuntimeTypeHandle_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_RuntimeTypeHandle_METADATA_Name;
	rt_System_RuntimeTypeHandle_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_RuntimeTypeHandle_METADATA_FullName;
	memset(&rt_System_SByte_OBJ, 0, sizeof(rt_System_SByte));
	rt_System_SByte_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_SByte_OBJ;
	rt_System_SByte_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_SByte_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_SByte_METADATA_Name;
	rt_System_SByte_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_SByte_METADATA_FullName;
	memset(&rt_System_UInt16_OBJ, 0, sizeof(rt_System_UInt16));
	rt_System_UInt16_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_UInt16_OBJ;
	rt_System_UInt16_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_UInt16_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_UInt16_METADATA_Name;
	rt_System_UInt16_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_UInt16_METADATA_FullName;
	memset(&rt_System_UInt32_OBJ, 0, sizeof(rt_System_UInt32));
	rt_System_UInt32_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_UInt32_OBJ;
	rt_System_UInt32_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_UInt32_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_UInt32_METADATA_Name;
	rt_System_UInt32_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_UInt32_METADATA_FullName;
	memset(&rt_System_UInt64_OBJ, 0, sizeof(rt_System_UInt64));
	rt_System_UInt64_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_UInt64_OBJ;
	rt_System_UInt64_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_UInt64_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_UInt64_METADATA_Name;
	rt_System_UInt64_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_UInt64_METADATA_FullName;
	memset(&rt_System_UIntPtr_OBJ, 0, sizeof(rt_System_UIntPtr));
	rt_System_UIntPtr_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_UIntPtr_OBJ;
	rt_System_UIntPtr_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_System_UIntPtr_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_UIntPtr_METADATA_Name;
	rt_System_UIntPtr_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_UIntPtr_METADATA_FullName;
	memset(&rt_System_Reflection_MethodImplAttributes_OBJ, 0, sizeof(rt_System_Reflection_MethodImplAttributes));
	rt_System_Reflection_MethodImplAttributes_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Reflection_MethodImplAttributes_OBJ;
	rt_System_Reflection_MethodImplAttributes_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_System_Reflection_MethodImplAttributes_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Reflection_MethodImplAttributes_METADATA_Name;
	rt_System_Reflection_MethodImplAttributes_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Reflection_MethodImplAttributes_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Activator_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Activator_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Array_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Array_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Attribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Attribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Boolean_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Boolean_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_AttributeTargets_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_AttributeTargets_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_AttributeUsageAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_AttributeUsageAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_BitConverter_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_BitConverter_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Buffer_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Buffer_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Console_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Console_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_IntPtr_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_IntPtr_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Delegate_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Delegate_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_DllNotFoundException_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_DllNotFoundException_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Enum_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Enum_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Environment_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Environment_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Exception_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Exception_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_FlagsAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_FlagsAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_GC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_GC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_IndexOutOfRangeException_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_IndexOutOfRangeException_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_InvalidCastException_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_InvalidCastException_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Double_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Double_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Math_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Math_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Single_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Single_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_MathF_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_MathF_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_MulticastDelegate_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_MulticastDelegate_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_NotSupportedException_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_NotSupportedException_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Number_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Number_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Object_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Object_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_ObsoleteAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_ObsoleteAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_RuntimeType_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_RuntimeType_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Char_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Char_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int32_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int32_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_String_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_String_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Type_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Type_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_ValueType_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_ValueType_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyCompanyAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyCompanyAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyConfigurationAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyConfigurationAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyCopyrightAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyCopyrightAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyCultureAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyCultureAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyDelaySignAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyDelaySignAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyDescriptionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyDescriptionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyFileVersionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyFileVersionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyInformationalVersionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyKeyFileAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyKeyFileAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyProductAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyProductAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyTitleAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyTitleAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyTrademarkAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyTrademarkAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyVersionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_AssemblyVersionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_DefaultMemberAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_DefaultMemberAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_ExtensionAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_MethodImplOptions_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_MethodImplOptions_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_MethodImplAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_CompilerServices_RuntimeHelpers_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_CallingConvention_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_CallingConvention_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_DllImportAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_DllImportAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_Marshal_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_Marshal_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_OutAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_OutAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_LayoutKind_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_LayoutKind_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_InteropServices_StructLayoutAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Runtime_Versioning_TargetFrameworkAttribute_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Text_Encoding_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Text_Encoding_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Text_StandardEncoding_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Text_StandardEncoding_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Text_StringBuilder_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Text_StringBuilder_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Byte_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Byte_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_DateTime_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_DateTime_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int16_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int16_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int64_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int64_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_RuntimeTypeHandle_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_RuntimeTypeHandle_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_SByte_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_SByte_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UInt16_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UInt16_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UInt32_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UInt32_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UInt64_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UInt64_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UIntPtr_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_UIntPtr_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_MethodImplAttributes_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Reflection_MethodImplAttributes_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_System_DllNotFoundException_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;
	rt_System_Exception_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;
	rt_System_IndexOutOfRangeException_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;
	rt_System_InvalidCastException_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;
	rt_System_NotSupportedException_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;

	/* <<< === Array Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt_System_Byte___ARRAY_OBJ, 0, sizeof(rt_System_Byte___ARRAY));
	rt_System_Byte___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Byte___ARRAY_OBJ;
	rt_System_Byte___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_Byte___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Byte___ARRAY_METADATA_Name;
	rt_System_Byte___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Byte___ARRAY_METADATA_FullName;
	memset(&rt_System_Char___ARRAY_OBJ, 0, sizeof(rt_System_Char___ARRAY));
	rt_System_Char___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Char___ARRAY_OBJ;
	rt_System_Char___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_Char___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Char___ARRAY_METADATA_Name;
	rt_System_Char___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Char___ARRAY_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Byte___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Byte___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Char___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Char___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* <<< === Pointer Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt_System_Void__PTR_OBJ, 0, sizeof(rt_System_Void__PTR));
	rt_System_Void__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Void__PTR_OBJ;
	rt_System_Void__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt_System_Void__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Void__PTR_METADATA_Name;
	rt_System_Void__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Void__PTR_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Void__PTR_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Void__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
}

void CS2X_InitDllImport_CS2X_CoreLib()
{
	/* Init this project */
}

void CS2X_InvokeStaticConstructors_CS2X_CoreLib()
{
	/* Init this project */
	m_System_Text_Encoding__cctor_0();
}
