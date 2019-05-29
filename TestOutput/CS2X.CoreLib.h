/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#pragma once
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <uchar.h>
#include <locale.h>
#include "..\CS2X.Native\CS2X.GC.Boehm.h"
#include "..\CS2X.Native\CS2X.InstructionHelpers.h"
#include "_StringLiterals.h"

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t_System_Array t_System_Array;
typedef struct t_System_Attribute t_System_Attribute;
typedef struct t_System_AttributeUsageAttribute t_System_AttributeUsageAttribute;
typedef struct t_System_BitConverter t_System_BitConverter;
typedef struct t_System_Buffer t_System_Buffer;
typedef struct t_System_CancelEventArgs t_System_CancelEventArgs;
typedef struct t_System_CLSCompliantAttribute t_System_CLSCompliantAttribute;
typedef struct t_System_Console t_System_Console;
typedef struct t_System_Delegate t_System_Delegate;
typedef struct t_System_Enum t_System_Enum;
typedef struct t_System_Environment t_System_Environment;
typedef struct t_System_EventArgs t_System_EventArgs;
typedef struct t_System_Exception t_System_Exception;
typedef struct t_System_FlagsAttribute t_System_FlagsAttribute;
typedef struct t_System_GC t_System_GC;
typedef struct t_System_IndexOutOfRangeException t_System_IndexOutOfRangeException;
typedef struct t_System_Math t_System_Math;
typedef struct t_System_MathF t_System_MathF;
typedef struct t_System_MulticastDelegate t_System_MulticastDelegate;
typedef struct t_System_NonSerializedAttribute t_System_NonSerializedAttribute;
typedef struct t_System_NotSupportedException t_System_NotSupportedException;
typedef struct t_System_Nullable t_System_Nullable;
typedef struct t_System_Number t_System_Number;
typedef struct t_System_Object t_System_Object;
typedef struct t_System_ObsoleteAttribute t_System_ObsoleteAttribute;
typedef struct t_System_ParamArrayAttribute t_System_ParamArrayAttribute;
typedef struct t_System_RuntimeType t_System_RuntimeType;
typedef struct t_System_String t_System_String;
typedef struct t_System_StringBuilder t_System_StringBuilder;
typedef struct t_System_Type t_System_Type;
typedef struct t_System_TypeInfo t_System_TypeInfo;
typedef struct t_System_ValueType t_System_ValueType;
typedef struct t_System_CodeDom_Compiler_GeneratedCodeAttribute t_System_CodeDom_Compiler_GeneratedCodeAttribute;
typedef struct t_System_Collections_ArrayList t_System_Collections_ArrayList;
typedef struct t_System_Collections_Queue t_System_Collections_Queue;
typedef struct t_System_Collections_Stack t_System_Collections_Stack;
typedef struct t_System_ComponentModel_BrowsableAttribute t_System_ComponentModel_BrowsableAttribute;
typedef struct t_System_ComponentModel_DependencyAttribute t_System_ComponentModel_DependencyAttribute;
typedef struct t_System_ComponentModel_EditorBrowsableAttribute t_System_ComponentModel_EditorBrowsableAttribute;
typedef struct t_System_Diagnostics_ConditionalAttribute t_System_Diagnostics_ConditionalAttribute;
typedef struct t_System_Diagnostics_Debug t_System_Diagnostics_Debug;
typedef struct t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute;
typedef struct t_System_Globalization_CultureInfo t_System_Globalization_CultureInfo;
typedef struct t_System_Globalization_NumberFormatInfo t_System_Globalization_NumberFormatInfo;
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
typedef struct t_System_Reflection_MemberInfo t_System_Reflection_MemberInfo;
typedef struct t_System_Runtime_CompilerServices_CompilerGeneratedAttribute t_System_Runtime_CompilerServices_CompilerGeneratedAttribute;
typedef struct t_System_Runtime_CompilerServices_IndexerNameAttribute t_System_Runtime_CompilerServices_IndexerNameAttribute;
typedef struct t_System_Runtime_CompilerServices_IntrinsicAttribute t_System_Runtime_CompilerServices_IntrinsicAttribute;
typedef struct t_System_Runtime_CompilerServices_MethodImplAttribute t_System_Runtime_CompilerServices_MethodImplAttribute;
typedef struct t_System_Runtime_CompilerServices_RuntimeHelpers t_System_Runtime_CompilerServices_RuntimeHelpers;
typedef struct t_System_Runtime_InteropServices_OutAttribute t_System_Runtime_InteropServices_OutAttribute;
typedef struct t_System_Runtime_InteropServices_StructLayoutAttribute t_System_Runtime_InteropServices_StructLayoutAttribute;
typedef struct t_System_Runtime_Versioning_TargetFrameworkAttribute t_System_Runtime_Versioning_TargetFrameworkAttribute;
typedef struct t_CS2X_NativeExternAttribute t_CS2X_NativeExternAttribute;
typedef struct t_System_Decimal t_System_Decimal;
typedef void* t_System_RuntimeFieldHandle;
typedef struct t_System_RuntimeTypeHandle t_System_RuntimeTypeHandle;
typedef struct t_System_Collections_DictionaryEntry t_System_Collections_DictionaryEntry;
typedef void t_System_ICloneable;
typedef void t_System_IDisposable;
typedef void t_System_Collections_IEnumerable;
typedef void t_System_Collections_IEnumerator;
typedef void t_System_ComponentModel_IContainer;
typedef int32_t t_System_AttributeTargets;
typedef int32_t t_System_ComponentModel_EditorBrowsableState;
typedef int32_t t_System_Reflection_MethodImplAttributes;
typedef int32_t t_System_Runtime_CompilerServices_MethodCodeType;
typedef int32_t t_System_Runtime_CompilerServices_MethodImplOptions;
typedef int32_t t_System_Runtime_InteropServices_LayoutKind;
typedef int32_t t_CS2X_NativeExternTarget;

/* =============================== */
/* Type definitions */
/* =============================== */
struct t_System_Array
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Attribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

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

struct t_System_CancelEventArgs
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_CLSCompliantAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	char f__isCompliant_2;
};

struct t_System_Console
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Delegate
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Enum
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Environment
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_EventArgs
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
};

struct t_System_NonSerializedAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_NotSupportedException
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__Message_k__BackingField_1;
};

struct t_System_Nullable
{
	t_System_RuntimeType* CS2X_RuntimeType;
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

struct t_System_ParamArrayAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_RuntimeType
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_Type* f__baseType_4;
	t_System_String* f__name_4;
	t_System_String* f__fullName_4;
};

struct t_System_String
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__stringLength_1;
	char16_t f__firstChar_1;
};
t_System_String* f_System_String_Empty;

struct t_System_StringBuilder
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Type
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_TypeInfo
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_ValueType
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_CodeDom_Compiler_GeneratedCodeAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__tool_2;
	t_System_String* f__version_2;
};

struct t_System_Collections_ArrayList
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Collections_Queue
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Collections_Stack
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_ComponentModel_BrowsableAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_ComponentModel_DependencyAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_ComponentModel_EditorBrowsableAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_ComponentModel_EditorBrowsableState f__browsableState_2;
};

struct t_System_Diagnostics_ConditionalAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_String* f__conditionString_2;
};

struct t_System_Diagnostics_Debug
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Globalization_CultureInfo
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Globalization_NumberFormatInfo
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

struct t_System_Reflection_MemberInfo
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Runtime_CompilerServices_CompilerGeneratedAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Runtime_CompilerServices_IndexerNameAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Runtime_CompilerServices_IntrinsicAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Runtime_CompilerServices_MethodImplAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_Runtime_CompilerServices_MethodCodeType f_MethodCodeType_2;
	t_System_Runtime_CompilerServices_MethodImplOptions f__Value_k__BackingField_2;
};

struct t_System_Runtime_CompilerServices_RuntimeHelpers
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Runtime_InteropServices_OutAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

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

struct t_CS2X_NativeExternAttribute
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_CS2X_NativeExternTarget f_target_2;
	t_System_String* f_methodName_2;
};

struct t_System_Decimal
{
	int32_t f_flags_2;
	int32_t f_hi_2;
	int32_t f_lo_2;
	int32_t f_mid_2;
};


struct t_System_RuntimeTypeHandle
{
	t_System_RuntimeType* f_m_type_2;
};

struct t_System_Collections_DictionaryEntry
{
	t_System_Object* f__Key_k__BackingField_2;
	t_System_Object* f__Value_k__BackingField_2;
};

struct t_System_ICloneable
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_IDisposable
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Collections_IEnumerable
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_Collections_IEnumerator
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_System_ComponentModel_IContainer
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

#define f_System_ComponentModel_EditorBrowsableState_Always 0
#define f_System_ComponentModel_EditorBrowsableState_Never 1
#define f_System_ComponentModel_EditorBrowsableState_Advanced 2

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

#define f_System_Runtime_CompilerServices_MethodCodeType_IL 0
#define f_System_Runtime_CompilerServices_MethodCodeType_Native 1
#define f_System_Runtime_CompilerServices_MethodCodeType_OPTIL 2
#define f_System_Runtime_CompilerServices_MethodCodeType_Runtime 3

#define f_System_Runtime_CompilerServices_MethodImplOptions_Unmanaged 4
#define f_System_Runtime_CompilerServices_MethodImplOptions_NoInlining 8
#define f_System_Runtime_CompilerServices_MethodImplOptions_ForwardRef 16
#define f_System_Runtime_CompilerServices_MethodImplOptions_Synchronized 32
#define f_System_Runtime_CompilerServices_MethodImplOptions_NoOptimization 64
#define f_System_Runtime_CompilerServices_MethodImplOptions_PreserveSig 128
#define f_System_Runtime_CompilerServices_MethodImplOptions_AggressiveInlining 256
#define f_System_Runtime_CompilerServices_MethodImplOptions_AggressiveOptimization 512
#define f_System_Runtime_CompilerServices_MethodImplOptions_InternalCall 4096

#define f_System_Runtime_InteropServices_LayoutKind_Sequential 0
#define f_System_Runtime_InteropServices_LayoutKind_Explicit 2
#define f_System_Runtime_InteropServices_LayoutKind_Auto 3

#define f_CS2X_NativeExternTarget_C 0

/* =============================== */
/* Runtime Types */
/* =============================== */
typedef struct t_System_Array_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Array_RTTYPE;
t_System_Array_RTTYPE t_System_Array_RTTYPE_OBJ;
int8_t t_System_Array_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,65,0,114,0,114,0,97,0,121,0,0,0};
int8_t t_System_Array_RTTYPE_RTTYPE_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,114,0,114,0,97,0,121,0,0,0};

typedef struct t_System_Attribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Attribute_RTTYPE;
t_System_Attribute_RTTYPE t_System_Attribute_RTTYPE_OBJ;
int8_t t_System_Attribute_RTTYPE_RTTYPE_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Attribute_RTTYPE_RTTYPE_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_AttributeUsageAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_AttributeUsageAttribute_RTTYPE;
t_System_AttributeUsageAttribute_RTTYPE t_System_AttributeUsageAttribute_RTTYPE_OBJ;
int8_t t_System_AttributeUsageAttribute_RTTYPE_RTTYPE_METADATA_Name[60] = {0,0,0,0,0,0,0,0,23,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,85,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_AttributeUsageAttribute_RTTYPE_RTTYPE_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,85,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_BitConverter_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_BitConverter_RTTYPE;
t_System_BitConverter_RTTYPE t_System_BitConverter_RTTYPE_OBJ;
int8_t t_System_BitConverter_RTTYPE_RTTYPE_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,66,0,105,0,116,0,67,0,111,0,110,0,118,0,101,0,114,0,116,0,101,0,114,0,0,0};
int8_t t_System_BitConverter_RTTYPE_RTTYPE_METADATA_FullName[52] = {0,0,0,0,0,0,0,0,19,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,105,0,116,0,67,0,111,0,110,0,118,0,101,0,114,0,116,0,101,0,114,0,0,0};

typedef struct t_System_Buffer_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Buffer_RTTYPE;
t_System_Buffer_RTTYPE t_System_Buffer_RTTYPE_OBJ;
int8_t t_System_Buffer_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,66,0,117,0,102,0,102,0,101,0,114,0,0,0};
int8_t t_System_Buffer_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,117,0,102,0,102,0,101,0,114,0,0,0};

typedef struct t_System_CancelEventArgs_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_CancelEventArgs_RTTYPE;
t_System_CancelEventArgs_RTTYPE t_System_CancelEventArgs_RTTYPE_OBJ;
int8_t t_System_CancelEventArgs_RTTYPE_RTTYPE_METADATA_Name[44] = {0,0,0,0,0,0,0,0,15,0,0,0,67,0,97,0,110,0,99,0,101,0,108,0,69,0,118,0,101,0,110,0,116,0,65,0,114,0,103,0,115,0,0,0};
int8_t t_System_CancelEventArgs_RTTYPE_RTTYPE_METADATA_FullName[58] = {0,0,0,0,0,0,0,0,22,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,97,0,110,0,99,0,101,0,108,0,69,0,118,0,101,0,110,0,116,0,65,0,114,0,103,0,115,0,0,0};

typedef struct t_System_CLSCompliantAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_CLSCompliantAttribute_RTTYPE;
t_System_CLSCompliantAttribute_RTTYPE t_System_CLSCompliantAttribute_RTTYPE_OBJ;
int8_t t_System_CLSCompliantAttribute_RTTYPE_RTTYPE_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,67,0,76,0,83,0,67,0,111,0,109,0,112,0,108,0,105,0,97,0,110,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_CLSCompliantAttribute_RTTYPE_RTTYPE_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,76,0,83,0,67,0,111,0,109,0,112,0,108,0,105,0,97,0,110,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Console_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Console_RTTYPE;
t_System_Console_RTTYPE t_System_Console_RTTYPE_OBJ;
int8_t t_System_Console_RTTYPE_RTTYPE_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,67,0,111,0,110,0,115,0,111,0,108,0,101,0,0,0};
int8_t t_System_Console_RTTYPE_RTTYPE_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,110,0,115,0,111,0,108,0,101,0,0,0};

typedef struct t_System_Delegate_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Delegate_RTTYPE;
t_System_Delegate_RTTYPE t_System_Delegate_RTTYPE_OBJ;
int8_t t_System_Delegate_RTTYPE_RTTYPE_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0};
int8_t t_System_Delegate_RTTYPE_RTTYPE_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0};

typedef struct t_System_Enum_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Enum_RTTYPE;
t_System_Enum_RTTYPE t_System_Enum_RTTYPE_OBJ;
int8_t t_System_Enum_RTTYPE_RTTYPE_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,69,0,110,0,117,0,109,0,0,0};
int8_t t_System_Enum_RTTYPE_RTTYPE_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,110,0,117,0,109,0,0,0};

typedef struct t_System_Environment_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Environment_RTTYPE;
t_System_Environment_RTTYPE t_System_Environment_RTTYPE_OBJ;
int8_t t_System_Environment_RTTYPE_RTTYPE_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,69,0,110,0,118,0,105,0,114,0,111,0,110,0,109,0,101,0,110,0,116,0,0,0};
int8_t t_System_Environment_RTTYPE_RTTYPE_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,110,0,118,0,105,0,114,0,111,0,110,0,109,0,101,0,110,0,116,0,0,0};

typedef struct t_System_EventArgs_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_EventArgs_RTTYPE;
t_System_EventArgs_RTTYPE t_System_EventArgs_RTTYPE_OBJ;
int8_t t_System_EventArgs_RTTYPE_RTTYPE_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,69,0,118,0,101,0,110,0,116,0,65,0,114,0,103,0,115,0,0,0};
int8_t t_System_EventArgs_RTTYPE_RTTYPE_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,118,0,101,0,110,0,116,0,65,0,114,0,103,0,115,0,0,0};

typedef struct t_System_Exception_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_String* (*vTable_get_Message_0)(t_System_Exception* self);
	t_System_String* (*vTable_get_StackTrace_0)(t_System_Exception* self);
} t_System_Exception_RTTYPE;
t_System_Exception_RTTYPE t_System_Exception_RTTYPE_OBJ;
int8_t t_System_Exception_RTTYPE_RTTYPE_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0};
int8_t t_System_Exception_RTTYPE_RTTYPE_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0};

typedef struct t_System_FlagsAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_FlagsAttribute_RTTYPE;
t_System_FlagsAttribute_RTTYPE t_System_FlagsAttribute_RTTYPE_OBJ;
int8_t t_System_FlagsAttribute_RTTYPE_RTTYPE_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,70,0,108,0,97,0,103,0,115,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_FlagsAttribute_RTTYPE_RTTYPE_METADATA_FullName[56] = {0,0,0,0,0,0,0,0,21,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,70,0,108,0,97,0,103,0,115,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_GC_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_GC_RTTYPE;
t_System_GC_RTTYPE t_System_GC_RTTYPE_OBJ;
int8_t t_System_GC_RTTYPE_RTTYPE_METADATA_Name[18] = {0,0,0,0,0,0,0,0,2,0,0,0,71,0,67,0,0,0};
int8_t t_System_GC_RTTYPE_RTTYPE_METADATA_FullName[32] = {0,0,0,0,0,0,0,0,9,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,71,0,67,0,0,0};

typedef struct t_System_IndexOutOfRangeException_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_String* (*vTable_get_Message_0)(t_System_Exception* self);
	t_System_String* (*vTable_get_StackTrace_0)(t_System_Exception* self);
} t_System_IndexOutOfRangeException_RTTYPE;
t_System_IndexOutOfRangeException_RTTYPE t_System_IndexOutOfRangeException_RTTYPE_OBJ;
int8_t t_System_IndexOutOfRangeException_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,73,0,110,0,100,0,101,0,120,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0};
int8_t t_System_IndexOutOfRangeException_RTTYPE_RTTYPE_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,100,0,101,0,120,0,79,0,117,0,116,0,79,0,102,0,82,0,97,0,110,0,103,0,101,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0};

typedef struct t_System_Math_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Math_RTTYPE;
t_System_Math_RTTYPE t_System_Math_RTTYPE_OBJ;
int8_t t_System_Math_RTTYPE_RTTYPE_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,77,0,97,0,116,0,104,0,0,0};
int8_t t_System_Math_RTTYPE_RTTYPE_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,97,0,116,0,104,0,0,0};

typedef struct t_System_MathF_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_MathF_RTTYPE;
t_System_MathF_RTTYPE t_System_MathF_RTTYPE_OBJ;
int8_t t_System_MathF_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,77,0,97,0,116,0,104,0,70,0,0,0};
int8_t t_System_MathF_RTTYPE_RTTYPE_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,97,0,116,0,104,0,70,0,0,0};

typedef struct t_System_MulticastDelegate_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_MulticastDelegate_RTTYPE;
t_System_MulticastDelegate_RTTYPE t_System_MulticastDelegate_RTTYPE_OBJ;
int8_t t_System_MulticastDelegate_RTTYPE_RTTYPE_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,77,0,117,0,108,0,116,0,105,0,99,0,97,0,115,0,116,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0};
int8_t t_System_MulticastDelegate_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,77,0,117,0,108,0,116,0,105,0,99,0,97,0,115,0,116,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0};

typedef struct t_System_NonSerializedAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_NonSerializedAttribute_RTTYPE;
t_System_NonSerializedAttribute_RTTYPE t_System_NonSerializedAttribute_RTTYPE_OBJ;
int8_t t_System_NonSerializedAttribute_RTTYPE_RTTYPE_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,78,0,111,0,110,0,83,0,101,0,114,0,105,0,97,0,108,0,105,0,122,0,101,0,100,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_NonSerializedAttribute_RTTYPE_RTTYPE_METADATA_FullName[72] = {0,0,0,0,0,0,0,0,29,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,111,0,110,0,83,0,101,0,114,0,105,0,97,0,108,0,105,0,122,0,101,0,100,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_NotSupportedException_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_String* (*vTable_get_Message_0)(t_System_Exception* self);
	t_System_String* (*vTable_get_StackTrace_0)(t_System_Exception* self);
} t_System_NotSupportedException_RTTYPE;
t_System_NotSupportedException_RTTYPE t_System_NotSupportedException_RTTYPE_OBJ;
int8_t t_System_NotSupportedException_RTTYPE_RTTYPE_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,78,0,111,0,116,0,83,0,117,0,112,0,112,0,111,0,114,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0};
int8_t t_System_NotSupportedException_RTTYPE_RTTYPE_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,111,0,116,0,83,0,117,0,112,0,112,0,111,0,114,0,116,0,101,0,100,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0};

typedef struct t_System_Nullable_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Nullable_RTTYPE;
t_System_Nullable_RTTYPE t_System_Nullable_RTTYPE_OBJ;
int8_t t_System_Nullable_RTTYPE_RTTYPE_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,78,0,117,0,108,0,108,0,97,0,98,0,108,0,101,0,0,0};
int8_t t_System_Nullable_RTTYPE_RTTYPE_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,117,0,108,0,108,0,97,0,98,0,108,0,101,0,0,0};

typedef struct t_System_Number_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Number_RTTYPE;
t_System_Number_RTTYPE t_System_Number_RTTYPE_OBJ;
int8_t t_System_Number_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,78,0,117,0,109,0,98,0,101,0,114,0,0,0};
int8_t t_System_Number_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,78,0,117,0,109,0,98,0,101,0,114,0,0,0};

typedef struct t_System_Object_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Object_RTTYPE;
t_System_Object_RTTYPE t_System_Object_RTTYPE_OBJ;
int8_t t_System_Object_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,79,0,98,0,106,0,101,0,99,0,116,0,0,0};
int8_t t_System_Object_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,0,0};

typedef struct t_System_ObsoleteAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_ObsoleteAttribute_RTTYPE;
t_System_ObsoleteAttribute_RTTYPE t_System_ObsoleteAttribute_RTTYPE_OBJ;
int8_t t_System_ObsoleteAttribute_RTTYPE_RTTYPE_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,79,0,98,0,115,0,111,0,108,0,101,0,116,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_ObsoleteAttribute_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,115,0,111,0,108,0,101,0,116,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_ParamArrayAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_ParamArrayAttribute_RTTYPE;
t_System_ParamArrayAttribute_RTTYPE t_System_ParamArrayAttribute_RTTYPE_OBJ;
int8_t t_System_ParamArrayAttribute_RTTYPE_RTTYPE_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,80,0,97,0,114,0,97,0,109,0,65,0,114,0,114,0,97,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_ParamArrayAttribute_RTTYPE_RTTYPE_METADATA_FullName[66] = {0,0,0,0,0,0,0,0,26,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,80,0,97,0,114,0,97,0,109,0,65,0,114,0,114,0,97,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_RuntimeType_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_String* (*vTable_get_Name_0)(t_System_Reflection_MemberInfo* self);
	t_System_Type* (*vTable_get_BaseType_0)(t_System_Type* self);
	t_System_String* (*vTable_get_FullName_0)(t_System_Type* self);
	t_System_RuntimeTypeHandle (*vTable_get_TypeHandle_0)(t_System_Type* self);
} t_System_RuntimeType_RTTYPE;
t_System_RuntimeType_RTTYPE t_System_RuntimeType_RTTYPE_OBJ;
int8_t t_System_RuntimeType_RTTYPE_RTTYPE_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,0,0};
int8_t t_System_RuntimeType_RTTYPE_RTTYPE_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,0,0};

typedef struct t_System_String_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_String_RTTYPE;
t_System_String_RTTYPE t_System_String_RTTYPE_OBJ;
int8_t t_System_String_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,0,0};
int8_t t_System_String_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,0,0};

typedef struct t_System_StringBuilder_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_StringBuilder_RTTYPE;
t_System_StringBuilder_RTTYPE t_System_StringBuilder_RTTYPE_OBJ;
int8_t t_System_StringBuilder_RTTYPE_RTTYPE_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,66,0,117,0,105,0,108,0,100,0,101,0,114,0,0,0};
int8_t t_System_StringBuilder_RTTYPE_RTTYPE_METADATA_FullName[54] = {0,0,0,0,0,0,0,0,20,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,66,0,117,0,105,0,108,0,100,0,101,0,114,0,0,0};

typedef struct t_System_Type_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_String* (*vTable_get_Name_0)(t_System_Reflection_MemberInfo* self);
	t_System_Type* (*vTable_get_BaseType_0)(t_System_Type* self);
	t_System_String* (*vTable_get_FullName_0)(t_System_Type* self);
	t_System_RuntimeTypeHandle (*vTable_get_TypeHandle_0)(t_System_Type* self);
} t_System_Type_RTTYPE;
t_System_Type_RTTYPE t_System_Type_RTTYPE_OBJ;
int8_t t_System_Type_RTTYPE_RTTYPE_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,84,0,121,0,112,0,101,0,0,0};
int8_t t_System_Type_RTTYPE_RTTYPE_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,121,0,112,0,101,0,0,0};

typedef struct t_System_TypeInfo_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_String* (*vTable_get_Name_0)(t_System_Reflection_MemberInfo* self);
	t_System_Type* (*vTable_get_BaseType_0)(t_System_Type* self);
	t_System_String* (*vTable_get_FullName_0)(t_System_Type* self);
	t_System_RuntimeTypeHandle (*vTable_get_TypeHandle_0)(t_System_Type* self);
} t_System_TypeInfo_RTTYPE;
t_System_TypeInfo_RTTYPE t_System_TypeInfo_RTTYPE_OBJ;
int8_t t_System_TypeInfo_RTTYPE_RTTYPE_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,84,0,121,0,112,0,101,0,73,0,110,0,102,0,111,0,0,0};
int8_t t_System_TypeInfo_RTTYPE_RTTYPE_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,84,0,121,0,112,0,101,0,73,0,110,0,102,0,111,0,0,0};

typedef struct t_System_ValueType_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_ValueType_RTTYPE;
t_System_ValueType_RTTYPE t_System_ValueType_RTTYPE_OBJ;
int8_t t_System_ValueType_RTTYPE_RTTYPE_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,86,0,97,0,108,0,117,0,101,0,84,0,121,0,112,0,101,0,0,0};
int8_t t_System_ValueType_RTTYPE_RTTYPE_METADATA_FullName[46] = {0,0,0,0,0,0,0,0,16,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,86,0,97,0,108,0,117,0,101,0,84,0,121,0,112,0,101,0,0,0};

typedef struct t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE;
t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_OBJ;
int8_t t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_RTTYPE_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,71,0,101,0,110,0,101,0,114,0,97,0,116,0,101,0,100,0,67,0,111,0,100,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_RTTYPE_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,100,0,101,0,68,0,111,0,109,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,46,0,71,0,101,0,110,0,101,0,114,0,97,0,116,0,101,0,100,0,67,0,111,0,100,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Collections_ArrayList_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_Collections_IEnumerator* (*vTable_GetEnumerator_0)(t_System_Collections_IEnumerable* self);
} t_System_Collections_ArrayList_RTTYPE;
t_System_Collections_ArrayList_RTTYPE t_System_Collections_ArrayList_RTTYPE_OBJ;
int8_t t_System_Collections_ArrayList_RTTYPE_RTTYPE_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,65,0,114,0,114,0,97,0,121,0,76,0,105,0,115,0,116,0,0,0};
int8_t t_System_Collections_ArrayList_RTTYPE_RTTYPE_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,65,0,114,0,114,0,97,0,121,0,76,0,105,0,115,0,116,0,0,0};

typedef struct t_System_Collections_Queue_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_Collections_IEnumerator* (*vTable_GetEnumerator_0)(t_System_Collections_IEnumerable* self);
} t_System_Collections_Queue_RTTYPE;
t_System_Collections_Queue_RTTYPE t_System_Collections_Queue_RTTYPE_OBJ;
int8_t t_System_Collections_Queue_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,81,0,117,0,101,0,117,0,101,0,0,0};
int8_t t_System_Collections_Queue_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,81,0,117,0,101,0,117,0,101,0,0,0};

typedef struct t_System_Collections_Stack_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_Collections_IEnumerator* (*vTable_GetEnumerator_0)(t_System_Collections_IEnumerable* self);
} t_System_Collections_Stack_RTTYPE;
t_System_Collections_Stack_RTTYPE t_System_Collections_Stack_RTTYPE_OBJ;
int8_t t_System_Collections_Stack_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,83,0,116,0,97,0,99,0,107,0,0,0};
int8_t t_System_Collections_Stack_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,83,0,116,0,97,0,99,0,107,0,0,0};

typedef struct t_System_ComponentModel_BrowsableAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_ComponentModel_BrowsableAttribute_RTTYPE;
t_System_ComponentModel_BrowsableAttribute_RTTYPE t_System_ComponentModel_BrowsableAttribute_RTTYPE_OBJ;
int8_t t_System_ComponentModel_BrowsableAttribute_RTTYPE_RTTYPE_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,66,0,114,0,111,0,119,0,115,0,97,0,98,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_ComponentModel_BrowsableAttribute_RTTYPE_RTTYPE_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,109,0,112,0,111,0,110,0,101,0,110,0,116,0,77,0,111,0,100,0,101,0,108,0,46,0,66,0,114,0,111,0,119,0,115,0,97,0,98,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_ComponentModel_DependencyAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_ComponentModel_DependencyAttribute_RTTYPE;
t_System_ComponentModel_DependencyAttribute_RTTYPE t_System_ComponentModel_DependencyAttribute_RTTYPE_OBJ;
int8_t t_System_ComponentModel_DependencyAttribute_RTTYPE_RTTYPE_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,68,0,101,0,112,0,101,0,110,0,100,0,101,0,110,0,99,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_ComponentModel_DependencyAttribute_RTTYPE_RTTYPE_METADATA_FullName[96] = {0,0,0,0,0,0,0,0,41,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,109,0,112,0,111,0,110,0,101,0,110,0,116,0,77,0,111,0,100,0,101,0,108,0,46,0,68,0,101,0,112,0,101,0,110,0,100,0,101,0,110,0,99,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE;
t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_OBJ;
int8_t t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,69,0,100,0,105,0,116,0,111,0,114,0,66,0,114,0,111,0,119,0,115,0,97,0,98,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_RTTYPE_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,109,0,112,0,111,0,110,0,101,0,110,0,116,0,77,0,111,0,100,0,101,0,108,0,46,0,69,0,100,0,105,0,116,0,111,0,114,0,66,0,114,0,111,0,119,0,115,0,97,0,98,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Diagnostics_ConditionalAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Diagnostics_ConditionalAttribute_RTTYPE;
t_System_Diagnostics_ConditionalAttribute_RTTYPE t_System_Diagnostics_ConditionalAttribute_RTTYPE_OBJ;
int8_t t_System_Diagnostics_ConditionalAttribute_RTTYPE_RTTYPE_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,67,0,111,0,110,0,100,0,105,0,116,0,105,0,111,0,110,0,97,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Diagnostics_ConditionalAttribute_RTTYPE_RTTYPE_METADATA_FullName[92] = {0,0,0,0,0,0,0,0,39,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,105,0,97,0,103,0,110,0,111,0,115,0,116,0,105,0,99,0,115,0,46,0,67,0,111,0,110,0,100,0,105,0,116,0,105,0,111,0,110,0,97,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Diagnostics_Debug_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Diagnostics_Debug_RTTYPE;
t_System_Diagnostics_Debug_RTTYPE t_System_Diagnostics_Debug_RTTYPE_OBJ;
int8_t t_System_Diagnostics_Debug_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,68,0,101,0,98,0,117,0,103,0,0,0};
int8_t t_System_Diagnostics_Debug_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,105,0,97,0,103,0,110,0,111,0,115,0,116,0,105,0,99,0,115,0,46,0,68,0,101,0,98,0,117,0,103,0,0,0};

typedef struct t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE;
t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_OBJ;
int8_t t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,117,0,112,0,112,0,114,0,101,0,115,0,115,0,77,0,101,0,115,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_RTTYPE_METADATA_FullName[126] = {0,0,0,0,0,0,0,0,56,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,105,0,97,0,103,0,110,0,111,0,115,0,116,0,105,0,99,0,115,0,46,0,67,0,111,0,100,0,101,0,65,0,110,0,97,0,108,0,121,0,115,0,105,0,115,0,46,0,83,0,117,0,112,0,112,0,114,0,101,0,115,0,115,0,77,0,101,0,115,0,115,0,97,0,103,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Globalization_CultureInfo_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Globalization_CultureInfo_RTTYPE;
t_System_Globalization_CultureInfo_RTTYPE t_System_Globalization_CultureInfo_RTTYPE_OBJ;
int8_t t_System_Globalization_CultureInfo_RTTYPE_RTTYPE_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,73,0,110,0,102,0,111,0,0,0};
int8_t t_System_Globalization_CultureInfo_RTTYPE_RTTYPE_METADATA_FullName[78] = {0,0,0,0,0,0,0,0,32,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,71,0,108,0,111,0,98,0,97,0,108,0,105,0,122,0,97,0,116,0,105,0,111,0,110,0,46,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,73,0,110,0,102,0,111,0,0,0};

typedef struct t_System_Globalization_NumberFormatInfo_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Globalization_NumberFormatInfo_RTTYPE;
t_System_Globalization_NumberFormatInfo_RTTYPE t_System_Globalization_NumberFormatInfo_RTTYPE_OBJ;
int8_t t_System_Globalization_NumberFormatInfo_RTTYPE_RTTYPE_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,78,0,117,0,109,0,98,0,101,0,114,0,70,0,111,0,114,0,109,0,97,0,116,0,73,0,110,0,102,0,111,0,0,0};
int8_t t_System_Globalization_NumberFormatInfo_RTTYPE_RTTYPE_METADATA_FullName[88] = {0,0,0,0,0,0,0,0,37,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,71,0,108,0,111,0,98,0,97,0,108,0,105,0,122,0,97,0,116,0,105,0,111,0,110,0,46,0,78,0,117,0,109,0,98,0,101,0,114,0,70,0,111,0,114,0,109,0,97,0,116,0,73,0,110,0,102,0,111,0,0,0};

typedef struct t_System_Reflection_AssemblyCompanyAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyCompanyAttribute_RTTYPE;
t_System_Reflection_AssemblyCompanyAttribute_RTTYPE t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,109,0,112,0,97,0,110,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_RTTYPE_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,109,0,112,0,97,0,110,0,121,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE;
t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_RTTYPE_METADATA_Name[74] = {0,0,0,0,0,0,0,0,30,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,110,0,102,0,105,0,103,0,117,0,114,0,97,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_RTTYPE_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,110,0,102,0,105,0,103,0,117,0,114,0,97,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE;
t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_RTTYPE_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_RTTYPE_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,111,0,112,0,121,0,114,0,105,0,103,0,104,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyCultureAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyCultureAttribute_RTTYPE;
t_System_Reflection_AssemblyCultureAttribute_RTTYPE t_System_Reflection_AssemblyCultureAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyCultureAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyCultureAttribute_RTTYPE_RTTYPE_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,67,0,117,0,108,0,116,0,117,0,114,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE;
t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_RTTYPE_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,108,0,97,0,121,0,83,0,105,0,103,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_RTTYPE_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,108,0,97,0,121,0,83,0,105,0,103,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE;
t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_RTTYPE_METADATA_Name[70] = {0,0,0,0,0,0,0,0,28,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,115,0,99,0,114,0,105,0,112,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_RTTYPE_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,68,0,101,0,115,0,99,0,114,0,105,0,112,0,116,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE;
t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_RTTYPE_METADATA_Name[70] = {0,0,0,0,0,0,0,0,28,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,70,0,105,0,108,0,101,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_RTTYPE_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,70,0,105,0,108,0,101,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE;
t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_RTTYPE_METADATA_Name[88] = {0,0,0,0,0,0,0,0,37,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,73,0,110,0,102,0,111,0,114,0,109,0,97,0,116,0,105,0,111,0,110,0,97,0,108,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_RTTYPE_METADATA_FullName[124] = {0,0,0,0,0,0,0,0,55,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,73,0,110,0,102,0,111,0,114,0,109,0,97,0,116,0,105,0,111,0,110,0,97,0,108,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE;
t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,75,0,101,0,121,0,70,0,105,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_RTTYPE_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,75,0,101,0,121,0,70,0,105,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyProductAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyProductAttribute_RTTYPE;
t_System_Reflection_AssemblyProductAttribute_RTTYPE t_System_Reflection_AssemblyProductAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyProductAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,80,0,114,0,111,0,100,0,117,0,99,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyProductAttribute_RTTYPE_RTTYPE_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,80,0,114,0,111,0,100,0,117,0,99,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyTitleAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyTitleAttribute_RTTYPE;
t_System_Reflection_AssemblyTitleAttribute_RTTYPE t_System_Reflection_AssemblyTitleAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyTitleAttribute_RTTYPE_RTTYPE_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,105,0,116,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyTitleAttribute_RTTYPE_RTTYPE_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,105,0,116,0,108,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE;
t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_RTTYPE_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_RTTYPE_METADATA_FullName[102] = {0,0,0,0,0,0,0,0,44,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,84,0,114,0,97,0,100,0,101,0,109,0,97,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_AssemblyVersionAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_AssemblyVersionAttribute_RTTYPE;
t_System_Reflection_AssemblyVersionAttribute_RTTYPE t_System_Reflection_AssemblyVersionAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_AssemblyVersionAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_AssemblyVersionAttribute_RTTYPE_RTTYPE_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,65,0,115,0,115,0,101,0,109,0,98,0,108,0,121,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_DefaultMemberAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Reflection_DefaultMemberAttribute_RTTYPE;
t_System_Reflection_DefaultMemberAttribute_RTTYPE t_System_Reflection_DefaultMemberAttribute_RTTYPE_OBJ;
int8_t t_System_Reflection_DefaultMemberAttribute_RTTYPE_RTTYPE_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,68,0,101,0,102,0,97,0,117,0,108,0,116,0,77,0,101,0,109,0,98,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Reflection_DefaultMemberAttribute_RTTYPE_RTTYPE_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,68,0,101,0,102,0,97,0,117,0,108,0,116,0,77,0,101,0,109,0,98,0,101,0,114,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_MemberInfo_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_String* (*vTable_get_Name_0)(t_System_Reflection_MemberInfo* self);
} t_System_Reflection_MemberInfo_RTTYPE;
t_System_Reflection_MemberInfo_RTTYPE t_System_Reflection_MemberInfo_RTTYPE_OBJ;
int8_t t_System_Reflection_MemberInfo_RTTYPE_RTTYPE_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,77,0,101,0,109,0,98,0,101,0,114,0,73,0,110,0,102,0,111,0,0,0};
int8_t t_System_Reflection_MemberInfo_RTTYPE_RTTYPE_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,77,0,101,0,109,0,98,0,101,0,114,0,73,0,110,0,102,0,111,0,0,0};

typedef struct t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE;
t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_OBJ;
int8_t t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_RTTYPE_METADATA_Name[66] = {0,0,0,0,0,0,0,0,26,0,0,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,71,0,101,0,110,0,101,0,114,0,97,0,116,0,101,0,100,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_RTTYPE_METADATA_FullName[130] = {0,0,0,0,0,0,0,0,58,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,71,0,101,0,110,0,101,0,114,0,97,0,116,0,101,0,100,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE;
t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_OBJ;
int8_t t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_RTTYPE_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,73,0,110,0,100,0,101,0,120,0,101,0,114,0,78,0,97,0,109,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_RTTYPE_METADATA_FullName[118] = {0,0,0,0,0,0,0,0,52,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,73,0,110,0,100,0,101,0,120,0,101,0,114,0,78,0,97,0,109,0,101,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE;
t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_OBJ;
int8_t t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_RTTYPE_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,73,0,110,0,116,0,114,0,105,0,110,0,115,0,105,0,99,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_RTTYPE_METADATA_FullName[114] = {0,0,0,0,0,0,0,0,50,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,73,0,110,0,116,0,114,0,105,0,110,0,115,0,105,0,99,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE;
t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_OBJ;
int8_t t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_RTTYPE_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_RTTYPE_METADATA_FullName[116] = {0,0,0,0,0,0,0,0,51,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE;
t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_OBJ;
int8_t t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_RTTYPE_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,72,0,101,0,108,0,112,0,101,0,114,0,115,0,0,0};
int8_t t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_RTTYPE_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,72,0,101,0,108,0,112,0,101,0,114,0,115,0,0,0};

typedef struct t_System_Runtime_InteropServices_OutAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_InteropServices_OutAttribute_RTTYPE;
t_System_Runtime_InteropServices_OutAttribute_RTTYPE t_System_Runtime_InteropServices_OutAttribute_RTTYPE_OBJ;
int8_t t_System_Runtime_InteropServices_OutAttribute_RTTYPE_RTTYPE_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,79,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Runtime_InteropServices_OutAttribute_RTTYPE_RTTYPE_METADATA_FullName[100] = {0,0,0,0,0,0,0,0,43,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,79,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE;
t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_OBJ;
int8_t t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_RTTYPE_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,83,0,116,0,114,0,117,0,99,0,116,0,76,0,97,0,121,0,111,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_RTTYPE_METADATA_FullName[118] = {0,0,0,0,0,0,0,0,52,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,83,0,116,0,114,0,117,0,99,0,116,0,76,0,97,0,121,0,111,0,117,0,116,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE;
t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_OBJ;
int8_t t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_RTTYPE_METADATA_Name[62] = {0,0,0,0,0,0,0,0,24,0,0,0,84,0,97,0,114,0,103,0,101,0,116,0,70,0,114,0,97,0,109,0,101,0,119,0,111,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_RTTYPE_METADATA_FullName[114] = {0,0,0,0,0,0,0,0,50,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,86,0,101,0,114,0,115,0,105,0,111,0,110,0,105,0,110,0,103,0,46,0,84,0,97,0,114,0,103,0,101,0,116,0,70,0,114,0,97,0,109,0,101,0,119,0,111,0,114,0,107,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct t_CS2X_NativeExternAttribute_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_CS2X_NativeExternAttribute_RTTYPE;
t_CS2X_NativeExternAttribute_RTTYPE t_CS2X_NativeExternAttribute_RTTYPE_OBJ;
int8_t t_CS2X_NativeExternAttribute_RTTYPE_RTTYPE_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,78,0,97,0,116,0,105,0,118,0,101,0,69,0,120,0,116,0,101,0,114,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};
int8_t t_CS2X_NativeExternAttribute_RTTYPE_RTTYPE_METADATA_FullName[66] = {0,0,0,0,0,0,0,0,26,0,0,0,67,0,83,0,50,0,88,0,46,0,78,0,97,0,116,0,105,0,118,0,101,0,69,0,120,0,116,0,101,0,114,0,110,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,0,0};

typedef struct char_RTTYPE
{
	t_System_RuntimeType runtimeType;
} char_RTTYPE;
char_RTTYPE char_RTTYPE_OBJ;
int8_t char_RTTYPE_RTTYPE_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,0,0};
int8_t char_RTTYPE_RTTYPE_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,0,0};

typedef struct uint8_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} uint8_t_RTTYPE;
uint8_t_RTTYPE uint8_t_RTTYPE_OBJ;
int8_t uint8_t_RTTYPE_RTTYPE_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,66,0,121,0,116,0,101,0,0,0};
int8_t uint8_t_RTTYPE_RTTYPE_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,0,0};

typedef struct char16_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} char16_t_RTTYPE;
char16_t_RTTYPE char16_t_RTTYPE_OBJ;
int8_t char16_t_RTTYPE_RTTYPE_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,67,0,104,0,97,0,114,0,0,0};
int8_t char16_t_RTTYPE_RTTYPE_METADATA_FullName[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,104,0,97,0,114,0,0,0};

typedef struct t_System_Decimal_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_Decimal_RTTYPE;
t_System_Decimal_RTTYPE t_System_Decimal_RTTYPE_OBJ;
int8_t t_System_Decimal_RTTYPE_RTTYPE_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,68,0,101,0,99,0,105,0,109,0,97,0,108,0,0,0};
int8_t t_System_Decimal_RTTYPE_RTTYPE_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,101,0,99,0,105,0,109,0,97,0,108,0,0,0};

typedef struct double_RTTYPE
{
	t_System_RuntimeType runtimeType;
} double_RTTYPE;
double_RTTYPE double_RTTYPE_OBJ;
int8_t double_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,68,0,111,0,117,0,98,0,108,0,101,0,0,0};
int8_t double_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,0,0};

typedef struct int16_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} int16_t_RTTYPE;
int16_t_RTTYPE int16_t_RTTYPE_OBJ;
int8_t int16_t_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,49,0,54,0,0,0};
int8_t int16_t_RTTYPE_RTTYPE_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,49,0,54,0,0,0};

typedef struct int32_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} int32_t_RTTYPE;
int32_t_RTTYPE int32_t_RTTYPE_OBJ;
int8_t int32_t_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,51,0,50,0,0,0};
int8_t int32_t_RTTYPE_RTTYPE_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,0,0};

typedef struct int64_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} int64_t_RTTYPE;
int64_t_RTTYPE int64_t_RTTYPE_OBJ;
int8_t int64_t_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,73,0,110,0,116,0,54,0,52,0,0,0};
int8_t int64_t_RTTYPE_RTTYPE_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,54,0,52,0,0,0};

typedef struct intptr_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} intptr_t_RTTYPE;
intptr_t_RTTYPE intptr_t_RTTYPE_OBJ;
int8_t intptr_t_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0};
int8_t intptr_t_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0};

typedef struct t_System_RuntimeFieldHandle_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_RuntimeFieldHandle_RTTYPE;
t_System_RuntimeFieldHandle_RTTYPE t_System_RuntimeFieldHandle_RTTYPE_OBJ;
int8_t t_System_RuntimeFieldHandle_RTTYPE_RTTYPE_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,70,0,105,0,101,0,108,0,100,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0};
int8_t t_System_RuntimeFieldHandle_RTTYPE_RTTYPE_METADATA_FullName[64] = {0,0,0,0,0,0,0,0,25,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,70,0,105,0,101,0,108,0,100,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0};

typedef struct t_System_RuntimeTypeHandle_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_RuntimeTypeHandle_RTTYPE;
t_System_RuntimeTypeHandle_RTTYPE t_System_RuntimeTypeHandle_RTTYPE_OBJ;
int8_t t_System_RuntimeTypeHandle_RTTYPE_RTTYPE_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0};
int8_t t_System_RuntimeTypeHandle_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,84,0,121,0,112,0,101,0,72,0,97,0,110,0,100,0,108,0,101,0,0,0};

typedef struct int8_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} int8_t_RTTYPE;
int8_t_RTTYPE int8_t_RTTYPE_OBJ;
int8_t int8_t_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,83,0,66,0,121,0,116,0,101,0,0,0};
int8_t int8_t_RTTYPE_RTTYPE_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,66,0,121,0,116,0,101,0,0,0};

typedef struct float_RTTYPE
{
	t_System_RuntimeType runtimeType;
} float_RTTYPE;
float_RTTYPE float_RTTYPE_OBJ;
int8_t float_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,105,0,110,0,103,0,108,0,101,0,0,0};
int8_t float_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,105,0,110,0,103,0,108,0,101,0,0,0};

typedef struct uint16_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} uint16_t_RTTYPE;
uint16_t_RTTYPE uint16_t_RTTYPE_OBJ;
int8_t uint16_t_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,49,0,54,0,0,0};
int8_t uint16_t_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,49,0,54,0,0,0};

typedef struct uint32_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} uint32_t_RTTYPE;
uint32_t_RTTYPE uint32_t_RTTYPE_OBJ;
int8_t uint32_t_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,51,0,50,0,0,0};
int8_t uint32_t_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,51,0,50,0,0,0};

typedef struct uint64_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} uint64_t_RTTYPE;
uint64_t_RTTYPE uint64_t_RTTYPE_OBJ;
int8_t uint64_t_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,85,0,73,0,110,0,116,0,54,0,52,0,0,0};
int8_t uint64_t_RTTYPE_RTTYPE_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,54,0,52,0,0,0};

typedef struct uintptr_t_RTTYPE
{
	t_System_RuntimeType runtimeType;
} uintptr_t_RTTYPE;
uintptr_t_RTTYPE uintptr_t_RTTYPE_OBJ;
int8_t uintptr_t_RTTYPE_RTTYPE_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,85,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0};
int8_t uintptr_t_RTTYPE_RTTYPE_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,85,0,73,0,110,0,116,0,80,0,116,0,114,0,0,0};

typedef struct t_System_Collections_DictionaryEntry_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_Collections_DictionaryEntry_RTTYPE;
t_System_Collections_DictionaryEntry_RTTYPE t_System_Collections_DictionaryEntry_RTTYPE_OBJ;
int8_t t_System_Collections_DictionaryEntry_RTTYPE_RTTYPE_METADATA_Name[44] = {0,0,0,0,0,0,0,0,15,0,0,0,68,0,105,0,99,0,116,0,105,0,111,0,110,0,97,0,114,0,121,0,69,0,110,0,116,0,114,0,121,0,0,0};
int8_t t_System_Collections_DictionaryEntry_RTTYPE_RTTYPE_METADATA_FullName[82] = {0,0,0,0,0,0,0,0,34,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,68,0,105,0,99,0,116,0,105,0,111,0,110,0,97,0,114,0,121,0,69,0,110,0,116,0,114,0,121,0,0,0};

typedef struct t_System_ICloneable_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_Object* (*vTable_Clone_0)(t_System_ICloneable* self);
} t_System_ICloneable_RTTYPE;
t_System_ICloneable_RTTYPE t_System_ICloneable_RTTYPE_OBJ;
int8_t t_System_ICloneable_RTTYPE_RTTYPE_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,73,0,67,0,108,0,111,0,110,0,101,0,97,0,98,0,108,0,101,0,0,0};
int8_t t_System_ICloneable_RTTYPE_RTTYPE_METADATA_FullName[48] = {0,0,0,0,0,0,0,0,17,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,67,0,108,0,111,0,110,0,101,0,97,0,98,0,108,0,101,0,0,0};

typedef struct t_System_IDisposable_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	void (*vTable_Dispose_0)(t_System_IDisposable* self);
} t_System_IDisposable_RTTYPE;
t_System_IDisposable_RTTYPE t_System_IDisposable_RTTYPE_OBJ;
int8_t t_System_IDisposable_RTTYPE_RTTYPE_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,73,0,68,0,105,0,115,0,112,0,111,0,115,0,97,0,98,0,108,0,101,0,0,0};
int8_t t_System_IDisposable_RTTYPE_RTTYPE_METADATA_FullName[50] = {0,0,0,0,0,0,0,0,18,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,68,0,105,0,115,0,112,0,111,0,115,0,97,0,98,0,108,0,101,0,0,0};

typedef struct t_System_Collections_IEnumerable_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_Collections_IEnumerator* (*vTable_GetEnumerator_0)(t_System_Collections_IEnumerable* self);
} t_System_Collections_IEnumerable_RTTYPE;
t_System_Collections_IEnumerable_RTTYPE t_System_Collections_IEnumerable_RTTYPE_OBJ;
int8_t t_System_Collections_IEnumerable_RTTYPE_RTTYPE_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,73,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,98,0,108,0,101,0,0,0};
int8_t t_System_Collections_IEnumerable_RTTYPE_RTTYPE_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,73,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,98,0,108,0,101,0,0,0};

typedef struct t_System_Collections_IEnumerator_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	t_System_Object* (*vTable_get_Current_0)(t_System_Collections_IEnumerator* self);
	char (*vTable_MoveNext_0)(t_System_Collections_IEnumerator* self);
	void (*vTable_Reset_0)(t_System_Collections_IEnumerator* self);
} t_System_Collections_IEnumerator_RTTYPE;
t_System_Collections_IEnumerator_RTTYPE t_System_Collections_IEnumerator_RTTYPE_OBJ;
int8_t t_System_Collections_IEnumerator_RTTYPE_RTTYPE_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,73,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,0,0};
int8_t t_System_Collections_IEnumerator_RTTYPE_RTTYPE_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,73,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,0,0};

typedef struct t_System_ComponentModel_IContainer_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
	void (*vTable_Dispose_0)(t_System_IDisposable* self);
} t_System_ComponentModel_IContainer_RTTYPE;
t_System_ComponentModel_IContainer_RTTYPE t_System_ComponentModel_IContainer_RTTYPE_OBJ;
int8_t t_System_ComponentModel_IContainer_RTTYPE_RTTYPE_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,73,0,67,0,111,0,110,0,116,0,97,0,105,0,110,0,101,0,114,0,0,0};
int8_t t_System_ComponentModel_IContainer_RTTYPE_RTTYPE_METADATA_FullName[78] = {0,0,0,0,0,0,0,0,32,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,109,0,112,0,111,0,110,0,101,0,110,0,116,0,77,0,111,0,100,0,101,0,108,0,46,0,73,0,67,0,111,0,110,0,116,0,97,0,105,0,110,0,101,0,114,0,0,0};

typedef struct t_System_AttributeTargets_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_AttributeTargets_RTTYPE;
t_System_AttributeTargets_RTTYPE t_System_AttributeTargets_RTTYPE_OBJ;
int8_t t_System_AttributeTargets_RTTYPE_RTTYPE_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,84,0,97,0,114,0,103,0,101,0,116,0,115,0,0,0};
int8_t t_System_AttributeTargets_RTTYPE_RTTYPE_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,84,0,97,0,114,0,103,0,101,0,116,0,115,0,0,0};

typedef struct t_System_ComponentModel_EditorBrowsableState_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_ComponentModel_EditorBrowsableState_RTTYPE;
t_System_ComponentModel_EditorBrowsableState_RTTYPE t_System_ComponentModel_EditorBrowsableState_RTTYPE_OBJ;
int8_t t_System_ComponentModel_EditorBrowsableState_RTTYPE_RTTYPE_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,69,0,100,0,105,0,116,0,111,0,114,0,66,0,114,0,111,0,119,0,115,0,97,0,98,0,108,0,101,0,83,0,116,0,97,0,116,0,101,0,0,0};
int8_t t_System_ComponentModel_EditorBrowsableState_RTTYPE_RTTYPE_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,109,0,112,0,111,0,110,0,101,0,110,0,116,0,77,0,111,0,100,0,101,0,108,0,46,0,69,0,100,0,105,0,116,0,111,0,114,0,66,0,114,0,111,0,119,0,115,0,97,0,98,0,108,0,101,0,83,0,116,0,97,0,116,0,101,0,0,0};

typedef struct t_System_Reflection_MethodImplAttributes_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_Reflection_MethodImplAttributes_RTTYPE;
t_System_Reflection_MethodImplAttributes_RTTYPE t_System_Reflection_MethodImplAttributes_RTTYPE_OBJ;
int8_t t_System_Reflection_MethodImplAttributes_RTTYPE_RTTYPE_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,115,0,0,0};
int8_t t_System_Reflection_MethodImplAttributes_RTTYPE_RTTYPE_METADATA_FullName[90] = {0,0,0,0,0,0,0,0,38,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,101,0,102,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,65,0,116,0,116,0,114,0,105,0,98,0,117,0,116,0,101,0,115,0,0,0};

typedef struct t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE;
t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_OBJ;
int8_t t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_RTTYPE_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,67,0,111,0,100,0,101,0,84,0,121,0,112,0,101,0,0,0};
int8_t t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_RTTYPE_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,67,0,111,0,100,0,101,0,84,0,121,0,112,0,101,0,0,0};

typedef struct t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE;
t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_OBJ;
int8_t t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_RTTYPE_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,79,0,112,0,116,0,105,0,111,0,110,0,115,0,0,0};
int8_t t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_RTTYPE_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,67,0,111,0,109,0,112,0,105,0,108,0,101,0,114,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,77,0,101,0,116,0,104,0,111,0,100,0,73,0,109,0,112,0,108,0,79,0,112,0,116,0,105,0,111,0,110,0,115,0,0,0};

typedef struct t_System_Runtime_InteropServices_LayoutKind_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_System_Runtime_InteropServices_LayoutKind_RTTYPE;
t_System_Runtime_InteropServices_LayoutKind_RTTYPE t_System_Runtime_InteropServices_LayoutKind_RTTYPE_OBJ;
int8_t t_System_Runtime_InteropServices_LayoutKind_RTTYPE_RTTYPE_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,76,0,97,0,121,0,111,0,117,0,116,0,75,0,105,0,110,0,100,0,0,0};
int8_t t_System_Runtime_InteropServices_LayoutKind_RTTYPE_RTTYPE_METADATA_FullName[96] = {0,0,0,0,0,0,0,0,41,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,82,0,117,0,110,0,116,0,105,0,109,0,101,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,83,0,101,0,114,0,118,0,105,0,99,0,101,0,115,0,46,0,76,0,97,0,121,0,111,0,117,0,116,0,75,0,105,0,110,0,100,0,0,0};

typedef struct t_CS2X_NativeExternTarget_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_CS2X_NativeExternTarget_RTTYPE;
t_CS2X_NativeExternTarget_RTTYPE t_CS2X_NativeExternTarget_RTTYPE_OBJ;
int8_t t_CS2X_NativeExternTarget_RTTYPE_RTTYPE_METADATA_Name[50] = {0,0,0,0,0,0,0,0,18,0,0,0,78,0,97,0,116,0,105,0,118,0,101,0,69,0,120,0,116,0,101,0,114,0,110,0,84,0,97,0,114,0,103,0,101,0,116,0,0,0};
int8_t t_CS2X_NativeExternTarget_RTTYPE_RTTYPE_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,67,0,83,0,50,0,88,0,46,0,78,0,97,0,116,0,105,0,118,0,101,0,69,0,120,0,116,0,101,0,114,0,110,0,84,0,97,0,114,0,103,0,101,0,116,0,0,0};

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
t_System_Collections_IEnumerator* m_System_Array_GetEnumerator_0(t_System_Array* self);
int32_t m_System_Array_get_Length_0(t_System_Array* self);
int64_t m_System_Array_get_LongLength_0(t_System_Array* self);
t_System_Array* m_System_Array__ctor_0();
t_System_Attribute* m_System_Attribute__ctor_0();
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute__ctor_0(t_System_AttributeTargets p_validOn);
t_System_AttributeTargets m_System_AttributeUsageAttribute_get_ValidOn_0(t_System_AttributeUsageAttribute* self);
int32_t m_System_BitConverter_SingleToInt32Bits_0(float p_value);
void m_System_Buffer_MemoryCopy_0(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy);
void m_System_Buffer_MemoryCopy_1(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy);
t_System_CancelEventArgs* m_System_CancelEventArgs__ctor_0();
t_System_CLSCompliantAttribute* m_System_CLSCompliantAttribute__ctor_0(char p_isCompliant);
char m_System_CLSCompliantAttribute_get_IsCompliant_0(t_System_CLSCompliantAttribute* self);
void m_System_Console_Write_0(t_System_String* p_s);
void m_System_Console_WriteLine_0(t_System_String* p_s);
void m_System_Console_WriteLine_1();
t_System_Delegate* m_System_Delegate__ctor_0();
t_System_Enum* m_System_Enum__ctor_0();
t_System_String* m_System_Environment_get_NewLine_0();
t_System_EventArgs* m_System_EventArgs__ctor_0();
t_System_Exception* m_System_Exception__ctor_0();
t_System_Exception* m_System_Exception__ctor_1(t_System_String* p_message);
t_System_Exception* m_System_Exception_get_InnerException_0(t_System_Exception* self);
t_System_String* m_System_Exception_get_StackTrace_0(t_System_Exception* self);
t_System_FlagsAttribute* m_System_FlagsAttribute__ctor_0();
t_System_IndexOutOfRangeException* m_System_IndexOutOfRangeException__ctor_0();
t_System_MulticastDelegate* m_System_MulticastDelegate__ctor_0();
t_System_NonSerializedAttribute* m_System_NonSerializedAttribute__ctor_0();
t_System_NotSupportedException* m_System_NotSupportedException__ctor_0();
t_System_Type* m_System_Object_GetType_0(t_System_Object* self);
t_System_String* m_System_Object_ToString_0(t_System_Object* self);
t_System_Object* m_System_Object__ctor_0();
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_0();
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_1(t_System_String* p_message);
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_2(t_System_String* p_message, char p_error);
char m_System_ObsoleteAttribute_get_IsError_0(t_System_ObsoleteAttribute* self);
t_System_String* m_System_ObsoleteAttribute_get_Message_0(t_System_ObsoleteAttribute* self);
t_System_ParamArrayAttribute* m_System_ParamArrayAttribute__ctor_0();
t_System_Type* m_System_RuntimeType_get_BaseType_0(t_System_RuntimeType* self);
t_System_String* m_System_RuntimeType_get_Name_0(t_System_RuntimeType* self);
t_System_String* m_System_RuntimeType_get_FullName_0(t_System_RuntimeType* self);
t_System_RuntimeTypeHandle m_System_RuntimeType_get_TypeHandle_0(t_System_RuntimeType* self);
t_System_RuntimeType* m_System_RuntimeType__ctor_0();
int32_t m_System_String_get_Length_0(t_System_String* self);
t_System_String* m_System_String_FastAllocateString_0(int32_t p_length);
char m_System_String_IsNullOrEmpty_0(t_System_String* p_value);
void m_System_String_FillStringChecked_0(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src);
t_System_String* m_System_String_Concat_0(t_System_String* p_str0, t_System_String* p_str1);
t_System_String* m_System_String_Concat_1(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2);
t_System_String* m_System_String_Concat_2(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2, t_System_String* p_str3);
char m_System_String_Equals_0(t_System_String* self, t_System_String* p_value);
t_System_String* m_System_String__ctor_0();
t_System_StringBuilder* m_System_StringBuilder__ctor_0();
t_System_RuntimeTypeHandle m_System_Type_get_TypeHandle_0(t_System_Type* self);
t_System_Type* m_System_Type_GetTypeFromHandle_0(t_System_RuntimeTypeHandle p_handle);
t_System_Type* m_System_Type__ctor_0();
t_System_TypeInfo* m_System_TypeInfo__ctor_0();
t_System_ValueType* m_System_ValueType__ctor_0();
t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute__ctor_0(t_System_String* p_tool, t_System_String* p_version);
t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Tool_0(t_System_CodeDom_Compiler_GeneratedCodeAttribute* self);
t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Version_0(t_System_CodeDom_Compiler_GeneratedCodeAttribute* self);
int32_t m_System_Collections_ArrayList_get_Count_0(t_System_Collections_ArrayList* self);
t_System_Collections_IEnumerator* m_System_Collections_ArrayList_GetEnumerator_0(t_System_Collections_ArrayList* self);
t_System_Collections_ArrayList* m_System_Collections_ArrayList__ctor_0();
int32_t m_System_Collections_Queue_get_Count_0(t_System_Collections_Queue* self);
t_System_Collections_IEnumerator* m_System_Collections_Queue_GetEnumerator_0(t_System_Collections_Queue* self);
t_System_Collections_Queue* m_System_Collections_Queue__ctor_0();
int32_t m_System_Collections_Stack_get_Count_0(t_System_Collections_Stack* self);
t_System_Collections_IEnumerator* m_System_Collections_Stack_GetEnumerator_0(t_System_Collections_Stack* self);
t_System_Collections_Stack* m_System_Collections_Stack__ctor_0();
t_System_ComponentModel_BrowsableAttribute* m_System_ComponentModel_BrowsableAttribute__ctor_0();
t_System_ComponentModel_DependencyAttribute* m_System_ComponentModel_DependencyAttribute__ctor_0();
t_System_ComponentModel_EditorBrowsableAttribute* m_System_ComponentModel_EditorBrowsableAttribute__ctor_0(t_System_ComponentModel_EditorBrowsableState p_state);
t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableAttribute_get_State_0(t_System_ComponentModel_EditorBrowsableAttribute* self);
t_System_Diagnostics_ConditionalAttribute* m_System_Diagnostics_ConditionalAttribute__ctor_0(t_System_String* p_conditionString);
t_System_String* m_System_Diagnostics_ConditionalAttribute_get_ConditionString_0(t_System_Diagnostics_ConditionalAttribute* self);
t_System_Diagnostics_Debug* m_System_Diagnostics_Debug__ctor_0();
t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute* m_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute__ctor_0();
t_System_Globalization_CultureInfo* m_System_Globalization_CultureInfo__ctor_0();
t_System_Globalization_NumberFormatInfo* m_System_Globalization_NumberFormatInfo__ctor_0();
t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute__ctor_0(t_System_String* p_company);
t_System_String* m_System_Reflection_AssemblyCompanyAttribute_get_Company_0(t_System_Reflection_AssemblyCompanyAttribute* self);
t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t_System_String* p_configuration);
t_System_String* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0(t_System_Reflection_AssemblyConfigurationAttribute* self);
t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t_System_String* p_copyright);
t_System_String* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0(t_System_Reflection_AssemblyCopyrightAttribute* self);
t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute__ctor_0(t_System_String* p_culture);
t_System_String* m_System_Reflection_AssemblyCultureAttribute_get_Culture_0(t_System_Reflection_AssemblyCultureAttribute* self);
t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute__ctor_0(char p_delaySign);
char m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0(t_System_Reflection_AssemblyDelaySignAttribute* self);
t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t_System_String* p_description);
t_System_String* m_System_Reflection_AssemblyDescriptionAttribute_get_Description_0(t_System_Reflection_AssemblyDescriptionAttribute* self);
t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t_System_String* p_version);
t_System_String* m_System_Reflection_AssemblyFileVersionAttribute_get_Version_0(t_System_Reflection_AssemblyFileVersionAttribute* self);
t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t_System_String* p_informationalVersion);
t_System_String* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0(t_System_Reflection_AssemblyInformationalVersionAttribute* self);
t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t_System_String* p_keyFile);
t_System_String* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0(t_System_Reflection_AssemblyKeyFileAttribute* self);
t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute__ctor_0(t_System_String* p_product);
t_System_String* m_System_Reflection_AssemblyProductAttribute_get_Product_0(t_System_Reflection_AssemblyProductAttribute* self);
t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute__ctor_0(t_System_String* p_title);
t_System_String* m_System_Reflection_AssemblyTitleAttribute_get_Title_0(t_System_Reflection_AssemblyTitleAttribute* self);
t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t_System_String* p_trademark);
t_System_String* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0(t_System_Reflection_AssemblyTrademarkAttribute* self);
t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute__ctor_0(t_System_String* p_version);
t_System_String* m_System_Reflection_AssemblyVersionAttribute_get_Version_0(t_System_Reflection_AssemblyVersionAttribute* self);
t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute__ctor_0(t_System_String* p_memberName);
t_System_String* m_System_Reflection_DefaultMemberAttribute_get_MemberName_0(t_System_Reflection_DefaultMemberAttribute* self);
t_System_Reflection_MemberInfo* m_System_Reflection_MemberInfo__ctor_0();
t_System_Runtime_CompilerServices_CompilerGeneratedAttribute* m_System_Runtime_CompilerServices_CompilerGeneratedAttribute__ctor_0();
t_System_Runtime_CompilerServices_IndexerNameAttribute* m_System_Runtime_CompilerServices_IndexerNameAttribute__ctor_0(t_System_String* p_indexerName);
t_System_Runtime_CompilerServices_IntrinsicAttribute* m_System_Runtime_CompilerServices_IntrinsicAttribute__ctor_0();
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions);
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(int16_t p_value);
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2();
t_System_Runtime_InteropServices_OutAttribute* m_System_Runtime_InteropServices_OutAttribute__ctor_0();
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t_System_Runtime_InteropServices_LayoutKind p_layoutKind);
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(int16_t p_layoutKind);
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t_System_String* p_frameworkName);
t_CS2X_NativeExternAttribute* m_CS2X_NativeExternAttribute__ctor_0(t_CS2X_NativeExternTarget p_target, t_System_String* p_methodName);
char m_char__ctor_0();
uint8_t m_uint8_t__ctor_0();
char16_t m_char16_t__ctor_0();
t_System_Decimal m_System_Decimal__ctor_0();
double m_double__ctor_0();
int16_t m_int16_t__ctor_0();
t_System_String* m_int32_t_ToString_0(int32_t* self);
int32_t m_int32_t__ctor_0();
int64_t m_int64_t__ctor_0();
intptr_t m_intptr_t__ctor_0();
t_System_RuntimeFieldHandle m_System_RuntimeFieldHandle__ctor_0();
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor_0(t_System_RuntimeType* p_type);
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor_1();
int8_t m_int8_t__ctor_0();
char m_float_IsNaN_0(float p_f);
char m_float_IsNegative_0(float p_f);
float m_float__ctor_0();
uint16_t m_uint16_t__ctor_0();
uint32_t m_uint32_t__ctor_0();
uint64_t m_uint64_t__ctor_0();
uintptr_t m_uintptr_t__ctor_0();
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor_0(t_System_Object* p_key, t_System_Object* p_value);
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor_1();
t_System_AttributeTargets m_System_AttributeTargets__ctor_0();
t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableState__ctor_0();
t_System_Reflection_MethodImplAttributes m_System_Reflection_MethodImplAttributes__ctor_0();
t_System_Runtime_CompilerServices_MethodCodeType m_System_Runtime_CompilerServices_MethodCodeType__ctor_0();
t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplOptions__ctor_0();
t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_LayoutKind__ctor_0();
t_CS2X_NativeExternTarget m_CS2X_NativeExternTarget__ctor_0();

/* =============================== */
/* Method definitions */
/* =============================== */
t_System_Collections_IEnumerator* m_System_Array_GetEnumerator_0(t_System_Array* self)
{
	return 0;
}

int32_t m_System_Array_get_Length_0(t_System_Array* self)
{
}

int64_t m_System_Array_get_LongLength_0(t_System_Array* self)
{
}

t_System_Array* m_System_Array__ctor_0()
{
	t_System_Array* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Array*));
	return self;
}

t_System_Attribute* m_System_Attribute__ctor_0()
{
	t_System_Attribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Attribute*));
	return self;
}

t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute__ctor_0(t_System_AttributeTargets p_validOn)
{
	t_System_AttributeUsageAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_AttributeUsageAttribute));
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
;
	m_System_Buffer_memcpy_0(p_destination, p_source, (void*)p_sourceBytesToCopy);
}

t_System_CancelEventArgs* m_System_CancelEventArgs__ctor_0()
{
	t_System_CancelEventArgs* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_CancelEventArgs*));
	return self;
}

t_System_CLSCompliantAttribute* m_System_CLSCompliantAttribute__ctor_0(char p_isCompliant)
{
	t_System_CLSCompliantAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_CLSCompliantAttribute));
	self->f__isCompliant_2 = p_isCompliant;
	return self;
}

char m_System_CLSCompliantAttribute_get_IsCompliant_0(t_System_CLSCompliantAttribute* self)
{
	return self->f__isCompliant_2;
}

void m_System_Console_Write_0(t_System_String* p_s)
{
	char16_t* l_printBuff_0;
	l_printBuff_0 = alloca(sizeof(char16_t));
	[l_printBuff_0] = ' ';
;
}

void m_System_Console_WriteLine_0(t_System_String* p_s)
{
	m_System_Console_Write_0(m_System_String_Concat_0(p_s, m_System_Environment_get_NewLine_0()));
}

void m_System_Console_WriteLine_1()
{
	m_System_Console_Write_0(m_System_Environment_get_NewLine_0());
}

t_System_Delegate* m_System_Delegate__ctor_0()
{
	t_System_Delegate* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Delegate*));
	return self;
}

t_System_Enum* m_System_Enum__ctor_0()
{
	t_System_Enum* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Enum*));
	return self;
}

t_System_String* m_System_Environment_get_NewLine_0()
{
	return StringLiteral_0;
}

t_System_EventArgs* m_System_EventArgs__ctor_0()
{
	t_System_EventArgs* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_EventArgs*));
	return self;
}

t_System_Exception* m_System_Exception__ctor_0()
{
	t_System_Exception* self;
	self = CS2X_GC_New(sizeof(t_System_Exception));
	return self;
}

t_System_Exception* m_System_Exception__ctor_1(t_System_String* p_message)
{
	t_System_Exception* self;
	self = CS2X_GC_New(sizeof(t_System_Exception));
	self->f__Message_k__BackingField_1 = p_message;
	return self;
}

t_System_Exception* m_System_Exception_get_InnerException_0(t_System_Exception* self)
{
	return 0;
}

t_System_String* m_System_Exception_get_StackTrace_0(t_System_Exception* self)
{
	return 0;
}

t_System_FlagsAttribute* m_System_FlagsAttribute__ctor_0()
{
	t_System_FlagsAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_FlagsAttribute*));
	return self;
}

t_System_IndexOutOfRangeException* m_System_IndexOutOfRangeException__ctor_0()
{
	t_System_IndexOutOfRangeException* self;
	self = CS2X_GC_New(sizeof(t_System_IndexOutOfRangeException));
	return self;
}

t_System_MulticastDelegate* m_System_MulticastDelegate__ctor_0()
{
	t_System_MulticastDelegate* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_MulticastDelegate*));
	return self;
}

t_System_NonSerializedAttribute* m_System_NonSerializedAttribute__ctor_0()
{
	t_System_NonSerializedAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_NonSerializedAttribute*));
	return self;
}

t_System_NotSupportedException* m_System_NotSupportedException__ctor_0()
{
	t_System_NotSupportedException* self;
	self = CS2X_GC_New(sizeof(t_System_NotSupportedException));
	return self;
}

t_System_Type* m_System_Object_GetType_0(t_System_Object* self)
{
}

t_System_String* m_System_Object_ToString_0(t_System_Object* self)
{
	return m_System_Type_get_FullName_0(m_System_Object_GetType_0(self));
}

t_System_Object* m_System_Object__ctor_0()
{
	t_System_Object* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Object*));
	return self;
}

t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_0()
{
	t_System_ObsoleteAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_ObsoleteAttribute));
	return self;
}

t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_1(t_System_String* p_message)
{
	t_System_ObsoleteAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_ObsoleteAttribute));
	self->f__message_2 = p_message;
	return self;
}

t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor_2(t_System_String* p_message, char p_error)
{
	t_System_ObsoleteAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_ObsoleteAttribute));
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

t_System_ParamArrayAttribute* m_System_ParamArrayAttribute__ctor_0()
{
	t_System_ParamArrayAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_ParamArrayAttribute*));
	return self;
}

t_System_Type* m_System_RuntimeType_get_BaseType_0(t_System_RuntimeType* self)
{
	return self->f__baseType_4;
}

t_System_String* m_System_RuntimeType_get_Name_0(t_System_RuntimeType* self)
{
	return self->f__name_4;
}

t_System_String* m_System_RuntimeType_get_FullName_0(t_System_RuntimeType* self)
{
	return self->f__fullName_4;
}

t_System_RuntimeTypeHandle m_System_RuntimeType_get_TypeHandle_0(t_System_RuntimeType* self)
{
	return m_System_RuntimeTypeHandle__ctor_0(self);
}

t_System_RuntimeType* m_System_RuntimeType__ctor_0()
{
	t_System_RuntimeType* self;
	self = CS2X_GC_New(sizeof(t_System_RuntimeType));
	return self;
}

int32_t m_System_String_get_Length_0(t_System_String* self)
{
}

t_System_String* m_System_String_FastAllocateString_0(int32_t p_length)
{
}

char m_System_String_IsNullOrEmpty_0(t_System_String* p_value)
{
	return (m_System_String_Equals_0(p_value, 0) || 0 >= (uint32_t)m_System_String_get_Length_0(p_value)) ? 1 : 0;
}

void m_System_String_FillStringChecked_0(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src)
{
;
;
}

t_System_String* m_System_String_Concat_0(t_System_String* p_str0, t_System_String* p_str1)
{
	int32_t l_str0Length_0;
	t_System_String* l_result_1;
;
;
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
;
;
;
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
;
;
;
;
	l_totalLength_0 = m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1) + m_System_String_get_Length_0(p_str2) + m_System_String_get_Length_0(p_str3);
	l_result_1 = m_System_String_FastAllocateString_0(l_totalLength_0);
	m_System_String_FillStringChecked_0(l_result_1, 0, p_str0);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0), p_str1);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1), p_str2);
	m_System_String_FillStringChecked_0(l_result_1, m_System_String_get_Length_0(p_str0) + m_System_String_get_Length_0(p_str1) + m_System_String_get_Length_0(p_str2), p_str3);
	return l_result_1;
}

char m_System_String_Equals_0(t_System_String* self, t_System_String* p_value)
{
;
	return 1;
}

t_System_String* m_System_String__ctor_0()
{
	t_System_String* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_String));
	return self;
}

t_System_StringBuilder* m_System_StringBuilder__ctor_0()
{
	t_System_StringBuilder* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_StringBuilder*));
	return self;
}

t_System_RuntimeTypeHandle m_System_Type_get_TypeHandle_0(t_System_Type* self)
{
;
}

t_System_Type* m_System_Type_GetTypeFromHandle_0(t_System_RuntimeTypeHandle p_handle)
{
}

t_System_Type* m_System_Type__ctor_0()
{
	t_System_Type* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Type*));
	return self;
}

t_System_TypeInfo* m_System_TypeInfo__ctor_0()
{
	t_System_TypeInfo* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_TypeInfo*));
	return self;
}

t_System_ValueType* m_System_ValueType__ctor_0()
{
	t_System_ValueType* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_ValueType*));
	return self;
}

t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute__ctor_0(t_System_String* p_tool, t_System_String* p_version)
{
	t_System_CodeDom_Compiler_GeneratedCodeAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_CodeDom_Compiler_GeneratedCodeAttribute));
	self->f__tool_2 = p_tool;
	self->f__version_2 = p_version;
	return self;
}

t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Tool_0(t_System_CodeDom_Compiler_GeneratedCodeAttribute* self)
{
	return self->f__tool_2;
}

t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Version_0(t_System_CodeDom_Compiler_GeneratedCodeAttribute* self)
{
	return self->f__version_2;
}

int32_t m_System_Collections_ArrayList_get_Count_0(t_System_Collections_ArrayList* self)
{
	return 0;
}

t_System_Collections_IEnumerator* m_System_Collections_ArrayList_GetEnumerator_0(t_System_Collections_ArrayList* self)
{
	return 0;
}

t_System_Collections_ArrayList* m_System_Collections_ArrayList__ctor_0()
{
	t_System_Collections_ArrayList* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Collections_ArrayList*));
	return self;
}

int32_t m_System_Collections_Queue_get_Count_0(t_System_Collections_Queue* self)
{
	return 0;
}

t_System_Collections_IEnumerator* m_System_Collections_Queue_GetEnumerator_0(t_System_Collections_Queue* self)
{
	return 0;
}

t_System_Collections_Queue* m_System_Collections_Queue__ctor_0()
{
	t_System_Collections_Queue* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Collections_Queue*));
	return self;
}

int32_t m_System_Collections_Stack_get_Count_0(t_System_Collections_Stack* self)
{
	return 0;
}

t_System_Collections_IEnumerator* m_System_Collections_Stack_GetEnumerator_0(t_System_Collections_Stack* self)
{
	return 0;
}

t_System_Collections_Stack* m_System_Collections_Stack__ctor_0()
{
	t_System_Collections_Stack* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Collections_Stack*));
	return self;
}

t_System_ComponentModel_BrowsableAttribute* m_System_ComponentModel_BrowsableAttribute__ctor_0()
{
	t_System_ComponentModel_BrowsableAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_ComponentModel_BrowsableAttribute*));
	return self;
}

t_System_ComponentModel_DependencyAttribute* m_System_ComponentModel_DependencyAttribute__ctor_0()
{
	t_System_ComponentModel_DependencyAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_ComponentModel_DependencyAttribute*));
	return self;
}

t_System_ComponentModel_EditorBrowsableAttribute* m_System_ComponentModel_EditorBrowsableAttribute__ctor_0(t_System_ComponentModel_EditorBrowsableState p_state)
{
	t_System_ComponentModel_EditorBrowsableAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_ComponentModel_EditorBrowsableAttribute));
	self->f__browsableState_2 = p_state;
	return self;
}

t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableAttribute_get_State_0(t_System_ComponentModel_EditorBrowsableAttribute* self)
{
	return self->f__browsableState_2;
}

t_System_Diagnostics_ConditionalAttribute* m_System_Diagnostics_ConditionalAttribute__ctor_0(t_System_String* p_conditionString)
{
	t_System_Diagnostics_ConditionalAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Diagnostics_ConditionalAttribute));
	self->f__conditionString_2 = p_conditionString;
	return self;
}

t_System_String* m_System_Diagnostics_ConditionalAttribute_get_ConditionString_0(t_System_Diagnostics_ConditionalAttribute* self)
{
	return self->f__conditionString_2;
}

t_System_Diagnostics_Debug* m_System_Diagnostics_Debug__ctor_0()
{
	t_System_Diagnostics_Debug* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Diagnostics_Debug*));
	return self;
}

t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute* m_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute__ctor_0()
{
	t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute*));
	return self;
}

t_System_Globalization_CultureInfo* m_System_Globalization_CultureInfo__ctor_0()
{
	t_System_Globalization_CultureInfo* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Globalization_CultureInfo*));
	return self;
}

t_System_Globalization_NumberFormatInfo* m_System_Globalization_NumberFormatInfo__ctor_0()
{
	t_System_Globalization_NumberFormatInfo* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Globalization_NumberFormatInfo*));
	return self;
}

t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute__ctor_0(t_System_String* p_company)
{
	t_System_Reflection_AssemblyCompanyAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyCompanyAttribute));
	self->f__company_2 = p_company;
	return self;
}

t_System_String* m_System_Reflection_AssemblyCompanyAttribute_get_Company_0(t_System_Reflection_AssemblyCompanyAttribute* self)
{
	return self->f__company_2;
}

t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t_System_String* p_configuration)
{
	t_System_Reflection_AssemblyConfigurationAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyConfigurationAttribute));
	self->f__configuration_2 = p_configuration;
	return self;
}

t_System_String* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0(t_System_Reflection_AssemblyConfigurationAttribute* self)
{
	return self->f__configuration_2;
}

t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t_System_String* p_copyright)
{
	t_System_Reflection_AssemblyCopyrightAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyCopyrightAttribute));
	self->f__copyright_2 = p_copyright;
	return self;
}

t_System_String* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0(t_System_Reflection_AssemblyCopyrightAttribute* self)
{
	return self->f__copyright_2;
}

t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute__ctor_0(t_System_String* p_culture)
{
	t_System_Reflection_AssemblyCultureAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyCultureAttribute));
	self->f__culture_2 = p_culture;
	return self;
}

t_System_String* m_System_Reflection_AssemblyCultureAttribute_get_Culture_0(t_System_Reflection_AssemblyCultureAttribute* self)
{
	return self->f__culture_2;
}

t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute__ctor_0(char p_delaySign)
{
	t_System_Reflection_AssemblyDelaySignAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Reflection_AssemblyDelaySignAttribute));
	self->f__delaySign_2 = p_delaySign;
	return self;
}

char m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0(t_System_Reflection_AssemblyDelaySignAttribute* self)
{
	return self->f__delaySign_2;
}

t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t_System_String* p_description)
{
	t_System_Reflection_AssemblyDescriptionAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyDescriptionAttribute));
	self->f__description_2 = p_description;
	return self;
}

t_System_String* m_System_Reflection_AssemblyDescriptionAttribute_get_Description_0(t_System_Reflection_AssemblyDescriptionAttribute* self)
{
	return self->f__description_2;
}

t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t_System_String* p_version)
{
	t_System_Reflection_AssemblyFileVersionAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyFileVersionAttribute));
	self->f__version_2 = p_version;
	return self;
}

t_System_String* m_System_Reflection_AssemblyFileVersionAttribute_get_Version_0(t_System_Reflection_AssemblyFileVersionAttribute* self)
{
	return self->f__version_2;
}

t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t_System_String* p_informationalVersion)
{
	t_System_Reflection_AssemblyInformationalVersionAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyInformationalVersionAttribute));
	self->f__informationalVersion_2 = p_informationalVersion;
	return self;
}

t_System_String* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0(t_System_Reflection_AssemblyInformationalVersionAttribute* self)
{
	return self->f__informationalVersion_2;
}

t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t_System_String* p_keyFile)
{
	t_System_Reflection_AssemblyKeyFileAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyKeyFileAttribute));
	self->f__keyFile_2 = p_keyFile;
	return self;
}

t_System_String* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0(t_System_Reflection_AssemblyKeyFileAttribute* self)
{
	return self->f__keyFile_2;
}

t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute__ctor_0(t_System_String* p_product)
{
	t_System_Reflection_AssemblyProductAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyProductAttribute));
	self->f__product_2 = p_product;
	return self;
}

t_System_String* m_System_Reflection_AssemblyProductAttribute_get_Product_0(t_System_Reflection_AssemblyProductAttribute* self)
{
	return self->f__product_2;
}

t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute__ctor_0(t_System_String* p_title)
{
	t_System_Reflection_AssemblyTitleAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyTitleAttribute));
	self->f__title_2 = p_title;
	return self;
}

t_System_String* m_System_Reflection_AssemblyTitleAttribute_get_Title_0(t_System_Reflection_AssemblyTitleAttribute* self)
{
	return self->f__title_2;
}

t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t_System_String* p_trademark)
{
	t_System_Reflection_AssemblyTrademarkAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyTrademarkAttribute));
	self->f__trademark_2 = p_trademark;
	return self;
}

t_System_String* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0(t_System_Reflection_AssemblyTrademarkAttribute* self)
{
	return self->f__trademark_2;
}

t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute__ctor_0(t_System_String* p_version)
{
	t_System_Reflection_AssemblyVersionAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_AssemblyVersionAttribute));
	self->f__version_2 = p_version;
	return self;
}

t_System_String* m_System_Reflection_AssemblyVersionAttribute_get_Version_0(t_System_Reflection_AssemblyVersionAttribute* self)
{
	return self->f__version_2;
}

t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute__ctor_0(t_System_String* p_memberName)
{
	t_System_Reflection_DefaultMemberAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Reflection_DefaultMemberAttribute));
	self->f__memberName_2 = p_memberName;
	return self;
}

t_System_String* m_System_Reflection_DefaultMemberAttribute_get_MemberName_0(t_System_Reflection_DefaultMemberAttribute* self)
{
	return self->f__memberName_2;
}

t_System_Reflection_MemberInfo* m_System_Reflection_MemberInfo__ctor_0()
{
	t_System_Reflection_MemberInfo* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Reflection_MemberInfo*));
	return self;
}

t_System_Runtime_CompilerServices_CompilerGeneratedAttribute* m_System_Runtime_CompilerServices_CompilerGeneratedAttribute__ctor_0()
{
	t_System_Runtime_CompilerServices_CompilerGeneratedAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_CompilerServices_CompilerGeneratedAttribute*));
	return self;
}

t_System_Runtime_CompilerServices_IndexerNameAttribute* m_System_Runtime_CompilerServices_IndexerNameAttribute__ctor_0(t_System_String* p_indexerName)
{
	t_System_Runtime_CompilerServices_IndexerNameAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_CompilerServices_IndexerNameAttribute*));
	return self;
}

t_System_Runtime_CompilerServices_IntrinsicAttribute* m_System_Runtime_CompilerServices_IntrinsicAttribute__ctor_0()
{
	t_System_Runtime_CompilerServices_IntrinsicAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_CompilerServices_IntrinsicAttribute*));
	return self;
}

t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions)
{
	t_System_Runtime_CompilerServices_MethodImplAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_CompilerServices_MethodImplAttribute));
	self->f__Value_k__BackingField_2 = p_methodImplOptions;
	return self;
}

t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(int16_t p_value)
{
	t_System_Runtime_CompilerServices_MethodImplAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_CompilerServices_MethodImplAttribute));
	self->f__Value_k__BackingField_2 = (t_System_Runtime_CompilerServices_MethodImplOptions)p_value;
	return self;
}

t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2()
{
	t_System_Runtime_CompilerServices_MethodImplAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_CompilerServices_MethodImplAttribute));
	return self;
}

t_System_Runtime_InteropServices_OutAttribute* m_System_Runtime_InteropServices_OutAttribute__ctor_0()
{
	t_System_Runtime_InteropServices_OutAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_InteropServices_OutAttribute*));
	return self;
}

t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t_System_Runtime_InteropServices_LayoutKind p_layoutKind)
{
	t_System_Runtime_InteropServices_StructLayoutAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_InteropServices_StructLayoutAttribute));
	self->f__Value_k__BackingField_2 = p_layoutKind;
	return self;
}

t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(int16_t p_layoutKind)
{
	t_System_Runtime_InteropServices_StructLayoutAttribute* self;
	self = CS2X_GC_NewAtomic(sizeof(t_System_Runtime_InteropServices_StructLayoutAttribute));
	self->f__Value_k__BackingField_2 = (t_System_Runtime_InteropServices_LayoutKind)p_layoutKind;
	return self;
}

t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t_System_String* p_frameworkName)
{
	t_System_Runtime_Versioning_TargetFrameworkAttribute* self;
	self = CS2X_GC_New(sizeof(t_System_Runtime_Versioning_TargetFrameworkAttribute));
	self->f__FrameworkName_k__BackingField_2 = p_frameworkName;
	return self;
}

t_CS2X_NativeExternAttribute* m_CS2X_NativeExternAttribute__ctor_0(t_CS2X_NativeExternTarget p_target, t_System_String* p_methodName)
{
	t_CS2X_NativeExternAttribute* self;
	self = CS2X_GC_New(sizeof(t_CS2X_NativeExternAttribute));
	self->f_target_2 = p_target;
	self->f_methodName_2 = p_methodName;
	return self;
}

char m_char__ctor_0()
{
	char selfObj = {0};
	return selfObj;
}

uint8_t m_uint8_t__ctor_0()
{
	uint8_t selfObj = {0};
	return selfObj;
}

char16_t m_char16_t__ctor_0()
{
	char16_t selfObj = {0};
	return selfObj;
}

t_System_Decimal m_System_Decimal__ctor_0()
{
	t_System_Decimal selfObj = {0};
	return selfObj;
}

double m_double__ctor_0()
{
	double selfObj = {0};
	return selfObj;
}

int16_t m_int16_t__ctor_0()
{
	int16_t selfObj = {0};
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

int64_t m_int64_t__ctor_0()
{
	int64_t selfObj = {0};
	return selfObj;
}

intptr_t m_intptr_t__ctor_0()
{
	intptr_t selfObj = {0};
	return selfObj;
}

t_System_RuntimeFieldHandle m_System_RuntimeFieldHandle__ctor_0()
{
	t_System_RuntimeFieldHandle selfObj = {0};
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

uintptr_t m_uintptr_t__ctor_0()
{
	uintptr_t selfObj = {0};
	return selfObj;
}

t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor_0(t_System_Object* p_key, t_System_Object* p_value)
{
	t_System_Collections_DictionaryEntry selfObj;
	t_System_Collections_DictionaryEntry* self = &selfObj;
	self->f__Key_k__BackingField_2 = p_key;
	self->f__Value_k__BackingField_2 = p_value;
	return selfObj;
}

t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor_1()
{
	t_System_Collections_DictionaryEntry selfObj = {0};
	return selfObj;
}

t_System_AttributeTargets m_System_AttributeTargets__ctor_0()
{
	t_System_AttributeTargets selfObj = {0};
	return selfObj;
}

t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableState__ctor_0()
{
	t_System_ComponentModel_EditorBrowsableState selfObj = {0};
	return selfObj;
}

t_System_Reflection_MethodImplAttributes m_System_Reflection_MethodImplAttributes__ctor_0()
{
	t_System_Reflection_MethodImplAttributes selfObj = {0};
	return selfObj;
}

t_System_Runtime_CompilerServices_MethodCodeType m_System_Runtime_CompilerServices_MethodCodeType__ctor_0()
{
	t_System_Runtime_CompilerServices_MethodCodeType selfObj = {0};
	return selfObj;
}

t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplOptions__ctor_0()
{
	t_System_Runtime_CompilerServices_MethodImplOptions selfObj = {0};
	return selfObj;
}

t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_LayoutKind__ctor_0()
{
	t_System_Runtime_InteropServices_LayoutKind selfObj = {0};
	return selfObj;
}

t_CS2X_NativeExternTarget m_CS2X_NativeExternTarget__ctor_0()
{
	t_CS2X_NativeExternTarget selfObj = {0};
	return selfObj;
}

/* =============================== */
/* Init Library */
/* =============================== */
void CS2X_InitLib_CS2X_CoreLib()
{
	/* Init runtime type objects */
	memset(&t_System_Array_RTTYPE_OBJ, 0, sizeof(t_System_Array_RTTYPE));
	t_System_Array_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Array_RTTYPE_OBJ;
	memset(&t_System_Attribute_RTTYPE_OBJ, 0, sizeof(t_System_Attribute_RTTYPE));
	t_System_Attribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Attribute_RTTYPE_OBJ;
	memset(&t_System_AttributeUsageAttribute_RTTYPE_OBJ, 0, sizeof(t_System_AttributeUsageAttribute_RTTYPE));
	t_System_AttributeUsageAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_AttributeUsageAttribute_RTTYPE_OBJ;
	memset(&t_System_BitConverter_RTTYPE_OBJ, 0, sizeof(t_System_BitConverter_RTTYPE));
	t_System_BitConverter_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_BitConverter_RTTYPE_OBJ;
	memset(&t_System_Buffer_RTTYPE_OBJ, 0, sizeof(t_System_Buffer_RTTYPE));
	t_System_Buffer_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Buffer_RTTYPE_OBJ;
	memset(&t_System_CancelEventArgs_RTTYPE_OBJ, 0, sizeof(t_System_CancelEventArgs_RTTYPE));
	t_System_CancelEventArgs_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_CancelEventArgs_RTTYPE_OBJ;
	memset(&t_System_CLSCompliantAttribute_RTTYPE_OBJ, 0, sizeof(t_System_CLSCompliantAttribute_RTTYPE));
	t_System_CLSCompliantAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_CLSCompliantAttribute_RTTYPE_OBJ;
	memset(&t_System_Console_RTTYPE_OBJ, 0, sizeof(t_System_Console_RTTYPE));
	t_System_Console_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Console_RTTYPE_OBJ;
	memset(&t_System_Delegate_RTTYPE_OBJ, 0, sizeof(t_System_Delegate_RTTYPE));
	t_System_Delegate_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Delegate_RTTYPE_OBJ;
	memset(&t_System_Enum_RTTYPE_OBJ, 0, sizeof(t_System_Enum_RTTYPE));
	t_System_Enum_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Enum_RTTYPE_OBJ;
	memset(&t_System_Environment_RTTYPE_OBJ, 0, sizeof(t_System_Environment_RTTYPE));
	t_System_Environment_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Environment_RTTYPE_OBJ;
	memset(&t_System_EventArgs_RTTYPE_OBJ, 0, sizeof(t_System_EventArgs_RTTYPE));
	t_System_EventArgs_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_EventArgs_RTTYPE_OBJ;
	memset(&t_System_Exception_RTTYPE_OBJ, 0, sizeof(t_System_Exception_RTTYPE));
	t_System_Exception_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Exception_RTTYPE_OBJ;
	memset(&t_System_FlagsAttribute_RTTYPE_OBJ, 0, sizeof(t_System_FlagsAttribute_RTTYPE));
	t_System_FlagsAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_FlagsAttribute_RTTYPE_OBJ;
	memset(&t_System_GC_RTTYPE_OBJ, 0, sizeof(t_System_GC_RTTYPE));
	t_System_GC_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_GC_RTTYPE_OBJ;
	memset(&t_System_IndexOutOfRangeException_RTTYPE_OBJ, 0, sizeof(t_System_IndexOutOfRangeException_RTTYPE));
	t_System_IndexOutOfRangeException_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_IndexOutOfRangeException_RTTYPE_OBJ;
	memset(&t_System_Math_RTTYPE_OBJ, 0, sizeof(t_System_Math_RTTYPE));
	t_System_Math_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Math_RTTYPE_OBJ;
	memset(&t_System_MathF_RTTYPE_OBJ, 0, sizeof(t_System_MathF_RTTYPE));
	t_System_MathF_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_MathF_RTTYPE_OBJ;
	memset(&t_System_MulticastDelegate_RTTYPE_OBJ, 0, sizeof(t_System_MulticastDelegate_RTTYPE));
	t_System_MulticastDelegate_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_MulticastDelegate_RTTYPE_OBJ;
	memset(&t_System_NonSerializedAttribute_RTTYPE_OBJ, 0, sizeof(t_System_NonSerializedAttribute_RTTYPE));
	t_System_NonSerializedAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_NonSerializedAttribute_RTTYPE_OBJ;
	memset(&t_System_NotSupportedException_RTTYPE_OBJ, 0, sizeof(t_System_NotSupportedException_RTTYPE));
	t_System_NotSupportedException_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_NotSupportedException_RTTYPE_OBJ;
	memset(&t_System_Nullable_RTTYPE_OBJ, 0, sizeof(t_System_Nullable_RTTYPE));
	t_System_Nullable_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Nullable_RTTYPE_OBJ;
	memset(&t_System_Number_RTTYPE_OBJ, 0, sizeof(t_System_Number_RTTYPE));
	t_System_Number_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Number_RTTYPE_OBJ;
	memset(&t_System_Object_RTTYPE_OBJ, 0, sizeof(t_System_Object_RTTYPE));
	t_System_Object_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Object_RTTYPE_OBJ;
	memset(&t_System_ObsoleteAttribute_RTTYPE_OBJ, 0, sizeof(t_System_ObsoleteAttribute_RTTYPE));
	t_System_ObsoleteAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ObsoleteAttribute_RTTYPE_OBJ;
	memset(&t_System_ParamArrayAttribute_RTTYPE_OBJ, 0, sizeof(t_System_ParamArrayAttribute_RTTYPE));
	t_System_ParamArrayAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ParamArrayAttribute_RTTYPE_OBJ;
	memset(&t_System_RuntimeType_RTTYPE_OBJ, 0, sizeof(t_System_RuntimeType_RTTYPE));
	t_System_RuntimeType_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_RuntimeType_RTTYPE_OBJ;
	memset(&t_System_String_RTTYPE_OBJ, 0, sizeof(t_System_String_RTTYPE));
	t_System_String_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	memset(&t_System_StringBuilder_RTTYPE_OBJ, 0, sizeof(t_System_StringBuilder_RTTYPE));
	t_System_StringBuilder_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_StringBuilder_RTTYPE_OBJ;
	memset(&t_System_Type_RTTYPE_OBJ, 0, sizeof(t_System_Type_RTTYPE));
	t_System_Type_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Type_RTTYPE_OBJ;
	memset(&t_System_TypeInfo_RTTYPE_OBJ, 0, sizeof(t_System_TypeInfo_RTTYPE));
	t_System_TypeInfo_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_TypeInfo_RTTYPE_OBJ;
	memset(&t_System_ValueType_RTTYPE_OBJ, 0, sizeof(t_System_ValueType_RTTYPE));
	t_System_ValueType_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ValueType_RTTYPE_OBJ;
	memset(&t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_OBJ, 0, sizeof(t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE));
	t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_OBJ;
	memset(&t_System_Collections_ArrayList_RTTYPE_OBJ, 0, sizeof(t_System_Collections_ArrayList_RTTYPE));
	t_System_Collections_ArrayList_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Collections_ArrayList_RTTYPE_OBJ;
	memset(&t_System_Collections_Queue_RTTYPE_OBJ, 0, sizeof(t_System_Collections_Queue_RTTYPE));
	t_System_Collections_Queue_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Collections_Queue_RTTYPE_OBJ;
	memset(&t_System_Collections_Stack_RTTYPE_OBJ, 0, sizeof(t_System_Collections_Stack_RTTYPE));
	t_System_Collections_Stack_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Collections_Stack_RTTYPE_OBJ;
	memset(&t_System_ComponentModel_BrowsableAttribute_RTTYPE_OBJ, 0, sizeof(t_System_ComponentModel_BrowsableAttribute_RTTYPE));
	t_System_ComponentModel_BrowsableAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ComponentModel_BrowsableAttribute_RTTYPE_OBJ;
	memset(&t_System_ComponentModel_DependencyAttribute_RTTYPE_OBJ, 0, sizeof(t_System_ComponentModel_DependencyAttribute_RTTYPE));
	t_System_ComponentModel_DependencyAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ComponentModel_DependencyAttribute_RTTYPE_OBJ;
	memset(&t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_OBJ, 0, sizeof(t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE));
	t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_OBJ;
	memset(&t_System_Diagnostics_ConditionalAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Diagnostics_ConditionalAttribute_RTTYPE));
	t_System_Diagnostics_ConditionalAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Diagnostics_ConditionalAttribute_RTTYPE_OBJ;
	memset(&t_System_Diagnostics_Debug_RTTYPE_OBJ, 0, sizeof(t_System_Diagnostics_Debug_RTTYPE));
	t_System_Diagnostics_Debug_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Diagnostics_Debug_RTTYPE_OBJ;
	memset(&t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE));
	t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_OBJ;
	memset(&t_System_Globalization_CultureInfo_RTTYPE_OBJ, 0, sizeof(t_System_Globalization_CultureInfo_RTTYPE));
	t_System_Globalization_CultureInfo_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Globalization_CultureInfo_RTTYPE_OBJ;
	memset(&t_System_Globalization_NumberFormatInfo_RTTYPE_OBJ, 0, sizeof(t_System_Globalization_NumberFormatInfo_RTTYPE));
	t_System_Globalization_NumberFormatInfo_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Globalization_NumberFormatInfo_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyCompanyAttribute_RTTYPE));
	t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE));
	t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE));
	t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyCultureAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyCultureAttribute_RTTYPE));
	t_System_Reflection_AssemblyCultureAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyCultureAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE));
	t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE));
	t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE));
	t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE));
	t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE));
	t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyProductAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyProductAttribute_RTTYPE));
	t_System_Reflection_AssemblyProductAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyProductAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyTitleAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyTitleAttribute_RTTYPE));
	t_System_Reflection_AssemblyTitleAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyTitleAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE));
	t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_AssemblyVersionAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_AssemblyVersionAttribute_RTTYPE));
	t_System_Reflection_AssemblyVersionAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_AssemblyVersionAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_DefaultMemberAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_DefaultMemberAttribute_RTTYPE));
	t_System_Reflection_DefaultMemberAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_DefaultMemberAttribute_RTTYPE_OBJ;
	memset(&t_System_Reflection_MemberInfo_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_MemberInfo_RTTYPE));
	t_System_Reflection_MemberInfo_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_MemberInfo_RTTYPE_OBJ;
	memset(&t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE));
	t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_OBJ;
	memset(&t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE));
	t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_OBJ;
	memset(&t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE));
	t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_OBJ;
	memset(&t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE));
	t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_OBJ;
	memset(&t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE));
	t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_OBJ;
	memset(&t_System_Runtime_InteropServices_OutAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_InteropServices_OutAttribute_RTTYPE));
	t_System_Runtime_InteropServices_OutAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_InteropServices_OutAttribute_RTTYPE_OBJ;
	memset(&t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE));
	t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_OBJ;
	memset(&t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE));
	t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_OBJ;
	memset(&t_CS2X_NativeExternAttribute_RTTYPE_OBJ, 0, sizeof(t_CS2X_NativeExternAttribute_RTTYPE));
	t_CS2X_NativeExternAttribute_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_CS2X_NativeExternAttribute_RTTYPE_OBJ;
	memset(&char_RTTYPE_OBJ, 0, sizeof(char_RTTYPE));
	char_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &char_RTTYPE_OBJ;
	memset(&uint8_t_RTTYPE_OBJ, 0, sizeof(uint8_t_RTTYPE));
	uint8_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &uint8_t_RTTYPE_OBJ;
	memset(&char16_t_RTTYPE_OBJ, 0, sizeof(char16_t_RTTYPE));
	char16_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &char16_t_RTTYPE_OBJ;
	memset(&t_System_Decimal_RTTYPE_OBJ, 0, sizeof(t_System_Decimal_RTTYPE));
	t_System_Decimal_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Decimal_RTTYPE_OBJ;
	memset(&double_RTTYPE_OBJ, 0, sizeof(double_RTTYPE));
	double_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &double_RTTYPE_OBJ;
	memset(&int16_t_RTTYPE_OBJ, 0, sizeof(int16_t_RTTYPE));
	int16_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &int16_t_RTTYPE_OBJ;
	memset(&int32_t_RTTYPE_OBJ, 0, sizeof(int32_t_RTTYPE));
	int32_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &int32_t_RTTYPE_OBJ;
	memset(&int64_t_RTTYPE_OBJ, 0, sizeof(int64_t_RTTYPE));
	int64_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &int64_t_RTTYPE_OBJ;
	memset(&intptr_t_RTTYPE_OBJ, 0, sizeof(intptr_t_RTTYPE));
	intptr_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &intptr_t_RTTYPE_OBJ;
	memset(&t_System_RuntimeFieldHandle_RTTYPE_OBJ, 0, sizeof(t_System_RuntimeFieldHandle_RTTYPE));
	t_System_RuntimeFieldHandle_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_RuntimeFieldHandle_RTTYPE_OBJ;
	memset(&t_System_RuntimeTypeHandle_RTTYPE_OBJ, 0, sizeof(t_System_RuntimeTypeHandle_RTTYPE));
	t_System_RuntimeTypeHandle_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_RuntimeTypeHandle_RTTYPE_OBJ;
	memset(&int8_t_RTTYPE_OBJ, 0, sizeof(int8_t_RTTYPE));
	int8_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &int8_t_RTTYPE_OBJ;
	memset(&float_RTTYPE_OBJ, 0, sizeof(float_RTTYPE));
	float_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &float_RTTYPE_OBJ;
	memset(&uint16_t_RTTYPE_OBJ, 0, sizeof(uint16_t_RTTYPE));
	uint16_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &uint16_t_RTTYPE_OBJ;
	memset(&uint32_t_RTTYPE_OBJ, 0, sizeof(uint32_t_RTTYPE));
	uint32_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &uint32_t_RTTYPE_OBJ;
	memset(&uint64_t_RTTYPE_OBJ, 0, sizeof(uint64_t_RTTYPE));
	uint64_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &uint64_t_RTTYPE_OBJ;
	memset(&uintptr_t_RTTYPE_OBJ, 0, sizeof(uintptr_t_RTTYPE));
	uintptr_t_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &uintptr_t_RTTYPE_OBJ;
	memset(&t_System_Collections_DictionaryEntry_RTTYPE_OBJ, 0, sizeof(t_System_Collections_DictionaryEntry_RTTYPE));
	t_System_Collections_DictionaryEntry_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Collections_DictionaryEntry_RTTYPE_OBJ;
	memset(&t_System_ICloneable_RTTYPE_OBJ, 0, sizeof(t_System_ICloneable_RTTYPE));
	t_System_ICloneable_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ICloneable_RTTYPE_OBJ;
	memset(&t_System_IDisposable_RTTYPE_OBJ, 0, sizeof(t_System_IDisposable_RTTYPE));
	t_System_IDisposable_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_IDisposable_RTTYPE_OBJ;
	memset(&t_System_Collections_IEnumerable_RTTYPE_OBJ, 0, sizeof(t_System_Collections_IEnumerable_RTTYPE));
	t_System_Collections_IEnumerable_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Collections_IEnumerable_RTTYPE_OBJ;
	memset(&t_System_Collections_IEnumerator_RTTYPE_OBJ, 0, sizeof(t_System_Collections_IEnumerator_RTTYPE));
	t_System_Collections_IEnumerator_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Collections_IEnumerator_RTTYPE_OBJ;
	memset(&t_System_ComponentModel_IContainer_RTTYPE_OBJ, 0, sizeof(t_System_ComponentModel_IContainer_RTTYPE));
	t_System_ComponentModel_IContainer_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ComponentModel_IContainer_RTTYPE_OBJ;
	memset(&t_System_AttributeTargets_RTTYPE_OBJ, 0, sizeof(t_System_AttributeTargets_RTTYPE));
	t_System_AttributeTargets_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_AttributeTargets_RTTYPE_OBJ;
	memset(&t_System_ComponentModel_EditorBrowsableState_RTTYPE_OBJ, 0, sizeof(t_System_ComponentModel_EditorBrowsableState_RTTYPE));
	t_System_ComponentModel_EditorBrowsableState_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_ComponentModel_EditorBrowsableState_RTTYPE_OBJ;
	memset(&t_System_Reflection_MethodImplAttributes_RTTYPE_OBJ, 0, sizeof(t_System_Reflection_MethodImplAttributes_RTTYPE));
	t_System_Reflection_MethodImplAttributes_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Reflection_MethodImplAttributes_RTTYPE_OBJ;
	memset(&t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE));
	t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_OBJ;
	memset(&t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE));
	t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_OBJ;
	memset(&t_System_Runtime_InteropServices_LayoutKind_RTTYPE_OBJ, 0, sizeof(t_System_Runtime_InteropServices_LayoutKind_RTTYPE));
	t_System_Runtime_InteropServices_LayoutKind_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_System_Runtime_InteropServices_LayoutKind_RTTYPE_OBJ;
	memset(&t_CS2X_NativeExternTarget_RTTYPE_OBJ, 0, sizeof(t_CS2X_NativeExternTarget_RTTYPE));
	t_CS2X_NativeExternTarget_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_CS2X_NativeExternTarget_RTTYPE_OBJ;

	/* Init runtime type metadata / string literals */
	((t_System_String*)t_System_Array_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Array_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Attribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Attribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_AttributeUsageAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_AttributeUsageAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_BitConverter_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_BitConverter_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Buffer_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Buffer_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_CancelEventArgs_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_CancelEventArgs_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_CLSCompliantAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_CLSCompliantAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Console_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Console_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Delegate_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Delegate_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Enum_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Enum_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Environment_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Environment_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_EventArgs_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_EventArgs_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Exception_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Exception_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_FlagsAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_FlagsAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_GC_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_GC_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_IndexOutOfRangeException_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_IndexOutOfRangeException_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Math_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Math_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_MathF_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_MathF_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_MulticastDelegate_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_MulticastDelegate_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_NonSerializedAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_NonSerializedAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_NotSupportedException_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_NotSupportedException_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Nullable_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Nullable_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Number_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Number_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Object_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Object_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ObsoleteAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ObsoleteAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ParamArrayAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ParamArrayAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_RuntimeType_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_RuntimeType_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_String_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_String_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_StringBuilder_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_StringBuilder_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Type_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Type_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_TypeInfo_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_TypeInfo_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ValueType_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ValueType_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_ArrayList_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_ArrayList_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_Queue_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_Queue_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_Stack_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_Stack_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_BrowsableAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_BrowsableAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_DependencyAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_DependencyAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Diagnostics_ConditionalAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Diagnostics_ConditionalAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Diagnostics_Debug_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Diagnostics_Debug_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Globalization_CultureInfo_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Globalization_CultureInfo_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Globalization_NumberFormatInfo_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Globalization_NumberFormatInfo_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyCultureAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyCultureAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyProductAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyProductAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyTitleAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyTitleAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyVersionAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_AssemblyVersionAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_DefaultMemberAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_DefaultMemberAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_MemberInfo_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_MemberInfo_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_InteropServices_OutAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_InteropServices_OutAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_CS2X_NativeExternAttribute_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_CS2X_NativeExternAttribute_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)char_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)char_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint8_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint8_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)char16_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)char16_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Decimal_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Decimal_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)double_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)double_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int16_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int16_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int32_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int32_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int64_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int64_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)intptr_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)intptr_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_RuntimeFieldHandle_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_RuntimeFieldHandle_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_RuntimeTypeHandle_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_RuntimeTypeHandle_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int8_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)int8_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)float_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)float_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint16_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint16_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint32_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint32_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint64_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uint64_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uintptr_t_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)uintptr_t_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_DictionaryEntry_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_DictionaryEntry_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ICloneable_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ICloneable_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_IDisposable_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_IDisposable_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_IEnumerable_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_IEnumerable_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_IEnumerator_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Collections_IEnumerator_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_IContainer_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_IContainer_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_AttributeTargets_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_AttributeTargets_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_EditorBrowsableState_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_ComponentModel_EditorBrowsableState_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_MethodImplAttributes_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Reflection_MethodImplAttributes_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_MethodCodeType_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_CompilerServices_MethodImplOptions_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_InteropServices_LayoutKind_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_System_Runtime_InteropServices_LayoutKind_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_CS2X_NativeExternTarget_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_CS2X_NativeExternTarget_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;

	/* Init runtime type vtabel */
	t_System_Array_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Attribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_AttributeUsageAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_BitConverter_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Buffer_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_CancelEventArgs_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_CLSCompliantAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Console_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Delegate_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Enum_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Environment_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_EventArgs_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Exception_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Exception_RTTYPE_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;
	t_System_Exception_RTTYPE_OBJ.vTable_get_StackTrace_0 = m_System_Exception_get_StackTrace_0;
	t_System_FlagsAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_GC_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_IndexOutOfRangeException_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_IndexOutOfRangeException_RTTYPE_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;
	t_System_IndexOutOfRangeException_RTTYPE_OBJ.vTable_get_StackTrace_0 = m_System_Exception_get_StackTrace_0;
	t_System_Math_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_MathF_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_MulticastDelegate_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_NonSerializedAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_NotSupportedException_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_NotSupportedException_RTTYPE_OBJ.vTable_get_Message_0 = m_System_Exception_get_Message_0;
	t_System_NotSupportedException_RTTYPE_OBJ.vTable_get_StackTrace_0 = m_System_Exception_get_StackTrace_0;
	t_System_Nullable_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Number_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Object_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_ObsoleteAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_ParamArrayAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_RuntimeType_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_RuntimeType_RTTYPE_OBJ.vTable_get_Name_0 = m_System_Reflection_MemberInfo_get_Name_0;
	t_System_RuntimeType_RTTYPE_OBJ.vTable_get_BaseType_0 = m_System_Type_get_BaseType_0;
	t_System_RuntimeType_RTTYPE_OBJ.vTable_get_FullName_0 = m_System_Type_get_FullName_0;
	t_System_RuntimeType_RTTYPE_OBJ.vTable_get_TypeHandle_0 = m_System_Type_get_TypeHandle_0;
	t_System_String_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_StringBuilder_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Type_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Type_RTTYPE_OBJ.vTable_get_Name_0 = m_System_Reflection_MemberInfo_get_Name_0;
	t_System_Type_RTTYPE_OBJ.vTable_get_BaseType_0 = m_System_Type_get_BaseType_0;
	t_System_Type_RTTYPE_OBJ.vTable_get_FullName_0 = m_System_Type_get_FullName_0;
	t_System_Type_RTTYPE_OBJ.vTable_get_TypeHandle_0 = m_System_Type_get_TypeHandle_0;
	t_System_TypeInfo_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_TypeInfo_RTTYPE_OBJ.vTable_get_Name_0 = m_System_Reflection_MemberInfo_get_Name_0;
	t_System_TypeInfo_RTTYPE_OBJ.vTable_get_BaseType_0 = m_System_Type_get_BaseType_0;
	t_System_TypeInfo_RTTYPE_OBJ.vTable_get_FullName_0 = m_System_Type_get_FullName_0;
	t_System_TypeInfo_RTTYPE_OBJ.vTable_get_TypeHandle_0 = m_System_Type_get_TypeHandle_0;
	t_System_ValueType_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_CodeDom_Compiler_GeneratedCodeAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Collections_ArrayList_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Collections_ArrayList_RTTYPE_OBJ.vTable_GetEnumerator_0 = m_System_Collections_IEnumerable_GetEnumerator_0;
	t_System_Collections_Queue_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Collections_Queue_RTTYPE_OBJ.vTable_GetEnumerator_0 = m_System_Collections_IEnumerable_GetEnumerator_0;
	t_System_Collections_Stack_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Collections_Stack_RTTYPE_OBJ.vTable_GetEnumerator_0 = m_System_Collections_IEnumerable_GetEnumerator_0;
	t_System_ComponentModel_BrowsableAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_ComponentModel_DependencyAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_ComponentModel_EditorBrowsableAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Diagnostics_ConditionalAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Diagnostics_Debug_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Globalization_CultureInfo_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Globalization_NumberFormatInfo_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyCompanyAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyConfigurationAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyCopyrightAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyCultureAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyDelaySignAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyDescriptionAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyFileVersionAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyInformationalVersionAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyKeyFileAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyProductAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyTitleAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyTrademarkAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_AssemblyVersionAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_DefaultMemberAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_MemberInfo_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Reflection_MemberInfo_RTTYPE_OBJ.vTable_get_Name_0 = m_System_Reflection_MemberInfo_get_Name_0;
	t_System_Runtime_CompilerServices_CompilerGeneratedAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Runtime_CompilerServices_IndexerNameAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Runtime_CompilerServices_IntrinsicAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Runtime_CompilerServices_MethodImplAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Runtime_CompilerServices_RuntimeHelpers_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Runtime_InteropServices_OutAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Runtime_InteropServices_StructLayoutAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Runtime_Versioning_TargetFrameworkAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_CS2X_NativeExternAttribute_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_ICloneable_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_ICloneable_RTTYPE_OBJ.vTable_Clone_0 = m_System_ICloneable_Clone_0;
	t_System_IDisposable_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_IDisposable_RTTYPE_OBJ.vTable_Dispose_0 = m_System_IDisposable_Dispose_0;
	t_System_Collections_IEnumerable_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Collections_IEnumerable_RTTYPE_OBJ.vTable_GetEnumerator_0 = m_System_Collections_IEnumerable_GetEnumerator_0;
	t_System_Collections_IEnumerator_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_Collections_IEnumerator_RTTYPE_OBJ.vTable_get_Current_0 = m_System_Collections_IEnumerator_get_Current_0;
	t_System_Collections_IEnumerator_RTTYPE_OBJ.vTable_MoveNext_0 = m_System_Collections_IEnumerator_MoveNext_0;
	t_System_Collections_IEnumerator_RTTYPE_OBJ.vTable_Reset_0 = m_System_Collections_IEnumerator_Reset_0;
	t_System_ComponentModel_IContainer_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_System_ComponentModel_IContainer_RTTYPE_OBJ.vTable_Dispose_0 = m_System_IDisposable_Dispose_0;
}

void CS2X_InitStringLiterals()
{
	((t_System_String*)StringLiteral_0)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
}
