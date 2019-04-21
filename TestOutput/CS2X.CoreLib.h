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
/* Type forward declares */
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
typedef void* t_System_Void;
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
/* Types */
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
t_System_String* f_t_System_String_Empty;
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
