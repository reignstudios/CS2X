#pragma once
/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <uchar.h>
#include <locale.h>

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
typedef struct t_CS2X_NativeExternCAttribute t_CS2X_NativeExternCAttribute;
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

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
t_System_Array* m_System_Array_GetEnumerator();
t_System_Array* m_System_Array_get_Length();
t_System_Array* m_System_Array_get_LongLength();
t_System_Array* m_System_Array_System_Collections_ICollection_get_Count();
t_System_Array* m_System_Array__ctor();
t_System_Attribute* m_System_Attribute__ctor();
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute__ctor(t_System_AttributeTargets p_validOn);
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_get_ValidOn();
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_get_AllowMultiple();
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_set_AllowMultiple(char p_value);
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_get_Inherited();
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_set_Inherited(char p_value);
t_System_BitConverter* m_System_BitConverter_SingleToInt32Bits(float p_value);
t_System_Buffer* m_System_Buffer_memcpy(void* p__Dst, void* p__Src, void* p__Size);
t_System_Buffer* m_System_Buffer_MemoryCopy(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy);
t_System_Buffer* m_System_Buffer_MemoryCopy(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy);
t_System_CancelEventArgs* m_System_CancelEventArgs__ctor();
t_System_CLSCompliantAttribute* m_System_CLSCompliantAttribute__ctor(char p_isCompliant);
t_System_CLSCompliantAttribute* m_System_CLSCompliantAttribute_get_IsCompliant();
t_System_Console* m_System_Console_wprintf(char16_t* p_text);
t_System_Console* m_System_Console_Write(t_System_String* p_s);
t_System_Console* m_System_Console_WriteLine(t_System_String* p_s);
t_System_Console* m_System_Console_WriteLine();
t_System_Delegate* m_System_Delegate__ctor();
t_System_Enum* m_System_Enum__ctor();
t_System_Environment* m_System_Environment_get_NewLine();
t_System_EventArgs* m_System_EventArgs__ctor();
t_System_Exception* m_System_Exception__ctor();
t_System_Exception* m_System_Exception__ctor(t_System_String* p_message);
t_System_Exception* m_System_Exception_get_InnerException();
t_System_Exception* m_System_Exception_get_Message();
t_System_Exception* m_System_Exception_set_Message(t_System_String* p_value);
t_System_Exception* m_System_Exception_get_StackTrace();
t_System_FlagsAttribute* m_System_FlagsAttribute__ctor();
t_System_IndexOutOfRangeException* m_System_IndexOutOfRangeException__ctor();
t_System_Math* m_System_Math_Sqrt(double p_d);
t_System_Math* m_System_Math_Pow(double p_x, double p_y);
t_System_Math* m_System_Math_Tan(double p_a);
t_System_Math* m_System_Math_Max(float p_val1, float p_val2);
t_System_Math* m_System_Math_Min(float p_val1, float p_val2);
t_System_MathF* m_System_MathF_Sqrt(float p_x);
t_System_MathF* m_System_MathF_Pow(float p_x, float p_y);
t_System_MathF* m_System_MathF_Tan(float p_a);
t_System_MathF* m_System_MathF_Max(float p_x, float p_y);
t_System_MathF* m_System_MathF_Min(float p_x, float p_y);
t_System_MulticastDelegate* m_System_MulticastDelegate__ctor();
t_System_NonSerializedAttribute* m_System_NonSerializedAttribute__ctor();
t_System_NotSupportedException* m_System_NotSupportedException__ctor();
t_System_Object* m_System_Object_GetType();
t_System_Object* m_System_Object_ToString();
t_System_Object* m_System_Object__ctor();
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor();
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor(t_System_String* p_message);
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor(t_System_String* p_message, char p_error);
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute_get_IsError();
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute_get_Message();
t_System_ParamArrayAttribute* m_System_ParamArrayAttribute__ctor();
t_System_RuntimeType* m_System_RuntimeType_get_BaseType();
t_System_RuntimeType* m_System_RuntimeType_get_Name();
t_System_RuntimeType* m_System_RuntimeType_get_FullName();
t_System_RuntimeType* m_System_RuntimeType_get_TypeHandle();
t_System_RuntimeType* m_System_RuntimeType__ctor();
t_System_String* m_System_String_get_Length();
t_System_String* m_System_String_FastAllocateString(int32_t p_length);
t_System_String* m_System_String_IsNullOrEmpty(t_System_String* p_value);
t_System_String* m_System_String_FillStringChecked(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src);
t_System_String* m_System_String_Concat(t_System_String* p_str0, t_System_String* p_str1);
t_System_String* m_System_String_Concat(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2);
t_System_String* m_System_String_Concat(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2, t_System_String* p_str3);
t_System_String* m_System_String__ctor();
t_System_StringBuilder* m_System_StringBuilder__ctor();
t_System_Type* m_System_Type_get_BaseType();
t_System_Type* m_System_Type_get_FullName();
t_System_Type* m_System_Type_get_TypeHandle();
t_System_Type* m_System_Type_GetTypeFromHandle(t_System_RuntimeTypeHandle p_handle);
t_System_Type* m_System_Type__ctor();
t_System_TypeInfo* m_System_TypeInfo__ctor();
t_System_ValueType* m_System_ValueType__ctor();
t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute__ctor(t_System_String* p_tool, t_System_String* p_version);
t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Tool();
t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Version();
t_System_Collections_ArrayList* m_System_Collections_ArrayList_get_Count();
t_System_Collections_ArrayList* m_System_Collections_ArrayList_GetEnumerator();
t_System_Collections_ArrayList* m_System_Collections_ArrayList__ctor();
t_System_Collections_Queue* m_System_Collections_Queue_get_Count();
t_System_Collections_Queue* m_System_Collections_Queue_GetEnumerator();
t_System_Collections_Queue* m_System_Collections_Queue__ctor();
t_System_Collections_Stack* m_System_Collections_Stack_get_Count();
t_System_Collections_Stack* m_System_Collections_Stack_GetEnumerator();
t_System_Collections_Stack* m_System_Collections_Stack__ctor();
t_System_ComponentModel_BrowsableAttribute* m_System_ComponentModel_BrowsableAttribute__ctor();
t_System_ComponentModel_DependencyAttribute* m_System_ComponentModel_DependencyAttribute__ctor();
t_System_ComponentModel_EditorBrowsableAttribute* m_System_ComponentModel_EditorBrowsableAttribute__ctor(t_System_ComponentModel_EditorBrowsableState p_state);
t_System_ComponentModel_EditorBrowsableAttribute* m_System_ComponentModel_EditorBrowsableAttribute_get_State();
t_System_Diagnostics_ConditionalAttribute* m_System_Diagnostics_ConditionalAttribute__ctor(t_System_String* p_conditionString);
t_System_Diagnostics_ConditionalAttribute* m_System_Diagnostics_ConditionalAttribute_get_ConditionString();
t_System_Diagnostics_Debug* m_System_Diagnostics_Debug__ctor();
t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute* m_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute__ctor();
t_System_Globalization_CultureInfo* m_System_Globalization_CultureInfo__ctor();
t_System_Globalization_NumberFormatInfo* m_System_Globalization_NumberFormatInfo__ctor();
t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute__ctor(t_System_String* p_company);
t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute_get_Company();
t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute__ctor(t_System_String* p_configuration);
t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration();
t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute__ctor(t_System_String* p_copyright);
t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright();
t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute__ctor(t_System_String* p_culture);
t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute_get_Culture();
t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute__ctor(char p_delaySign);
t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign();
t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute__ctor(t_System_String* p_description);
t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute_get_Description();
t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute__ctor(t_System_String* p_version);
t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute_get_Version();
t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute__ctor(t_System_String* p_informationalVersion);
t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion();
t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute__ctor(t_System_String* p_keyFile);
t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile();
t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute__ctor(t_System_String* p_product);
t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute_get_Product();
t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute__ctor(t_System_String* p_title);
t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute_get_Title();
t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute__ctor(t_System_String* p_trademark);
t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark();
t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute__ctor(t_System_String* p_version);
t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute_get_Version();
t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute__ctor(t_System_String* p_memberName);
t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute_get_MemberName();
t_System_Reflection_MemberInfo* m_System_Reflection_MemberInfo_get_Name();
t_System_Reflection_MemberInfo* m_System_Reflection_MemberInfo__ctor();
t_System_Runtime_CompilerServices_CompilerGeneratedAttribute* m_System_Runtime_CompilerServices_CompilerGeneratedAttribute__ctor();
t_System_Runtime_CompilerServices_IndexerNameAttribute* m_System_Runtime_CompilerServices_IndexerNameAttribute__ctor(t_System_String* p_indexerName);
t_System_Runtime_CompilerServices_IntrinsicAttribute* m_System_Runtime_CompilerServices_IntrinsicAttribute__ctor();
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor(t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions);
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor(int16_t p_value);
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor();
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute_get_Value();
t_System_Runtime_InteropServices_OutAttribute* m_System_Runtime_InteropServices_OutAttribute__ctor();
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor(t_System_Runtime_InteropServices_LayoutKind p_layoutKind);
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor(int16_t p_layoutKind);
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute_get_Value();
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor(t_System_String* p_frameworkName);
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkDisplayName();
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkDisplayName(t_System_String* p_value);
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkName();
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkName(t_System_String* p_value);
t_CS2X_NativeExternCAttribute* m_CS2X_NativeExternCAttribute__ctor(t_System_String* p_methodName);
char m_char__ctor();
uint8_t m_uint8_t__ctor();
char16_t m_char16_t__ctor();
t_System_Decimal m_System_Decimal__ctor();
double m_double__ctor();
int16_t m_int16_t__ctor();
int32_t m_int32_t__ctor();
int64_t m_int64_t__ctor();
intptr_t m_intptr_t__ctor();
t_System_RuntimeFieldHandle m_System_RuntimeFieldHandle__ctor();
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor(t_System_RuntimeType* p_type);
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor();
int8_t m_int8_t__ctor();
float m_float_IsNaN(float p_f);
float m_float_IsNegative(float p_f);
float m_float__ctor();
uint16_t m_uint16_t__ctor();
uint32_t m_uint32_t__ctor();
uint64_t m_uint64_t__ctor();
uintptr_t m_uintptr_t__ctor();
void m_void__ctor();
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor(t_System_Object* p_key, t_System_Object* p_value);
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_get_Key();
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_set_Key(t_System_Object* p_value);
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_get_Value();
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_set_Value(t_System_Object* p_value);
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor();
t_System_ICloneable* m_System_ICloneable_Clone();
t_System_IDisposable* m_System_IDisposable_Dispose();
t_System_Collections_ICollection* m_System_Collections_ICollection_get_Count();
t_System_Collections_IEnumerable* m_System_Collections_IEnumerable_GetEnumerator();
t_System_Collections_IEnumerator* m_System_Collections_IEnumerator_get_Current();
t_System_Collections_IEnumerator* m_System_Collections_IEnumerator_MoveNext();
t_System_Collections_IEnumerator* m_System_Collections_IEnumerator_Reset();
t_System_AttributeTargets m_System_AttributeTargets__ctor();
t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableState__ctor();
t_System_Reflection_MethodImplAttributes m_System_Reflection_MethodImplAttributes__ctor();
t_System_Runtime_CompilerServices_MethodCodeType m_System_Runtime_CompilerServices_MethodCodeType__ctor();
t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplOptions__ctor();
t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_LayoutKind__ctor();

/* =============================== */
/* Type definitions */
/* =============================== */
struct t_System_AttributeUsageAttribute
{
	t_System_AttributeTargets f__attributeTarget;
	char f__AllowMultiple_k__BackingField;
	char f__Inherited_k__BackingField;
};
struct t_System_CLSCompliantAttribute
{
	char f__isCompliant;
};
struct t_System_Exception
{
	t_System_String* f__Message_k__BackingField;
};
struct t_System_IndexOutOfRangeException
{
	t_System_String* f__Message_k__BackingField;
};
struct t_System_NotSupportedException
{
	t_System_String* f__Message_k__BackingField;
};
struct t_System_ObsoleteAttribute
{
	char f__error;
	t_System_String* f__message;
};
struct t_System_RuntimeType
{
	t_System_Type* f__baseType;
	t_System_String* f__name;
	t_System_String* f__fullName;
};
struct t_System_String
{
	int32_t f__stringLength;
	char16_t f__firstChar;
};
t_System_String* f_System_String_Empty;
struct t_System_CodeDom_Compiler_GeneratedCodeAttribute
{
	t_System_String* f__tool;
	t_System_String* f__version;
};
struct t_System_ComponentModel_EditorBrowsableAttribute
{
	t_System_ComponentModel_EditorBrowsableState f__browsableState;
};
struct t_System_Diagnostics_ConditionalAttribute
{
	t_System_String* f__conditionString;
};
struct t_System_Reflection_AssemblyCompanyAttribute
{
	t_System_String* f__company;
};
struct t_System_Reflection_AssemblyConfigurationAttribute
{
	t_System_String* f__configuration;
};
struct t_System_Reflection_AssemblyCopyrightAttribute
{
	t_System_String* f__copyright;
};
struct t_System_Reflection_AssemblyCultureAttribute
{
	t_System_String* f__culture;
};
struct t_System_Reflection_AssemblyDelaySignAttribute
{
	char f__delaySign;
};
struct t_System_Reflection_AssemblyDescriptionAttribute
{
	t_System_String* f__description;
};
struct t_System_Reflection_AssemblyFileVersionAttribute
{
	t_System_String* f__version;
};
struct t_System_Reflection_AssemblyInformationalVersionAttribute
{
	t_System_String* f__informationalVersion;
};
struct t_System_Reflection_AssemblyKeyFileAttribute
{
	t_System_String* f__keyFile;
};
struct t_System_Reflection_AssemblyProductAttribute
{
	t_System_String* f__product;
};
struct t_System_Reflection_AssemblyTitleAttribute
{
	t_System_String* f__title;
};
struct t_System_Reflection_AssemblyTrademarkAttribute
{
	t_System_String* f__trademark;
};
struct t_System_Reflection_AssemblyVersionAttribute
{
	t_System_String* f__version;
};
struct t_System_Reflection_DefaultMemberAttribute
{
	t_System_String* f__memberName;
};
struct t_System_Runtime_CompilerServices_MethodImplAttribute
{
	t_System_Runtime_CompilerServices_MethodCodeType f_MethodCodeType;
	t_System_Runtime_CompilerServices_MethodImplOptions f__Value_k__BackingField;
};
struct t_System_Runtime_InteropServices_StructLayoutAttribute
{
	t_System_Runtime_InteropServices_LayoutKind f__Value_k__BackingField;
	int32_t f_Pack;
	int32_t f_Size;
};
struct t_System_Runtime_Versioning_TargetFrameworkAttribute
{
	t_System_String* f__FrameworkDisplayName_k__BackingField;
	t_System_String* f__FrameworkName_k__BackingField;
};
struct t_CS2X_NativeExternCAttribute
{
	t_System_String* f_methodName;
};
struct t_System_Decimal
{
	int32_t f_flags;
	int32_t f_hi;
	int32_t f_lo;
	int32_t f_mid;
};
struct t_System_RuntimeTypeHandle
{
	t_System_RuntimeType* f_m_type;
};
struct t_System_Collections_DictionaryEntry
{
	t_System_Object* f__Key_k__BackingField;
	t_System_Object* f__Value_k__BackingField;
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

/* =============================== */
/* Method definitions */
/* =============================== */
t_System_Array* m_System_Array_GetEnumerator()
{
}
t_System_Array* m_System_Array_get_Length()
{
}
t_System_Array* m_System_Array_get_LongLength()
{
}
t_System_Array* m_System_Array_System_Collections_ICollection_get_Count()
{
}
t_System_Array* m_System_Array__ctor()
{
}
t_System_Attribute* m_System_Attribute__ctor()
{
}
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute__ctor(t_System_AttributeTargets p_validOn)
{
}
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_get_ValidOn()
{
}
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_get_AllowMultiple()
{
}
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_set_AllowMultiple(char p_value)
{
}
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_get_Inherited()
{
}
t_System_AttributeUsageAttribute* m_System_AttributeUsageAttribute_set_Inherited(char p_value)
{
}
t_System_BitConverter* m_System_BitConverter_SingleToInt32Bits(float p_value)
{
}
t_System_Buffer* m_System_Buffer_memcpy(void* p__Dst, void* p__Src, void* p__Size)
{
}
t_System_Buffer* m_System_Buffer_MemoryCopy(void* p_source, void* p_destination, int64_t p_destinationSizeInBytes, int64_t p_sourceBytesToCopy)
{
}
t_System_Buffer* m_System_Buffer_MemoryCopy(void* p_source, void* p_destination, uint64_t p_destinationSizeInBytes, uint64_t p_sourceBytesToCopy)
{
}
t_System_CancelEventArgs* m_System_CancelEventArgs__ctor()
{
}
t_System_CLSCompliantAttribute* m_System_CLSCompliantAttribute__ctor(char p_isCompliant)
{
}
t_System_CLSCompliantAttribute* m_System_CLSCompliantAttribute_get_IsCompliant()
{
}
t_System_Console* m_System_Console_wprintf(char16_t* p_text)
{
}
t_System_Console* m_System_Console_Write(t_System_String* p_s)
{
}
t_System_Console* m_System_Console_WriteLine(t_System_String* p_s)
{
}
t_System_Console* m_System_Console_WriteLine()
{
}
t_System_Delegate* m_System_Delegate__ctor()
{
}
t_System_Enum* m_System_Enum__ctor()
{
}
t_System_Environment* m_System_Environment_get_NewLine()
{
}
t_System_EventArgs* m_System_EventArgs__ctor()
{
}
t_System_Exception* m_System_Exception__ctor()
{
}
t_System_Exception* m_System_Exception__ctor(t_System_String* p_message)
{
}
t_System_Exception* m_System_Exception_get_InnerException()
{
}
t_System_Exception* m_System_Exception_get_Message()
{
}
t_System_Exception* m_System_Exception_set_Message(t_System_String* p_value)
{
}
t_System_Exception* m_System_Exception_get_StackTrace()
{
}
t_System_FlagsAttribute* m_System_FlagsAttribute__ctor()
{
}
t_System_IndexOutOfRangeException* m_System_IndexOutOfRangeException__ctor()
{
}
t_System_Math* m_System_Math_Sqrt(double p_d)
{
}
t_System_Math* m_System_Math_Pow(double p_x, double p_y)
{
}
t_System_Math* m_System_Math_Tan(double p_a)
{
}
t_System_Math* m_System_Math_Max(float p_val1, float p_val2)
{
}
t_System_Math* m_System_Math_Min(float p_val1, float p_val2)
{
}
t_System_MathF* m_System_MathF_Sqrt(float p_x)
{
}
t_System_MathF* m_System_MathF_Pow(float p_x, float p_y)
{
}
t_System_MathF* m_System_MathF_Tan(float p_a)
{
}
t_System_MathF* m_System_MathF_Max(float p_x, float p_y)
{
}
t_System_MathF* m_System_MathF_Min(float p_x, float p_y)
{
}
t_System_MulticastDelegate* m_System_MulticastDelegate__ctor()
{
}
t_System_NonSerializedAttribute* m_System_NonSerializedAttribute__ctor()
{
}
t_System_NotSupportedException* m_System_NotSupportedException__ctor()
{
}
t_System_Object* m_System_Object_GetType()
{
}
t_System_Object* m_System_Object_ToString()
{
}
t_System_Object* m_System_Object__ctor()
{
}
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor()
{
}
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor(t_System_String* p_message)
{
}
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute__ctor(t_System_String* p_message, char p_error)
{
}
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute_get_IsError()
{
}
t_System_ObsoleteAttribute* m_System_ObsoleteAttribute_get_Message()
{
}
t_System_ParamArrayAttribute* m_System_ParamArrayAttribute__ctor()
{
}
t_System_RuntimeType* m_System_RuntimeType_get_BaseType()
{
}
t_System_RuntimeType* m_System_RuntimeType_get_Name()
{
}
t_System_RuntimeType* m_System_RuntimeType_get_FullName()
{
}
t_System_RuntimeType* m_System_RuntimeType_get_TypeHandle()
{
}
t_System_RuntimeType* m_System_RuntimeType__ctor()
{
}
t_System_String* m_System_String_get_Length()
{
}
t_System_String* m_System_String_FastAllocateString(int32_t p_length)
{
}
t_System_String* m_System_String_IsNullOrEmpty(t_System_String* p_value)
{
}
t_System_String* m_System_String_FillStringChecked(t_System_String* p_dest, int32_t p_destPos, t_System_String* p_src)
{
}
t_System_String* m_System_String_Concat(t_System_String* p_str0, t_System_String* p_str1)
{
}
t_System_String* m_System_String_Concat(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2)
{
}
t_System_String* m_System_String_Concat(t_System_String* p_str0, t_System_String* p_str1, t_System_String* p_str2, t_System_String* p_str3)
{
}
t_System_String* m_System_String__ctor()
{
}
t_System_StringBuilder* m_System_StringBuilder__ctor()
{
}
t_System_Type* m_System_Type_get_BaseType()
{
}
t_System_Type* m_System_Type_get_FullName()
{
}
t_System_Type* m_System_Type_get_TypeHandle()
{
}
t_System_Type* m_System_Type_GetTypeFromHandle(t_System_RuntimeTypeHandle p_handle)
{
}
t_System_Type* m_System_Type__ctor()
{
}
t_System_TypeInfo* m_System_TypeInfo__ctor()
{
}
t_System_ValueType* m_System_ValueType__ctor()
{
}
t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute__ctor(t_System_String* p_tool, t_System_String* p_version)
{
}
t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Tool()
{
}
t_System_CodeDom_Compiler_GeneratedCodeAttribute* m_System_CodeDom_Compiler_GeneratedCodeAttribute_get_Version()
{
}
t_System_Collections_ArrayList* m_System_Collections_ArrayList_get_Count()
{
}
t_System_Collections_ArrayList* m_System_Collections_ArrayList_GetEnumerator()
{
}
t_System_Collections_ArrayList* m_System_Collections_ArrayList__ctor()
{
}
t_System_Collections_Queue* m_System_Collections_Queue_get_Count()
{
}
t_System_Collections_Queue* m_System_Collections_Queue_GetEnumerator()
{
}
t_System_Collections_Queue* m_System_Collections_Queue__ctor()
{
}
t_System_Collections_Stack* m_System_Collections_Stack_get_Count()
{
}
t_System_Collections_Stack* m_System_Collections_Stack_GetEnumerator()
{
}
t_System_Collections_Stack* m_System_Collections_Stack__ctor()
{
}
t_System_ComponentModel_BrowsableAttribute* m_System_ComponentModel_BrowsableAttribute__ctor()
{
}
t_System_ComponentModel_DependencyAttribute* m_System_ComponentModel_DependencyAttribute__ctor()
{
}
t_System_ComponentModel_EditorBrowsableAttribute* m_System_ComponentModel_EditorBrowsableAttribute__ctor(t_System_ComponentModel_EditorBrowsableState p_state)
{
}
t_System_ComponentModel_EditorBrowsableAttribute* m_System_ComponentModel_EditorBrowsableAttribute_get_State()
{
}
t_System_Diagnostics_ConditionalAttribute* m_System_Diagnostics_ConditionalAttribute__ctor(t_System_String* p_conditionString)
{
}
t_System_Diagnostics_ConditionalAttribute* m_System_Diagnostics_ConditionalAttribute_get_ConditionString()
{
}
t_System_Diagnostics_Debug* m_System_Diagnostics_Debug__ctor()
{
}
t_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute* m_System_Diagnostics_CodeAnalysis_SuppressMessageAttribute__ctor()
{
}
t_System_Globalization_CultureInfo* m_System_Globalization_CultureInfo__ctor()
{
}
t_System_Globalization_NumberFormatInfo* m_System_Globalization_NumberFormatInfo__ctor()
{
}
t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute__ctor(t_System_String* p_company)
{
}
t_System_Reflection_AssemblyCompanyAttribute* m_System_Reflection_AssemblyCompanyAttribute_get_Company()
{
}
t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute__ctor(t_System_String* p_configuration)
{
}
t_System_Reflection_AssemblyConfigurationAttribute* m_System_Reflection_AssemblyConfigurationAttribute_get_Configuration()
{
}
t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute__ctor(t_System_String* p_copyright)
{
}
t_System_Reflection_AssemblyCopyrightAttribute* m_System_Reflection_AssemblyCopyrightAttribute_get_Copyright()
{
}
t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute__ctor(t_System_String* p_culture)
{
}
t_System_Reflection_AssemblyCultureAttribute* m_System_Reflection_AssemblyCultureAttribute_get_Culture()
{
}
t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute__ctor(char p_delaySign)
{
}
t_System_Reflection_AssemblyDelaySignAttribute* m_System_Reflection_AssemblyDelaySignAttribute_get_DelaySign()
{
}
t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute__ctor(t_System_String* p_description)
{
}
t_System_Reflection_AssemblyDescriptionAttribute* m_System_Reflection_AssemblyDescriptionAttribute_get_Description()
{
}
t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute__ctor(t_System_String* p_version)
{
}
t_System_Reflection_AssemblyFileVersionAttribute* m_System_Reflection_AssemblyFileVersionAttribute_get_Version()
{
}
t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute__ctor(t_System_String* p_informationalVersion)
{
}
t_System_Reflection_AssemblyInformationalVersionAttribute* m_System_Reflection_AssemblyInformationalVersionAttribute_get_InformationalVersion()
{
}
t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute__ctor(t_System_String* p_keyFile)
{
}
t_System_Reflection_AssemblyKeyFileAttribute* m_System_Reflection_AssemblyKeyFileAttribute_get_KeyFile()
{
}
t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute__ctor(t_System_String* p_product)
{
}
t_System_Reflection_AssemblyProductAttribute* m_System_Reflection_AssemblyProductAttribute_get_Product()
{
}
t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute__ctor(t_System_String* p_title)
{
}
t_System_Reflection_AssemblyTitleAttribute* m_System_Reflection_AssemblyTitleAttribute_get_Title()
{
}
t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute__ctor(t_System_String* p_trademark)
{
}
t_System_Reflection_AssemblyTrademarkAttribute* m_System_Reflection_AssemblyTrademarkAttribute_get_Trademark()
{
}
t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute__ctor(t_System_String* p_version)
{
}
t_System_Reflection_AssemblyVersionAttribute* m_System_Reflection_AssemblyVersionAttribute_get_Version()
{
}
t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute__ctor(t_System_String* p_memberName)
{
}
t_System_Reflection_DefaultMemberAttribute* m_System_Reflection_DefaultMemberAttribute_get_MemberName()
{
}
t_System_Reflection_MemberInfo* m_System_Reflection_MemberInfo_get_Name()
{
}
t_System_Reflection_MemberInfo* m_System_Reflection_MemberInfo__ctor()
{
}
t_System_Runtime_CompilerServices_CompilerGeneratedAttribute* m_System_Runtime_CompilerServices_CompilerGeneratedAttribute__ctor()
{
}
t_System_Runtime_CompilerServices_IndexerNameAttribute* m_System_Runtime_CompilerServices_IndexerNameAttribute__ctor(t_System_String* p_indexerName)
{
}
t_System_Runtime_CompilerServices_IntrinsicAttribute* m_System_Runtime_CompilerServices_IntrinsicAttribute__ctor()
{
}
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor(t_System_Runtime_CompilerServices_MethodImplOptions p_methodImplOptions)
{
}
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor(int16_t p_value)
{
}
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute__ctor()
{
}
t_System_Runtime_CompilerServices_MethodImplAttribute* m_System_Runtime_CompilerServices_MethodImplAttribute_get_Value()
{
}
t_System_Runtime_InteropServices_OutAttribute* m_System_Runtime_InteropServices_OutAttribute__ctor()
{
}
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor(t_System_Runtime_InteropServices_LayoutKind p_layoutKind)
{
}
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute__ctor(int16_t p_layoutKind)
{
}
t_System_Runtime_InteropServices_StructLayoutAttribute* m_System_Runtime_InteropServices_StructLayoutAttribute_get_Value()
{
}
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute__ctor(t_System_String* p_frameworkName)
{
}
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkDisplayName()
{
}
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkDisplayName(t_System_String* p_value)
{
}
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_get_FrameworkName()
{
}
t_System_Runtime_Versioning_TargetFrameworkAttribute* m_System_Runtime_Versioning_TargetFrameworkAttribute_set_FrameworkName(t_System_String* p_value)
{
}
t_CS2X_NativeExternCAttribute* m_CS2X_NativeExternCAttribute__ctor(t_System_String* p_methodName)
{
}
char m_char__ctor()
{
}
uint8_t m_uint8_t__ctor()
{
}
char16_t m_char16_t__ctor()
{
}
t_System_Decimal m_System_Decimal__ctor()
{
}
double m_double__ctor()
{
}
int16_t m_int16_t__ctor()
{
}
int32_t m_int32_t__ctor()
{
}
int64_t m_int64_t__ctor()
{
}
intptr_t m_intptr_t__ctor()
{
}
t_System_RuntimeFieldHandle m_System_RuntimeFieldHandle__ctor()
{
}
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor(t_System_RuntimeType* p_type)
{
}
t_System_RuntimeTypeHandle m_System_RuntimeTypeHandle__ctor()
{
}
int8_t m_int8_t__ctor()
{
}
float m_float_IsNaN(float p_f)
{
}
float m_float_IsNegative(float p_f)
{
}
float m_float__ctor()
{
}
uint16_t m_uint16_t__ctor()
{
}
uint32_t m_uint32_t__ctor()
{
}
uint64_t m_uint64_t__ctor()
{
}
uintptr_t m_uintptr_t__ctor()
{
}
void m_void__ctor()
{
}
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor(t_System_Object* p_key, t_System_Object* p_value)
{
}
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_get_Key()
{
}
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_set_Key(t_System_Object* p_value)
{
}
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_get_Value()
{
}
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry_set_Value(t_System_Object* p_value)
{
}
t_System_Collections_DictionaryEntry m_System_Collections_DictionaryEntry__ctor()
{
}
t_System_ICloneable* m_System_ICloneable_Clone()
{
}
t_System_IDisposable* m_System_IDisposable_Dispose()
{
}
t_System_Collections_ICollection* m_System_Collections_ICollection_get_Count()
{
}
t_System_Collections_IEnumerable* m_System_Collections_IEnumerable_GetEnumerator()
{
}
t_System_Collections_IEnumerator* m_System_Collections_IEnumerator_get_Current()
{
}
t_System_Collections_IEnumerator* m_System_Collections_IEnumerator_MoveNext()
{
}
t_System_Collections_IEnumerator* m_System_Collections_IEnumerator_Reset()
{
}
t_System_AttributeTargets m_System_AttributeTargets__ctor()
{
}
t_System_ComponentModel_EditorBrowsableState m_System_ComponentModel_EditorBrowsableState__ctor()
{
}
t_System_Reflection_MethodImplAttributes m_System_Reflection_MethodImplAttributes__ctor()
{
}
t_System_Runtime_CompilerServices_MethodCodeType m_System_Runtime_CompilerServices_MethodCodeType__ctor()
{
}
t_System_Runtime_CompilerServices_MethodImplOptions m_System_Runtime_CompilerServices_MethodImplOptions__ctor()
{
}
t_System_Runtime_InteropServices_LayoutKind m_System_Runtime_InteropServices_LayoutKind__ctor()
{
}
