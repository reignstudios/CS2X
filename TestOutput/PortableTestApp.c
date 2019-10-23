/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#include "CS2X.CoreLib.h"

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t2_PortableTestApp_Program t2_PortableTestApp_Program;
typedef struct t3_PortableTestApp_Test_ClassNesting t3_PortableTestApp_Test_ClassNesting;
typedef struct t4_PortableTestApp_Test_ClassNesting_SubClass t4_PortableTestApp_Test_ClassNesting_SubClass;
typedef struct t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass;
typedef struct t3_PortableTestApp_Test_ClassVsStruct_Struct t3_PortableTestApp_Test_ClassVsStruct_Struct;
typedef struct t3_PortableTestApp_Test_ClassVsStruct t3_PortableTestApp_Test_ClassVsStruct;
typedef struct t3_PortableTestApp_Test_CoreGenericCollections t3_PortableTestApp_Test_CoreGenericCollections;
typedef struct t3_PortableTestApp_Test_Delegates t3_PortableTestApp_Test_Delegates;
typedef struct t3_PortableTestApp_Test_SuperDelegates t3_PortableTestApp_Test_SuperDelegates;
typedef struct t3_PortableTestApp_Test_DestructorsBase t3_PortableTestApp_Test_DestructorsBase;
typedef struct t3_PortableTestApp_Test_Destructors t3_PortableTestApp_Test_Destructors;
typedef struct t3_PortableTestApp_Test_Enums t3_PortableTestApp_Test_Enums;
typedef struct t3_PortableTestApp_Test_ExtensionMethods t3_PortableTestApp_Test_ExtensionMethods;
typedef struct t4_PortableTestApp_Test_ExtensionMethods_MyClass t4_PortableTestApp_Test_ExtensionMethods_MyClass;
typedef struct t3_PortableTestApp_Test_FieldsAndProperties t3_PortableTestApp_Test_FieldsAndProperties;
typedef struct t3_PortableTestApp_Test_FlowControlAndEnumerators t3_PortableTestApp_Test_FlowControlAndEnumerators;
typedef struct t3_PortableTestApp_Test_Generics t3_PortableTestApp_Test_Generics;
typedef struct t3_PortableTestApp_Test_Indexers t3_PortableTestApp_Test_Indexers;
typedef struct t3_PortableTestApp_Test_Interop t3_PortableTestApp_Test_Interop;
typedef struct t3_PortableTestApp_Test_NewOverrides t3_PortableTestApp_Test_NewOverrides;
typedef struct t3_PortableTestApp_Test_NewOverridesSuper t3_PortableTestApp_Test_NewOverridesSuper;
typedef struct t3_PortableTestApp_Test_NumbersToStrings t3_PortableTestApp_Test_NumbersToStrings;
typedef struct t3_PortableTestApp_Test_Operators t3_PortableTestApp_Test_Operators;
typedef struct t3_PortableTestApp_Test_RefOutParameters t3_PortableTestApp_Test_RefOutParameters;
typedef struct t3_PortableTestApp_Test_StringEncoding t3_PortableTestApp_Test_StringEncoding;
typedef struct t3_PortableTestApp_Test_TryCatch t3_PortableTestApp_Test_TryCatch;
typedef struct t3_PortableTestApp_Test_MyException t3_PortableTestApp_Test_MyException;
typedef struct t3_PortableTestApp_Test_VirtualMethods_Base t3_PortableTestApp_Test_VirtualMethods_Base;
typedef struct t3_PortableTestApp_Test_VirtualMethods t3_PortableTestApp_Test_VirtualMethods;
typedef struct t4_PortableTestApp_Test_ExtensionMethods_MyStruct t4_PortableTestApp_Test_ExtensionMethods_MyStruct;
typedef struct t4_PortableTestApp_Test_FieldsAndProperties_MyStruct t4_PortableTestApp_Test_FieldsAndProperties_MyStruct;
typedef struct t4_PortableTestApp_Test_Operators_Vec2 t4_PortableTestApp_Test_Operators_Vec2;
typedef uint8_t t4_PortableTestApp_Test_Enums_MyEnum;
typedef struct t4_PortableTestApp_Test_Delegates_FooCallback t4_PortableTestApp_Test_Delegates_FooCallback;
typedef struct t4_PortableTestApp_Test_Interop_MyDelegate t4_PortableTestApp_Test_Interop_MyDelegate;
typedef struct t4_PortableTestApp_Test_Interop_FooDelegate t4_PortableTestApp_Test_Interop_FooDelegate;

/* =============================== */
/* Forward declare Generic Types */
/* =============================== */
typedef struct t4_System_Collections_Generic_List_System_Int32_GENERIC t4_System_Collections_Generic_List_System_Int32_GENERIC;
typedef struct t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC;
typedef struct t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC;
typedef struct t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC;
typedef struct t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC;
typedef struct t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC;
typedef struct t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC;
typedef struct t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC;
typedef struct t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC;
typedef struct t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC;

/* =============================== */
/* Type definitions */
/* =============================== */
struct t2_PortableTestApp_Program
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_ClassNesting
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t4_PortableTestApp_Test_ClassNesting_SubClass
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
};
int32_t f_PortableTestApp_Test_ClassNesting_SubClass_i2;

struct t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
};
int32_t f_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_i2;

struct t3_PortableTestApp_Test_ClassVsStruct_Struct
{
	t3_PortableTestApp_Test_ClassVsStruct* f_myClass_2;
};

struct t3_PortableTestApp_Test_ClassVsStruct
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t3_PortableTestApp_Test_ClassVsStruct_Struct f_myStruct_1;
};

struct t3_PortableTestApp_Test_CoreGenericCollections
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_Delegates
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	char f_someField_1;
	t3_PortableTestApp_Test_Delegates* f_self_1;
};

struct t3_PortableTestApp_Test_SuperDelegates
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	char f_someField_1;
	t3_PortableTestApp_Test_Delegates* f_self_1;
};

struct t3_PortableTestApp_Test_DestructorsBase
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
char f_PortableTestApp_Test_DestructorsBase_wasFinalized;

struct t3_PortableTestApp_Test_Destructors
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
char f_PortableTestApp_Test_Destructors_wasFinalized;
t3_PortableTestApp_Test_Destructors* f_PortableTestApp_Test_Destructors_obj;

struct t3_PortableTestApp_Test_Enums
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_ExtensionMethods
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t4_PortableTestApp_Test_ExtensionMethods_MyClass
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
};

struct t3_PortableTestApp_Test_FieldsAndProperties
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__myProperty2_k__BackingField_1;
	int32_t f__myProperty3_1;
	int32_t f_myField_1;
};
int32_t f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty2_k__BackingField;
int32_t f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty3;
int32_t f_PortableTestApp_Test_FieldsAndProperties_myStaticField;

struct t3_PortableTestApp_Test_FlowControlAndEnumerators
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_Generics
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_Indexers
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	char16_t f_charVal_1;
};

struct t3_PortableTestApp_Test_Interop
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};
char f_PortableTestApp_Test_Interop_fooStaticCalled;
char f_PortableTestApp_Test_Interop_fooCalled;

struct t3_PortableTestApp_Test_NewOverrides
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
};

struct t3_PortableTestApp_Test_NewOverridesSuper
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
	int32_t f_i_2;
};

struct t3_PortableTestApp_Test_NumbersToStrings
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_Operators
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_RefOutParameters
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_StringEncoding
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_TryCatch
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_MyException
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_String* f__Message_k__BackingField_1;
};

struct t3_PortableTestApp_Test_VirtualMethods_Base
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t3_PortableTestApp_Test_VirtualMethods
{
	t2_System_RuntimeType* CS2X_RuntimeType;
};

struct t4_PortableTestApp_Test_ExtensionMethods_MyStruct
{
	int32_t f_i_2;
};

struct t4_PortableTestApp_Test_FieldsAndProperties_MyStruct
{
	int32_t f_i_2;
};

struct t4_PortableTestApp_Test_Operators_Vec2
{
	float f_x_2;
	float f_y_2;
};

#define f_PortableTestApp_Test_Enums_MyEnum_A 6
#define f_PortableTestApp_Test_Enums_MyEnum_B 7
#define f_PortableTestApp_Test_Enums_MyEnum_C 1

struct t4_PortableTestApp_Test_Delegates_FooCallback
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t2_System_Object* f__target_1;
	t2_System_MulticastDelegate* f__next_2;
};

struct t4_PortableTestApp_Test_Interop_MyDelegate
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t2_System_Object* f__target_1;
	t2_System_MulticastDelegate* f__next_2;
};

struct t4_PortableTestApp_Test_Interop_FooDelegate
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t2_System_Object* f__target_1;
	t2_System_MulticastDelegate* f__next_2;
};


/* =============================== */
/* Generic Type definitions */
/* =============================== */
struct t4_System_Collections_Generic_List_System_Int32_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t* f__items_1;
};

struct t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC
{
	int32_t f_i_2;
	int32_t* f__items_2;
};

struct t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC
{
	int32_t f_i_2;
	int32_t* f_collection_2;
};

struct t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC f_e_1;
};

struct t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t2_System_Object* f__target_1;
	t2_System_MulticastDelegate* f__next_2;
};

struct t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
	int32_t f__p_k__BackingField_1;
};

struct t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	t2_System_Object* f_i_1;
	t2_System_Object* f__p_k__BackingField_1;
};

struct t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	double f_i_1;
	double f__p_k__BackingField_1;
};

struct t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	double f_i_1;
	double f__p_k__BackingField_1;
};

struct t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC
{
	t2_System_RuntimeType* CS2X_RuntimeType;
	int64_t f_i_1;
	t2_System_Object* f_i2_1;
};

/* =============================== */
/* Runtime Types */
/* =============================== */
typedef struct rt2_PortableTestApp_Program
{
	t2_System_RuntimeType runtimeType;
} rt2_PortableTestApp_Program;
rt2_PortableTestApp_Program rt2_PortableTestApp_Program_OBJ;
int8_t rt2_PortableTestApp_Program_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0}; /* Program */
int8_t rt2_PortableTestApp_Program_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0}; /* PortableTestApp.Program */

typedef struct rt3_PortableTestApp_Test_ClassNesting
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_ClassNesting;
rt3_PortableTestApp_Test_ClassNesting rt3_PortableTestApp_Test_ClassNesting_OBJ;
int8_t rt3_PortableTestApp_Test_ClassNesting_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,0,0}; /* ClassNesting */
int8_t rt3_PortableTestApp_Test_ClassNesting_METADATA_FullName[80] = {0,0,0,0,0,0,0,0,33,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,0,0}; /* PortableTestApp.Test.ClassNesting */

typedef struct rt4_PortableTestApp_Test_ClassNesting_SubClass
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_ClassNesting_SubClass;
rt4_PortableTestApp_Test_ClassNesting_SubClass rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ;
int8_t rt4_PortableTestApp_Test_ClassNesting_SubClass_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* SubClass */
int8_t rt4_PortableTestApp_Test_ClassNesting_SubClass_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,46,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.Test.ClassNesting.SubClass */

typedef struct rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass
{
	t2_System_RuntimeType runtimeType;
} rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass;
rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ;
int8_t rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,117,0,98,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* SubSubClass */
int8_t rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_FullName[122] = {0,0,0,0,0,0,0,0,54,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,46,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,46,0,83,0,117,0,98,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.Test.ClassNesting.SubClass.SubSubClass */

typedef struct rt3_PortableTestApp_Test_ClassVsStruct_Struct
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_ClassVsStruct_Struct;
rt3_PortableTestApp_Test_ClassVsStruct_Struct rt3_PortableTestApp_Test_ClassVsStruct_Struct_OBJ;
int8_t rt3_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,95,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* ClassVsStruct_Struct */
int8_t rt3_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_FullName[96] = {0,0,0,0,0,0,0,0,41,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,95,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.ClassVsStruct_Struct */

typedef struct rt3_PortableTestApp_Test_ClassVsStruct
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_ClassVsStruct;
rt3_PortableTestApp_Test_ClassVsStruct rt3_PortableTestApp_Test_ClassVsStruct_OBJ;
int8_t rt3_PortableTestApp_Test_ClassVsStruct_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* ClassVsStruct */
int8_t rt3_PortableTestApp_Test_ClassVsStruct_METADATA_FullName[82] = {0,0,0,0,0,0,0,0,34,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.ClassVsStruct */

typedef struct rt3_PortableTestApp_Test_CoreGenericCollections
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_CoreGenericCollections;
rt3_PortableTestApp_Test_CoreGenericCollections rt3_PortableTestApp_Test_CoreGenericCollections_OBJ;
int8_t rt3_PortableTestApp_Test_CoreGenericCollections_METADATA_Name[58] = {0,0,0,0,0,0,0,0,22,0,0,0,67,0,111,0,114,0,101,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,0,0}; /* CoreGenericCollections */
int8_t rt3_PortableTestApp_Test_CoreGenericCollections_METADATA_FullName[100] = {0,0,0,0,0,0,0,0,43,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,111,0,114,0,101,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,0,0}; /* PortableTestApp.Test.CoreGenericCollections */

typedef struct rt3_PortableTestApp_Test_Delegates
{
	t2_System_RuntimeType runtimeType;
	char (*vTable_FooVirtual_0)(t3_PortableTestApp_Test_Delegates* self, char p_value);
} rt3_PortableTestApp_Test_Delegates;
rt3_PortableTestApp_Test_Delegates rt3_PortableTestApp_Test_Delegates_OBJ;
int8_t rt3_PortableTestApp_Test_Delegates_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* Delegates */
int8_t rt3_PortableTestApp_Test_Delegates_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* PortableTestApp.Test.Delegates */

typedef struct rt3_PortableTestApp_Test_SuperDelegates
{
	t2_System_RuntimeType runtimeType;
	char (*vTable_FooVirtual_0)(t3_PortableTestApp_Test_SuperDelegates* self, char p_value);
} rt3_PortableTestApp_Test_SuperDelegates;
rt3_PortableTestApp_Test_SuperDelegates rt3_PortableTestApp_Test_SuperDelegates_OBJ;
int8_t rt3_PortableTestApp_Test_SuperDelegates_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,117,0,112,0,101,0,114,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* SuperDelegates */
int8_t rt3_PortableTestApp_Test_SuperDelegates_METADATA_FullName[84] = {0,0,0,0,0,0,0,0,35,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,83,0,117,0,112,0,101,0,114,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* PortableTestApp.Test.SuperDelegates */

typedef struct rt3_PortableTestApp_Test_DestructorsBase
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_DestructorsBase;
rt3_PortableTestApp_Test_DestructorsBase rt3_PortableTestApp_Test_DestructorsBase_OBJ;
int8_t rt3_PortableTestApp_Test_DestructorsBase_METADATA_Name[44] = {0,0,0,0,0,0,0,0,15,0,0,0,68,0,101,0,115,0,116,0,114,0,117,0,99,0,116,0,111,0,114,0,115,0,66,0,97,0,115,0,101,0,0,0}; /* DestructorsBase */
int8_t rt3_PortableTestApp_Test_DestructorsBase_METADATA_FullName[86] = {0,0,0,0,0,0,0,0,36,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,68,0,101,0,115,0,116,0,114,0,117,0,99,0,116,0,111,0,114,0,115,0,66,0,97,0,115,0,101,0,0,0}; /* PortableTestApp.Test.DestructorsBase */

typedef struct rt3_PortableTestApp_Test_Destructors
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_Destructors;
rt3_PortableTestApp_Test_Destructors rt3_PortableTestApp_Test_Destructors_OBJ;
int8_t rt3_PortableTestApp_Test_Destructors_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,68,0,101,0,115,0,116,0,114,0,117,0,99,0,116,0,111,0,114,0,115,0,0,0}; /* Destructors */
int8_t rt3_PortableTestApp_Test_Destructors_METADATA_FullName[78] = {0,0,0,0,0,0,0,0,32,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,68,0,101,0,115,0,116,0,114,0,117,0,99,0,116,0,111,0,114,0,115,0,0,0}; /* PortableTestApp.Test.Destructors */

typedef struct rt3_PortableTestApp_Test_Enums
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_Enums;
rt3_PortableTestApp_Test_Enums rt3_PortableTestApp_Test_Enums_OBJ;
int8_t rt3_PortableTestApp_Test_Enums_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,69,0,110,0,117,0,109,0,115,0,0,0}; /* Enums */
int8_t rt3_PortableTestApp_Test_Enums_METADATA_FullName[66] = {0,0,0,0,0,0,0,0,26,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,110,0,117,0,109,0,115,0,0,0}; /* PortableTestApp.Test.Enums */

typedef struct rt3_PortableTestApp_Test_ExtensionMethods
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_ExtensionMethods;
rt3_PortableTestApp_Test_ExtensionMethods rt3_PortableTestApp_Test_ExtensionMethods_OBJ;
int8_t rt3_PortableTestApp_Test_ExtensionMethods_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* ExtensionMethods */
int8_t rt3_PortableTestApp_Test_ExtensionMethods_METADATA_FullName[88] = {0,0,0,0,0,0,0,0,37,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* PortableTestApp.Test.ExtensionMethods */

typedef struct rt4_PortableTestApp_Test_ExtensionMethods_MyClass
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_ExtensionMethods_MyClass;
rt4_PortableTestApp_Test_ExtensionMethods_MyClass rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ;
int8_t rt4_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,77,0,121,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* MyClass */
int8_t rt4_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_FullName[104] = {0,0,0,0,0,0,0,0,45,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,46,0,77,0,121,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.Test.ExtensionMethods.MyClass */

typedef struct rt3_PortableTestApp_Test_FieldsAndProperties
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_FieldsAndProperties;
rt3_PortableTestApp_Test_FieldsAndProperties rt3_PortableTestApp_Test_FieldsAndProperties_OBJ;
int8_t rt3_PortableTestApp_Test_FieldsAndProperties_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,70,0,105,0,101,0,108,0,100,0,115,0,65,0,110,0,100,0,80,0,114,0,111,0,112,0,101,0,114,0,116,0,105,0,101,0,115,0,0,0}; /* FieldsAndProperties */
int8_t rt3_PortableTestApp_Test_FieldsAndProperties_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,70,0,105,0,101,0,108,0,100,0,115,0,65,0,110,0,100,0,80,0,114,0,111,0,112,0,101,0,114,0,116,0,105,0,101,0,115,0,0,0}; /* PortableTestApp.Test.FieldsAndProperties */

typedef struct rt3_PortableTestApp_Test_FlowControlAndEnumerators
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_FlowControlAndEnumerators;
rt3_PortableTestApp_Test_FlowControlAndEnumerators rt3_PortableTestApp_Test_FlowControlAndEnumerators_OBJ;
int8_t rt3_PortableTestApp_Test_FlowControlAndEnumerators_METADATA_Name[64] = {0,0,0,0,0,0,0,0,25,0,0,0,70,0,108,0,111,0,119,0,67,0,111,0,110,0,116,0,114,0,111,0,108,0,65,0,110,0,100,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,115,0,0,0}; /* FlowControlAndEnumerators */
int8_t rt3_PortableTestApp_Test_FlowControlAndEnumerators_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,70,0,108,0,111,0,119,0,67,0,111,0,110,0,116,0,114,0,111,0,108,0,65,0,110,0,100,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,115,0,0,0}; /* PortableTestApp.Test.FlowControlAndEnumerators */

typedef struct rt3_PortableTestApp_Test_Generics
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_Generics;
rt3_PortableTestApp_Test_Generics rt3_PortableTestApp_Test_Generics_OBJ;
int8_t rt3_PortableTestApp_Test_Generics_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,115,0,0,0}; /* Generics */
int8_t rt3_PortableTestApp_Test_Generics_METADATA_FullName[72] = {0,0,0,0,0,0,0,0,29,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,115,0,0,0}; /* PortableTestApp.Test.Generics */

typedef struct rt3_PortableTestApp_Test_Indexers
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_Indexers;
rt3_PortableTestApp_Test_Indexers rt3_PortableTestApp_Test_Indexers_OBJ;
int8_t rt3_PortableTestApp_Test_Indexers_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,73,0,110,0,100,0,101,0,120,0,101,0,114,0,115,0,0,0}; /* Indexers */
int8_t rt3_PortableTestApp_Test_Indexers_METADATA_FullName[72] = {0,0,0,0,0,0,0,0,29,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,73,0,110,0,100,0,101,0,120,0,101,0,114,0,115,0,0,0}; /* PortableTestApp.Test.Indexers */

typedef struct rt3_PortableTestApp_Test_Interop
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_Interop;
rt3_PortableTestApp_Test_Interop rt3_PortableTestApp_Test_Interop_OBJ;
int8_t rt3_PortableTestApp_Test_Interop_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,0,0}; /* Interop */
int8_t rt3_PortableTestApp_Test_Interop_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,0,0}; /* PortableTestApp.Test.Interop */

typedef struct rt3_PortableTestApp_Test_NewOverrides
{
	t2_System_RuntimeType runtimeType;
	int32_t (*vTable_Foo2_0)(t3_PortableTestApp_Test_NewOverrides* self);
} rt3_PortableTestApp_Test_NewOverrides;
rt3_PortableTestApp_Test_NewOverrides rt3_PortableTestApp_Test_NewOverrides_OBJ;
int8_t rt3_PortableTestApp_Test_NewOverrides_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,78,0,101,0,119,0,79,0,118,0,101,0,114,0,114,0,105,0,100,0,101,0,115,0,0,0}; /* NewOverrides */
int8_t rt3_PortableTestApp_Test_NewOverrides_METADATA_FullName[80] = {0,0,0,0,0,0,0,0,33,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,78,0,101,0,119,0,79,0,118,0,101,0,114,0,114,0,105,0,100,0,101,0,115,0,0,0}; /* PortableTestApp.Test.NewOverrides */

typedef struct rt3_PortableTestApp_Test_NewOverridesSuper
{
	t2_System_RuntimeType runtimeType;
	int32_t (*vTable_Foo2_0)(t3_PortableTestApp_Test_NewOverridesSuper* self);
} rt3_PortableTestApp_Test_NewOverridesSuper;
rt3_PortableTestApp_Test_NewOverridesSuper rt3_PortableTestApp_Test_NewOverridesSuper_OBJ;
int8_t rt3_PortableTestApp_Test_NewOverridesSuper_METADATA_Name[48] = {0,0,0,0,0,0,0,0,17,0,0,0,78,0,101,0,119,0,79,0,118,0,101,0,114,0,114,0,105,0,100,0,101,0,115,0,83,0,117,0,112,0,101,0,114,0,0,0}; /* NewOverridesSuper */
int8_t rt3_PortableTestApp_Test_NewOverridesSuper_METADATA_FullName[90] = {0,0,0,0,0,0,0,0,38,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,78,0,101,0,119,0,79,0,118,0,101,0,114,0,114,0,105,0,100,0,101,0,115,0,83,0,117,0,112,0,101,0,114,0,0,0}; /* PortableTestApp.Test.NewOverridesSuper */

typedef struct rt3_PortableTestApp_Test_NumbersToStrings
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_NumbersToStrings;
rt3_PortableTestApp_Test_NumbersToStrings rt3_PortableTestApp_Test_NumbersToStrings_OBJ;
int8_t rt3_PortableTestApp_Test_NumbersToStrings_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,78,0,117,0,109,0,98,0,101,0,114,0,115,0,84,0,111,0,83,0,116,0,114,0,105,0,110,0,103,0,115,0,0,0}; /* NumbersToStrings */
int8_t rt3_PortableTestApp_Test_NumbersToStrings_METADATA_FullName[88] = {0,0,0,0,0,0,0,0,37,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,78,0,117,0,109,0,98,0,101,0,114,0,115,0,84,0,111,0,83,0,116,0,114,0,105,0,110,0,103,0,115,0,0,0}; /* PortableTestApp.Test.NumbersToStrings */

typedef struct rt3_PortableTestApp_Test_Operators
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_Operators;
rt3_PortableTestApp_Test_Operators rt3_PortableTestApp_Test_Operators_OBJ;
int8_t rt3_PortableTestApp_Test_Operators_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,79,0,112,0,101,0,114,0,97,0,116,0,111,0,114,0,115,0,0,0}; /* Operators */
int8_t rt3_PortableTestApp_Test_Operators_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,79,0,112,0,101,0,114,0,97,0,116,0,111,0,114,0,115,0,0,0}; /* PortableTestApp.Test.Operators */

typedef struct rt3_PortableTestApp_Test_RefOutParameters
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_RefOutParameters;
rt3_PortableTestApp_Test_RefOutParameters rt3_PortableTestApp_Test_RefOutParameters_OBJ;
int8_t rt3_PortableTestApp_Test_RefOutParameters_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,82,0,101,0,102,0,79,0,117,0,116,0,80,0,97,0,114,0,97,0,109,0,101,0,116,0,101,0,114,0,115,0,0,0}; /* RefOutParameters */
int8_t rt3_PortableTestApp_Test_RefOutParameters_METADATA_FullName[88] = {0,0,0,0,0,0,0,0,37,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,82,0,101,0,102,0,79,0,117,0,116,0,80,0,97,0,114,0,97,0,109,0,101,0,116,0,101,0,114,0,115,0,0,0}; /* PortableTestApp.Test.RefOutParameters */

typedef struct rt3_PortableTestApp_Test_StringEncoding
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_StringEncoding;
rt3_PortableTestApp_Test_StringEncoding rt3_PortableTestApp_Test_StringEncoding_OBJ;
int8_t rt3_PortableTestApp_Test_StringEncoding_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* StringEncoding */
int8_t rt3_PortableTestApp_Test_StringEncoding_METADATA_FullName[84] = {0,0,0,0,0,0,0,0,35,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,69,0,110,0,99,0,111,0,100,0,105,0,110,0,103,0,0,0}; /* PortableTestApp.Test.StringEncoding */

typedef struct rt3_PortableTestApp_Test_TryCatch
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_TryCatch;
rt3_PortableTestApp_Test_TryCatch rt3_PortableTestApp_Test_TryCatch_OBJ;
int8_t rt3_PortableTestApp_Test_TryCatch_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,84,0,114,0,121,0,67,0,97,0,116,0,99,0,104,0,0,0}; /* TryCatch */
int8_t rt3_PortableTestApp_Test_TryCatch_METADATA_FullName[72] = {0,0,0,0,0,0,0,0,29,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,84,0,114,0,121,0,67,0,97,0,116,0,99,0,104,0,0,0}; /* PortableTestApp.Test.TryCatch */

typedef struct rt3_PortableTestApp_Test_MyException
{
	t2_System_RuntimeType runtimeType;
	t2_System_String* (*vTable_get_Message_0)(t3_PortableTestApp_Test_MyException* self);
} rt3_PortableTestApp_Test_MyException;
rt3_PortableTestApp_Test_MyException rt3_PortableTestApp_Test_MyException_OBJ;
int8_t rt3_PortableTestApp_Test_MyException_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,77,0,121,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* MyException */
int8_t rt3_PortableTestApp_Test_MyException_METADATA_FullName[78] = {0,0,0,0,0,0,0,0,32,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,77,0,121,0,69,0,120,0,99,0,101,0,112,0,116,0,105,0,111,0,110,0,0,0}; /* PortableTestApp.Test.MyException */

typedef struct rt3_PortableTestApp_Test_VirtualMethods_Base
{
	t2_System_RuntimeType runtimeType;
	char (*vTable_VirtualFoo_0)(t3_PortableTestApp_Test_VirtualMethods_Base* self, char p_value);
	char (*vTable_AbstractFoo_0)(t3_PortableTestApp_Test_VirtualMethods_Base* self, char p_value);
} rt3_PortableTestApp_Test_VirtualMethods_Base;
rt3_PortableTestApp_Test_VirtualMethods_Base rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ;
int8_t rt3_PortableTestApp_Test_VirtualMethods_Base_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,95,0,66,0,97,0,115,0,101,0,0,0}; /* VirtualMethods_Base */
int8_t rt3_PortableTestApp_Test_VirtualMethods_Base_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,95,0,66,0,97,0,115,0,101,0,0,0}; /* PortableTestApp.Test.VirtualMethods_Base */

typedef struct rt3_PortableTestApp_Test_VirtualMethods
{
	t2_System_RuntimeType runtimeType;
	char (*vTable_VirtualFoo_0)(t3_PortableTestApp_Test_VirtualMethods* self, char p_value);
	char (*vTable_AbstractFoo_0)(t3_PortableTestApp_Test_VirtualMethods* self, char p_value);
} rt3_PortableTestApp_Test_VirtualMethods;
rt3_PortableTestApp_Test_VirtualMethods rt3_PortableTestApp_Test_VirtualMethods_OBJ;
int8_t rt3_PortableTestApp_Test_VirtualMethods_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* VirtualMethods */
int8_t rt3_PortableTestApp_Test_VirtualMethods_METADATA_FullName[84] = {0,0,0,0,0,0,0,0,35,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* PortableTestApp.Test.VirtualMethods */

typedef struct rt4_PortableTestApp_Test_ExtensionMethods_MyStruct
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_ExtensionMethods_MyStruct;
rt4_PortableTestApp_Test_ExtensionMethods_MyStruct rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ;
int8_t rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* MyStruct */
int8_t rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,46,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.ExtensionMethods.MyStruct */

typedef struct rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct;
rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ;
int8_t rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* MyStruct */
int8_t rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,70,0,105,0,101,0,108,0,100,0,115,0,65,0,110,0,100,0,80,0,114,0,111,0,112,0,101,0,114,0,116,0,105,0,101,0,115,0,46,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.FieldsAndProperties.MyStruct */

typedef struct rt4_PortableTestApp_Test_Operators_Vec2
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_Operators_Vec2;
rt4_PortableTestApp_Test_Operators_Vec2 rt4_PortableTestApp_Test_Operators_Vec2_OBJ;
int8_t rt4_PortableTestApp_Test_Operators_Vec2_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,86,0,101,0,99,0,50,0,0,0}; /* Vec2 */
int8_t rt4_PortableTestApp_Test_Operators_Vec2_METADATA_FullName[84] = {0,0,0,0,0,0,0,0,35,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,79,0,112,0,101,0,114,0,97,0,116,0,111,0,114,0,115,0,46,0,86,0,101,0,99,0,50,0,0,0}; /* PortableTestApp.Test.Operators.Vec2 */

typedef struct rt4_PortableTestApp_Test_Enums_MyEnum
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_Enums_MyEnum;
rt4_PortableTestApp_Test_Enums_MyEnum rt4_PortableTestApp_Test_Enums_MyEnum_OBJ;
int8_t rt4_PortableTestApp_Test_Enums_MyEnum_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* MyEnum */
int8_t rt4_PortableTestApp_Test_Enums_MyEnum_METADATA_FullName[80] = {0,0,0,0,0,0,0,0,33,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,110,0,117,0,109,0,115,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* PortableTestApp.Test.Enums.MyEnum */

typedef struct rt4_PortableTestApp_Test_Delegates_FooCallback
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_Delegates_FooCallback;
rt4_PortableTestApp_Test_Delegates_FooCallback rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ;
int8_t rt4_PortableTestApp_Test_Delegates_FooCallback_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,0,0}; /* FooCallback */
int8_t rt4_PortableTestApp_Test_Delegates_FooCallback_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,46,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,0,0}; /* PortableTestApp.Test.Delegates.FooCallback */

typedef struct rt4_PortableTestApp_Test_Interop_MyDelegate
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_Interop_MyDelegate;
rt4_PortableTestApp_Test_Interop_MyDelegate rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ;
int8_t rt4_PortableTestApp_Test_Interop_MyDelegate_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,77,0,121,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* MyDelegate */
int8_t rt4_PortableTestApp_Test_Interop_MyDelegate_METADATA_FullName[92] = {0,0,0,0,0,0,0,0,39,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,46,0,77,0,121,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* PortableTestApp.Test.Interop.MyDelegate */

typedef struct rt4_PortableTestApp_Test_Interop_FooDelegate
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_Interop_FooDelegate;
rt4_PortableTestApp_Test_Interop_FooDelegate rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ;
int8_t rt4_PortableTestApp_Test_Interop_FooDelegate_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,70,0,111,0,111,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* FooDelegate */
int8_t rt4_PortableTestApp_Test_Interop_FooDelegate_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,73,0,110,0,116,0,101,0,114,0,111,0,112,0,46,0,70,0,111,0,111,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* PortableTestApp.Test.Interop.FooDelegate */

/* =============================== */
/* Generic Runtime Types */
/* =============================== */
typedef struct rt4_System_Collections_Generic_List_System_Int32_GENERIC
{
	t2_System_RuntimeType runtimeType;
} rt4_System_Collections_Generic_List_System_Int32_GENERIC;
rt4_System_Collections_Generic_List_System_Int32_GENERIC rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ;
int8_t rt4_System_Collections_Generic_List_System_Int32_GENERIC_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,76,0,105,0,115,0,116,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* List<Int32> */
int8_t rt4_System_Collections_Generic_List_System_Int32_GENERIC_METADATA_FullName[104] = {0,0,0,0,0,0,0,0,45,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,46,0,76,0,105,0,115,0,116,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* System.Collections.Generic.List<System.Int32> */

typedef struct rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC
{
	t2_System_RuntimeType runtimeType;
} rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC;
rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_OBJ;
int8_t rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,0,0}; /* Enumerator */
int8_t rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_METADATA_FullName[126] = {0,0,0,0,0,0,0,0,56,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,111,0,108,0,108,0,101,0,99,0,116,0,105,0,111,0,110,0,115,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,46,0,76,0,105,0,115,0,116,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,46,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,0,0}; /* System.Collections.Generic.List<System.Int32>.Enumerator */

typedef struct rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC;
rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_OBJ;
int8_t rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* MyEnumerator<Int32> */
int8_t rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_METADATA_FullName[108] = {0,0,0,0,0,0,0,0,47,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* PortableTestApp.Test.MyEnumerator<System.Int32> */

typedef struct rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC;
rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ;
int8_t rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,98,0,108,0,101,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* MyEnumerable<Int32> */
int8_t rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_METADATA_FullName[108] = {0,0,0,0,0,0,0,0,47,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,98,0,108,0,101,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* PortableTestApp.Test.MyEnumerable<System.Int32> */

typedef struct rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC;
rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ;
int8_t rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_Name[68] = {0,0,0,0,0,0,0,0,27,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,60,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,62,0,0,0}; /* GenericFooCallback<Boolean> */
int8_t rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_FullName[142] = {0,0,0,0,0,0,0,0,64,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,115,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,62,0,0,0}; /* PortableTestApp.Test.Generics.GenericFooCallback<System.Boolean> */

typedef struct rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC
{
	t2_System_RuntimeType runtimeType;
	char (*vTable_TestVirt_Boolean__0)(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, char p_value);
} rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC;
rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ;
int8_t rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* GenericClass<Int32> */
int8_t rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_FullName[108] = {0,0,0,0,0,0,0,0,47,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Int32> */

typedef struct rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC
{
	t2_System_RuntimeType runtimeType;
} rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC;
rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ;
int8_t rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* GenericClass<Object> */
int8_t rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Object> */

typedef struct rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC
{
	t2_System_RuntimeType runtimeType;
	char (*vTable_MyVirt_Object__0)(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_Object* p_value);
	char (*vTable_MyVirt_String__0)(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_String* p_value);
	char (*vTable_MyVirt2_Object__0)(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_Object* p_value);
} rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC;
rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ;
int8_t rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,50,0,60,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* GenericClass2<Double> */
int8_t rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,50,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass2<System.Double> */

typedef struct rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC
{
	t2_System_RuntimeType runtimeType;
	char (*vTable_MyVirt_Object__0)(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_Object* p_value);
	char (*vTable_MyVirt_String__0)(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_String* p_value);
	char (*vTable_MyVirt2_Object__0)(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_Object* p_value);
} rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC;
rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ;
int8_t rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* GenericClass<Double> */
int8_t rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Double> */

typedef struct rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC
{
	t2_System_RuntimeType runtimeType;
} rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC;
rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ;
int8_t rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,66,0,60,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* B<Object> */
int8_t rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_FullName[142] = {0,0,0,0,0,0,0,0,64,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,54,0,52,0,62,0,46,0,66,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Int64>.B<System.Object> */

/* =============================== */
/* ARRAY Runtime Types */
/* =============================== */
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
/* PValue to IValue inline helpers */
/* =============================== */
t4_PortableTestApp_Test_FieldsAndProperties_MyStruct* CS2X_PValueToIValue_t4_PortableTestApp_Test_FieldsAndProperties_MyStruct(t4_PortableTestApp_Test_FieldsAndProperties_MyStruct pvalue, t4_PortableTestApp_Test_FieldsAndProperties_MyStruct* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

int8_t* CS2X_PValueToIValue_int8_t(int8_t pvalue, int8_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

int16_t* CS2X_PValueToIValue_int16_t(int16_t pvalue, int16_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

int32_t* CS2X_PValueToIValue_int32_t(int32_t pvalue, int32_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

int64_t* CS2X_PValueToIValue_int64_t(int64_t pvalue, int64_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

uint8_t* CS2X_PValueToIValue_uint8_t(uint8_t pvalue, uint8_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

uint16_t* CS2X_PValueToIValue_uint16_t(uint16_t pvalue, uint16_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

uint32_t* CS2X_PValueToIValue_uint32_t(uint32_t pvalue, uint32_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

uint64_t* CS2X_PValueToIValue_uint64_t(uint64_t pvalue, uint64_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

float* CS2X_PValueToIValue_float(float pvalue, float* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

double* CS2X_PValueToIValue_double(double pvalue, double* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

char16_t* CS2X_PValueToIValue_char16_t(char16_t pvalue, char16_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
int32_t m2_PortableTestApp_Program_Main_0(t2_System_String** p_args);
void m2_PortableTestApp_Program_Log_0(char p_success, t2_System_String* p_message);
char m3_PortableTestApp_Test_ClassNesting_RunTest_0();
t4_PortableTestApp_Test_ClassNesting_SubClass* m4_PortableTestApp_Test_ClassNesting_SubClass__ctor_0(t4_PortableTestApp_Test_ClassNesting_SubClass* self);
void m4_PortableTestApp_Test_ClassNesting_SubClass__cctor_0();
char m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_Foo_0(t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self);
char m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_StaticFoo_0();
t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__ctor_0(t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self);
void m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__cctor_0();
t3_PortableTestApp_Test_ClassVsStruct_Struct m3_PortableTestApp_Test_ClassVsStruct_Struct__ctor_0();
char m3_PortableTestApp_Test_ClassVsStruct_RunTest_0();
t3_PortableTestApp_Test_ClassVsStruct* m3_PortableTestApp_Test_ClassVsStruct__ctor_0(t3_PortableTestApp_Test_ClassVsStruct* self);
char m3_PortableTestApp_Test_CoreGenericCollections_RunTest_0();
char m3_PortableTestApp_Test_Delegates_RunTest_0();
t3_PortableTestApp_Test_Delegates* m3_PortableTestApp_Test_Delegates_ReturnSelf_0(t3_PortableTestApp_Test_Delegates* self);
char m3_PortableTestApp_Test_Delegates_Foo_0(t3_PortableTestApp_Test_Delegates* self, char p_value);
char m3_PortableTestApp_Test_Delegates_FooStatic_0(char p_value);
char m3_PortableTestApp_Test_Delegates_FooVirtual_0(t3_PortableTestApp_Test_Delegates* self, char p_value);
t3_PortableTestApp_Test_Delegates* m3_PortableTestApp_Test_Delegates__ctor_0(t3_PortableTestApp_Test_Delegates* self);
char m3_PortableTestApp_Test_SuperDelegates_FooVirtual_0(t3_PortableTestApp_Test_SuperDelegates* self, char p_value);
t3_PortableTestApp_Test_SuperDelegates* m3_PortableTestApp_Test_SuperDelegates__ctor_0(t3_PortableTestApp_Test_SuperDelegates* self);
void m3_PortableTestApp_Test_DestructorsBase_Finalize_0(t3_PortableTestApp_Test_DestructorsBase* self);
t3_PortableTestApp_Test_DestructorsBase* m3_PortableTestApp_Test_DestructorsBase__ctor_0(t3_PortableTestApp_Test_DestructorsBase* self);
char m3_PortableTestApp_Test_Destructors_RunTest_0();
void m3_PortableTestApp_Test_Destructors_Finalize_0(t3_PortableTestApp_Test_Destructors* self);
t3_PortableTestApp_Test_Destructors* m3_PortableTestApp_Test_Destructors__ctor_0(t3_PortableTestApp_Test_Destructors* self);
void m3_PortableTestApp_Test_Destructors__cctor_0();
char m3_PortableTestApp_Test_Enums_RunTest_0();
char m3_PortableTestApp_Test_ExtensionMethods_RunTest_0();
void m3_PortableTestApp_Test_ExtensionMethods_FooClass_0(t4_PortableTestApp_Test_ExtensionMethods_MyClass* p_self);
void m3_PortableTestApp_Test_ExtensionMethods_FooStruct_0(t4_PortableTestApp_Test_ExtensionMethods_MyStruct p_self);
t4_PortableTestApp_Test_ExtensionMethods_MyClass* m4_PortableTestApp_Test_ExtensionMethods_MyClass__ctor_0(t4_PortableTestApp_Test_ExtensionMethods_MyClass* self);
int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty_0();
int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty3_0();
void m3_PortableTestApp_Test_FieldsAndProperties_set_myStaticProperty3_0(int32_t p_value);
int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myProperty_0(t3_PortableTestApp_Test_FieldsAndProperties* self);
int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myProperty3_0(t3_PortableTestApp_Test_FieldsAndProperties* self);
void m3_PortableTestApp_Test_FieldsAndProperties_set_myProperty3_0(t3_PortableTestApp_Test_FieldsAndProperties* self, int32_t p_value);
char m3_PortableTestApp_Test_FieldsAndProperties_RunTest_0();
t3_PortableTestApp_Test_FieldsAndProperties* m3_PortableTestApp_Test_FieldsAndProperties_Foo_0(t3_PortableTestApp_Test_FieldsAndProperties* self);
t4_PortableTestApp_Test_FieldsAndProperties_MyStruct m3_PortableTestApp_Test_FieldsAndProperties_Foo2_0(t3_PortableTestApp_Test_FieldsAndProperties* self);
t3_PortableTestApp_Test_FieldsAndProperties* m3_PortableTestApp_Test_FieldsAndProperties__ctor_0(t3_PortableTestApp_Test_FieldsAndProperties* self);
void m3_PortableTestApp_Test_FieldsAndProperties__cctor_0();
char m3_PortableTestApp_Test_FlowControlAndEnumerators_RunTest_0();
char m3_PortableTestApp_Test_Generics_RunTest_0();
char16_t m3_PortableTestApp_Test_Indexers_get_Item_0(t3_PortableTestApp_Test_Indexers* self, int32_t p_index);
void m3_PortableTestApp_Test_Indexers_set_Item_0(t3_PortableTestApp_Test_Indexers* self, int32_t p_index, char16_t p_value);
char m3_PortableTestApp_Test_Indexers_RunTest_0();
t3_PortableTestApp_Test_Indexers* m3_PortableTestApp_Test_Indexers__ctor_0(t3_PortableTestApp_Test_Indexers* self);
uint32_t (__stdcall *m3_PortableTestApp_Test_Interop_GetLastError_0)();
intptr_t (*m3_PortableTestApp_Test_Interop_GetFuncPtr_0)();
void (*m3_PortableTestApp_Test_Interop_InvokeDelegateFuncPtr_0)(intptr_t, intptr_t);
void m3_PortableTestApp_Test_Interop_FooStatic_0();
void m3_PortableTestApp_Test_Interop_Foo_0(t3_PortableTestApp_Test_Interop* self);
char m3_PortableTestApp_Test_Interop_RunTest_0();
t3_PortableTestApp_Test_Interop* m3_PortableTestApp_Test_Interop__ctor_0(t3_PortableTestApp_Test_Interop* self);
int32_t m3_PortableTestApp_Test_NewOverrides_get_i2_0(t3_PortableTestApp_Test_NewOverrides* self);
char m3_PortableTestApp_Test_NewOverrides_RunTest_0();
int32_t m3_PortableTestApp_Test_NewOverrides_Foo_0(t3_PortableTestApp_Test_NewOverrides* self);
int32_t m3_PortableTestApp_Test_NewOverrides_Foo2_0(t3_PortableTestApp_Test_NewOverrides* self);
t3_PortableTestApp_Test_NewOverrides* m3_PortableTestApp_Test_NewOverrides__ctor_0(t3_PortableTestApp_Test_NewOverrides* self);
int32_t m3_PortableTestApp_Test_NewOverridesSuper_get_i2_0(t3_PortableTestApp_Test_NewOverridesSuper* self);
int32_t m3_PortableTestApp_Test_NewOverridesSuper_Foo_0(t3_PortableTestApp_Test_NewOverridesSuper* self);
int32_t m3_PortableTestApp_Test_NewOverridesSuper_Foo2_0(t3_PortableTestApp_Test_NewOverridesSuper* self);
t3_PortableTestApp_Test_NewOverridesSuper* m3_PortableTestApp_Test_NewOverridesSuper__ctor_0(t3_PortableTestApp_Test_NewOverridesSuper* self);
char m3_PortableTestApp_Test_NumbersToStrings_RunTest_0();
t3_PortableTestApp_Test_Operators* m3_PortableTestApp_Test_Operators_op_Explicit_0(int32_t p_value);
int32_t m3_PortableTestApp_Test_Operators_op_Implicit_0(t3_PortableTestApp_Test_Operators* p_value);
char m3_PortableTestApp_Test_Operators_RunTest_0();
t3_PortableTestApp_Test_Operators* m3_PortableTestApp_Test_Operators__ctor_0(t3_PortableTestApp_Test_Operators* self);
char m3_PortableTestApp_Test_RefOutParameters_RunTest_0();
void m3_PortableTestApp_Test_RefOutParameters_Foo_0(int32_t* p_value, int32_t* p_value2);
void m3_PortableTestApp_Test_RefOutParameters_Foo2_0(t3_PortableTestApp_Test_RefOutParameters** p_obj, t3_PortableTestApp_Test_RefOutParameters** p_obj2);
t3_PortableTestApp_Test_RefOutParameters* m3_PortableTestApp_Test_RefOutParameters__ctor_0(t3_PortableTestApp_Test_RefOutParameters* self);
char m3_PortableTestApp_Test_StringEncoding_RunTest_0();
char m3_PortableTestApp_Test_TryCatch_RunTest_0();
t3_PortableTestApp_Test_MyException* m3_PortableTestApp_Test_MyException__ctor_0(t3_PortableTestApp_Test_MyException* self, t2_System_String* p_message);
char m3_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0(t3_PortableTestApp_Test_VirtualMethods_Base* self, char p_value);
t3_PortableTestApp_Test_VirtualMethods_Base* m3_PortableTestApp_Test_VirtualMethods_Base__ctor_0(t3_PortableTestApp_Test_VirtualMethods_Base* self);
char m3_PortableTestApp_Test_VirtualMethods_VirtualFoo_0(t3_PortableTestApp_Test_VirtualMethods* self, char p_value);
char m3_PortableTestApp_Test_VirtualMethods_AbstractFoo_0(t3_PortableTestApp_Test_VirtualMethods* self, char p_value);
char m3_PortableTestApp_Test_VirtualMethods_RunTest_0();
t3_PortableTestApp_Test_VirtualMethods* m3_PortableTestApp_Test_VirtualMethods__ctor_0(t3_PortableTestApp_Test_VirtualMethods* self);
t4_PortableTestApp_Test_ExtensionMethods_MyStruct m4_PortableTestApp_Test_ExtensionMethods_MyStruct__ctor_0();
char m4_PortableTestApp_Test_FieldsAndProperties_MyStruct_Foo_0(t4_PortableTestApp_Test_FieldsAndProperties_MyStruct* self);
t4_PortableTestApp_Test_FieldsAndProperties_MyStruct m4_PortableTestApp_Test_FieldsAndProperties_MyStruct__ctor_0();
t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2__ctor_0(float p_x, float p_y);
t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2_op_Addition_0(t4_PortableTestApp_Test_Operators_Vec2 p_value1, t4_PortableTestApp_Test_Operators_Vec2 p_value2);
t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2_op_UnaryNegation_0(t4_PortableTestApp_Test_Operators_Vec2 p_value1);
t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2__ctor_1();
t4_PortableTestApp_Test_Enums_MyEnum m4_PortableTestApp_Test_Enums_MyEnum__ctor_0();
t4_PortableTestApp_Test_Delegates_FooCallback* m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(t4_PortableTestApp_Test_Delegates_FooCallback* self, t2_System_Object* p_object, intptr_t p_method);
char m4_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(t4_PortableTestApp_Test_Delegates_FooCallback* self, char p_value);
t4_PortableTestApp_Test_Interop_MyDelegate* m4_PortableTestApp_Test_Interop_MyDelegate__ctor_0(t4_PortableTestApp_Test_Interop_MyDelegate* self, t2_System_Object* p_object, intptr_t p_method);
int32_t m4_PortableTestApp_Test_Interop_MyDelegate_Invoke_0(t4_PortableTestApp_Test_Interop_MyDelegate* self, int32_t p_value);
t4_PortableTestApp_Test_Interop_FooDelegate* m4_PortableTestApp_Test_Interop_FooDelegate__ctor_0(t4_PortableTestApp_Test_Interop_FooDelegate* self, t2_System_Object* p_object, intptr_t p_method);
void m4_PortableTestApp_Test_Interop_FooDelegate_Invoke_0(t4_PortableTestApp_Test_Interop_FooDelegate* self);
/* =============================== */
/* Forward decalre Generic Type Methods */
/* =============================== */
t4_System_Collections_Generic_List_System_Int32_GENERIC* m4_t4_System_Collections_Generic_List_System_Int32_GENERIC__ctor_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self);
int32_t m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Count_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self);
t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_GetEnumerator_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self);
int32_t m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Item_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_set_Item_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index, int32_t p_value);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ShiftItemsDown_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ShiftItemsUp_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Remove_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Clear_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self);
char m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Contains_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item);
int32_t m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_IndexOf_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Insert_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index, int32_t p_item);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_RemoveAt_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index);
void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Reverse_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self);
int32_t* m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ToArray_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self);
int32_t* m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_GetArray_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self);
t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC__ctor_0(int32_t* p__items);
int32_t m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_get_Current_0(t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC* self);
char m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_MoveNext_0(t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC* self);
void m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_Reset_0(t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC* self);
t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC__ctor_1();
t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC__ctor_0(int32_t* p_collection);
int32_t m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_get_Current_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self);
char m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_MoveNext_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self);
void m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_Reset_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self);
void m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_Set_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self, int32_t p_value, int32_t p_index);
t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC__ctor_1();
void m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_Set_0(t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* self, int32_t p_value, int32_t p_index);
t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_GetEnumerator_0(t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* self);
t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC__ctor_0(t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* self);
t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, t2_System_Object* p_object, intptr_t p_method);
char m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, char p_value);
int32_t m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value);
t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self);
t2_System_Object* m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t2_System_Object* p_value);
t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self);
t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self);
double m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_Foo_0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, double p_value);
t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self);
t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* m4_t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self);
char m3_PortableTestApp_Test_Generics_Poo_Boolean__0(char p_value);
char m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_TestVirt_Boolean__0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, char p_value);
char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_TestVirt_Boolean__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, char p_value);
int32_t m3_PortableTestApp_Test_Generics_Poo_Int32__0(char p_value);
t2_System_Object* m3_PortableTestApp_Test_Generics_Poo_Object__0(char p_value);
int32_t m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo2_Object__0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* p_value1, t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2);
t2_System_Object* m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo2_Object__0(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value1, t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2);
t2_System_Object* m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Boo_Object__0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value1, t2_System_Object* p_value2);
char m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_Object__0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_Object* p_value);
char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_Object__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_Object* p_value);
char m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_String__0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_String* p_value);
char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_String__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_String* p_value);
char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt2_Object__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_Object* p_value);
char m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_Object* p_value);
char m4_t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_Aaa_Object__0(t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self, t2_System_Object* p_t);
t4_PortableTestApp_Test_Interop_MyDelegate* m4_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer_MyDelegate__0(intptr_t p_ptr);
intptr_t m4_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_FooDelegate__0(t4_PortableTestApp_Test_Interop_FooDelegate* p_d, intptr_t* p_dThisPtr);
void m2_System_Array_Resize_Int32__0(int32_t** p_array, int32_t p_newSize);
char m2_System_EqualityComparer_GenericCompare_Int32__0(int32_t p_value1, int32_t p_value2);
int32_t m4_System_Runtime_InteropServices_Marshal_SizeOf_Int32__0();

/* =============================== */
/* Method definitions */
/* =============================== */
int32_t m2_PortableTestApp_Program_Main_0(t2_System_String** p_args)
{
	int32_t l_arg_i_0;
	m2_System_Console_WriteLine_0(StringLiteral_5);
	for (l_arg_i_0 = 0; l_arg_i_0 != m2_System_Array_get_Length_0((t2_System_Array*)p_args); ++l_arg_i_0)
	{
		t2_System_String* l_arg_1;
		l_arg_1 = ((t2_System_String**)(((char*)p_args) + ArrayOffset))[l_arg_i_0];
		m2_System_Console_WriteLine_0(m2_System_String_Concat_0(StringLiteral_6, l_arg_1));
	}
	m2_System_Console_WriteLine_1();
	m2_System_Console_WriteLine_0(StringLiteral_7);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_ClassNesting_RunTest_0(), StringLiteral_8);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_ClassVsStruct_RunTest_0(), StringLiteral_9);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_Enums_RunTest_0(), StringLiteral_10);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_RefOutParameters_RunTest_0(), StringLiteral_11);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_FieldsAndProperties_RunTest_0(), StringLiteral_12);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_FlowControlAndEnumerators_RunTest_0(), StringLiteral_13);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_ExtensionMethods_RunTest_0(), StringLiteral_14);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_Destructors_RunTest_0(), StringLiteral_15);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_TryCatch_RunTest_0(), StringLiteral_16);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_Interop_RunTest_0(), StringLiteral_17);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_VirtualMethods_RunTest_0(), StringLiteral_18);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_Generics_RunTest_0(), StringLiteral_19);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_Delegates_RunTest_0(), StringLiteral_20);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_Indexers_RunTest_0(), StringLiteral_21);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_Operators_RunTest_0(), StringLiteral_22);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_StringEncoding_RunTest_0(), StringLiteral_23);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_CoreGenericCollections_RunTest_0(), StringLiteral_24);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_NewOverrides_RunTest_0(), StringLiteral_25);
	m2_PortableTestApp_Program_Log_0(m3_PortableTestApp_Test_NumbersToStrings_RunTest_0(), StringLiteral_26);
	m2_System_Console_WriteLine_0(StringLiteral_27);
	return 99;
}

void m2_PortableTestApp_Program_Log_0(char p_success, t2_System_String* p_message)
{
	if (p_success)
	{
		m2_System_Console_WriteLine_0(m2_System_String_Concat_0(StringLiteral_28, p_message));
	}
	else
	{
		m2_System_Console_WriteLine_0(m2_System_String_Concat_0(StringLiteral_29, p_message));
	}
}

char m3_PortableTestApp_Test_ClassNesting_RunTest_0()
{
	t4_PortableTestApp_Test_ClassNesting_SubClass* l_subObj_0;
	t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* l_subSubObj_1;
	l_subObj_0 = m4_PortableTestApp_Test_ClassNesting_SubClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t4_PortableTestApp_Test_ClassNesting_SubClass), &rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ, 0));
	l_subSubObj_1 = m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass), &rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ, 0));
	return l_subObj_0->f_i_1 != l_subSubObj_1->f_i_1 && f_PortableTestApp_Test_ClassNesting_SubClass_i2 != f_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_i2 && m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_Foo_0(l_subSubObj_1) && m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_StaticFoo_0();
}

t4_PortableTestApp_Test_ClassNesting_SubClass* m4_PortableTestApp_Test_ClassNesting_SubClass__ctor_0(t4_PortableTestApp_Test_ClassNesting_SubClass* self)
{
	m2_System_Object__ctor_0(self);
	self->f_i_1 = 100;
	return self;
}

void m4_PortableTestApp_Test_ClassNesting_SubClass__cctor_0()
{
	f_PortableTestApp_Test_ClassNesting_SubClass_i2 = 101;
}

char m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_Foo_0(t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self)
{
	return 1;
}

char m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_StaticFoo_0()
{
	return 1;
}

t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__ctor_0(t5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self)
{
	m2_System_Object__ctor_0(self);
	self->f_i_1 = 200;
	return self;
}

void m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__cctor_0()
{
	f_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_i2 = 201;
}

t3_PortableTestApp_Test_ClassVsStruct_Struct m3_PortableTestApp_Test_ClassVsStruct_Struct__ctor_0()
{
	t3_PortableTestApp_Test_ClassVsStruct_Struct selfObj = {0};
	return selfObj;
}

char m3_PortableTestApp_Test_ClassVsStruct_RunTest_0()
{
	t3_PortableTestApp_Test_ClassVsStruct* l_obj_0;
	t3_PortableTestApp_Test_ClassVsStruct_Struct l_value_1;
	l_obj_0 = m3_PortableTestApp_Test_ClassVsStruct__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_ClassVsStruct), &rt3_PortableTestApp_Test_ClassVsStruct_OBJ, 0));
	l_obj_0->f_myStruct_1.f_myClass_2 = l_obj_0;
	l_value_1 = l_obj_0->f_myStruct_1;
	l_value_1.f_myClass_2 = 0;
	return l_value_1.f_myClass_2 != l_obj_0->f_myStruct_1.f_myClass_2;
}

t3_PortableTestApp_Test_ClassVsStruct* m3_PortableTestApp_Test_ClassVsStruct__ctor_0(t3_PortableTestApp_Test_ClassVsStruct* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

char m3_PortableTestApp_Test_CoreGenericCollections_RunTest_0()
{
	t4_System_Collections_Generic_List_System_Int32_GENERIC* l_list_0;
	t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC l_item_en_1;
	int32_t l_i_2;
	l_list_0 = m4_t4_System_Collections_Generic_List_System_Int32_GENERIC__ctor_0(CS2X_AllocType(sizeof(t4_System_Collections_Generic_List_System_Int32_GENERIC), &rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ, 0));
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(l_list_0, 1);
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(l_list_0, 2);
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(l_list_0, 3);
	for/*each*/ (l_item_en_1 = m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_GetEnumerator_0(l_list_0); m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_MoveNext_0(&l_item_en_1);)
	{
		int32_t l_item_2;
		l_item_2 = m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_get_Current_0(&l_item_en_1);
		if (l_item_2 == 0)
		{
			return 0;
		}
	}
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Remove_0(l_list_0, 2);
	for (l_i_2 = 0; l_i_2 != m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Count_0(l_list_0); ++l_i_2)
	{
		if (m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Item_0(l_list_0, l_i_2) == 2)
		{
			return 0;
		}
	}
	if (m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Count_0(l_list_0) != 2)
	{
		return 0;
	}
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Clear_0(l_list_0);
	return m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Count_0(l_list_0) == 0;
}

char m3_PortableTestApp_Test_Delegates_RunTest_0()
{
	t4_PortableTestApp_Test_Delegates_FooCallback* l_callback_0;
	t3_PortableTestApp_Test_Delegates* l_obj_1;
	char l_result_2;
	l_callback_0 = m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Delegates_FooCallback), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0), 0, &m3_PortableTestApp_Test_Delegates_FooStatic_0);
	l_obj_1 = (t3_PortableTestApp_Test_Delegates*)m3_PortableTestApp_Test_SuperDelegates__ctor_0(CS2X_AllocType(sizeof(t3_PortableTestApp_Test_SuperDelegates), &rt3_PortableTestApp_Test_SuperDelegates_OBJ, 0));
	l_obj_1->f_self_1 = l_obj_1;
	l_callback_0 = m2_System_Delegate_Combine_0(l_callback_0, m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Delegates_FooCallback), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0), l_obj_1, &m3_PortableTestApp_Test_Delegates_Foo_0));
	l_callback_0 = (t4_PortableTestApp_Test_Delegates_FooCallback*)CS2X_TestUpCast(m2_System_Delegate_Remove_0(l_callback_0, m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Delegates_FooCallback), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0), 0, &m3_PortableTestApp_Test_Delegates_FooStatic_0)), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ);
	l_callback_0 = m2_System_Delegate_Combine_0(l_callback_0, m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Delegates_FooCallback), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0), 0, &m3_PortableTestApp_Test_Delegates_FooStatic_0));
	l_callback_0 = (t4_PortableTestApp_Test_Delegates_FooCallback*)CS2X_TestUpCast(m2_System_Delegate_Combine_0(l_callback_0, m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Delegates_FooCallback), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0), 0, &m3_PortableTestApp_Test_Delegates_FooStatic_0)), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ);
	{
		t3_PortableTestApp_Test_Delegates* DELEGATE_OBJ;
		DELEGATE_OBJ = m3_PortableTestApp_Test_Delegates_ReturnSelf_0(l_obj_1)->f_self_1;
		l_callback_0 = m2_System_Delegate_Combine_0(l_callback_0, m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Delegates_FooCallback), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0), DELEGATE_OBJ, ((rt3_PortableTestApp_Test_Delegates*)DELEGATE_OBJ->CS2X_RuntimeType)->vTable_FooVirtual_0));
	};
	l_result_2 = m4_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(l_callback_0, 1) && !m4_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(l_callback_0, 0);
	l_callback_0 = (t4_PortableTestApp_Test_Delegates_FooCallback*)CS2X_TestUpCast(m2_System_Delegate_RemoveAll_0(l_callback_0, m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Delegates_FooCallback), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0), 0, &m3_PortableTestApp_Test_Delegates_FooStatic_0)), &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ);
	return l_result_2;
}

t3_PortableTestApp_Test_Delegates* m3_PortableTestApp_Test_Delegates_ReturnSelf_0(t3_PortableTestApp_Test_Delegates* self)
{
	return self;
}

char m3_PortableTestApp_Test_Delegates_Foo_0(t3_PortableTestApp_Test_Delegates* self, char p_value)
{
	return p_value && self->f_someField_1;
}

char m3_PortableTestApp_Test_Delegates_FooStatic_0(char p_value)
{
	return p_value;
}

char m3_PortableTestApp_Test_Delegates_FooVirtual_0(t3_PortableTestApp_Test_Delegates* self, char p_value)
{
	return 0;
}

t3_PortableTestApp_Test_Delegates* m3_PortableTestApp_Test_Delegates__ctor_0(t3_PortableTestApp_Test_Delegates* self)
{
	m2_System_Object__ctor_0(self);
	self->f_someField_1 = 1;
	return self;
}

char m3_PortableTestApp_Test_SuperDelegates_FooVirtual_0(t3_PortableTestApp_Test_SuperDelegates* self, char p_value)
{
	return p_value;
}

t3_PortableTestApp_Test_SuperDelegates* m3_PortableTestApp_Test_SuperDelegates__ctor_0(t3_PortableTestApp_Test_SuperDelegates* self)
{
	m3_PortableTestApp_Test_Delegates__ctor_0(self);
	return self;
}

void m3_PortableTestApp_Test_DestructorsBase_Finalize_0(t3_PortableTestApp_Test_DestructorsBase* self)
{
	f_PortableTestApp_Test_DestructorsBase_wasFinalized = 1;
}

t3_PortableTestApp_Test_DestructorsBase* m3_PortableTestApp_Test_DestructorsBase__ctor_0(t3_PortableTestApp_Test_DestructorsBase* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

char m3_PortableTestApp_Test_Destructors_RunTest_0()
{
	f_PortableTestApp_Test_Destructors_obj = 0;
	CS2X_GC_Collect();
	return f_PortableTestApp_Test_Destructors_wasFinalized && f_PortableTestApp_Test_DestructorsBase_wasFinalized;
}

void m3_PortableTestApp_Test_Destructors_Finalize_0(t3_PortableTestApp_Test_Destructors* self)
{
	f_PortableTestApp_Test_Destructors_wasFinalized = 1;
	/* protected return */
	m3_PortableTestApp_Test_DestructorsBase_Finalize_0(self);
	return;
	m3_PortableTestApp_Test_DestructorsBase_Finalize_0(self);
}

t3_PortableTestApp_Test_Destructors* m3_PortableTestApp_Test_Destructors__ctor_0(t3_PortableTestApp_Test_Destructors* self)
{
	m3_PortableTestApp_Test_DestructorsBase__ctor_0(self);
	return self;
}

void m3_PortableTestApp_Test_Destructors__cctor_0()
{
	f_PortableTestApp_Test_Destructors_obj = m3_PortableTestApp_Test_Destructors__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_Destructors), &rt3_PortableTestApp_Test_Destructors_OBJ, &m3_PortableTestApp_Test_Destructors_Finalize_0));
}

char m3_PortableTestApp_Test_Enums_RunTest_0()
{
	t4_PortableTestApp_Test_Enums_MyEnum l_e_0;
	l_e_0 = 7;
	return (int32_t)l_e_0 == 7 && sizeof(t4_PortableTestApp_Test_Enums_MyEnum) == sizeof(uint8_t);
}

char m3_PortableTestApp_Test_ExtensionMethods_RunTest_0()
{
	t4_PortableTestApp_Test_ExtensionMethods_MyClass* l_myClass_0;
	t4_PortableTestApp_Test_ExtensionMethods_MyStruct l_myStruct_1;
	l_myClass_0 = m4_PortableTestApp_Test_ExtensionMethods_MyClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t4_PortableTestApp_Test_ExtensionMethods_MyClass), &rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ, 0));
	l_myStruct_1 = m4_PortableTestApp_Test_ExtensionMethods_MyStruct__ctor_0();
	m3_PortableTestApp_Test_ExtensionMethods_FooClass_0(l_myClass_0);
	m3_PortableTestApp_Test_ExtensionMethods_FooStruct_0(l_myStruct_1);
	return l_myClass_0->f_i_1 == 123 && l_myStruct_1.f_i_2 == 0;
}

void m3_PortableTestApp_Test_ExtensionMethods_FooClass_0(t4_PortableTestApp_Test_ExtensionMethods_MyClass* p_self)
{
	p_self->f_i_1 = 123;
}

void m3_PortableTestApp_Test_ExtensionMethods_FooStruct_0(t4_PortableTestApp_Test_ExtensionMethods_MyStruct p_self)
{
	p_self.f_i_2 = 123;
}

t4_PortableTestApp_Test_ExtensionMethods_MyClass* m4_PortableTestApp_Test_ExtensionMethods_MyClass__ctor_0(t4_PortableTestApp_Test_ExtensionMethods_MyClass* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty_0()
{
	return 33;
}

int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty3_0()
{
	return f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty3;
}

void m3_PortableTestApp_Test_FieldsAndProperties_set_myStaticProperty3_0(int32_t p_value)
{
	f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty3 = p_value;
}

int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myProperty_0(t3_PortableTestApp_Test_FieldsAndProperties* self)
{
	return 33;
}

int32_t m3_PortableTestApp_Test_FieldsAndProperties_get_myProperty3_0(t3_PortableTestApp_Test_FieldsAndProperties* self)
{
	return self->f__myProperty3_1;
}

void m3_PortableTestApp_Test_FieldsAndProperties_set_myProperty3_0(t3_PortableTestApp_Test_FieldsAndProperties* self, int32_t p_value)
{
	self->f__myProperty3_1 = p_value;
}

char m3_PortableTestApp_Test_FieldsAndProperties_RunTest_0()
{
	t3_PortableTestApp_Test_FieldsAndProperties* l_obj_0;
	t4_PortableTestApp_Test_FieldsAndProperties_MyStruct IVALUE_t4_PortableTestApp_Test_FieldsAndProperties_MyStruct;
	l_obj_0 = m3_PortableTestApp_Test_FieldsAndProperties__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_FieldsAndProperties), &rt3_PortableTestApp_Test_FieldsAndProperties_OBJ, 0));
	f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty2_k__BackingField = 34;
	l_obj_0->f__myProperty2_k__BackingField_1 = 34;
	m3_PortableTestApp_Test_FieldsAndProperties_set_myStaticProperty3_0(5);
	m3_PortableTestApp_Test_FieldsAndProperties_set_myProperty3_0(l_obj_0, 5);
	if (m3_PortableTestApp_Test_FieldsAndProperties_Foo_0(m3_PortableTestApp_Test_FieldsAndProperties_Foo_0(l_obj_0))->f_myField_1 == 0)
	{
		return 0;
	}
	if (!m4_PortableTestApp_Test_FieldsAndProperties_MyStruct_Foo_0(CS2X_PValueToIValue_t4_PortableTestApp_Test_FieldsAndProperties_MyStruct(m3_PortableTestApp_Test_FieldsAndProperties_Foo2_0(l_obj_0), &IVALUE_t4_PortableTestApp_Test_FieldsAndProperties_MyStruct)))
	{
		return 0;
	}
	return m3_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty_0() == m3_PortableTestApp_Test_FieldsAndProperties_get_myProperty_0(l_obj_0) && f_PortableTestApp_Test_FieldsAndProperties_myStaticField == l_obj_0->f_myField_1 && f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty2_k__BackingField == l_obj_0->f__myProperty2_k__BackingField_1 && m3_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty3_0() == m3_PortableTestApp_Test_FieldsAndProperties_get_myProperty3_0(l_obj_0);
}

t3_PortableTestApp_Test_FieldsAndProperties* m3_PortableTestApp_Test_FieldsAndProperties_Foo_0(t3_PortableTestApp_Test_FieldsAndProperties* self)
{
	return self;
}

t4_PortableTestApp_Test_FieldsAndProperties_MyStruct m3_PortableTestApp_Test_FieldsAndProperties_Foo2_0(t3_PortableTestApp_Test_FieldsAndProperties* self)
{
	return m4_PortableTestApp_Test_FieldsAndProperties_MyStruct__ctor_0();
}

t3_PortableTestApp_Test_FieldsAndProperties* m3_PortableTestApp_Test_FieldsAndProperties__ctor_0(t3_PortableTestApp_Test_FieldsAndProperties* self)
{
	m2_System_Object__ctor_0(self);
	self->f_myField_1 = 44;
	return self;
}

void m3_PortableTestApp_Test_FieldsAndProperties__cctor_0()
{
	f_PortableTestApp_Test_FieldsAndProperties_myStaticField = 44;
}

char m3_PortableTestApp_Test_FlowControlAndEnumerators_RunTest_0()
{
	t4_System_Collections_Generic_List_System_Int32_GENERIC* l_valuesList_0;
	int32_t* l_valuesFromList_1;
	int32_t* l_values_2;
	int32_t* l_values2_3;
	int32_t l_value_i_4;
	int32_t l_value_5;
	int32_t l_value2_i_6;
	int32_t l_value2_7;
	int32_t l_value3_i_8;
	int32_t l_i_9;
	int32_t l_i2_10;
	int32_t l_l_11;
	t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* l_myEnumerable_12;
	t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC l_e_en_13;
	l_valuesList_0 = m4_t4_System_Collections_Generic_List_System_Int32_GENERIC__ctor_0(CS2X_AllocType(sizeof(t4_System_Collections_Generic_List_System_Int32_GENERIC), &rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ, 0));
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(l_valuesList_0, 1);
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(l_valuesList_0, 2);
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(l_valuesList_0, 3);
	l_valuesFromList_1 = m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ToArray_0(l_valuesList_0);
	l_values_2 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 3, &rt0_System_Int32___ARRAY_OBJ);
	((int32_t*)(((char*)l_values_2) + ArrayOffset))[0] = 1;
	((int32_t*)(((char*)l_values_2) + ArrayOffset))[1] = 2;
	((int32_t*)(((char*)l_values_2) + ArrayOffset))[2] = 3;
	l_values2_3 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 3, &rt0_System_Int32___ARRAY_OBJ);
	((int32_t*)(((char*)l_values2_3) + ArrayOffset))[0] = 3;
	((int32_t*)(((char*)l_values2_3) + ArrayOffset))[1] = 2;
	((int32_t*)(((char*)l_values2_3) + ArrayOffset))[2] = 1;
	for (l_value_i_4 = 0; l_value_i_4 != m2_System_Array_get_Length_0((t2_System_Array*)l_values_2); ++l_value_i_4)
	{
		l_value_5 = ((int32_t*)(((char*)l_values_2) + ArrayOffset))[l_value_i_4];
		for (l_value2_i_6 = 0; l_value2_i_6 != m2_System_Array_get_Length_0((t2_System_Array*)l_values2_3); ++l_value2_i_6)
		{
			l_value2_7 = ((int32_t*)(((char*)l_values2_3) + ArrayOffset))[l_value2_i_6];
			for (l_value3_i_8 = 0; l_value3_i_8 != m2_System_Array_get_Length_0((t2_System_Array*)l_valuesFromList_1); ++l_value3_i_8)
			{
				int32_t l_value3_9;
				l_value3_9 = ((int32_t*)(((char*)l_valuesFromList_1) + ArrayOffset))[l_value3_i_8];
				if (l_value_5 == 0 || l_value2_7 == 0 || l_value3_9 == 0)
				{
					return 0;
				}
			}
		}
	}
	for (l_i_9 = 0, l_i2_10 = 2; l_i_9 != m2_System_Array_get_Length_0(l_values_2); ++l_i_9, --l_i2_10)
	{
		if (((int32_t*)(((char*)l_values_2) + ArrayOffset))[l_i_9] != ((int32_t*)(((char*)l_values2_3) + ArrayOffset))[l_i2_10])
		{
			return 0;
		}
	}
	l_l_11 = 0;
	while (l_l_11 != 3)
	{
		l_l_11++;
	}
	do
	{
		l_l_11 -= 1;
	}
	while (l_l_11 != 0);
	if (l_l_11 == 0)
	{
		switch (l_l_11)
		{
			case 5:
				return 0;
			case 6:
				return 0;
			case 0:
				l_l_11 = 4;
				break;
			default:
			{
				return 0;
			}
		}
	}
	else
	{
		if (l_l_11 == -1)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	l_myEnumerable_12 = m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC), &rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ, 0));
	m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_Set_0(l_myEnumerable_12, 40, 0);
	m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_Set_0(l_myEnumerable_12, 41, 1);
	m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_Set_0(l_myEnumerable_12, 42, 2);
	for/*each*/ (l_e_en_13 = m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_GetEnumerator_0(l_myEnumerable_12); m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_MoveNext_0(&l_e_en_13);)
	{
		int32_t l_e_14;
		l_e_14 = m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_get_Current_0(&l_e_en_13);
		if (l_e_14 == 0)
		{
			return 0;
		}
	}
	return 1;
}

char m3_PortableTestApp_Test_Generics_RunTest_0()
{
	t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* l_callback_0;
	t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* l_obj_1;
	t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* l_obj2_2;
	t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* l_obj3_3;
	t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* l_obj4_4;
	t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* l_obj5_5;
	l_callback_0 = m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC), &rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ, 0), 0, &m3_PortableTestApp_Test_Generics_Poo_Boolean__0);
	l_callback_0 = m2_System_Delegate_Combine_0(l_callback_0, m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC), &rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ, 0), 0, &m3_PortableTestApp_Test_Generics_Poo_Boolean__0));
	l_obj_1 = m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC), &rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ, 0));
	l_obj2_2 = m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ, 0));
	l_obj3_3 = m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC), &rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ, 0));
	l_obj4_4 = (t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj3_3;
	l_obj5_5 = m4_t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC), &rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ, 0));
	{
		t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* DELEGATE_OBJ;
		DELEGATE_OBJ = l_obj_1;
		l_callback_0 = m2_System_Delegate_Combine_0(l_callback_0, m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC), &rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ, 0), DELEGATE_OBJ, ((rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC*)DELEGATE_OBJ->CS2X_RuntimeType)->vTable_TestVirt_Boolean__0));
	};
	l_obj_1->f_i_1 = 1;
	l_obj_1->f__p_k__BackingField_1 = 2;
	l_obj2_2->f_i_1 = l_obj_1;
	l_obj2_2->f__p_k__BackingField_1 = l_obj_1;
	l_obj5_5->f_i_1 = 77;
	l_obj5_5->f_i2_1 = 0;
	return !m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(l_callback_0, 1) && m3_PortableTestApp_Test_Generics_Poo_Int32__0(1) == 0 && m3_PortableTestApp_Test_Generics_Poo_Object__0(1) == 0 && m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(l_obj_1, 1) == 1 && m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(l_obj2_2, l_obj_1) == l_obj_1 && m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo2_Object__0(l_obj_1, l_obj_1, m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ, 0))) == 2 && m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo2_Object__0(l_obj2_2, l_obj2_2, m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ, 0))) == l_obj_1 && m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Boo_Object__0(l_obj_1, 5, l_obj2_2) == l_obj2_2 && ((rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj4_4->CS2X_RuntimeType)->vTable_MyVirt_Object__0(l_obj4_4, l_obj3_3) && ((rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj4_4->CS2X_RuntimeType)->vTable_MyVirt_String__0(l_obj4_4, f_System_String_Empty) && ((rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC*)l_obj3_3->CS2X_RuntimeType)->vTable_MyVirt2_Object__0(l_obj3_3, l_obj3_3) && m4_t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_Aaa_Object__0(l_obj5_5, 0);
}

char16_t m3_PortableTestApp_Test_Indexers_get_Item_0(t3_PortableTestApp_Test_Indexers* self, int32_t p_index)
{
	if (p_index == 1)
	{
		return self->f_charVal_1;
	}
	return 0x4200;
}

void m3_PortableTestApp_Test_Indexers_set_Item_0(t3_PortableTestApp_Test_Indexers* self, int32_t p_index, char16_t p_value)
{
	self->f_charVal_1 = p_value;
}

char m3_PortableTestApp_Test_Indexers_RunTest_0()
{
	t3_PortableTestApp_Test_Indexers* l_obj_0;
	l_obj_0 = m3_PortableTestApp_Test_Indexers__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_Indexers), &rt3_PortableTestApp_Test_Indexers_OBJ, 0));
	m3_PortableTestApp_Test_Indexers_set_Item_0(l_obj_0, 1, 0x4100);
	return m3_PortableTestApp_Test_Indexers_get_Item_0(l_obj_0, 1) == 0x4100;
}

t3_PortableTestApp_Test_Indexers* m3_PortableTestApp_Test_Indexers__ctor_0(t3_PortableTestApp_Test_Indexers* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

uint32_t m3_PortableTestApp_Test_Interop_GetLastError_0_DllNotFoundException()
{
	CS2X_ThreadExceptionObject = m2_System_DllNotFoundException__ctor_0(CS2X_AllocType(sizeof(t2_System_DllNotFoundException), &rt2_System_DllNotFoundException_OBJ, 0));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

intptr_t m3_PortableTestApp_Test_Interop_GetFuncPtr_0_DllNotFoundException()
{
	CS2X_ThreadExceptionObject = m2_System_DllNotFoundException__ctor_0(CS2X_AllocType(sizeof(t2_System_DllNotFoundException), &rt2_System_DllNotFoundException_OBJ, 0));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

void m3_PortableTestApp_Test_Interop_InvokeDelegateFuncPtr_0_DllNotFoundException(intptr_t p_delegateFuncPtr, intptr_t p_delegateThisPtr)
{
	CS2X_ThreadExceptionObject = m2_System_DllNotFoundException__ctor_0(CS2X_AllocType(sizeof(t2_System_DllNotFoundException), &rt2_System_DllNotFoundException_OBJ, 0));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

void m3_PortableTestApp_Test_Interop_FooStatic_0()
{
	f_PortableTestApp_Test_Interop_fooStaticCalled = 1;
}

void m3_PortableTestApp_Test_Interop_Foo_0(t3_PortableTestApp_Test_Interop* self)
{
	f_PortableTestApp_Test_Interop_fooCalled = 1;
}

char m3_PortableTestApp_Test_Interop_RunTest_0()
{
	intptr_t l_funcPtr_0;
	t4_PortableTestApp_Test_Interop_MyDelegate* l_myDelegate_1;
	t4_PortableTestApp_Test_Interop_FooDelegate* l_myFooDelegate_2;
	intptr_t l_dFuncPtr_3;
	intptr_t l_dThisPtr_4;
	l_funcPtr_0 = (*m3_PortableTestApp_Test_Interop_GetFuncPtr_0)();
	l_myDelegate_1 = m4_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer_MyDelegate__0(l_funcPtr_0);
	l_myFooDelegate_2 = m4_PortableTestApp_Test_Interop_FooDelegate__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Interop_FooDelegate), &rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ, 0), 0, &m3_PortableTestApp_Test_Interop_FooStatic_0);
	l_myFooDelegate_2 = m2_System_Delegate_Combine_0(l_myFooDelegate_2, m4_PortableTestApp_Test_Interop_FooDelegate__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Interop_FooDelegate), &rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ, 0), m3_PortableTestApp_Test_Interop__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_Interop), &rt3_PortableTestApp_Test_Interop_OBJ, 0)), &m3_PortableTestApp_Test_Interop_Foo_0));
	l_dFuncPtr_3 = m4_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_FooDelegate__0(l_myFooDelegate_2, &l_dThisPtr_4);
	(*m3_PortableTestApp_Test_Interop_InvokeDelegateFuncPtr_0)(l_dFuncPtr_3, l_dThisPtr_4);
	return (*m3_PortableTestApp_Test_Interop_GetLastError_0)() == 0 && m4_PortableTestApp_Test_Interop_MyDelegate_Invoke_0(l_myDelegate_1, 123) == 123 && f_PortableTestApp_Test_Interop_fooStaticCalled && f_PortableTestApp_Test_Interop_fooCalled;
}

t3_PortableTestApp_Test_Interop* m3_PortableTestApp_Test_Interop__ctor_0(t3_PortableTestApp_Test_Interop* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

int32_t m3_PortableTestApp_Test_NewOverrides_get_i2_0(t3_PortableTestApp_Test_NewOverrides* self)
{
	return 88;
}

char m3_PortableTestApp_Test_NewOverrides_RunTest_0()
{
	t3_PortableTestApp_Test_NewOverridesSuper* l_obj_0;
	l_obj_0 = m3_PortableTestApp_Test_NewOverridesSuper__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_NewOverridesSuper), &rt3_PortableTestApp_Test_NewOverridesSuper_OBJ, 0));
	return l_obj_0->f_i_2 == 44 && m3_PortableTestApp_Test_NewOverridesSuper_get_i2_0(l_obj_0) == 99 && m3_PortableTestApp_Test_NewOverridesSuper_Foo_0(l_obj_0) == 66 && m3_PortableTestApp_Test_NewOverridesSuper_Foo2_0(l_obj_0) == 2;
}

int32_t m3_PortableTestApp_Test_NewOverrides_Foo_0(t3_PortableTestApp_Test_NewOverrides* self)
{
	return 55;
}

int32_t m3_PortableTestApp_Test_NewOverrides_Foo2_0(t3_PortableTestApp_Test_NewOverrides* self)
{
	return 1;
}

t3_PortableTestApp_Test_NewOverrides* m3_PortableTestApp_Test_NewOverrides__ctor_0(t3_PortableTestApp_Test_NewOverrides* self)
{
	m2_System_Object__ctor_0(self);
	self->f_i_1 = 33;
	return self;
}

int32_t m3_PortableTestApp_Test_NewOverridesSuper_get_i2_0(t3_PortableTestApp_Test_NewOverridesSuper* self)
{
	return 99;
}

int32_t m3_PortableTestApp_Test_NewOverridesSuper_Foo_0(t3_PortableTestApp_Test_NewOverridesSuper* self)
{
	return 66;
}

int32_t m3_PortableTestApp_Test_NewOverridesSuper_Foo2_0(t3_PortableTestApp_Test_NewOverridesSuper* self)
{
	return 2;
}

t3_PortableTestApp_Test_NewOverridesSuper* m3_PortableTestApp_Test_NewOverridesSuper__ctor_0(t3_PortableTestApp_Test_NewOverridesSuper* self)
{
	m3_PortableTestApp_Test_NewOverrides__ctor_0(self);
	self->f_i_2 = 44;
	return self;
}

char m3_PortableTestApp_Test_NumbersToStrings_RunTest_0()
{
	t2_System_String* l_i8_Max_0;
	t2_System_String* l_i8_Min_1;
	t2_System_String* l_i16_Max_2;
	t2_System_String* l_i16_Min_3;
	t2_System_String* l_i32_Max_4;
	t2_System_String* l_i32_Min_5;
	t2_System_String* l_i64_Max_6;
	t2_System_String* l_i64_Min_7;
	t2_System_String* l_ui8_Max_8;
	t2_System_String* l_ui8_Min_9;
	t2_System_String* l_ui16_Max_10;
	t2_System_String* l_ui16_Min_11;
	t2_System_String* l_ui32_Max_12;
	t2_System_String* l_ui32_Min_13;
	t2_System_String* l_ui64_Max_14;
	t2_System_String* l_ui64_Min_15;
	t2_System_String* l_float32_Max_16;
	t2_System_String* l_float32_Min_17;
	t2_System_String* l_float32_18;
	t2_System_String* l_float64_Max_19;
	t2_System_String* l_float64_Min_20;
	t2_System_String* l_float64_21;
	t2_System_String* l_c_Max_22;
	t2_System_String* l_c_Min_23;
	int8_t IVALUE_int8_t;
	int16_t IVALUE_int16_t;
	int32_t IVALUE_int32_t;
	int64_t IVALUE_int64_t;
	uint8_t IVALUE_uint8_t;
	uint16_t IVALUE_uint16_t;
	uint32_t IVALUE_uint32_t;
	uint64_t IVALUE_uint64_t;
	float IVALUE_float;
	double IVALUE_double;
	char16_t IVALUE_char16_t;
	l_i8_Max_0 = m2_int8_t_ToString_0(CS2X_PValueToIValue_int8_t(127, &IVALUE_int8_t));
	l_i8_Min_1 = m2_int8_t_ToString_0(CS2X_PValueToIValue_int8_t(-128, &IVALUE_int8_t));
	l_i16_Max_2 = m2_int16_t_ToString_0(CS2X_PValueToIValue_int16_t(32767, &IVALUE_int16_t));
	l_i16_Min_3 = m2_int16_t_ToString_0(CS2X_PValueToIValue_int16_t(-32768, &IVALUE_int16_t));
	l_i32_Max_4 = m2_int32_t_ToString_0(CS2X_PValueToIValue_int32_t(2147483647, &IVALUE_int32_t));
	l_i32_Min_5 = m2_int32_t_ToString_0(CS2X_PValueToIValue_int32_t(-2147483648, &IVALUE_int32_t));
	l_i64_Max_6 = m2_int64_t_ToString_0(CS2X_PValueToIValue_int64_t(9223372036854775807, &IVALUE_int64_t));
	l_i64_Min_7 = m2_int64_t_ToString_0(CS2X_PValueToIValue_int64_t(-9223372036854775808, &IVALUE_int64_t));
	l_ui8_Max_8 = m2_uint8_t_ToString_0(CS2X_PValueToIValue_uint8_t(255, &IVALUE_uint8_t));
	l_ui8_Min_9 = m2_uint8_t_ToString_0(CS2X_PValueToIValue_uint8_t(0, &IVALUE_uint8_t));
	l_ui16_Max_10 = m2_uint16_t_ToString_0(CS2X_PValueToIValue_uint16_t(65535, &IVALUE_uint16_t));
	l_ui16_Min_11 = m2_uint16_t_ToString_0(CS2X_PValueToIValue_uint16_t(0, &IVALUE_uint16_t));
	l_ui32_Max_12 = m2_uint32_t_ToString_0(CS2X_PValueToIValue_uint32_t(4294967295, &IVALUE_uint32_t));
	l_ui32_Min_13 = m2_uint32_t_ToString_0(CS2X_PValueToIValue_uint32_t(0, &IVALUE_uint32_t));
	l_ui64_Max_14 = m2_uint64_t_ToString_0(CS2X_PValueToIValue_uint64_t(18446744073709551615, &IVALUE_uint64_t));
	l_ui64_Min_15 = m2_uint64_t_ToString_0(CS2X_PValueToIValue_uint64_t(0, &IVALUE_uint64_t));
	l_float32_Max_16 = m2_float_ToString_0(CS2X_PValueToIValue_float(FLT_MAX, &IVALUE_float));
	l_float32_Min_17 = m2_float_ToString_0(CS2X_PValueToIValue_float(FLT_MIN, &IVALUE_float));
	l_float32_18 = m2_float_ToString_0(CS2X_PValueToIValue_float(1234.4321f, &IVALUE_float));
	l_float64_Max_19 = m2_double_ToString_0(CS2X_PValueToIValue_double(DBL_MAX, &IVALUE_double));
	l_float64_Min_20 = m2_double_ToString_0(CS2X_PValueToIValue_double(DBL_MIN, &IVALUE_double));
	l_float64_21 = m2_double_ToString_0(CS2X_PValueToIValue_double(1234.4321, &IVALUE_double));
	l_c_Max_22 = m2_char16_t_ToString_0(CS2X_PValueToIValue_char16_t(0xFFFF, &IVALUE_char16_t));
	l_c_Min_23 = m2_char16_t_ToString_0(CS2X_PValueToIValue_char16_t(0x0000, &IVALUE_char16_t));
	return m2_System_String_Equals_0(l_i8_Max_0, StringLiteral_30) && m2_System_String_Equals_0(l_i8_Min_1, StringLiteral_31) && m2_System_String_Equals_0(l_ui8_Max_8, StringLiteral_32) && m2_System_String_Equals_0(l_ui8_Min_9, StringLiteral_33) && m2_System_String_Equals_0(l_i16_Max_2, StringLiteral_34) && m2_System_String_Equals_0(l_i16_Min_3, StringLiteral_35) && m2_System_String_Equals_0(l_ui16_Max_10, StringLiteral_36) && m2_System_String_Equals_0(l_ui16_Min_11, StringLiteral_33) && m2_System_String_Equals_0(l_i32_Max_4, StringLiteral_37) && m2_System_String_Equals_0(l_i32_Min_5, StringLiteral_38) && m2_System_String_Equals_0(l_ui32_Max_12, StringLiteral_39) && m2_System_String_Equals_0(l_ui32_Min_13, StringLiteral_33) && m2_System_String_Equals_0(l_i64_Max_6, StringLiteral_40) && m2_System_String_Equals_0(l_i64_Min_7, StringLiteral_41) && m2_System_String_Equals_0(l_ui64_Max_14, StringLiteral_42) && m2_System_String_Equals_0(l_ui64_Min_15, StringLiteral_33) && m2_System_String_Equals_0(l_float32_Max_16, StringLiteral_43) && m2_System_String_Equals_0(l_float32_Min_17, StringLiteral_44) && m2_System_String_Equals_0(l_float32_18, StringLiteral_45) && m2_System_String_Equals_0(l_float64_Max_19, StringLiteral_46) && m2_System_String_Equals_0(l_float64_Min_20, StringLiteral_47) && m2_System_String_Equals_0(l_float64_21, StringLiteral_45) && m2_System_String_Equals_0(l_c_Max_22, StringLiteral_48) && m2_System_String_Equals_0(l_c_Min_23, StringLiteral_49);
}

t3_PortableTestApp_Test_Operators* m3_PortableTestApp_Test_Operators_op_Explicit_0(int32_t p_value)
{
	return 0;
}

int32_t m3_PortableTestApp_Test_Operators_op_Implicit_0(t3_PortableTestApp_Test_Operators* p_value)
{
	return 123;
}

char m3_PortableTestApp_Test_Operators_RunTest_0()
{
	t4_PortableTestApp_Test_Operators_Vec2 l_vec1_0;
	t4_PortableTestApp_Test_Operators_Vec2 l_vec2_1;
	t4_PortableTestApp_Test_Operators_Vec2 l_vec3_2;
	t3_PortableTestApp_Test_Operators* l_obj_3;
	int32_t l_i_4;
	l_vec1_0 = m4_PortableTestApp_Test_Operators_Vec2__ctor_0(1, 1);
	l_vec2_1 = m4_PortableTestApp_Test_Operators_Vec2__ctor_0(2, 2);
	l_vec3_2 = m4_PortableTestApp_Test_Operators_Vec2_op_UnaryNegation_0((m4_PortableTestApp_Test_Operators_Vec2_op_Addition_0(l_vec1_0, l_vec2_1)));
	l_obj_3 = m3_PortableTestApp_Test_Operators__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_Operators), &rt3_PortableTestApp_Test_Operators_OBJ, 0));
	l_i_4 = m3_PortableTestApp_Test_Operators_op_Implicit_0(l_obj_3);
	l_obj_3 = m3_PortableTestApp_Test_Operators_op_Explicit_0(l_i_4);
	return l_vec3_2.f_x_2 == l_vec3_2.f_y_2 && l_i_4 == 123 && l_obj_3 == 0;
}

t3_PortableTestApp_Test_Operators* m3_PortableTestApp_Test_Operators__ctor_0(t3_PortableTestApp_Test_Operators* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

char m3_PortableTestApp_Test_RefOutParameters_RunTest_0()
{
	int32_t l_value_0;
	int32_t l_value2_1;
	t3_PortableTestApp_Test_RefOutParameters* l_obj_2;
	t3_PortableTestApp_Test_RefOutParameters* l_obj2_3;
	l_value_0 = 0;
	m3_PortableTestApp_Test_RefOutParameters_Foo_0(&l_value_0, &l_value2_1);
	l_obj_2 = 0;
	m3_PortableTestApp_Test_RefOutParameters_Foo2_0(&l_obj_2, &l_obj2_3);
	return l_value_0 == 1 && l_value2_1 == 2 && l_obj_2 != 0 && l_obj2_3 != 0;
}

void m3_PortableTestApp_Test_RefOutParameters_Foo_0(int32_t* p_value, int32_t* p_value2)
{
	(*p_value) = 1;
	(*p_value2) = 2;
}

void m3_PortableTestApp_Test_RefOutParameters_Foo2_0(t3_PortableTestApp_Test_RefOutParameters** p_obj, t3_PortableTestApp_Test_RefOutParameters** p_obj2)
{
	(*p_obj) = m3_PortableTestApp_Test_RefOutParameters__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_RefOutParameters), &rt3_PortableTestApp_Test_RefOutParameters_OBJ, 0));
	(*p_obj2) = m3_PortableTestApp_Test_RefOutParameters__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_RefOutParameters), &rt3_PortableTestApp_Test_RefOutParameters_OBJ, 0));
}

t3_PortableTestApp_Test_RefOutParameters* m3_PortableTestApp_Test_RefOutParameters__ctor_0(t3_PortableTestApp_Test_RefOutParameters* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

char m3_PortableTestApp_Test_StringEncoding_RunTest_0()
{
	uint8_t* l_data_0;
	t2_System_String* l_result_1;
	l_data_0 = m3_System_Text_Encoding_GetBytes_5(f_System_Text_Encoding__UTF8_k__BackingField, StringLiteral_50);
	l_result_1 = m3_System_Text_Encoding_GetString_0(f_System_Text_Encoding__UTF8_k__BackingField, l_data_0);
	return m2_System_String_Equals_0(l_result_1, StringLiteral_50);
}

char m3_PortableTestApp_Test_TryCatch_RunTest_0()
{
	jmp_buf CS2X_JMP_LAST_0;
	jmp_buf CS2X_JMP_0;
	int CS2X_IS_JMP_0;
	/* try */
	memcpy(CS2X_JMP_LAST_0, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));
	CS2X_IS_JMP_0 = setjmp(CS2X_JMP_0);
	if (CS2X_IS_JMP_0 == 0)
	{
		jmp_buf CS2X_JMP_LAST_1;
		jmp_buf CS2X_JMP_1;
		int CS2X_IS_JMP_1;
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_0, sizeof(jmp_buf));
		/* try */
		memcpy(CS2X_JMP_LAST_1, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));
		CS2X_IS_JMP_1 = setjmp(CS2X_JMP_1);
		if (CS2X_IS_JMP_1 == 0)
		{
			memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_1, sizeof(jmp_buf));
			CS2X_ThreadExceptionObject = m3_PortableTestApp_Test_MyException__ctor_0(CS2X_AllocType(sizeof(t3_PortableTestApp_Test_MyException), &rt3_PortableTestApp_Test_MyException_OBJ, 0), StringLiteral_51);
			longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
		}
		else /* end try */
		{
			memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_1, sizeof(jmp_buf));
			if (CS2X_IsType(((t2_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt2_System_Exception_OBJ)) /* catch */
			{
				t2_System_Exception* l_e_0;
				l_e_0 = CS2X_ThreadExceptionObject;
				CS2X_ThreadExceptionObject = 0;
				CS2X_ThreadExceptionObject = l_e_0;
				longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
			}
			if (CS2X_ThreadExceptionObject != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw unhandled exception */
		}
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_1, sizeof(jmp_buf));
		/* end catch */
	}
	else /* end try */
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
		if (CS2X_IsType(((t2_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt3_PortableTestApp_Test_MyException_OBJ)) /* catch */
		{
			t3_PortableTestApp_Test_MyException* l_e_0;
			l_e_0 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			/* protected return */
			{
				char CS2X_RETURN_1;
				CS2X_RETURN_1 = m2_System_String_Equals_0(l_e_0->f__Message_k__BackingField_1, StringLiteral_51);
				memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
				return CS2X_RETURN_1;
			}
		}
		else if (CS2X_IsType(((t2_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt2_System_Exception_OBJ)) /* catch */
		{
			t2_System_Exception* l_e_0;
			l_e_0 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			/* protected return */
			{
				char CS2X_RETURN_1;
				CS2X_RETURN_1 = 0;
				memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
				return CS2X_RETURN_1;
			}
		}
		if (CS2X_ThreadExceptionObject != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw unhandled exception */
	}
	memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
	/* end catch */
	return 0;
}

t3_PortableTestApp_Test_MyException* m3_PortableTestApp_Test_MyException__ctor_0(t3_PortableTestApp_Test_MyException* self, t2_System_String* p_message)
{
	m2_System_Exception__ctor_1(self, p_message);
	return self;
}

char m3_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0(t3_PortableTestApp_Test_VirtualMethods_Base* self, char p_value)
{
	return 0;
}

t3_PortableTestApp_Test_VirtualMethods_Base* m3_PortableTestApp_Test_VirtualMethods_Base__ctor_0(t3_PortableTestApp_Test_VirtualMethods_Base* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

char m3_PortableTestApp_Test_VirtualMethods_VirtualFoo_0(t3_PortableTestApp_Test_VirtualMethods* self, char p_value)
{
	return p_value;
}

char m3_PortableTestApp_Test_VirtualMethods_AbstractFoo_0(t3_PortableTestApp_Test_VirtualMethods* self, char p_value)
{
	return p_value;
}

char m3_PortableTestApp_Test_VirtualMethods_RunTest_0()
{
	t3_PortableTestApp_Test_VirtualMethods* l_obj_0;
	t3_PortableTestApp_Test_VirtualMethods_Base* l_objBase_1;
	l_obj_0 = m3_PortableTestApp_Test_VirtualMethods__ctor_0(CS2X_AllocTypeAtomic(sizeof(t3_PortableTestApp_Test_VirtualMethods), &rt3_PortableTestApp_Test_VirtualMethods_OBJ, 0));
	l_objBase_1 = (t3_PortableTestApp_Test_VirtualMethods_Base*)l_obj_0;
	return m3_PortableTestApp_Test_VirtualMethods_VirtualFoo_0(l_obj_0, 1) && m3_PortableTestApp_Test_VirtualMethods_AbstractFoo_0(l_obj_0, 1) && ((rt3_PortableTestApp_Test_VirtualMethods_Base*)l_objBase_1->CS2X_RuntimeType)->vTable_VirtualFoo_0(l_objBase_1, 1) && ((rt3_PortableTestApp_Test_VirtualMethods_Base*)l_objBase_1->CS2X_RuntimeType)->vTable_AbstractFoo_0(l_objBase_1, 1);
}

t3_PortableTestApp_Test_VirtualMethods* m3_PortableTestApp_Test_VirtualMethods__ctor_0(t3_PortableTestApp_Test_VirtualMethods* self)
{
	m3_PortableTestApp_Test_VirtualMethods_Base__ctor_0(self);
	return self;
}

t4_PortableTestApp_Test_ExtensionMethods_MyStruct m4_PortableTestApp_Test_ExtensionMethods_MyStruct__ctor_0()
{
	t4_PortableTestApp_Test_ExtensionMethods_MyStruct selfObj = {0};
	return selfObj;
}

char m4_PortableTestApp_Test_FieldsAndProperties_MyStruct_Foo_0(t4_PortableTestApp_Test_FieldsAndProperties_MyStruct* self)
{
	return (*self).f_i_2 == 0;
}

t4_PortableTestApp_Test_FieldsAndProperties_MyStruct m4_PortableTestApp_Test_FieldsAndProperties_MyStruct__ctor_0()
{
	t4_PortableTestApp_Test_FieldsAndProperties_MyStruct selfObj = {0};
	return selfObj;
}

t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2__ctor_0(float p_x, float p_y)
{
	t4_PortableTestApp_Test_Operators_Vec2 selfObj;
	t4_PortableTestApp_Test_Operators_Vec2* self = &selfObj;
	(*self).f_x_2 = p_x;
	(*self).f_y_2 = p_y;
	return selfObj;
}

t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2_op_Addition_0(t4_PortableTestApp_Test_Operators_Vec2 p_value1, t4_PortableTestApp_Test_Operators_Vec2 p_value2)
{
	return m4_PortableTestApp_Test_Operators_Vec2__ctor_0(p_value1.f_x_2 + p_value2.f_x_2, p_value1.f_y_2 + p_value2.f_y_2);
}

t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2_op_UnaryNegation_0(t4_PortableTestApp_Test_Operators_Vec2 p_value1)
{
	return m4_PortableTestApp_Test_Operators_Vec2__ctor_0(-p_value1.f_x_2, -p_value1.f_y_2);
}

t4_PortableTestApp_Test_Operators_Vec2 m4_PortableTestApp_Test_Operators_Vec2__ctor_1()
{
	t4_PortableTestApp_Test_Operators_Vec2 selfObj = {0};
	return selfObj;
}

t4_PortableTestApp_Test_Enums_MyEnum m4_PortableTestApp_Test_Enums_MyEnum__ctor_0()
{
	t4_PortableTestApp_Test_Enums_MyEnum selfObj = {0};
	return selfObj;
}

t4_PortableTestApp_Test_Delegates_FooCallback* m4_PortableTestApp_Test_Delegates_FooCallback__ctor_0(t4_PortableTestApp_Test_Delegates_FooCallback* self, t2_System_Object* p_object, intptr_t p_method)
{
	m2_System_MulticastDelegate__ctor_0(self);
	self->f__target_1 = p_object;
	self->f__methodPtr_1 = p_method;
	return self;
}

char m4_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(t4_PortableTestApp_Test_Delegates_FooCallback* self, char p_value)
{
	char result;
	if (self->f__target_1 != 0) result = ((char (*)(t2_System_Object*, char))self->f__methodPtr_1)(self->f__target_1, p_value);
	else result = ((char (*)(char))self->f__methodPtr_1)(p_value);
	if (self->f__next_2 != 0) result = m4_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(self->f__next_2, p_value);
	return result;
}

t4_PortableTestApp_Test_Interop_MyDelegate* m4_PortableTestApp_Test_Interop_MyDelegate__ctor_0(t4_PortableTestApp_Test_Interop_MyDelegate* self, t2_System_Object* p_object, intptr_t p_method)
{
	m2_System_MulticastDelegate__ctor_0(self);
	self->f__target_1 = p_object;
	self->f__methodPtr_1 = p_method;
	return self;
}

int32_t m4_PortableTestApp_Test_Interop_MyDelegate_Invoke_0(t4_PortableTestApp_Test_Interop_MyDelegate* self, int32_t p_value)
{
	int32_t result;
	if (self->f__target_1 != 0) result = ((int32_t (__cdecl *)(t2_System_Object*, int32_t))self->f__methodPtr_1)(self->f__target_1, p_value);
	else result = ((int32_t (__cdecl *)(int32_t))self->f__methodPtr_1)(p_value);
	if (self->f__next_2 != 0) result = m4_PortableTestApp_Test_Interop_MyDelegate_Invoke_0(self->f__next_2, p_value);
	return result;
}

t4_PortableTestApp_Test_Interop_FooDelegate* m4_PortableTestApp_Test_Interop_FooDelegate__ctor_0(t4_PortableTestApp_Test_Interop_FooDelegate* self, t2_System_Object* p_object, intptr_t p_method)
{
	m2_System_MulticastDelegate__ctor_0(self);
	self->f__target_1 = p_object;
	self->f__methodPtr_1 = p_method;
	return self;
}

void m4_PortableTestApp_Test_Interop_FooDelegate_Invoke_0(t4_PortableTestApp_Test_Interop_FooDelegate* self)
{
	if (self->f__target_1 != 0) ((void (*)(t2_System_Object*))self->f__methodPtr_1)(self->f__target_1);
	else ((void (*)())self->f__methodPtr_1)();
	if (self->f__next_2 != 0) m4_PortableTestApp_Test_Interop_FooDelegate_Invoke_0(self->f__next_2);
}


/* =============================== */
/* Generic Type Method definitions */
/* =============================== */
t4_System_Collections_Generic_List_System_Int32_GENERIC* m4_t4_System_Collections_Generic_List_System_Int32_GENERIC__ctor_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self)
{
	char l_wasEnabled_0;
	m2_System_Object__ctor_0(self);
	l_wasEnabled_0 = CS2X_GC_DisableAutoCollections();
	self->f__items_1 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 0, &rt0_System_Int32___ARRAY_OBJ);
	if (l_wasEnabled_0)
	{
		CS2X_GC_EnableAutoCollections();
	}
	return self;
}

int32_t m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Count_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self)
{
	return m2_System_Array_get_Length_0(self->f__items_1);
}

t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_GetEnumerator_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self)
{
	return m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC__ctor_0(self->f__items_1);
}

int32_t m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_get_Item_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index)
{
	return ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[p_index];
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_set_Item_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index, int32_t p_value)
{
	((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[p_index] = p_value;
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ShiftItemsDown_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index)
{
	int32_t l_i_0;
	for (l_i_0 = p_index; l_i_0 < (m2_System_Array_get_Length_0(self->f__items_1) - 1); ++l_i_0)
	{
		int32_t l_i2_1;
		l_i2_1 = l_i_0 + 1;
		((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i_0] = ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i2_1];
	}
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ShiftItemsUp_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index)
{
	int32_t l_i_0;
	for (l_i_0 = m2_System_Array_get_Length_0(self->f__items_1); l_i_0 > p_index; --l_i_0)
	{
		int32_t l_i2_1;
		l_i2_1 = l_i_0 - 1;
		((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i_0] = ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i2_1];
	}
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Add_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item)
{
	int32_t l_index_0;
	l_index_0 = m2_System_Array_get_Length_0(self->f__items_1);
	m2_System_Array_Resize_Int32__0(&self->f__items_1, m2_System_Array_get_Length_0(self->f__items_1) + 1);
	((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_index_0] = p_item;
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Remove_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item)
{
	int32_t l_i_0;
	for (l_i_0 = m2_System_Array_get_Length_0(self->f__items_1) - 1; l_i_0 != -1; --l_i_0)
	{
		if (m2_System_EqualityComparer_GenericCompare_Int32__0(p_item, ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i_0]))
		{
			m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ShiftItemsDown_0(self, l_i_0);
			m2_System_Array_Resize_Int32__0(&self->f__items_1, m2_System_Array_get_Length_0(self->f__items_1) - 1);
		}
	}
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Clear_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self)
{
	m2_System_Array_Resize_Int32__0(&self->f__items_1, 0);
}

char m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Contains_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item)
{
	int32_t l_i_i_0;
	for (l_i_i_0 = 0; l_i_i_0 != m2_System_Array_get_Length_0((t2_System_Array*)self->f__items_1); ++l_i_i_0)
	{
		int32_t l_i_1;
		l_i_1 = ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i_i_0];
		if (m2_System_EqualityComparer_GenericCompare_Int32__0(p_item, l_i_1))
		{
			return 1;
		}
	}
	return 0;
}

int32_t m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_IndexOf_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_item)
{
	int32_t l_i_0;
	for (l_i_0 = 0; l_i_0 != m2_System_Array_get_Length_0(self->f__items_1); ++l_i_0)
	{
		if (m2_System_EqualityComparer_GenericCompare_Int32__0(p_item, ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i_0]))
		{
			return l_i_0;
		}
	}
	return -1;
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Insert_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index, int32_t p_item)
{
	if (p_index < 0 || p_index > m2_System_Array_get_Length_0(self->f__items_1))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	m2_System_Array_Resize_Int32__0(&self->f__items_1, m2_System_Array_get_Length_0(self->f__items_1) + 1);
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ShiftItemsUp_0(self, p_index);
	((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[p_index] = p_item;
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_RemoveAt_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self, int32_t p_index)
{
	if (p_index < 0 || p_index > m2_System_Array_get_Length_0(self->f__items_1))
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_0(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0));
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ShiftItemsDown_0(self, p_index);
	m2_System_Array_Resize_Int32__0(&self->f__items_1, m2_System_Array_get_Length_0(self->f__items_1) - 1);
}

void m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_Reverse_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self)
{
	int32_t l_i_0;
	int32_t l_i2_1;
	if (m2_System_Array_get_Length_0(self->f__items_1) == 0)
	{
		return;
	}
	for (l_i_0 = 0, l_i2_1 = (m2_System_Array_get_Length_0(self->f__items_1) - 1); l_i_0 != l_i2_1; ++l_i_0, --l_i2_1)
	{
		int32_t l_prev_2;
		l_prev_2 = ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i_0];
		((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i_0] = ((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i2_1];
		((int32_t*)(((char*)self->f__items_1) + ArrayOffset))[l_i2_1] = l_prev_2;
	}
}

int32_t* m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_ToArray_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self)
{
	int32_t* l_itemsCopy_0;
	l_itemsCopy_0 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), m2_System_Array_get_Length_0(self->f__items_1), &rt0_System_Int32___ARRAY_OBJ);
	m2_System_Array_Copy_2(self->f__items_1, l_itemsCopy_0, m2_System_Array_get_Length_0(self->f__items_1));
	return l_itemsCopy_0;
}

int32_t* m4_t4_System_Collections_Generic_List_System_Int32_GENERIC_GetArray_0(t4_System_Collections_Generic_List_System_Int32_GENERIC* self)
{
	return self->f__items_1;
}

t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC__ctor_0(int32_t* p__items)
{
	t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC selfObj;
	t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC* self = &selfObj;
	(*self).f_i_2 = -1;
	(*self).f__items_2 = p__items;
	return selfObj;
}

int32_t m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_get_Current_0(t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC* self)
{
	return ((int32_t*)(((char*)(*self).f__items_2) + ArrayOffset))[(*self).f_i_2];
}

char m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_MoveNext_0(t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC* self)
{
	++(*self).f_i_2;
	return (*self).f_i_2 < m2_System_Array_get_Length_0((*self).f__items_2);
}

void m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_Reset_0(t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC* self)
{
	(*self).f_i_2 = -1;
}

t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC m5_t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC__ctor_1()
{
	t5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC selfObj = {0};
	return selfObj;
}

t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC__ctor_0(int32_t* p_collection)
{
	t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC selfObj;
	t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self = &selfObj;
	(*self).f_i_2 = -1;
	(*self).f_collection_2 = p_collection;
	return selfObj;
}

int32_t m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_get_Current_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self)
{
	return ((int32_t*)(((char*)(*self).f_collection_2) + ArrayOffset))[(*self).f_i_2];
}

char m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_MoveNext_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self)
{
	++(*self).f_i_2;
	return (*self).f_i_2 < m2_System_Array_get_Length_0((*self).f_collection_2);
}

void m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_Reset_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self)
{
	(*self).f_i_2 = -1;
}

void m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_Set_0(t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC* self, int32_t p_value, int32_t p_index)
{
	((int32_t*)(((char*)(*self).f_collection_2) + ArrayOffset))[p_index] = p_value;
}

t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC__ctor_1()
{
	t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC selfObj = {0};
	return selfObj;
}

void m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_Set_0(t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* self, int32_t p_value, int32_t p_index)
{
	m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_Set_0(&self->f_e_1, p_value, p_index);
}

t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_GetEnumerator_0(t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* self)
{
	return self->f_e_1;
}

t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* m3_t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC__ctor_0(t3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC* self)
{
	m2_System_Object__ctor_0(self);
	self->f_e_1 = m3_t3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC__ctor_0(CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 3, &rt0_System_Int32___ARRAY_OBJ));
	return self;
}

t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, t2_System_Object* p_object, intptr_t p_method)
{
	m2_System_MulticastDelegate__ctor_0(self);
	self->f__target_1 = p_object;
	self->f__methodPtr_1 = p_method;
	return self;
}

char m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, char p_value)
{
	char result;
	if (self->f__target_1 != 0) result = ((char (*)(t2_System_Object*, char))self->f__methodPtr_1)(self->f__target_1, p_value);
	else result = ((char (*)(char))self->f__methodPtr_1)(p_value);
	if (self->f__next_2 != 0) result = m4_t4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(self->f__next_2, p_value);
	return result;
}

int32_t m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value)
{
	return p_value;
}

t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t2_System_Object* m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t2_System_Object* p_value)
{
	return p_value;
}

t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self)
{
	m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC__ctor_0(self);
	return self;
}

double m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_Foo_0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, double p_value)
{
	return p_value;
}

t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC__ctor_0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* m4_t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self)
{
	m2_System_Object__ctor_0(self);
	return self;
}

char m3_PortableTestApp_Test_Generics_Poo_Boolean__0(char p_value)
{
	if (p_value)
	{
		return 0;
	}
	else
	{
		return 0;
	}
}

char m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_TestVirt_Boolean__0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, char p_value)
{
	return 0;
}

char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_TestVirt_Boolean__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, char p_value)
{
	return 1;
}

int32_t m3_PortableTestApp_Test_Generics_Poo_Int32__0(char p_value)
{
	if (p_value)
	{
		return 0;
	}
	else
	{
		return 0;
	}
}

t2_System_Object* m3_PortableTestApp_Test_Generics_Poo_Object__0(char p_value)
{
	if (p_value)
	{
		return 0;
	}
	else
	{
		return 0;
	}
}

int32_t m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo2_Object__0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* p_value1, t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2)
{
	if (p_value1 == 0)
	{
		return self->f_i_1;
	}
	if (p_value2 == 0)
	{
		return p_value1->f_i_1;
	}
	return p_value1->f__p_k__BackingField_1;
}

t2_System_Object* m3_t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo2_Object__0(t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value1, t3_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2)
{
	if (p_value1 == 0)
	{
		return self->f_i_1;
	}
	if (p_value2 == 0)
	{
		return p_value1->f_i_1;
	}
	return p_value1->f__p_k__BackingField_1;
}

t2_System_Object* m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Boo_Object__0(t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value1, t2_System_Object* p_value2)
{
	if (p_value2 == 0)
	{
		return 0;
	}
	return p_value2;
}

char m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_Object__0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_Object* p_value)
{
	return 0;
}

char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_Object__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_Object* p_value)
{
	return p_value != 0;
}

char m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_String__0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_String* p_value)
{
	return 0;
}

char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_String__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_String* p_value)
{
	return p_value != 0;
}

char m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt2_Object__0(t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t2_System_Object* p_value)
{
	if (m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__0(self, p_value))
	{
		return 0;
	}
	return p_value != 0;
}

char m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__0(t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t2_System_Object* p_value)
{
	return 0;
}

char m4_t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_Aaa_Object__0(t4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self, t2_System_Object* p_t)
{
	return p_t == 0;
}

t4_PortableTestApp_Test_Interop_MyDelegate* m4_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer_MyDelegate__0(intptr_t p_ptr)
{
	return m4_PortableTestApp_Test_Interop_MyDelegate__ctor_0(CS2X_AllocType(sizeof(t4_PortableTestApp_Test_Interop_MyDelegate), &rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ, 0), 0, p_ptr);
}

intptr_t m4_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_FooDelegate__0(t4_PortableTestApp_Test_Interop_FooDelegate* p_d, intptr_t* p_dThisPtr)
{
	intptr_t result;
	result = &m4_PortableTestApp_Test_Interop_FooDelegate_Invoke_0;
	*p_dThisPtr = (intptr_t)p_d;
	return result;
}

void m2_System_Array_Resize_Int32__0(int32_t** p_array, int32_t p_newSize)
{
	if (p_newSize < 0)
	{
		CS2X_ThreadExceptionObject = m2_System_ArgumentOutOfRangeException__ctor_1(CS2X_AllocType(sizeof(t2_System_ArgumentOutOfRangeException), &rt2_System_ArgumentOutOfRangeException_OBJ, 0), StringLiteral_52);
		longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
	}
	if ((*p_array) == 0)
	{
		(*p_array) = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), p_newSize, &rt0_System_Int32___ARRAY_OBJ);
		return;
	}
	if (m2_System_Array_get_Length_0((*p_array)) != p_newSize)
	{
		t2_System_Array* l_arrayRef_0;
		l_arrayRef_0 = (*p_array);
		m2_System_Array_FastResize_0(&l_arrayRef_0, p_newSize, m4_System_Runtime_InteropServices_Marshal_SizeOf_Int32__0());
		(*p_array) = (int32_t*)CS2X_TestUpCast(l_arrayRef_0, &rt0_System_Int32___ARRAY_OBJ);
	}
}

char m2_System_EqualityComparer_GenericCompare_Int32__0(int32_t p_value1, int32_t p_value2)
{
	return p_value1 == p_value2;
}

int32_t m4_System_Runtime_InteropServices_Marshal_SizeOf_Int32__0()
{
	return sizeof(int32_t);
}

/* =============================== */
/* Init Library */
/* =============================== */
void CS2X_InitLib_PortableTestApp()
{
	/* Init references */
	CS2X_InitLib_CS2X_CoreLib();

	/* Init runtime type objects */
	memset(&rt2_PortableTestApp_Program_OBJ, 0, sizeof(rt2_PortableTestApp_Program));
	rt2_PortableTestApp_Program_OBJ.runtimeType.CS2X_RuntimeType = &rt2_PortableTestApp_Program_OBJ;
	rt2_PortableTestApp_Program_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt2_PortableTestApp_Program_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt2_PortableTestApp_Program_METADATA_Name;
	rt2_PortableTestApp_Program_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt2_PortableTestApp_Program_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_ClassNesting_OBJ, 0, sizeof(rt3_PortableTestApp_Test_ClassNesting));
	rt3_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_ClassNesting_OBJ;
	rt3_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ClassNesting_METADATA_Name;
	rt3_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ClassNesting_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ, 0, sizeof(rt4_PortableTestApp_Test_ClassNesting_SubClass));
	rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ;
	rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_ClassNesting_SubClass_METADATA_Name;
	rt4_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_ClassNesting_SubClass_METADATA_FullName;
	memset(&rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ, 0, sizeof(rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass));
	rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.CS2X_RuntimeType = &rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ;
	rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_Name;
	rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_ClassVsStruct_Struct_OBJ, 0, sizeof(rt3_PortableTestApp_Test_ClassVsStruct_Struct));
	rt3_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_ClassVsStruct_Struct_OBJ;
	rt3_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt3_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_Name;
	rt3_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_ClassVsStruct_OBJ, 0, sizeof(rt3_PortableTestApp_Test_ClassVsStruct));
	rt3_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_ClassVsStruct_OBJ;
	rt3_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_METADATA_Name;
	rt3_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_CoreGenericCollections_OBJ, 0, sizeof(rt3_PortableTestApp_Test_CoreGenericCollections));
	rt3_PortableTestApp_Test_CoreGenericCollections_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_CoreGenericCollections_OBJ;
	rt3_PortableTestApp_Test_CoreGenericCollections_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_CoreGenericCollections_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_CoreGenericCollections_METADATA_Name;
	rt3_PortableTestApp_Test_CoreGenericCollections_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_CoreGenericCollections_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_Delegates_OBJ, 0, sizeof(rt3_PortableTestApp_Test_Delegates));
	rt3_PortableTestApp_Test_Delegates_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_Delegates_OBJ;
	rt3_PortableTestApp_Test_Delegates_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_Delegates_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Delegates_METADATA_Name;
	rt3_PortableTestApp_Test_Delegates_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Delegates_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_SuperDelegates_OBJ, 0, sizeof(rt3_PortableTestApp_Test_SuperDelegates));
	rt3_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_SuperDelegates_OBJ;
	rt3_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt3_PortableTestApp_Test_Delegates_OBJ;
	rt3_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_SuperDelegates_METADATA_Name;
	rt3_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_SuperDelegates_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_DestructorsBase_OBJ, 0, sizeof(rt3_PortableTestApp_Test_DestructorsBase));
	rt3_PortableTestApp_Test_DestructorsBase_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_DestructorsBase_OBJ;
	rt3_PortableTestApp_Test_DestructorsBase_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_DestructorsBase_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_DestructorsBase_METADATA_Name;
	rt3_PortableTestApp_Test_DestructorsBase_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_DestructorsBase_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_Destructors_OBJ, 0, sizeof(rt3_PortableTestApp_Test_Destructors));
	rt3_PortableTestApp_Test_Destructors_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_Destructors_OBJ;
	rt3_PortableTestApp_Test_Destructors_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt3_PortableTestApp_Test_DestructorsBase_OBJ;
	rt3_PortableTestApp_Test_Destructors_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Destructors_METADATA_Name;
	rt3_PortableTestApp_Test_Destructors_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Destructors_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_Enums_OBJ, 0, sizeof(rt3_PortableTestApp_Test_Enums));
	rt3_PortableTestApp_Test_Enums_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_Enums_OBJ;
	rt3_PortableTestApp_Test_Enums_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_Enums_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Enums_METADATA_Name;
	rt3_PortableTestApp_Test_Enums_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Enums_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_ExtensionMethods_OBJ, 0, sizeof(rt3_PortableTestApp_Test_ExtensionMethods));
	rt3_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_ExtensionMethods_OBJ;
	rt3_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ExtensionMethods_METADATA_Name;
	rt3_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_ExtensionMethods_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ, 0, sizeof(rt4_PortableTestApp_Test_ExtensionMethods_MyClass));
	rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ;
	rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_Name;
	rt4_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_FieldsAndProperties_OBJ, 0, sizeof(rt3_PortableTestApp_Test_FieldsAndProperties));
	rt3_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_FieldsAndProperties_OBJ;
	rt3_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_FieldsAndProperties_METADATA_Name;
	rt3_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_FieldsAndProperties_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_FlowControlAndEnumerators_OBJ, 0, sizeof(rt3_PortableTestApp_Test_FlowControlAndEnumerators));
	rt3_PortableTestApp_Test_FlowControlAndEnumerators_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_FlowControlAndEnumerators_OBJ;
	rt3_PortableTestApp_Test_FlowControlAndEnumerators_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_FlowControlAndEnumerators_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_FlowControlAndEnumerators_METADATA_Name;
	rt3_PortableTestApp_Test_FlowControlAndEnumerators_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_FlowControlAndEnumerators_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_Generics_OBJ, 0, sizeof(rt3_PortableTestApp_Test_Generics));
	rt3_PortableTestApp_Test_Generics_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_Generics_OBJ;
	rt3_PortableTestApp_Test_Generics_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_Generics_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Generics_METADATA_Name;
	rt3_PortableTestApp_Test_Generics_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Generics_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_Indexers_OBJ, 0, sizeof(rt3_PortableTestApp_Test_Indexers));
	rt3_PortableTestApp_Test_Indexers_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_Indexers_OBJ;
	rt3_PortableTestApp_Test_Indexers_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_Indexers_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Indexers_METADATA_Name;
	rt3_PortableTestApp_Test_Indexers_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Indexers_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_Interop_OBJ, 0, sizeof(rt3_PortableTestApp_Test_Interop));
	rt3_PortableTestApp_Test_Interop_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_Interop_OBJ;
	rt3_PortableTestApp_Test_Interop_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_Interop_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Interop_METADATA_Name;
	rt3_PortableTestApp_Test_Interop_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Interop_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_NewOverrides_OBJ, 0, sizeof(rt3_PortableTestApp_Test_NewOverrides));
	rt3_PortableTestApp_Test_NewOverrides_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_NewOverrides_OBJ;
	rt3_PortableTestApp_Test_NewOverrides_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_NewOverrides_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_NewOverrides_METADATA_Name;
	rt3_PortableTestApp_Test_NewOverrides_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_NewOverrides_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_NewOverridesSuper_OBJ, 0, sizeof(rt3_PortableTestApp_Test_NewOverridesSuper));
	rt3_PortableTestApp_Test_NewOverridesSuper_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_NewOverridesSuper_OBJ;
	rt3_PortableTestApp_Test_NewOverridesSuper_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt3_PortableTestApp_Test_NewOverrides_OBJ;
	rt3_PortableTestApp_Test_NewOverridesSuper_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_NewOverridesSuper_METADATA_Name;
	rt3_PortableTestApp_Test_NewOverridesSuper_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_NewOverridesSuper_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_NumbersToStrings_OBJ, 0, sizeof(rt3_PortableTestApp_Test_NumbersToStrings));
	rt3_PortableTestApp_Test_NumbersToStrings_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_NumbersToStrings_OBJ;
	rt3_PortableTestApp_Test_NumbersToStrings_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_NumbersToStrings_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_NumbersToStrings_METADATA_Name;
	rt3_PortableTestApp_Test_NumbersToStrings_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_NumbersToStrings_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_Operators_OBJ, 0, sizeof(rt3_PortableTestApp_Test_Operators));
	rt3_PortableTestApp_Test_Operators_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_Operators_OBJ;
	rt3_PortableTestApp_Test_Operators_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_Operators_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Operators_METADATA_Name;
	rt3_PortableTestApp_Test_Operators_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_Operators_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_RefOutParameters_OBJ, 0, sizeof(rt3_PortableTestApp_Test_RefOutParameters));
	rt3_PortableTestApp_Test_RefOutParameters_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_RefOutParameters_OBJ;
	rt3_PortableTestApp_Test_RefOutParameters_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_RefOutParameters_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_RefOutParameters_METADATA_Name;
	rt3_PortableTestApp_Test_RefOutParameters_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_RefOutParameters_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_StringEncoding_OBJ, 0, sizeof(rt3_PortableTestApp_Test_StringEncoding));
	rt3_PortableTestApp_Test_StringEncoding_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_StringEncoding_OBJ;
	rt3_PortableTestApp_Test_StringEncoding_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_StringEncoding_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_StringEncoding_METADATA_Name;
	rt3_PortableTestApp_Test_StringEncoding_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_StringEncoding_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_TryCatch_OBJ, 0, sizeof(rt3_PortableTestApp_Test_TryCatch));
	rt3_PortableTestApp_Test_TryCatch_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_TryCatch_OBJ;
	rt3_PortableTestApp_Test_TryCatch_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_TryCatch_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_TryCatch_METADATA_Name;
	rt3_PortableTestApp_Test_TryCatch_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_TryCatch_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_MyException_OBJ, 0, sizeof(rt3_PortableTestApp_Test_MyException));
	rt3_PortableTestApp_Test_MyException_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_MyException_OBJ;
	rt3_PortableTestApp_Test_MyException_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Exception_OBJ;
	rt3_PortableTestApp_Test_MyException_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_MyException_METADATA_Name;
	rt3_PortableTestApp_Test_MyException_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_MyException_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ, 0, sizeof(rt3_PortableTestApp_Test_VirtualMethods_Base));
	rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ;
	rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_Base_METADATA_Name;
	rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_Base_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_VirtualMethods_OBJ, 0, sizeof(rt3_PortableTestApp_Test_VirtualMethods));
	rt3_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_VirtualMethods_OBJ;
	rt3_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ;
	rt3_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_METADATA_Name;
	rt3_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ, 0, sizeof(rt4_PortableTestApp_Test_ExtensionMethods_MyStruct));
	rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ;
	rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_Name;
	rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ, 0, sizeof(rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct));
	rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ;
	rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_Name;
	rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_Operators_Vec2_OBJ, 0, sizeof(rt4_PortableTestApp_Test_Operators_Vec2));
	rt4_PortableTestApp_Test_Operators_Vec2_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_Operators_Vec2_OBJ;
	rt4_PortableTestApp_Test_Operators_Vec2_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt4_PortableTestApp_Test_Operators_Vec2_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Operators_Vec2_METADATA_Name;
	rt4_PortableTestApp_Test_Operators_Vec2_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Operators_Vec2_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_Enums_MyEnum_OBJ, 0, sizeof(rt4_PortableTestApp_Test_Enums_MyEnum));
	rt4_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_Enums_MyEnum_OBJ;
	rt4_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Enum_OBJ;
	rt4_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Enums_MyEnum_METADATA_Name;
	rt4_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Enums_MyEnum_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0, sizeof(rt4_PortableTestApp_Test_Delegates_FooCallback));
	rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ;
	rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_MulticastDelegate_OBJ;
	rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Delegates_FooCallback_METADATA_Name;
	rt4_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Delegates_FooCallback_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ, 0, sizeof(rt4_PortableTestApp_Test_Interop_MyDelegate));
	rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ;
	rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_MulticastDelegate_OBJ;
	rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Interop_MyDelegate_METADATA_Name;
	rt4_PortableTestApp_Test_Interop_MyDelegate_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Interop_MyDelegate_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ, 0, sizeof(rt4_PortableTestApp_Test_Interop_FooDelegate));
	rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ;
	rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_MulticastDelegate_OBJ;
	rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Interop_FooDelegate_METADATA_Name;
	rt4_PortableTestApp_Test_Interop_FooDelegate_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Interop_FooDelegate_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt2_PortableTestApp_Program_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt2_PortableTestApp_Program_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ClassNesting_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ClassNesting_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_ClassNesting_SubClass_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_ClassNesting_SubClass_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ClassVsStruct_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_CoreGenericCollections_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_CoreGenericCollections_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Delegates_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Delegates_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_SuperDelegates_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_SuperDelegates_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_DestructorsBase_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_DestructorsBase_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Destructors_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Destructors_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Enums_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Enums_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ExtensionMethods_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_ExtensionMethods_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_FieldsAndProperties_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_FieldsAndProperties_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_FlowControlAndEnumerators_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_FlowControlAndEnumerators_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Generics_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Generics_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Indexers_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Indexers_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Interop_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Interop_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_NewOverrides_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_NewOverrides_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_NewOverridesSuper_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_NewOverridesSuper_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_NumbersToStrings_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_NumbersToStrings_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Operators_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_Operators_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_RefOutParameters_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_RefOutParameters_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_StringEncoding_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_StringEncoding_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_TryCatch_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_TryCatch_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_MyException_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_MyException_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_Base_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_Base_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_VirtualMethods_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Operators_Vec2_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Operators_Vec2_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Enums_MyEnum_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Enums_MyEnum_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Delegates_FooCallback_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Delegates_FooCallback_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Interop_MyDelegate_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Interop_MyDelegate_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Interop_FooDelegate_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Interop_FooDelegate_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;

	/* Init runtime type vtabel */
	rt3_PortableTestApp_Test_Delegates_OBJ.vTable_FooVirtual_0 = &m3_PortableTestApp_Test_Delegates_FooVirtual_0;
	rt3_PortableTestApp_Test_SuperDelegates_OBJ.vTable_FooVirtual_0 = &m3_PortableTestApp_Test_SuperDelegates_FooVirtual_0;
	rt3_PortableTestApp_Test_NewOverrides_OBJ.vTable_Foo2_0 = &m3_PortableTestApp_Test_NewOverrides_Foo2_0;
	rt3_PortableTestApp_Test_NewOverridesSuper_OBJ.vTable_Foo2_0 = &m3_PortableTestApp_Test_NewOverrides_Foo2_0;
	rt3_PortableTestApp_Test_MyException_OBJ.vTable_get_Message_0 = &m2_System_Exception_get_Message_0;
	rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ.vTable_VirtualFoo_0 = &m3_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0;
	rt3_PortableTestApp_Test_VirtualMethods_Base_OBJ.vTable_AbstractFoo_0 = 0;
	rt3_PortableTestApp_Test_VirtualMethods_OBJ.vTable_VirtualFoo_0 = &m3_PortableTestApp_Test_VirtualMethods_VirtualFoo_0;
	rt3_PortableTestApp_Test_VirtualMethods_OBJ.vTable_AbstractFoo_0 = &m3_PortableTestApp_Test_VirtualMethods_AbstractFoo_0;

	/* <<< === Generic Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ, 0, sizeof(rt4_System_Collections_Generic_List_System_Int32_GENERIC));
	rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ;
	rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_System_Collections_Generic_List_System_Int32_GENERIC_METADATA_Name;
	rt4_System_Collections_Generic_List_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_System_Collections_Generic_List_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_OBJ, 0, sizeof(rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC));
	rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_OBJ;
	rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_METADATA_Name;
	rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_OBJ, 0, sizeof(rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC));
	rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_OBJ;
	rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_ValueType_OBJ;
	rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_METADATA_Name;
	rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ, 0, sizeof(rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC));
	rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ;
	rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_METADATA_Name;
	rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ, 0, sizeof(rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC));
	rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ;
	rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_MulticastDelegate_OBJ;
	rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_Name;
	rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ, 0, sizeof(rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC));
	rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ;
	rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_Name;
	rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ, 0, sizeof(rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC));
	rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ;
	rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_Name;
	rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ, 0, sizeof(rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC));
	rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ;
	rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ;
	rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_Name;
	rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_FullName;
	memset(&rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ, 0, sizeof(rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC));
	rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ;
	rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_Name;
	rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_FullName;
	memset(&rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ, 0, sizeof(rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC));
	rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ;
	rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt2_System_Object_OBJ;
	rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_Name;
	rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t2_System_String*)rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t2_System_String*)rt4_System_Collections_Generic_List_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_System_Collections_Generic_List_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt5_System_Collections_Generic_List_System_Int32__EnumeratorGENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_MyEnumerator_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_MyEnumerable_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt4_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;

	/* Init runtime type vtabel */
	rt3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.vTable_TestVirt_Boolean__0 = &m3_t3_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_TestVirt_Boolean__0;
	rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.vTable_MyVirt_Object__0 = &m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_Object__0;
	rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.vTable_MyVirt_String__0 = &m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_String__0;
	rt3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.vTable_MyVirt2_Object__0 = &m3_t3_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt2_Object__0;
	rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.vTable_MyVirt_Object__0 = &m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_Object__0;
	rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.vTable_MyVirt_String__0 = &m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_String__0;
	rt3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.vTable_MyVirt2_Object__0 = &m3_t3_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__0;

	/* <<< === Array Runtime Types === >>> */
	/* Init runtime type objects */
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
	((t2_System_String*)rt0_System_Int32___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_Int32___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_String___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)rt0_System_String___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt2_System_String_OBJ;

	/* Init array runtime type element size */
	rt0_System_Int32___ARRAY_OBJ.elementSize = sizeof(int32_t);
	rt0_System_String___ARRAY_OBJ.elementSize = sizeof(t2_System_String*);
}

void CS2X_InitDllImport_PortableTestApp()
{
	/* Init references */
	CS2X_InitDllImport_CS2X_CoreLib();

	/* Init this project */
	m3_PortableTestApp_Test_Interop_GetLastError_0 = GetProcAddress(LoadLibraryW(L"Kernel32.dll"), "GetLastError");
	if (m3_PortableTestApp_Test_Interop_GetLastError_0 == 0) m3_PortableTestApp_Test_Interop_GetLastError_0 = &m3_PortableTestApp_Test_Interop_GetLastError_0_DllNotFoundException;
	m3_PortableTestApp_Test_Interop_GetFuncPtr_0 = GetProcAddress(GetModuleHandleW(NULL), "GetFuncPtr");
	if (m3_PortableTestApp_Test_Interop_GetFuncPtr_0 == 0) m3_PortableTestApp_Test_Interop_GetFuncPtr_0 = &m3_PortableTestApp_Test_Interop_GetFuncPtr_0_DllNotFoundException;
	m3_PortableTestApp_Test_Interop_InvokeDelegateFuncPtr_0 = GetProcAddress(GetModuleHandleW(NULL), "InvokeDelegateFuncPtr");
	if (m3_PortableTestApp_Test_Interop_InvokeDelegateFuncPtr_0 == 0) m3_PortableTestApp_Test_Interop_InvokeDelegateFuncPtr_0 = &m3_PortableTestApp_Test_Interop_InvokeDelegateFuncPtr_0_DllNotFoundException;
}

void CS2X_InvokeStaticConstructors_PortableTestApp()
{
	/* Init references */
	CS2X_InvokeStaticConstructors_CS2X_CoreLib();

	/* Init this project */
	m4_PortableTestApp_Test_ClassNesting_SubClass__cctor_0();
	m5_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__cctor_0();
	m3_PortableTestApp_Test_Destructors__cctor_0();
	m3_PortableTestApp_Test_FieldsAndProperties__cctor_0();
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
	((t2_System_String*)StringLiteral_11)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_12)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_13)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_14)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_15)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_16)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_17)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_18)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_19)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_20)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_21)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_22)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_23)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_24)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_25)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_26)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_27)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_28)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_29)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_30)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_31)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_32)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_33)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_34)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_35)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_36)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_37)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_38)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_39)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_40)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_41)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_42)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_43)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_44)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_45)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_46)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_47)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_48)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_49)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_50)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_51)->CS2X_RuntimeType = &rt2_System_String_OBJ;
	((t2_System_String*)StringLiteral_52)->CS2X_RuntimeType = &rt2_System_String_OBJ;
}

/* =============================== */
/* Entry Point */
/* =============================== */
int main(int argc, char** argv)
{
	int returnCode;
	int i;

	/* Init main thread unahandled exeption jump */
	jmp_buf CS2X_UnhandledThreadExceptionBuff;
	int result = setjmp(CS2X_UnhandledThreadExceptionBuff);
	if (result != 0)
	{
		CS2X_DisplayErrorMessage("Unhandled Exception");
		exit(-2);
	}
	else
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_UnhandledThreadExceptionBuff, sizeof(jmp_buf));
	}

	/* Init main thread unahandled exeption jump */
	CS2X_GC_Init();
	CS2X_InitLib_PortableTestApp();
	CS2X_InitStringLiterals();
	CS2X_InitDllImport_PortableTestApp();
	CS2X_InvokeStaticConstructors_PortableTestApp();
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
	returnCode = m2_PortableTestApp_Program_Main_0(managedArgs);
	return returnCode;
}
