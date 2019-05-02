#pragma once
/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <uchar.h>
#include <locale.h>
#include "_StringLiterals.h"

/* =============================== */
/* Torward declare Types */
/* =============================== */
typedef void t_System_Array;
typedef void t_System_Attribute;
typedef struct t_System_AttributeUsageAttribute t_System_AttributeUsageAttribute;
typedef void t_System_BitConverter;
typedef void t_System_Buffer;
typedef void t_System_CancelEventArgs;
typedef struct t_System_CLSCompliantAttribute t_System_CLSCompliantAttribute;
typedef void t_System_Console;
typedef void t_System_Delegate;
typedef void t_System_Enum;
typedef void t_System_Environment;
typedef void t_System_EventArgs;
typedef struct t_System_Exception t_System_Exception;
typedef void t_System_FlagsAttribute;
typedef void t_System_GC;
typedef struct t_System_IndexOutOfRangeException t_System_IndexOutOfRangeException;
typedef void t_System_Math;
typedef void t_System_MathF;
typedef void t_System_MulticastDelegate;
typedef void t_System_NonSerializedAttribute;
typedef struct t_System_NotSupportedException t_System_NotSupportedException;
typedef void t_System_Nullable;
typedef void t_System_Number;
typedef void t_System_Object;
typedef struct t_System_ObsoleteAttribute t_System_ObsoleteAttribute;
typedef void t_System_ParamArrayAttribute;
typedef struct t_System_RuntimeType t_System_RuntimeType;
typedef struct t_System_String t_System_String;
typedef void t_System_StringBuilder;
typedef void t_System_Type;
typedef void t_System_TypeInfo;
typedef void t_System_ValueType;
typedef struct t_System_CodeDom_Compiler_GeneratedCodeAttribute t_System_CodeDom_Compiler_GeneratedCodeAttribute;
typedef void t_System_Collections_ArrayList;
typedef void t_System_Collections_Queue;
typedef void t_System_Collections_Stack;
typedef void t_System_ComponentModel_BrowsableAttribute;
typedef void t_System_ComponentModel_DependencyAttribute;
typedef struct t_System_ComponentModel_EditorBrowsableAttribute t_System_ComponentModel_EditorBrowsableAttribute;
typedef struct t_System_Diagnostics_ConditionalAttribute t_System_Diagnostics_ConditionalAttribute;
typedef void t_System_Diagnostics_Debug;
typedef void t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute;
typedef void t_System_Globalization_CultureInfo;
typedef void t_System_Globalization_NumberFormatInfo;
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
typedef void t_System_Reflection_MemberInfo;
typedef void t_System_Runtime_CompilerServices_CompilerGeneratedAttribute;
typedef void t_System_Runtime_CompilerServices_IndexerNameAttribute;
typedef void t_System_Runtime_CompilerServices_IntrinsicAttribute;
typedef struct t_System_Runtime_CompilerServices_MethodImplAttribute t_System_Runtime_CompilerServices_MethodImplAttribute;
typedef void t_System_Runtime_CompilerServices_RuntimeHelpers;
typedef void t_System_Runtime_InteropServices_OutAttribute;
typedef struct t_System_Runtime_InteropServices_StructLayoutAttribute t_System_Runtime_InteropServices_StructLayoutAttribute;
typedef struct t_System_Runtime_Versioning_TargetFrameworkAttribute t_System_Runtime_Versioning_TargetFrameworkAttribute;
typedef struct t_CS2X_NativeExternAttribute t_CS2X_NativeExternAttribute;
typedef struct t_System_Decimal t_System_Decimal;
typedef void* t_System_RuntimeFieldHandle;
typedef struct t_System_RuntimeTypeHandle t_System_RuntimeTypeHandle;
typedef struct t_System_Collections_DictionaryEntry t_System_Collections_DictionaryEntry;
typedef void t_System_ICloneable;
typedef void t_System_IDisposable;
typedef void t_System_Collections_ICollection;
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
/* Forward decalre Methods */
/* =============================== */
t_System_Collections_IEnumerator* m_System_Array_GetEnumerator_0();
int32_t m_System_Array_get_Length_0();
int64_t m_System_Array_get_LongLength_0();
int32_t m_System_Array_System_Collections_ICollection_get_Count_0();
void m_System_Array__ctor_0();
void m_System_Attribute__ctor_0();
void m_System_AttributeUsageAttribute__ctor_0(t_System_AttributeTargets p_validOn);
t_System_AttributeTargets m_System_AttributeUsageAttribute_get_ValidOn_0();
char m_System_AttributeUsageAttribute_get_AllowMultiple_0();
void m_System_AttributeUsageAttribute_set_AllowMultiple_0(char p_value);
char m_System_AttributeUsageAttribute_get_Inherited_0();
void m_System_AttributeUsageAttribute_set_Inherited_0(char p_value);
int32_t m_System_BitConverter_SingleToInt32Bits_0(float p_value);
void m_System_Buffer_MemoryCopy_0(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy);
void m_System_Buffer_MemoryCopy_1(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy);
void m_System_CancelEventArgs__ctor_0();
void m_System_CLSCompliantAttribute__ctor_0(char p_isCompliant);
char m_System_CLSCompliantAttribute_get_IsCompliant_0();
void m_System_Console_Write_0(t_System_String* p_s);
void m_System_Console_WriteLine_0(t_System_String* p_s);
void m_System_Console_WriteLine_1();
void m_System_Delegate__ctor_0();
void m_System_Enum__ctor_0();
t_System_String* m_System_Environment_get_NewLine_0();
void m_System_EventArgs__ctor_0();
void m_System_Exception__ctor_0();
void m_System_Exception__ctor_1(t_System_String* p_message);
t_System_Exception* m_System_Exception_get_InnerException_0();
t_System_String* m_System_Exception_get_Message_0();
void m_System_Exception_set_Message_0(t_System_String* p_value);
t_System_String* m_System_Exception_get_StackTrace_0();
void m_System_FlagsAttribute__ctor_0();
void m_System_IndexOutOfRangeException__ctor_0();
void m_System_MulticastDelegate__ctor_0();
void m_System_NonSerializedAttribute__ctor_0();
void m_System_NotSupportedException__ctor_0();
t_System_Type* m_System_Object_GetType_0();
t_System_String* m_System_Object_ToString_0();
void m_System_Object__ctor_0();
void m_System_ObsoleteAttribute__ctor_0();
void m_System_ObsoleteAttribute__ctor_1(t_System_String* p_message);
void m_System_ObsoleteAttribute__ctor_2(t_System_String* p_message, char p_error);
char m_System_ObsoleteAttribute_get_IsError_0();
t_System_String* m_System_ObsoleteAttribute_get_Message_0();
void m_System_ParamArrayAttribute__ctor_0();
t_System_Type* m_System_RuntimeType_get_BaseType_0();
t_System_String* m_System_RuntimeType_get_Name_0();
t_System_String* m_System_RuntimeType_get_FullName_0();
t_System_RuntimeTypeHandle m_System_RuntimeType_get_TypeHandle_0();
void m_System_RuntimeType__ctor_0();
int32_t m_System_String_get_Length_0();
t_System_String* m_System_String_FastAllocateString_0(int32_t p_length);
char m_System_String_IsNullOrEmpty_0(t_System_String* p_value);
void m_System_String_FillStringChecked_0(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src);
t_System_String* m_System_String_Concat_0(t_System_String* p_str0, t_System_String* p_str1);
t_System_String* m_System_String_Concat_1(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2);
t_System_String* m_System_String_Concat_2(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2, t_System_String* p_str3);
void m_System_String__ctor_0();
void m_System_StringBuilder__ctor_0();
t_System_Type* m_System_Type_get_BaseType_0();
t_System_String* m_System_Type_get_FullName_0();
t_System_RuntimeTypeHandle m_System_Type_get_TypeHandle_0();
t_System_Type* m_System_Type_GetTypeFromHandle_0(t_System_RuntimeTypeHandle p_handle);
void m_System_Type__ctor_0();
void m_System_TypeInfo__ctor_0();
void m_System_ValueType__ctor_0();
void m_System_CodeDom_Compiler_GeneratedCodeAttribute__ctor_0(t_System_String* p_tool, t_System_String* p_version);
t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Tool_0();
t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Version_0();
int32_t m_System_Collections_ArrayList_get_Count_0();
t_System_Collections_IEnumerator* m_System_Collections_ArrayList_GetEnumerator_0();
void m_System_Collections_ArrayList__ctor_0();
int32_t m_System_Collections_Queue_get_Count_0();
t_System_Collections_IEnumerator* m_System_Collections_Queue_GetEnumerator_0();
void m_System_Collections_Queue__ctor_0();
int32_t m_System_Collections_Stack_get_Count_0();
t_System_Collections_IEnumerator* m_System_Collections_Stack_GetEnumerator_0();
void m_System_Collections_Stack__ctor_0();
void m_System_ComponentModel_BrowsableAttribute__ctor_0();
void m_System_ComponentModel_DependencyAttribute__ctor_0();
void m_System_ComponentModel_EditorBrowsableAttribute__ctor_0(t_System_ComponentModel_EditorBrowsableState p_state);
t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableAttribute_get_State_0();
void m_System_Diagnostics_ConditionalAttribute__ctor_0(t_System_String* p_conditionString);
t_System_String* m_System_Diagnostics_ConditionalAttribute_get_ConditionString_0();
void m_System_Diagnostics_Debug__ctor_0();
void m_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute__ctor_0();
void m_System_Globalization_CultureInfo__ctor_0();
void m_System_Globalization_NumberFormatInfo__ctor_0();
void m_System_Reflection_AssemblyCompanyAttribute__ctor_0(t_System_String* p_company);
t_System_String* m_System_Reflection_AssemblyCompanyAttribute_get_Company_0();
void m_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t_System_String* p_configuration);
t_System_String* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0();
void m_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t_System_String* p_copyright);
t_System_String* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0();
void m_System_Reflection_AssemblyCultureAttribute__ctor_0(t_System_String* p_culture);
t_System_String* m_System_Reflection_AssemblyCultureAttribute_get_Culture_0();
void m_System_Reflection_AssemblyDelaySignAttribute__ctor_0(char p_delaySign);
char m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0();
void m_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t_System_String* p_description);
t_System_String* m_System_Reflection_AssemblyDescriptionAttribute_get_Description_0();
void m_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t_System_String* p_version);
t_System_String* m_System_Reflection_AssemblyFileVersionAttribute_get_Version_0();
void m_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t_System_String* p_informationalVersion);
t_System_String* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0();
void m_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t_System_String* p_keyFile);
t_System_String* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0();
void m_System_Reflection_AssemblyProductAttribute__ctor_0(t_System_String* p_product);
t_System_String* m_System_Reflection_AssemblyProductAttribute_get_Product_0();
void m_System_Reflection_AssemblyTitleAttribute__ctor_0(t_System_String* p_title);
t_System_String* m_System_Reflection_AssemblyTitleAttribute_get_Title_0();
void m_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t_System_String* p_trademark);
t_System_String* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0();
void m_System_Reflection_AssemblyVersionAttribute__ctor_0(t_System_String* p_version);
t_System_String* m_System_Reflection_AssemblyVersionAttribute_get_Version_0();
void m_System_Reflection_DefaultMemberAttribute__ctor_0(t_System_String* p_memberName);
t_System_String* m_System_Reflection_DefaultMemberAttribute_get_MemberName_0();
t_System_String* m_System_Reflection_MemberInfo_get_Name_0();
void m_System_Reflection_MemberInfo__ctor_0();
void m_System_Runtime_CompilerServices_CompilerGeneratedAttribute__ctor_0();
void m_System_Runtime_CompilerServices_IndexerNameAttribute__ctor_0(t_System_String* p_indexerName);
void m_System_Runtime_CompilerServices_IntrinsicAttribute__ctor_0();
void m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions);
void m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(int16_t p_value);
void m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2();
t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplAttribute_get_Value_0();
void m_System_Runtime_InteropServices_OutAttribute__ctor_0();
void m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t_System_Runtime_InteropServices_LayoutKind p_layoutKind);
void m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(int16_t p_layoutKind);
t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_StructLayoutAttribute_get_Value_0();
void m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t_System_String* p_frameworkName);
t_System_String* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkDisplayName_0();
void m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkDisplayName_0(t_System_String* p_value);
t_System_String* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkName_0();
void m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkName_0(t_System_String* p_value);
void m_CS2X_NativeExternAttribute__ctor_0(t_CS2X_NativeExternTarget p_target, t_System_String* p_methodName);
void m_char__ctor_0();
void m_uint8_t__ctor_0();
void m_char16_t__ctor_0();
void m_System_Decimal__ctor_0();
void m_double__ctor_0();
void m_int16_t__ctor_0();
void m_int32_t__ctor_0();
void m_int64_t__ctor_0();
void m_intptr_t__ctor_0();
void m_System_RuntimeFieldHandle__ctor_0();
void m_System_RuntimeTypeHandle__ctor_0(t_System_RuntimeType* p_type);
void m_System_RuntimeTypeHandle__ctor_1();
void m_int8_t__ctor_0();
char m_float_IsNaN_0(float p_f);
char m_float_IsNegative_0(float p_f);
void m_float__ctor_0();
void m_uint16_t__ctor_0();
void m_uint32_t__ctor_0();
void m_uint64_t__ctor_0();
void m_uintptr_t__ctor_0();
void m_void__ctor_0();
void m_System_Collections_DictionaryEntry__ctor_0(t_System_Object* p_key, t_System_Object* p_value);
t_System_Object* m_System_Collections_DictionaryEntry_get_Key_0();
void m_System_Collections_DictionaryEntry_set_Key_0(t_System_Object* p_value);
t_System_Object* m_System_Collections_DictionaryEntry_get_Value_0();
void m_System_Collections_DictionaryEntry_set_Value_0(t_System_Object* p_value);
void m_System_Collections_DictionaryEntry__ctor_1();
t_System_Object* m_System_ICloneable_Clone_0();
void m_System_IDisposable_Dispose_0();
int32_t m_System_Collections_ICollection_get_Count_0();
t_System_Collections_IEnumerator* m_System_Collections_IEnumerable_GetEnumerator_0();
t_System_Object* m_System_Collections_IEnumerator_get_Current_0();
char m_System_Collections_IEnumerator_MoveNext_0();
void m_System_Collections_IEnumerator_Reset_0();
void m_System_AttributeTargets__ctor_0();
void m_System_ComponentModel_EditorBrowsableState__ctor_0();
void m_System_Reflection_MethodImplAttributes__ctor_0();
void m_System_Runtime_CompilerServices_MethodCodeType__ctor_0();
void m_System_Runtime_CompilerServices_MethodImplOptions__ctor_0();
void m_System_Runtime_InteropServices_LayoutKind__ctor_0();
void m_CS2X_NativeExternTarget__ctor_0();

/* =============================== */
/* Type definitions */
/* =============================== */
struct t_System_AttributeUsageAttribute
{
	t_System_AttributeTargets f__attributeTarget_2;
	char f__AllowMultiple_k__BackingField_2;
	char f__Inherited_k__BackingField_2;
};
struct t_System_CLSCompliantAttribute
{
	char f__isCompliant_2;
};
struct t_System_Exception
{
	t_System_String* f__Message_k__BackingField_1;
};
struct t_System_IndexOutOfRangeException
{
	t_System_String* f__Message_k__BackingField_1;
};
struct t_System_NotSupportedException
{
	t_System_String* f__Message_k__BackingField_1;
};
struct t_System_ObsoleteAttribute
{
	char f__error_2;
	t_System_String* f__message_2;
};
struct t_System_RuntimeType
{
	t_System_Type* f__baseType_4;
	t_System_String* f__name_4;
	t_System_String* f__fullName_4;
};
struct t_System_String
{
	int32_t f__stringLength_1;
	char16_t f__firstChar_1;
};
t_System_String* f_System_String_Empty;
struct t_System_CodeDom_Compiler_GeneratedCodeAttribute
{
	t_System_String* f__tool_2;
	t_System_String* f__version_2;
};
struct t_System_ComponentModel_EditorBrowsableAttribute
{
	t_System_ComponentModel_EditorBrowsableState f__browsableState_2;
};
struct t_System_Diagnostics_ConditionalAttribute
{
	t_System_String* f__conditionString_2;
};
struct t_System_Reflection_AssemblyCompanyAttribute
{
	t_System_String* f__company_2;
};
struct t_System_Reflection_AssemblyConfigurationAttribute
{
	t_System_String* f__configuration_2;
};
struct t_System_Reflection_AssemblyCopyrightAttribute
{
	t_System_String* f__copyright_2;
};
struct t_System_Reflection_AssemblyCultureAttribute
{
	t_System_String* f__culture_2;
};
struct t_System_Reflection_AssemblyDelaySignAttribute
{
	char f__delaySign_2;
};
struct t_System_Reflection_AssemblyDescriptionAttribute
{
	t_System_String* f__description_2;
};
struct t_System_Reflection_AssemblyFileVersionAttribute
{
	t_System_String* f__version_2;
};
struct t_System_Reflection_AssemblyInformationalVersionAttribute
{
	t_System_String* f__informationalVersion_2;
};
struct t_System_Reflection_AssemblyKeyFileAttribute
{
	t_System_String* f__keyFile_2;
};
struct t_System_Reflection_AssemblyProductAttribute
{
	t_System_String* f__product_2;
};
struct t_System_Reflection_AssemblyTitleAttribute
{
	t_System_String* f__title_2;
};
struct t_System_Reflection_AssemblyTrademarkAttribute
{
	t_System_String* f__trademark_2;
};
struct t_System_Reflection_AssemblyVersionAttribute
{
	t_System_String* f__version_2;
};
struct t_System_Reflection_DefaultMemberAttribute
{
	t_System_String* f__memberName_2;
};
struct t_System_Runtime_CompilerServices_MethodImplAttribute
{
	t_System_Runtime_CompilerServices_MethodCodeType f_MethodCodeType_2;
	t_System_Runtime_CompilerServices_MethodImplOptions f__Value_k__BackingField_2;
};
struct t_System_Runtime_InteropServices_StructLayoutAttribute
{
	t_System_Runtime_InteropServices_LayoutKind f__Value_k__BackingField_2;
	int32_t f_Pack_2;
	int32_t f_Size_2;
};
struct t_System_Runtime_Versioning_TargetFrameworkAttribute
{
	t_System_String* f__FrameworkDisplayName_k__BackingField_2;
	t_System_String* f__FrameworkName_k__BackingField_2;
};
struct t_CS2X_NativeExternAttribute
{
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
/* Method definitions */
/* =============================== */
t_System_Collections_IEnumerator* m_System_Array_GetEnumerator_0()
{
}
int32_t m_System_Array_get_Length_0()
{
}
int64_t m_System_Array_get_LongLength_0()
{
}
int32_t m_System_Array_System_Collections_ICollection_get_Count_0()
{
}
void m_System_Array__ctor_0()
{
}
void m_System_Attribute__ctor_0()
{
}
void m_System_AttributeUsageAttribute__ctor_0(t_System_AttributeTargets p_validOn)
{
}
t_System_AttributeTargets m_System_AttributeUsageAttribute_get_ValidOn_0()
{
}
char m_System_AttributeUsageAttribute_get_AllowMultiple_0()
{
}
void m_System_AttributeUsageAttribute_set_AllowMultiple_0(char p_value)
{
}
char m_System_AttributeUsageAttribute_get_Inherited_0()
{
}
void m_System_AttributeUsageAttribute_set_Inherited_0(char p_value)
{
}
int32_t m_System_BitConverter_SingleToInt32Bits_0(float p_value)
{
}
void m_System_Buffer_MemoryCopy_0(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy)
{
}
void m_System_Buffer_MemoryCopy_1(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy)
{
}
void m_System_CancelEventArgs__ctor_0()
{
}
void m_System_CLSCompliantAttribute__ctor_0(char p_isCompliant)
{
}
char m_System_CLSCompliantAttribute_get_IsCompliant_0()
{
}
void m_System_Console_Write_0(t_System_String* p_s)
{
}
void m_System_Console_WriteLine_0(t_System_String* p_s)
{
}
void m_System_Console_WriteLine_1()
{
}
void m_System_Delegate__ctor_0()
{
}
void m_System_Enum__ctor_0()
{
}
t_System_String* m_System_Environment_get_NewLine_0()
{
	return "\r\n";
}
void m_System_EventArgs__ctor_0()
{
}
void m_System_Exception__ctor_0()
{
}
void m_System_Exception__ctor_1(t_System_String* p_message)
{
}
t_System_Exception* m_System_Exception_get_InnerException_0()
{
}
t_System_String* m_System_Exception_get_Message_0()
{
}
void m_System_Exception_set_Message_0(t_System_String* p_value)
{
}
t_System_String* m_System_Exception_get_StackTrace_0()
{
}
void m_System_FlagsAttribute__ctor_0()
{
}
void m_System_IndexOutOfRangeException__ctor_0()
{
}
void m_System_MulticastDelegate__ctor_0()
{
}
void m_System_NonSerializedAttribute__ctor_0()
{
}
void m_System_NotSupportedException__ctor_0()
{
}
t_System_Type* m_System_Object_GetType_0()
{
}
t_System_String* m_System_Object_ToString_0()
{
}
void m_System_Object__ctor_0()
{
}
void m_System_ObsoleteAttribute__ctor_0()
{
}
void m_System_ObsoleteAttribute__ctor_1(t_System_String* p_message)
{
}
void m_System_ObsoleteAttribute__ctor_2(t_System_String* p_message, char p_error)
{
}
char m_System_ObsoleteAttribute_get_IsError_0()
{
}
t_System_String* m_System_ObsoleteAttribute_get_Message_0()
{
}
void m_System_ParamArrayAttribute__ctor_0()
{
}
t_System_Type* m_System_RuntimeType_get_BaseType_0()
{
	return ;
}
t_System_String* m_System_RuntimeType_get_Name_0()
{
	return ;
}
t_System_String* m_System_RuntimeType_get_FullName_0()
{
	return ;
}
t_System_RuntimeTypeHandle m_System_RuntimeType_get_TypeHandle_0()
{
	return ;
}
void m_System_RuntimeType__ctor_0()
{
}
int32_t m_System_String_get_Length_0()
{
}
t_System_String* m_System_String_FastAllocateString_0(int32_t p_length)
{
}
char m_System_String_IsNullOrEmpty_0(t_System_String* p_value)
{
}
void m_System_String_FillStringChecked_0(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src)
{
}
t_System_String* m_System_String_Concat_0(t_System_String* p_str0, t_System_String* p_str1)
{
}
t_System_String* m_System_String_Concat_1(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2)
{
}
t_System_String* m_System_String_Concat_2(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2, t_System_String* p_str3)
{
}
void m_System_String__ctor_0()
{
}
void m_System_StringBuilder__ctor_0()
{
}
t_System_Type* m_System_Type_get_BaseType_0()
{
}
t_System_String* m_System_Type_get_FullName_0()
{
}
t_System_RuntimeTypeHandle m_System_Type_get_TypeHandle_0()
{
}
t_System_Type* m_System_Type_GetTypeFromHandle_0(t_System_RuntimeTypeHandle p_handle)
{
}
void m_System_Type__ctor_0()
{
}
void m_System_TypeInfo__ctor_0()
{
}
void m_System_ValueType__ctor_0()
{
}
void m_System_CodeDom_Compiler_GeneratedCodeAttribute__ctor_0(t_System_String* p_tool, t_System_String* p_version)
{
}
t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Tool_0()
{
}
t_System_String* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Version_0()
{
}
int32_t m_System_Collections_ArrayList_get_Count_0()
{
}
t_System_Collections_IEnumerator* m_System_Collections_ArrayList_GetEnumerator_0()
{
}
void m_System_Collections_ArrayList__ctor_0()
{
}
int32_t m_System_Collections_Queue_get_Count_0()
{
}
t_System_Collections_IEnumerator* m_System_Collections_Queue_GetEnumerator_0()
{
}
void m_System_Collections_Queue__ctor_0()
{
}
int32_t m_System_Collections_Stack_get_Count_0()
{
}
t_System_Collections_IEnumerator* m_System_Collections_Stack_GetEnumerator_0()
{
}
void m_System_Collections_Stack__ctor_0()
{
}
void m_System_ComponentModel_BrowsableAttribute__ctor_0()
{
}
void m_System_ComponentModel_DependencyAttribute__ctor_0()
{
}
void m_System_ComponentModel_EditorBrowsableAttribute__ctor_0(t_System_ComponentModel_EditorBrowsableState p_state)
{
}
t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableAttribute_get_State_0()
{
}
void m_System_Diagnostics_ConditionalAttribute__ctor_0(t_System_String* p_conditionString)
{
}
t_System_String* m_System_Diagnostics_ConditionalAttribute_get_ConditionString_0()
{
}
void m_System_Diagnostics_Debug__ctor_0()
{
}
void m_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute__ctor_0()
{
}
void m_System_Globalization_CultureInfo__ctor_0()
{
}
void m_System_Globalization_NumberFormatInfo__ctor_0()
{
}
void m_System_Reflection_AssemblyCompanyAttribute__ctor_0(t_System_String* p_company)
{
}
t_System_String* m_System_Reflection_AssemblyCompanyAttribute_get_Company_0()
{
}
void m_System_Reflection_AssemblyConfigurationAttribute__ctor_0(t_System_String* p_configuration)
{
}
t_System_String* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration_0()
{
}
void m_System_Reflection_AssemblyCopyrightAttribute__ctor_0(t_System_String* p_copyright)
{
}
t_System_String* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright_0()
{
}
void m_System_Reflection_AssemblyCultureAttribute__ctor_0(t_System_String* p_culture)
{
}
t_System_String* m_System_Reflection_AssemblyCultureAttribute_get_Culture_0()
{
}
void m_System_Reflection_AssemblyDelaySignAttribute__ctor_0(char p_delaySign)
{
}
char m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign_0()
{
}
void m_System_Reflection_AssemblyDescriptionAttribute__ctor_0(t_System_String* p_description)
{
}
t_System_String* m_System_Reflection_AssemblyDescriptionAttribute_get_Description_0()
{
}
void m_System_Reflection_AssemblyFileVersionAttribute__ctor_0(t_System_String* p_version)
{
}
t_System_String* m_System_Reflection_AssemblyFileVersionAttribute_get_Version_0()
{
}
void m_System_Reflection_AssemblyInformationalVersionAttribute__ctor_0(t_System_String* p_informationalVersion)
{
}
t_System_String* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion_0()
{
}
void m_System_Reflection_AssemblyKeyFileAttribute__ctor_0(t_System_String* p_keyFile)
{
}
t_System_String* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile_0()
{
}
void m_System_Reflection_AssemblyProductAttribute__ctor_0(t_System_String* p_product)
{
}
t_System_String* m_System_Reflection_AssemblyProductAttribute_get_Product_0()
{
}
void m_System_Reflection_AssemblyTitleAttribute__ctor_0(t_System_String* p_title)
{
}
t_System_String* m_System_Reflection_AssemblyTitleAttribute_get_Title_0()
{
}
void m_System_Reflection_AssemblyTrademarkAttribute__ctor_0(t_System_String* p_trademark)
{
}
t_System_String* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark_0()
{
}
void m_System_Reflection_AssemblyVersionAttribute__ctor_0(t_System_String* p_version)
{
}
t_System_String* m_System_Reflection_AssemblyVersionAttribute_get_Version_0()
{
}
void m_System_Reflection_DefaultMemberAttribute__ctor_0(t_System_String* p_memberName)
{
}
t_System_String* m_System_Reflection_DefaultMemberAttribute_get_MemberName_0()
{
}
t_System_String* m_System_Reflection_MemberInfo_get_Name_0()
{
}
void m_System_Reflection_MemberInfo__ctor_0()
{
}
void m_System_Runtime_CompilerServices_CompilerGeneratedAttribute__ctor_0()
{
}
void m_System_Runtime_CompilerServices_IndexerNameAttribute__ctor_0(t_System_String* p_indexerName)
{
}
void m_System_Runtime_CompilerServices_IntrinsicAttribute__ctor_0()
{
}
void m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_0(t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions)
{
}
void m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_1(int16_t p_value)
{
}
void m_System_Runtime_CompilerServices_MethodImplAttribute__ctor_2()
{
}
t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplAttribute_get_Value_0()
{
}
void m_System_Runtime_InteropServices_OutAttribute__ctor_0()
{
}
void m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_0(t_System_Runtime_InteropServices_LayoutKind p_layoutKind)
{
}
void m_System_Runtime_InteropServices_StructLayoutAttribute__ctor_1(int16_t p_layoutKind)
{
}
t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_StructLayoutAttribute_get_Value_0()
{
}
void m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor_0(t_System_String* p_frameworkName)
{
}
t_System_String* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkDisplayName_0()
{
}
void m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkDisplayName_0(t_System_String* p_value)
{
}
t_System_String* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkName_0()
{
}
void m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkName_0(t_System_String* p_value)
{
}
void m_CS2X_NativeExternAttribute__ctor_0(t_CS2X_NativeExternTarget p_target, t_System_String* p_methodName)
{
}
void m_char__ctor_0()
{
}
void m_uint8_t__ctor_0()
{
}
void m_char16_t__ctor_0()
{
}
void m_System_Decimal__ctor_0()
{
}
void m_double__ctor_0()
{
}
void m_int16_t__ctor_0()
{
}
void m_int32_t__ctor_0()
{
}
void m_int64_t__ctor_0()
{
}
void m_intptr_t__ctor_0()
{
}
void m_System_RuntimeFieldHandle__ctor_0()
{
}
void m_System_RuntimeTypeHandle__ctor_0(t_System_RuntimeType* p_type)
{
}
void m_System_RuntimeTypeHandle__ctor_1()
{
}
void m_int8_t__ctor_0()
{
}
char m_float_IsNaN_0(float p_f)
{
}
char m_float_IsNegative_0(float p_f)
{
}
void m_float__ctor_0()
{
}
void m_uint16_t__ctor_0()
{
}
void m_uint32_t__ctor_0()
{
}
void m_uint64_t__ctor_0()
{
}
void m_uintptr_t__ctor_0()
{
}
void m_void__ctor_0()
{
}
void m_System_Collections_DictionaryEntry__ctor_0(t_System_Object* p_key, t_System_Object* p_value)
{
}
t_System_Object* m_System_Collections_DictionaryEntry_get_Key_0()
{
}
void m_System_Collections_DictionaryEntry_set_Key_0(t_System_Object* p_value)
{
}
t_System_Object* m_System_Collections_DictionaryEntry_get_Value_0()
{
}
void m_System_Collections_DictionaryEntry_set_Value_0(t_System_Object* p_value)
{
}
void m_System_Collections_DictionaryEntry__ctor_1()
{
}
t_System_Object* m_System_ICloneable_Clone_0()
{
}
void m_System_IDisposable_Dispose_0()
{
}
int32_t m_System_Collections_ICollection_get_Count_0()
{
}
t_System_Collections_IEnumerator* m_System_Collections_IEnumerable_GetEnumerator_0()
{
}
t_System_Object* m_System_Collections_IEnumerator_get_Current_0()
{
}
char m_System_Collections_IEnumerator_MoveNext_0()
{
}
void m_System_Collections_IEnumerator_Reset_0()
{
}
void m_System_AttributeTargets__ctor_0()
{
}
void m_System_ComponentModel_EditorBrowsableState__ctor_0()
{
}
void m_System_Reflection_MethodImplAttributes__ctor_0()
{
}
void m_System_Runtime_CompilerServices_MethodCodeType__ctor_0()
{
}
void m_System_Runtime_CompilerServices_MethodImplOptions__ctor_0()
{
}
void m_System_Runtime_InteropServices_LayoutKind__ctor_0()
{
}
void m_CS2X_NativeExternTarget__ctor_0()
{
}
