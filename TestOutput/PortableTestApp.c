/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#include "CS2X.CoreLib.h"

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t_PortableTestApp_Program t_PortableTestApp_Program;
typedef struct t_PortableTestApp_Test_ClassNesting t_PortableTestApp_Test_ClassNesting;
typedef struct t_PortableTestApp_Test_ClassNesting_SubClass t_PortableTestApp_Test_ClassNesting_SubClass;
typedef struct t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass;
typedef struct t_PortableTestApp_Test_ClassVsStruct_Struct t_PortableTestApp_Test_ClassVsStruct_Struct;
typedef struct t_PortableTestApp_Test_ClassVsStruct t_PortableTestApp_Test_ClassVsStruct;
typedef struct t_PortableTestApp_Test_Delegates t_PortableTestApp_Test_Delegates;
typedef struct t_PortableTestApp_Test_SuperDelegates t_PortableTestApp_Test_SuperDelegates;
typedef struct t_PortableTestApp_Test_Enums t_PortableTestApp_Test_Enums;
typedef struct t_PortableTestApp_Test_ExtensionMethods t_PortableTestApp_Test_ExtensionMethods;
typedef struct t_PortableTestApp_Test_ExtensionMethods_MyClass t_PortableTestApp_Test_ExtensionMethods_MyClass;
typedef struct t_PortableTestApp_Test_FieldsAndProperties t_PortableTestApp_Test_FieldsAndProperties;
typedef struct t_PortableTestApp_Test_Generics t_PortableTestApp_Test_Generics;
typedef struct t_PortableTestApp_Test_VirtualMethods_Base t_PortableTestApp_Test_VirtualMethods_Base;
typedef struct t_PortableTestApp_Test_VirtualMethods t_PortableTestApp_Test_VirtualMethods;
typedef struct t_PortableTestApp_Test_ExtensionMethods_MyStruct t_PortableTestApp_Test_ExtensionMethods_MyStruct;
typedef struct t_PortableTestApp_Test_FieldsAndProperties_MyStruct t_PortableTestApp_Test_FieldsAndProperties_MyStruct;
typedef uint8_t t_PortableTestApp_Test_Enums_MyEnum;
typedef struct t_PortableTestApp_Test_Delegates_FooCallback t_PortableTestApp_Test_Delegates_FooCallback;

/* =============================== */
/* Forward declare Generic Types */
/* =============================== */
typedef struct t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC;
typedef struct t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC;
typedef struct t_PortableTestApp_Test_GenericClass_System_Object_GENERIC t_PortableTestApp_Test_GenericClass_System_Object_GENERIC;
typedef struct t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC;
typedef struct t_PortableTestApp_Test_GenericClass_System_Double_GENERIC t_PortableTestApp_Test_GenericClass_System_Double_GENERIC;
typedef struct t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC;

/* =============================== */
/* Type definitions */
/* =============================== */
struct t_PortableTestApp_Program
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_Test_ClassNesting
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_Test_ClassNesting_SubClass
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
};
int32_t f_PortableTestApp_Test_ClassNesting_SubClass_i2;

struct t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
};
int32_t f_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_i2;

struct t_PortableTestApp_Test_ClassVsStruct_Struct
{
	t_PortableTestApp_Test_ClassVsStruct* f_myClass_2;
};

struct t_PortableTestApp_Test_ClassVsStruct
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_PortableTestApp_Test_ClassVsStruct_Struct f_myStruct_1;
};

struct t_PortableTestApp_Test_Delegates
{
	t_System_RuntimeType* CS2X_RuntimeType;
	char f_someField_1;
	t_PortableTestApp_Test_Delegates* f_self_1;
};

struct t_PortableTestApp_Test_SuperDelegates
{
	t_System_RuntimeType* CS2X_RuntimeType;
	char f_someField_1;
	t_PortableTestApp_Test_Delegates* f_self_1;
};

struct t_PortableTestApp_Test_Enums
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_Test_ExtensionMethods
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_Test_ExtensionMethods_MyClass
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
};

struct t_PortableTestApp_Test_FieldsAndProperties
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f__myProperty2_k__BackingField_1;
	int32_t f_myField_1;
};
int32_t f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty2_k__BackingField;
int32_t f_PortableTestApp_Test_FieldsAndProperties_myStaticField;

struct t_PortableTestApp_Test_Generics
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_Test_VirtualMethods_Base
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_Test_VirtualMethods
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_Test_ExtensionMethods_MyStruct
{
	int32_t f_i_2;
};

struct t_PortableTestApp_Test_FieldsAndProperties_MyStruct
{
	int32_t f_i_2;
};

#define f_PortableTestApp_Test_Enums_MyEnum_A 6
#define f_PortableTestApp_Test_Enums_MyEnum_B 7
#define f_PortableTestApp_Test_Enums_MyEnum_C 1

struct t_PortableTestApp_Test_Delegates_FooCallback
{
	t_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t_System_Object* f__target_1;
	t_System_MulticastDelegate* f__next_2;
};


/* =============================== */
/* Generic Type definitions */
/* =============================== */
struct t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t_System_Object* f__target_1;
	t_System_MulticastDelegate* f__next_2;
};

struct t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_i_1;
	int32_t f__p_k__BackingField_1;
};

struct t_PortableTestApp_Test_GenericClass_System_Object_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_System_Object* f_i_1;
	t_System_Object* f__p_k__BackingField_1;
};

struct t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	double f_i_1;
	double f__p_k__BackingField_1;
};

struct t_PortableTestApp_Test_GenericClass_System_Double_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	double f_i_1;
	double f__p_k__BackingField_1;
};

struct t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int64_t f_i_1;
	t_System_Object* f_i2_1;
};

/* =============================== */
/* Runtime Types */
/* =============================== */
typedef struct rt_PortableTestApp_Program
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Program;
rt_PortableTestApp_Program rt_PortableTestApp_Program_OBJ;
int8_t rt_PortableTestApp_Program_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0}; /* Program */
int8_t rt_PortableTestApp_Program_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0}; /* PortableTestApp.Program */

typedef struct rt_PortableTestApp_Test_ClassNesting
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ClassNesting;
rt_PortableTestApp_Test_ClassNesting rt_PortableTestApp_Test_ClassNesting_OBJ;
int8_t rt_PortableTestApp_Test_ClassNesting_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,0,0}; /* ClassNesting */
int8_t rt_PortableTestApp_Test_ClassNesting_METADATA_FullName[80] = {0,0,0,0,0,0,0,0,33,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,0,0}; /* PortableTestApp.Test.ClassNesting */

typedef struct rt_PortableTestApp_Test_ClassNesting_SubClass
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ClassNesting_SubClass;
rt_PortableTestApp_Test_ClassNesting_SubClass rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ;
int8_t rt_PortableTestApp_Test_ClassNesting_SubClass_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* SubClass */
int8_t rt_PortableTestApp_Test_ClassNesting_SubClass_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,46,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.Test.ClassNesting.SubClass */

typedef struct rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass;
rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ;
int8_t rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,83,0,117,0,98,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* SubSubClass */
int8_t rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_FullName[122] = {0,0,0,0,0,0,0,0,54,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,78,0,101,0,115,0,116,0,105,0,110,0,103,0,46,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,46,0,83,0,117,0,98,0,83,0,117,0,98,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.Test.ClassNesting.SubClass.SubSubClass */

typedef struct rt_PortableTestApp_Test_ClassVsStruct_Struct
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ClassVsStruct_Struct;
rt_PortableTestApp_Test_ClassVsStruct_Struct rt_PortableTestApp_Test_ClassVsStruct_Struct_OBJ;
int8_t rt_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,95,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* ClassVsStruct_Struct */
int8_t rt_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_FullName[96] = {0,0,0,0,0,0,0,0,41,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,95,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.ClassVsStruct_Struct */

typedef struct rt_PortableTestApp_Test_ClassVsStruct
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ClassVsStruct;
rt_PortableTestApp_Test_ClassVsStruct rt_PortableTestApp_Test_ClassVsStruct_OBJ;
int8_t rt_PortableTestApp_Test_ClassVsStruct_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* ClassVsStruct */
int8_t rt_PortableTestApp_Test_ClassVsStruct_METADATA_FullName[82] = {0,0,0,0,0,0,0,0,34,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,67,0,108,0,97,0,115,0,115,0,86,0,115,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.ClassVsStruct */

typedef struct rt_PortableTestApp_Test_Delegates
{
	t_System_RuntimeType runtimeType;
	char (*vTable_FooVirtual_0)(t_PortableTestApp_Test_Delegates* self, char p_value);
} rt_PortableTestApp_Test_Delegates;
rt_PortableTestApp_Test_Delegates rt_PortableTestApp_Test_Delegates_OBJ;
int8_t rt_PortableTestApp_Test_Delegates_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* Delegates */
int8_t rt_PortableTestApp_Test_Delegates_METADATA_FullName[74] = {0,0,0,0,0,0,0,0,30,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* PortableTestApp.Test.Delegates */

typedef struct rt_PortableTestApp_Test_SuperDelegates
{
	t_System_RuntimeType runtimeType;
	char (*vTable_FooVirtual_0)(t_PortableTestApp_Test_SuperDelegates* self, char p_value);
} rt_PortableTestApp_Test_SuperDelegates;
rt_PortableTestApp_Test_SuperDelegates rt_PortableTestApp_Test_SuperDelegates_OBJ;
int8_t rt_PortableTestApp_Test_SuperDelegates_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,117,0,112,0,101,0,114,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* SuperDelegates */
int8_t rt_PortableTestApp_Test_SuperDelegates_METADATA_FullName[84] = {0,0,0,0,0,0,0,0,35,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,83,0,117,0,112,0,101,0,114,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,0,0}; /* PortableTestApp.Test.SuperDelegates */

typedef struct rt_PortableTestApp_Test_Enums
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_Enums;
rt_PortableTestApp_Test_Enums rt_PortableTestApp_Test_Enums_OBJ;
int8_t rt_PortableTestApp_Test_Enums_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,69,0,110,0,117,0,109,0,115,0,0,0}; /* Enums */
int8_t rt_PortableTestApp_Test_Enums_METADATA_FullName[66] = {0,0,0,0,0,0,0,0,26,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,110,0,117,0,109,0,115,0,0,0}; /* PortableTestApp.Test.Enums */

typedef struct rt_PortableTestApp_Test_ExtensionMethods
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ExtensionMethods;
rt_PortableTestApp_Test_ExtensionMethods rt_PortableTestApp_Test_ExtensionMethods_OBJ;
int8_t rt_PortableTestApp_Test_ExtensionMethods_METADATA_Name[46] = {0,0,0,0,0,0,0,0,16,0,0,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* ExtensionMethods */
int8_t rt_PortableTestApp_Test_ExtensionMethods_METADATA_FullName[88] = {0,0,0,0,0,0,0,0,37,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* PortableTestApp.Test.ExtensionMethods */

typedef struct rt_PortableTestApp_Test_ExtensionMethods_MyClass
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ExtensionMethods_MyClass;
rt_PortableTestApp_Test_ExtensionMethods_MyClass rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ;
int8_t rt_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,77,0,121,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* MyClass */
int8_t rt_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_FullName[104] = {0,0,0,0,0,0,0,0,45,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,46,0,77,0,121,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.Test.ExtensionMethods.MyClass */

typedef struct rt_PortableTestApp_Test_FieldsAndProperties
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_FieldsAndProperties;
rt_PortableTestApp_Test_FieldsAndProperties rt_PortableTestApp_Test_FieldsAndProperties_OBJ;
int8_t rt_PortableTestApp_Test_FieldsAndProperties_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,70,0,105,0,101,0,108,0,100,0,115,0,65,0,110,0,100,0,80,0,114,0,111,0,112,0,101,0,114,0,116,0,105,0,101,0,115,0,0,0}; /* FieldsAndProperties */
int8_t rt_PortableTestApp_Test_FieldsAndProperties_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,70,0,105,0,101,0,108,0,100,0,115,0,65,0,110,0,100,0,80,0,114,0,111,0,112,0,101,0,114,0,116,0,105,0,101,0,115,0,0,0}; /* PortableTestApp.Test.FieldsAndProperties */

typedef struct rt_PortableTestApp_Test_Generics
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_Generics;
rt_PortableTestApp_Test_Generics rt_PortableTestApp_Test_Generics_OBJ;
int8_t rt_PortableTestApp_Test_Generics_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,115,0,0,0}; /* Generics */
int8_t rt_PortableTestApp_Test_Generics_METADATA_FullName[72] = {0,0,0,0,0,0,0,0,29,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,115,0,0,0}; /* PortableTestApp.Test.Generics */

typedef struct rt_PortableTestApp_Test_VirtualMethods_Base
{
	t_System_RuntimeType runtimeType;
	char (*vTable_VirtualFoo_0)(t_PortableTestApp_Test_VirtualMethods_Base* self, char p_value);
	char (*vTable_AbstractFoo_0)(t_PortableTestApp_Test_VirtualMethods_Base* self, char p_value);
} rt_PortableTestApp_Test_VirtualMethods_Base;
rt_PortableTestApp_Test_VirtualMethods_Base rt_PortableTestApp_Test_VirtualMethods_Base_OBJ;
int8_t rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,95,0,66,0,97,0,115,0,101,0,0,0}; /* VirtualMethods_Base */
int8_t rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_FullName[94] = {0,0,0,0,0,0,0,0,40,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,95,0,66,0,97,0,115,0,101,0,0,0}; /* PortableTestApp.Test.VirtualMethods_Base */

typedef struct rt_PortableTestApp_Test_VirtualMethods
{
	t_System_RuntimeType runtimeType;
	char (*vTable_VirtualFoo_0)(t_PortableTestApp_Test_VirtualMethods* self, char p_value);
	char (*vTable_AbstractFoo_0)(t_PortableTestApp_Test_VirtualMethods* self, char p_value);
} rt_PortableTestApp_Test_VirtualMethods;
rt_PortableTestApp_Test_VirtualMethods rt_PortableTestApp_Test_VirtualMethods_OBJ;
int8_t rt_PortableTestApp_Test_VirtualMethods_METADATA_Name[42] = {0,0,0,0,0,0,0,0,14,0,0,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* VirtualMethods */
int8_t rt_PortableTestApp_Test_VirtualMethods_METADATA_FullName[84] = {0,0,0,0,0,0,0,0,35,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,86,0,105,0,114,0,116,0,117,0,97,0,108,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,0,0}; /* PortableTestApp.Test.VirtualMethods */

typedef struct rt_PortableTestApp_Test_ExtensionMethods_MyStruct
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_ExtensionMethods_MyStruct;
rt_PortableTestApp_Test_ExtensionMethods_MyStruct rt_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ;
int8_t rt_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* MyStruct */
int8_t rt_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_FullName[106] = {0,0,0,0,0,0,0,0,46,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,77,0,101,0,116,0,104,0,111,0,100,0,115,0,46,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.ExtensionMethods.MyStruct */

typedef struct rt_PortableTestApp_Test_FieldsAndProperties_MyStruct
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_FieldsAndProperties_MyStruct;
rt_PortableTestApp_Test_FieldsAndProperties_MyStruct rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ;
int8_t rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* MyStruct */
int8_t rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,70,0,105,0,101,0,108,0,100,0,115,0,65,0,110,0,100,0,80,0,114,0,111,0,112,0,101,0,114,0,116,0,105,0,101,0,115,0,46,0,77,0,121,0,83,0,116,0,114,0,117,0,99,0,116,0,0,0}; /* PortableTestApp.Test.FieldsAndProperties.MyStruct */

typedef struct rt_PortableTestApp_Test_Enums_MyEnum
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_Enums_MyEnum;
rt_PortableTestApp_Test_Enums_MyEnum rt_PortableTestApp_Test_Enums_MyEnum_OBJ;
int8_t rt_PortableTestApp_Test_Enums_MyEnum_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* MyEnum */
int8_t rt_PortableTestApp_Test_Enums_MyEnum_METADATA_FullName[80] = {0,0,0,0,0,0,0,0,33,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,69,0,110,0,117,0,109,0,115,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* PortableTestApp.Test.Enums.MyEnum */

typedef struct rt_PortableTestApp_Test_Delegates_FooCallback
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_Delegates_FooCallback;
rt_PortableTestApp_Test_Delegates_FooCallback rt_PortableTestApp_Test_Delegates_FooCallback_OBJ;
int8_t rt_PortableTestApp_Test_Delegates_FooCallback_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,0,0}; /* FooCallback */
int8_t rt_PortableTestApp_Test_Delegates_FooCallback_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,115,0,46,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,0,0}; /* PortableTestApp.Test.Delegates.FooCallback */

/* =============================== */
/* Generic Runtime Types */
/* =============================== */
typedef struct rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC;
rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ;
int8_t rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_Name[68] = {0,0,0,0,0,0,0,0,27,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,60,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,62,0,0,0}; /* GenericFooCallback<Boolean> */
int8_t rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_FullName[142] = {0,0,0,0,0,0,0,0,64,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,115,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,70,0,111,0,111,0,67,0,97,0,108,0,108,0,98,0,97,0,99,0,107,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,111,0,111,0,108,0,101,0,97,0,110,0,62,0,0,0}; /* PortableTestApp.Test.Generics.GenericFooCallback<System.Boolean> */

typedef struct rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC
{
	t_System_RuntimeType runtimeType;
	char (*vTable_TestVirt_Boolean__0)(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, char p_value);
} rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC;
rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ;
int8_t rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* GenericClass<Int32> */
int8_t rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_FullName[108] = {0,0,0,0,0,0,0,0,47,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Int32> */

typedef struct rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC;
rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ;
int8_t rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* GenericClass<Object> */
int8_t rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Object> */

typedef struct rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC
{
	t_System_RuntimeType runtimeType;
	char (*vTable_MyVirt_Object__0)(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_Object* p_value);
	char (*vTable_MyVirt_String__0)(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_String* p_value);
	char (*vTable_MyVirt2_Object__0)(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_Object* p_value);
} rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC;
rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ;
int8_t rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_Name[56] = {0,0,0,0,0,0,0,0,21,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,50,0,60,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* GenericClass2<Double> */
int8_t rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_FullName[112] = {0,0,0,0,0,0,0,0,49,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,50,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass2<System.Double> */

typedef struct rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC
{
	t_System_RuntimeType runtimeType;
	char (*vTable_MyVirt_Object__0)(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_Object* p_value);
	char (*vTable_MyVirt_String__0)(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_String* p_value);
	char (*vTable_MyVirt2_Object__0)(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_Object* p_value);
} rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC;
rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ;
int8_t rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_Name[54] = {0,0,0,0,0,0,0,0,20,0,0,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* GenericClass<Double> */
int8_t rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_FullName[110] = {0,0,0,0,0,0,0,0,48,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Double> */

typedef struct rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC;
rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ;
int8_t rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,66,0,60,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* B<Object> */
int8_t rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_FullName[142] = {0,0,0,0,0,0,0,0,64,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,84,0,101,0,115,0,116,0,46,0,71,0,101,0,110,0,101,0,114,0,105,0,99,0,67,0,108,0,97,0,115,0,115,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,54,0,52,0,62,0,46,0,66,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,79,0,98,0,106,0,101,0,99,0,116,0,62,0,0,0}; /* PortableTestApp.Test.GenericClass<System.Int64>.B<System.Object> */

/* =============================== */
/* ARRAY Runtime Types */
/* =============================== */
typedef struct rt_System_String___ARRAY
{
	t_System_RuntimeType runtimeType;
} rt_System_String___ARRAY;
rt_System_String___ARRAY rt_System_String___ARRAY_OBJ;
int8_t rt_System_String___ARRAY_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,83,0,116,0,114,0,105,0,110,0,103,0,91,0,93,0,0,0}; /* String[] */
int8_t rt_System_String___ARRAY_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,116,0,114,0,105,0,110,0,103,0,91,0,93,0,0,0}; /* System.String[] */

/* =============================== */
/* PValue to IValue inline helpers */
/* =============================== */
t_PortableTestApp_Test_FieldsAndProperties_MyStruct* CS2X_PValueToIValue_t_PortableTestApp_Test_FieldsAndProperties_MyStruct(t_PortableTestApp_Test_FieldsAndProperties_MyStruct pvalue, t_PortableTestApp_Test_FieldsAndProperties_MyStruct* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
int32_t m_PortableTestApp_Program_Main_0(t_System_String** p_args);
void m_PortableTestApp_Program_Log_0(char p_success, t_System_String* p_message);
char m_PortableTestApp_Test_ClassNesting_RunTest_0();
t_PortableTestApp_Test_ClassNesting_SubClass* m_PortableTestApp_Test_ClassNesting_SubClass__ctor_0(t_PortableTestApp_Test_ClassNesting_SubClass* self);
void m_PortableTestApp_Test_ClassNesting_SubClass__cctor_0();
char m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_Foo_0(t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self);
char m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_StaticFoo_0();
t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__ctor_0(t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self);
void m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__cctor_0();
t_PortableTestApp_Test_ClassVsStruct_Struct m_PortableTestApp_Test_ClassVsStruct_Struct__ctor_0();
char m_PortableTestApp_Test_ClassVsStruct_RunTest_0();
t_PortableTestApp_Test_ClassVsStruct* m_PortableTestApp_Test_ClassVsStruct__ctor_0(t_PortableTestApp_Test_ClassVsStruct* self);
char m_PortableTestApp_Test_Delegates_RunTest_0();
t_PortableTestApp_Test_Delegates* m_PortableTestApp_Test_Delegates_ReturnSelf_0(t_PortableTestApp_Test_Delegates* self);
char m_PortableTestApp_Test_Delegates_Foo_0(t_PortableTestApp_Test_Delegates* self, char p_value);
char m_PortableTestApp_Test_Delegates_FooStatic_0(char p_value);
char m_PortableTestApp_Test_Delegates_FooVirtual_0(t_PortableTestApp_Test_Delegates* self, char p_value);
t_PortableTestApp_Test_Delegates* m_PortableTestApp_Test_Delegates__ctor_0(t_PortableTestApp_Test_Delegates* self);
char m_PortableTestApp_Test_SuperDelegates_FooVirtual_0(t_PortableTestApp_Test_SuperDelegates* self, char p_value);
t_PortableTestApp_Test_SuperDelegates* m_PortableTestApp_Test_SuperDelegates__ctor_0(t_PortableTestApp_Test_SuperDelegates* self);
char m_PortableTestApp_Test_Enums_RunTest_0();
char m_PortableTestApp_Test_ExtensionMethods_RunTest_0();
void m_PortableTestApp_Test_ExtensionMethods_FooClass_0(t_PortableTestApp_Test_ExtensionMethods_MyClass* p_self);
void m_PortableTestApp_Test_ExtensionMethods_FooStruct_0(t_PortableTestApp_Test_ExtensionMethods_MyStruct p_self);
t_PortableTestApp_Test_ExtensionMethods_MyClass* m_PortableTestApp_Test_ExtensionMethods_MyClass__ctor_0(t_PortableTestApp_Test_ExtensionMethods_MyClass* self);
int32_t m_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty_0();
int32_t m_PortableTestApp_Test_FieldsAndProperties_get_myProperty_0(t_PortableTestApp_Test_FieldsAndProperties* self);
char m_PortableTestApp_Test_FieldsAndProperties_RunTest_0();
t_PortableTestApp_Test_FieldsAndProperties* m_PortableTestApp_Test_FieldsAndProperties_Foo_0(t_PortableTestApp_Test_FieldsAndProperties* self);
t_PortableTestApp_Test_FieldsAndProperties_MyStruct m_PortableTestApp_Test_FieldsAndProperties_Foo2_0(t_PortableTestApp_Test_FieldsAndProperties* self);
t_PortableTestApp_Test_FieldsAndProperties* m_PortableTestApp_Test_FieldsAndProperties__ctor_0(t_PortableTestApp_Test_FieldsAndProperties* self);
void m_PortableTestApp_Test_FieldsAndProperties__cctor_0();
char m_PortableTestApp_Test_Generics_RunTest_0();
char m_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0(t_PortableTestApp_Test_VirtualMethods_Base* self, char p_value);
t_PortableTestApp_Test_VirtualMethods_Base* m_PortableTestApp_Test_VirtualMethods_Base__ctor_0(t_PortableTestApp_Test_VirtualMethods_Base* self);
char m_PortableTestApp_Test_VirtualMethods_VirtualFoo_0(t_PortableTestApp_Test_VirtualMethods* self, char p_value);
char m_PortableTestApp_Test_VirtualMethods_AbstractFoo_0(t_PortableTestApp_Test_VirtualMethods* self, char p_value);
char m_PortableTestApp_Test_VirtualMethods_RunTest_0();
t_PortableTestApp_Test_VirtualMethods* m_PortableTestApp_Test_VirtualMethods__ctor_0(t_PortableTestApp_Test_VirtualMethods* self);
t_PortableTestApp_Test_ExtensionMethods_MyStruct m_PortableTestApp_Test_ExtensionMethods_MyStruct__ctor_0();
char m_PortableTestApp_Test_FieldsAndProperties_MyStruct_Foo_0(t_PortableTestApp_Test_FieldsAndProperties_MyStruct* self);
t_PortableTestApp_Test_FieldsAndProperties_MyStruct m_PortableTestApp_Test_FieldsAndProperties_MyStruct__ctor_0();
t_PortableTestApp_Test_Enums_MyEnum m_PortableTestApp_Test_Enums_MyEnum__ctor_0();
t_PortableTestApp_Test_Delegates_FooCallback* m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(t_PortableTestApp_Test_Delegates_FooCallback* self, t_System_Object* p_object, intptr_t p_method);
char m_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(t_PortableTestApp_Test_Delegates_FooCallback* self, char p_value);
/* =============================== */
/* Forward decalre Generic Type Methods */
/* =============================== */
t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, t_System_Object* p_object, intptr_t p_method);
char m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, char p_value);
int32_t m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value);
t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self);
t_System_Object* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t_System_Object* p_value);
t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self);
t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self);
double m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, double p_value);
t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self);
t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self);
char m_PortableTestApp_Test_Generics_Poo_Boolean__1(char p_value);
char m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_TestVirt_Boolean__1(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, char p_value);
char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_TestVirt_Boolean__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, char p_value);
int32_t m_PortableTestApp_Test_Generics_Poo_Int32__1(char p_value);
t_System_Object* m_PortableTestApp_Test_Generics_Poo_Object__1(char p_value);
int32_t m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo2_Object__1(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* p_value1, t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2);
t_System_Object* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo2_Object__1(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value1, t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2);
t_System_Object* m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Boo_Object__1(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value1, t_System_Object* p_value2);
char m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_Object__1(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_Object* p_value);
char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_Object__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_Object* p_value);
char m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_String__1(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_String* p_value);
char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_String__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_String* p_value);
char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt2_Object__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_Object* p_value);
char m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__1(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_Object* p_value);
char m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_Aaa_Object__1(t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self, t_System_Object* p_t);

/* =============================== */
/* Method definitions */
/* =============================== */
int32_t m_PortableTestApp_Program_Main_0(t_System_String** p_args)
{
	int32_t l_arg_i_0;
	m_System_Console_WriteLine_0(StringLiteral_2);
	for (l_arg_i_0 = 0; l_arg_i_0 != m_System_Array_get_Length_0((t_System_Array*)p_args); ++l_arg_i_0)
	{
		t_System_String* l_arg_1;
		l_arg_1 = ((t_System_String**)(((char*)p_args) + (sizeof(size_t)*2)))[l_arg_i_0];
		m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_3, l_arg_1));
	}
	m_System_Console_WriteLine_1();
	m_System_Console_WriteLine_0(StringLiteral_4);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_ClassNesting_RunTest_0(), StringLiteral_5);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_ClassVsStruct_RunTest_0(), StringLiteral_6);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_Enums_RunTest_0(), StringLiteral_7);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_ExtensionMethods_RunTest_0(), StringLiteral_8);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_FieldsAndProperties_RunTest_0(), StringLiteral_9);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_VirtualMethods_RunTest_0(), StringLiteral_10);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_Generics_RunTest_0(), StringLiteral_11);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_Delegates_RunTest_0(), StringLiteral_12);
	m_System_Console_WriteLine_0(StringLiteral_13);
	return 99;
}

void m_PortableTestApp_Program_Log_0(char p_success, t_System_String* p_message)
{
	if (p_success)
	{
		m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_14, p_message));
	}
	else
	{
		m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_15, p_message));
	}
}

char m_PortableTestApp_Test_ClassNesting_RunTest_0()
{
	t_PortableTestApp_Test_ClassNesting_SubClass* l_subObj_0;
	t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* l_subSubObj_1;
	l_subObj_0 = m_PortableTestApp_Test_ClassNesting_SubClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_ClassNesting_SubClass), &rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ));
	l_subSubObj_1 = m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass), &rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ));
	return l_subObj_0->f_i_1 != l_subSubObj_1->f_i_1 && f_PortableTestApp_Test_ClassNesting_SubClass_i2 != f_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_i2 && m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_Foo_0(l_subSubObj_1) && m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_StaticFoo_0();
}

t_PortableTestApp_Test_ClassNesting_SubClass* m_PortableTestApp_Test_ClassNesting_SubClass__ctor_0(t_PortableTestApp_Test_ClassNesting_SubClass* self)
{
	m_System_Object__ctor_0(self);
	self->f_i_1 = 100;
	return self;
}

void m_PortableTestApp_Test_ClassNesting_SubClass__cctor_0()
{
	f_PortableTestApp_Test_ClassNesting_SubClass_i2 = 101;
}

char m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_Foo_0(t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self)
{
	return 1;
}

char m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_StaticFoo_0()
{
	return 1;
}

t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__ctor_0(t_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass* self)
{
	m_System_Object__ctor_0(self);
	self->f_i_1 = 200;
	return self;
}

void m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__cctor_0()
{
	f_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_i2 = 201;
}

t_PortableTestApp_Test_ClassVsStruct_Struct m_PortableTestApp_Test_ClassVsStruct_Struct__ctor_0()
{
	t_PortableTestApp_Test_ClassVsStruct_Struct selfObj = {0};
	return selfObj;
}

char m_PortableTestApp_Test_ClassVsStruct_RunTest_0()
{
	t_PortableTestApp_Test_ClassVsStruct* l_obj_0;
	t_PortableTestApp_Test_ClassVsStruct_Struct l_value_1;
	l_obj_0 = m_PortableTestApp_Test_ClassVsStruct__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_ClassVsStruct), &rt_PortableTestApp_Test_ClassVsStruct_OBJ));
	l_obj_0->f_myStruct_1.f_myClass_2 = l_obj_0;
	l_value_1 = l_obj_0->f_myStruct_1;
	l_value_1.f_myClass_2 = 0;
	return l_value_1.f_myClass_2 != l_obj_0->f_myStruct_1.f_myClass_2;
}

t_PortableTestApp_Test_ClassVsStruct* m_PortableTestApp_Test_ClassVsStruct__ctor_0(t_PortableTestApp_Test_ClassVsStruct* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

char m_PortableTestApp_Test_Delegates_RunTest_0()
{
	t_PortableTestApp_Test_Delegates_FooCallback* l_callback_0;
	t_PortableTestApp_Test_Delegates* l_obj_1;
	char l_result_2;
	l_callback_0 = m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Delegates_FooCallback), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ), 0, &m_PortableTestApp_Test_Delegates_FooStatic_0);
	l_obj_1 = (t_PortableTestApp_Test_Delegates*)m_PortableTestApp_Test_SuperDelegates__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_SuperDelegates), &rt_PortableTestApp_Test_SuperDelegates_OBJ));
	l_obj_1->f_self_1 = l_obj_1;
	l_callback_0 = m_System_Delegate_Combine_0(l_callback_0, m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Delegates_FooCallback), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ), l_obj_1, &m_PortableTestApp_Test_Delegates_Foo_0));
	l_callback_0 = (t_PortableTestApp_Test_Delegates_FooCallback*)CS2X_TestUpCast(m_System_Delegate_Remove_0(l_callback_0, m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Delegates_FooCallback), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ), 0, &m_PortableTestApp_Test_Delegates_FooStatic_0)), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ);
	l_callback_0 = m_System_Delegate_Combine_0(l_callback_0, m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Delegates_FooCallback), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ), 0, &m_PortableTestApp_Test_Delegates_FooStatic_0));
	l_callback_0 = (t_PortableTestApp_Test_Delegates_FooCallback*)CS2X_TestUpCast(m_System_Delegate_Combine_0(l_callback_0, m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Delegates_FooCallback), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ), 0, &m_PortableTestApp_Test_Delegates_FooStatic_0)), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ);
	{
		t_PortableTestApp_Test_Delegates* DELEGATE_OBJ;
		DELEGATE_OBJ = m_PortableTestApp_Test_Delegates_ReturnSelf_0(l_obj_1)->f_self_1;
		l_callback_0 = m_System_Delegate_Combine_0(l_callback_0, m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Delegates_FooCallback), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ), DELEGATE_OBJ, ((rt_PortableTestApp_Test_Delegates*)DELEGATE_OBJ->CS2X_RuntimeType)->vTable_FooVirtual_0));
	};
	l_result_2 = m_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(l_callback_0, 1) && !m_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(l_callback_0, 0);
	l_callback_0 = (t_PortableTestApp_Test_Delegates_FooCallback*)CS2X_TestUpCast(m_System_Delegate_RemoveAll_0(l_callback_0, m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Delegates_FooCallback), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ), 0, &m_PortableTestApp_Test_Delegates_FooStatic_0)), &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ);
	return l_result_2;
}

t_PortableTestApp_Test_Delegates* m_PortableTestApp_Test_Delegates_ReturnSelf_0(t_PortableTestApp_Test_Delegates* self)
{
	return self;
}

char m_PortableTestApp_Test_Delegates_Foo_0(t_PortableTestApp_Test_Delegates* self, char p_value)
{
	return p_value && self->f_someField_1;
}

char m_PortableTestApp_Test_Delegates_FooStatic_0(char p_value)
{
	return p_value;
}

char m_PortableTestApp_Test_Delegates_FooVirtual_0(t_PortableTestApp_Test_Delegates* self, char p_value)
{
	return 0;
}

t_PortableTestApp_Test_Delegates* m_PortableTestApp_Test_Delegates__ctor_0(t_PortableTestApp_Test_Delegates* self)
{
	m_System_Object__ctor_0(self);
	self->f_someField_1 = 1;
	return self;
}

char m_PortableTestApp_Test_SuperDelegates_FooVirtual_0(t_PortableTestApp_Test_SuperDelegates* self, char p_value)
{
	return p_value;
}

t_PortableTestApp_Test_SuperDelegates* m_PortableTestApp_Test_SuperDelegates__ctor_0(t_PortableTestApp_Test_SuperDelegates* self)
{
	m_PortableTestApp_Test_Delegates__ctor_0(self);
	return self;
}

char m_PortableTestApp_Test_Enums_RunTest_0()
{
	t_PortableTestApp_Test_Enums_MyEnum l_e_0;
	l_e_0 = 7;
	return (int32_t)l_e_0 == 7 && sizeof(t_PortableTestApp_Test_Enums_MyEnum) == sizeof(uint8_t);
}

char m_PortableTestApp_Test_ExtensionMethods_RunTest_0()
{
	t_PortableTestApp_Test_ExtensionMethods_MyClass* l_myClass_0;
	t_PortableTestApp_Test_ExtensionMethods_MyStruct l_myStruct_1;
	l_myClass_0 = m_PortableTestApp_Test_ExtensionMethods_MyClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_ExtensionMethods_MyClass), &rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ));
	l_myStruct_1 = m_PortableTestApp_Test_ExtensionMethods_MyStruct__ctor_0();
	m_PortableTestApp_Test_ExtensionMethods_FooClass_0(l_myClass_0);
	m_PortableTestApp_Test_ExtensionMethods_FooStruct_0(l_myStruct_1);
	return l_myClass_0->f_i_1 == 123 && l_myStruct_1.f_i_2 == 0;
}

void m_PortableTestApp_Test_ExtensionMethods_FooClass_0(t_PortableTestApp_Test_ExtensionMethods_MyClass* p_self)
{
	p_self->f_i_1 = 123;
}

void m_PortableTestApp_Test_ExtensionMethods_FooStruct_0(t_PortableTestApp_Test_ExtensionMethods_MyStruct p_self)
{
	p_self.f_i_2 = 123;
}

t_PortableTestApp_Test_ExtensionMethods_MyClass* m_PortableTestApp_Test_ExtensionMethods_MyClass__ctor_0(t_PortableTestApp_Test_ExtensionMethods_MyClass* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

int32_t m_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty_0()
{
	return 33;
}

int32_t m_PortableTestApp_Test_FieldsAndProperties_get_myProperty_0(t_PortableTestApp_Test_FieldsAndProperties* self)
{
	return 33;
}

char m_PortableTestApp_Test_FieldsAndProperties_RunTest_0()
{
	t_PortableTestApp_Test_FieldsAndProperties* l_obj_0;
	t_PortableTestApp_Test_FieldsAndProperties_MyStruct IVALUE_t_PortableTestApp_Test_FieldsAndProperties_MyStruct;
	l_obj_0 = m_PortableTestApp_Test_FieldsAndProperties__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_FieldsAndProperties), &rt_PortableTestApp_Test_FieldsAndProperties_OBJ));
	f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty2_k__BackingField = 34;
	l_obj_0->f__myProperty2_k__BackingField_1 = 34;
	if (m_PortableTestApp_Test_FieldsAndProperties_Foo_0(m_PortableTestApp_Test_FieldsAndProperties_Foo_0(l_obj_0))->f_myField_1 == 0)
	{
		return 0;
	}
	if (!m_PortableTestApp_Test_FieldsAndProperties_MyStruct_Foo_0(CS2X_PValueToIValue_t_PortableTestApp_Test_FieldsAndProperties_MyStruct(m_PortableTestApp_Test_FieldsAndProperties_Foo2_0(l_obj_0), &IVALUE_t_PortableTestApp_Test_FieldsAndProperties_MyStruct)))
	{
		return 0;
	}
	return m_PortableTestApp_Test_FieldsAndProperties_get_myStaticProperty_0() == m_PortableTestApp_Test_FieldsAndProperties_get_myProperty_0(l_obj_0) && f_PortableTestApp_Test_FieldsAndProperties_myStaticField == l_obj_0->f_myField_1 && f_PortableTestApp_Test_FieldsAndProperties__myStaticProperty2_k__BackingField == l_obj_0->f__myProperty2_k__BackingField_1;
}

t_PortableTestApp_Test_FieldsAndProperties* m_PortableTestApp_Test_FieldsAndProperties_Foo_0(t_PortableTestApp_Test_FieldsAndProperties* self)
{
	return self;
}

t_PortableTestApp_Test_FieldsAndProperties_MyStruct m_PortableTestApp_Test_FieldsAndProperties_Foo2_0(t_PortableTestApp_Test_FieldsAndProperties* self)
{
	return m_PortableTestApp_Test_FieldsAndProperties_MyStruct__ctor_0();
}

t_PortableTestApp_Test_FieldsAndProperties* m_PortableTestApp_Test_FieldsAndProperties__ctor_0(t_PortableTestApp_Test_FieldsAndProperties* self)
{
	m_System_Object__ctor_0(self);
	self->f_myField_1 = 44;
	return self;
}

void m_PortableTestApp_Test_FieldsAndProperties__cctor_0()
{
	f_PortableTestApp_Test_FieldsAndProperties_myStaticField = 44;
}

char m_PortableTestApp_Test_Generics_RunTest_0()
{
	t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* l_callback_0;
	t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* l_obj_1;
	t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* l_obj2_2;
	t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* l_obj3_3;
	t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* l_obj4_4;
	t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* l_obj5_5;
	l_callback_0 = m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC), &rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ), 0, &m_PortableTestApp_Test_Generics_Poo_Boolean__1);
	l_callback_0 = m_System_Delegate_Combine_0(l_callback_0, m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC), &rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ), 0, &m_PortableTestApp_Test_Generics_Poo_Boolean__1));
	l_obj_1 = m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ));
	l_obj2_2 = m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ));
	l_obj3_3 = m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC), &rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ));
	l_obj4_4 = (t_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj3_3;
	l_obj5_5 = m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ));
	{
		t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* DELEGATE_OBJ;
		DELEGATE_OBJ = l_obj_1;
		l_callback_0 = m_System_Delegate_Combine_0(l_callback_0, m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC), &rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ), DELEGATE_OBJ, ((rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC*)DELEGATE_OBJ->CS2X_RuntimeType)->vTable_TestVirt_Boolean__0));
	};
	l_obj_1->f_i_1 = 1;
	l_obj_1->f__p_k__BackingField_1 = 2;
	l_obj2_2->f_i_1 = l_obj_1;
	l_obj2_2->f__p_k__BackingField_1 = l_obj_1;
	l_obj5_5->f_i_1 = 77;
	l_obj5_5->f_i2_1 = 0;
	return !m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(l_callback_0, 1) && m_PortableTestApp_Test_Generics_Poo_Int32__1(1) == 0 && m_PortableTestApp_Test_Generics_Poo_Object__1(1) == 0 && m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(l_obj_1, 1) == 1 && m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(l_obj2_2, l_obj_1) == l_obj_1 && m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo2_Object__1(l_obj_1, l_obj_1, m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ))) == 2 && m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo2_Object__1(l_obj2_2, l_obj2_2, m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ))) == l_obj_1 && m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Boo_Object__1(l_obj_1, 5, l_obj2_2) == l_obj2_2 && ((rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj4_4->CS2X_RuntimeType)->vTable_MyVirt_Object__0(l_obj4_4, l_obj3_3) && ((rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj4_4->CS2X_RuntimeType)->vTable_MyVirt_String__0(l_obj4_4, f_System_String_Empty) && ((rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC*)l_obj3_3->CS2X_RuntimeType)->vTable_MyVirt2_Object__0(l_obj3_3, l_obj3_3) && m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_Aaa_Object__1(l_obj5_5, 0);
}

char m_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0(t_PortableTestApp_Test_VirtualMethods_Base* self, char p_value)
{
	return 0;
}

t_PortableTestApp_Test_VirtualMethods_Base* m_PortableTestApp_Test_VirtualMethods_Base__ctor_0(t_PortableTestApp_Test_VirtualMethods_Base* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

char m_PortableTestApp_Test_VirtualMethods_VirtualFoo_0(t_PortableTestApp_Test_VirtualMethods* self, char p_value)
{
	return p_value;
}

char m_PortableTestApp_Test_VirtualMethods_AbstractFoo_0(t_PortableTestApp_Test_VirtualMethods* self, char p_value)
{
	return p_value;
}

char m_PortableTestApp_Test_VirtualMethods_RunTest_0()
{
	t_PortableTestApp_Test_VirtualMethods* l_obj_0;
	t_PortableTestApp_Test_VirtualMethods_Base* l_objBase_1;
	l_obj_0 = m_PortableTestApp_Test_VirtualMethods__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_VirtualMethods), &rt_PortableTestApp_Test_VirtualMethods_OBJ));
	l_objBase_1 = (t_PortableTestApp_Test_VirtualMethods_Base*)l_obj_0;
	return m_PortableTestApp_Test_VirtualMethods_VirtualFoo_0(l_obj_0, 1) && m_PortableTestApp_Test_VirtualMethods_AbstractFoo_0(l_obj_0, 1) && ((rt_PortableTestApp_Test_VirtualMethods_Base*)l_objBase_1->CS2X_RuntimeType)->vTable_VirtualFoo_0(l_objBase_1, 1) && ((rt_PortableTestApp_Test_VirtualMethods_Base*)l_objBase_1->CS2X_RuntimeType)->vTable_AbstractFoo_0(l_objBase_1, 1);
}

t_PortableTestApp_Test_VirtualMethods* m_PortableTestApp_Test_VirtualMethods__ctor_0(t_PortableTestApp_Test_VirtualMethods* self)
{
	m_PortableTestApp_Test_VirtualMethods_Base__ctor_0(self);
	return self;
}

t_PortableTestApp_Test_ExtensionMethods_MyStruct m_PortableTestApp_Test_ExtensionMethods_MyStruct__ctor_0()
{
	t_PortableTestApp_Test_ExtensionMethods_MyStruct selfObj = {0};
	return selfObj;
}

char m_PortableTestApp_Test_FieldsAndProperties_MyStruct_Foo_0(t_PortableTestApp_Test_FieldsAndProperties_MyStruct* self)
{
	return (*self).f_i_2 == 0;
}

t_PortableTestApp_Test_FieldsAndProperties_MyStruct m_PortableTestApp_Test_FieldsAndProperties_MyStruct__ctor_0()
{
	t_PortableTestApp_Test_FieldsAndProperties_MyStruct selfObj = {0};
	return selfObj;
}

t_PortableTestApp_Test_Enums_MyEnum m_PortableTestApp_Test_Enums_MyEnum__ctor_0()
{
	t_PortableTestApp_Test_Enums_MyEnum selfObj = {0};
	return selfObj;
}

t_PortableTestApp_Test_Delegates_FooCallback* m_PortableTestApp_Test_Delegates_FooCallback__ctor_0(t_PortableTestApp_Test_Delegates_FooCallback* self, t_System_Object* p_object, intptr_t p_method)
{
	m_System_MulticastDelegate__ctor_0(self);
	self->f__target_1 = p_object;
	self->f__methodPtr_1 = p_method;
	return self;
}

char m_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(t_PortableTestApp_Test_Delegates_FooCallback* self, char p_value)
{
	char result;
	if (self->f__target_1 != 0) result = ((char (*)(t_System_Object*, char))self->f__methodPtr_1)(self->f__target_1, p_value);
	else result = ((char (*)(char))self->f__methodPtr_1)(p_value);
	if (self->f__next_2 != 0) result = m_PortableTestApp_Test_Delegates_FooCallback_Invoke_0(self->f__next_2, p_value);
	return result;
}


/* =============================== */
/* Generic Type Method definitions */
/* =============================== */
t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC__ctor_0(t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, t_System_Object* p_object, intptr_t p_method)
{
	m_System_MulticastDelegate__ctor_0(self);
	self->f__target_1 = p_object;
	self->f__methodPtr_1 = p_method;
	return self;
}

char m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC* self, char p_value)
{
	char result;
	if (self->f__target_1 != 0) result = ((char (*)(t_System_Object*, char))self->f__methodPtr_1)(self->f__target_1, p_value);
	else result = ((char (*)(char))self->f__methodPtr_1)(p_value);
	if (self->f__next_2 != 0) result = m_t_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_Invoke_0(self->f__next_2, p_value);
	return result;
}

int32_t m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value)
{
	return p_value;
}

t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_System_Object* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t_System_Object* p_value)
{
	return p_value;
}

t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self)
{
	m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC__ctor_0(self);
	return self;
}

double m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, double p_value)
{
	return p_value;
}

t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

char m_PortableTestApp_Test_Generics_Poo_Boolean__1(char p_value)
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

char m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_TestVirt_Boolean__1(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, char p_value)
{
	return 0;
}

char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_TestVirt_Boolean__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, char p_value)
{
	return 1;
}

int32_t m_PortableTestApp_Test_Generics_Poo_Int32__1(char p_value)
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

t_System_Object* m_PortableTestApp_Test_Generics_Poo_Object__1(char p_value)
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

int32_t m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo2_Object__1(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* p_value1, t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2)
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

t_System_Object* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo2_Object__1(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value1, t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* p_value2)
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

t_System_Object* m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Boo_Object__1(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value1, t_System_Object* p_value2)
{
	if (p_value2 == 0)
	{
		return 0;
	}
	return p_value2;
}

char m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_Object__1(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_Object* p_value)
{
	return 0;
}

char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_Object__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_Object* p_value)
{
	return p_value != 0;
}

char m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_String__1(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_String* p_value)
{
	return 0;
}

char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_String__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_String* p_value)
{
	return p_value != 0;
}

char m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt2_Object__1(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self, t_System_Object* p_value)
{
	if (m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__1(self, p_value))
	{
		return 0;
	}
	return p_value != 0;
}

char m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__1(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, t_System_Object* p_value)
{
	return 0;
}

char m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_Aaa_Object__1(t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self, t_System_Object* p_t)
{
	return p_t == 0;
}

/* =============================== */
/* Init Library */
/* =============================== */
void CS2X_InitLib_PortableTestApp()
{
	/* Init references */
	CS2X_InitLib_CS2X_CoreLib();

	/* Init runtime type objects */
	memset(&rt_PortableTestApp_Program_OBJ, 0, sizeof(rt_PortableTestApp_Program));
	rt_PortableTestApp_Program_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Program_OBJ;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_METADATA_Name;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ClassNesting_OBJ, 0, sizeof(rt_PortableTestApp_Test_ClassNesting));
	rt_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ClassNesting_OBJ;
	rt_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassNesting_METADATA_Name;
	rt_PortableTestApp_Test_ClassNesting_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassNesting_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ, 0, sizeof(rt_PortableTestApp_Test_ClassNesting_SubClass));
	rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ;
	rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_METADATA_Name;
	rt_PortableTestApp_Test_ClassNesting_SubClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ, 0, sizeof(rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass));
	rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ;
	rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_Name;
	rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ClassVsStruct_Struct_OBJ, 0, sizeof(rt_PortableTestApp_Test_ClassVsStruct_Struct));
	rt_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ClassVsStruct_Struct_OBJ;
	rt_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_Name;
	rt_PortableTestApp_Test_ClassVsStruct_Struct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ClassVsStruct_OBJ, 0, sizeof(rt_PortableTestApp_Test_ClassVsStruct));
	rt_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ClassVsStruct_OBJ;
	rt_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_METADATA_Name;
	rt_PortableTestApp_Test_ClassVsStruct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_Delegates_OBJ, 0, sizeof(rt_PortableTestApp_Test_Delegates));
	rt_PortableTestApp_Test_Delegates_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_Delegates_OBJ;
	rt_PortableTestApp_Test_Delegates_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_Delegates_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Delegates_METADATA_Name;
	rt_PortableTestApp_Test_Delegates_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Delegates_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_SuperDelegates_OBJ, 0, sizeof(rt_PortableTestApp_Test_SuperDelegates));
	rt_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_SuperDelegates_OBJ;
	rt_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_PortableTestApp_Test_Delegates_OBJ;
	rt_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_SuperDelegates_METADATA_Name;
	rt_PortableTestApp_Test_SuperDelegates_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_SuperDelegates_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_Enums_OBJ, 0, sizeof(rt_PortableTestApp_Test_Enums));
	rt_PortableTestApp_Test_Enums_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_Enums_OBJ;
	rt_PortableTestApp_Test_Enums_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_Enums_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Enums_METADATA_Name;
	rt_PortableTestApp_Test_Enums_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Enums_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ExtensionMethods_OBJ, 0, sizeof(rt_PortableTestApp_Test_ExtensionMethods));
	rt_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ExtensionMethods_OBJ;
	rt_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_METADATA_Name;
	rt_PortableTestApp_Test_ExtensionMethods_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ, 0, sizeof(rt_PortableTestApp_Test_ExtensionMethods_MyClass));
	rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ;
	rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_Name;
	rt_PortableTestApp_Test_ExtensionMethods_MyClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_FieldsAndProperties_OBJ, 0, sizeof(rt_PortableTestApp_Test_FieldsAndProperties));
	rt_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_FieldsAndProperties_OBJ;
	rt_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_METADATA_Name;
	rt_PortableTestApp_Test_FieldsAndProperties_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_Generics_OBJ, 0, sizeof(rt_PortableTestApp_Test_Generics));
	rt_PortableTestApp_Test_Generics_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_Generics_OBJ;
	rt_PortableTestApp_Test_Generics_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_Generics_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Generics_METADATA_Name;
	rt_PortableTestApp_Test_Generics_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Generics_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_VirtualMethods_Base_OBJ, 0, sizeof(rt_PortableTestApp_Test_VirtualMethods_Base));
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_VirtualMethods_Base_OBJ;
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_Name;
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_VirtualMethods_OBJ, 0, sizeof(rt_PortableTestApp_Test_VirtualMethods));
	rt_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_VirtualMethods_OBJ;
	rt_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_PortableTestApp_Test_VirtualMethods_Base_OBJ;
	rt_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_VirtualMethods_METADATA_Name;
	rt_PortableTestApp_Test_VirtualMethods_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_VirtualMethods_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ, 0, sizeof(rt_PortableTestApp_Test_ExtensionMethods_MyStruct));
	rt_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ;
	rt_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_Name;
	rt_PortableTestApp_Test_ExtensionMethods_MyStruct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ, 0, sizeof(rt_PortableTestApp_Test_FieldsAndProperties_MyStruct));
	rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ;
	rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_Name;
	rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_Enums_MyEnum_OBJ, 0, sizeof(rt_PortableTestApp_Test_Enums_MyEnum));
	rt_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_Enums_MyEnum_OBJ;
	rt_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Enums_MyEnum_METADATA_Name;
	rt_PortableTestApp_Test_Enums_MyEnum_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Enums_MyEnum_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_Delegates_FooCallback_OBJ, 0, sizeof(rt_PortableTestApp_Test_Delegates_FooCallback));
	rt_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_Delegates_FooCallback_OBJ;
	rt_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_MulticastDelegate_OBJ;
	rt_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Delegates_FooCallback_METADATA_Name;
	rt_PortableTestApp_Test_Delegates_FooCallback_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Delegates_FooCallback_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_PortableTestApp_Program_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Program_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassNesting_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassNesting_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_Struct_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ClassVsStruct_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Delegates_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Delegates_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_SuperDelegates_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_SuperDelegates_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Enums_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Enums_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyClass_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Generics_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Generics_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_ExtensionMethods_MyStruct_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_FieldsAndProperties_MyStruct_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Enums_MyEnum_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Enums_MyEnum_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Delegates_FooCallback_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Delegates_FooCallback_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_PortableTestApp_Test_Delegates_OBJ.vTable_FooVirtual_0 = m_PortableTestApp_Test_Delegates_FooVirtual_0;
	rt_PortableTestApp_Test_SuperDelegates_OBJ.vTable_FooVirtual_0 = m_PortableTestApp_Test_SuperDelegates_FooVirtual_0;
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.vTable_VirtualFoo_0 = m_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0;
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.vTable_AbstractFoo_0 = 0;
	rt_PortableTestApp_Test_VirtualMethods_OBJ.vTable_VirtualFoo_0 = m_PortableTestApp_Test_VirtualMethods_VirtualFoo_0;
	rt_PortableTestApp_Test_VirtualMethods_OBJ.vTable_AbstractFoo_0 = m_PortableTestApp_Test_VirtualMethods_AbstractFoo_0;

	/* <<< === Generic Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC));
	rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ;
	rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_MulticastDelegate_OBJ;
	rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_Name;
	rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC));
	rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_Name;
	rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC));
	rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_Name;
	rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC));
	rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ;
	rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ;
	rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_Name;
	rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC));
	rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_Name;
	rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC));
	rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_Name;
	rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Generics_GenericFooCallback_System_Boolean_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ.vTable_TestVirt_Boolean__0 = m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_TestVirt_Boolean__1;
	rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.vTable_MyVirt_Object__0 = m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_Object__1;
	rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.vTable_MyVirt_String__0 = m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt_String__1;
	rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ.vTable_MyVirt2_Object__0 = m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_MyVirt2_Object__1;
	rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.vTable_MyVirt_Object__0 = m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_Object__1;
	rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.vTable_MyVirt_String__0 = m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt_String__1;
	rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC_OBJ.vTable_MyVirt2_Object__0 = m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_MyVirt2_Object__1;

	/* <<< === Array Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt_System_String___ARRAY_OBJ, 0, sizeof(rt_System_String___ARRAY));
	rt_System_String___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_String___ARRAY_OBJ;
	rt_System_String___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_String___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_String___ARRAY_METADATA_Name;
	rt_System_String___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_String___ARRAY_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_String___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_String___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
}

void CS2X_InitDllImport_PortableTestApp()
{
	/* Init references */
	CS2X_InitDllImport_CS2X_CoreLib();

	/* Init this project */
}

void CS2X_InvokeStaticConstructors_PortableTestApp()
{
	/* Init references */
	CS2X_InvokeStaticConstructors_CS2X_CoreLib();

	/* Init this project */
	m_PortableTestApp_Test_ClassNesting_SubClass__cctor_0();
	m_PortableTestApp_Test_ClassNesting_SubClass_SubSubClass__cctor_0();
	m_PortableTestApp_Test_FieldsAndProperties__cctor_0();
}

void CS2X_InitStringLiterals()
{
	((t_System_String*)StringLiteral_0)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_1)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_2)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_3)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_4)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_5)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_6)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_7)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_8)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_9)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_10)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_11)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_12)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_13)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_14)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)StringLiteral_15)->CS2X_RuntimeType = &rt_System_String_OBJ;
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
	t_System_String** managedArgs = CS2X_AllocArrayTypeAtomic(sizeof(t_System_String), argc, &rt_System_String___ARRAY_OBJ);
	for (i = 0; i != argc; ++i)
	{
		int i2, managedArgLength;
		t_System_String** managedArgsRuntimeOffset;
		managedArgsRuntimeOffset = ((char*)managedArgs) + (sizeof(size_t) * 2);
		managedArgLength = strlen(argv[i]);
		managedArgsRuntimeOffset[i] = m_System_String_FastAllocateString_0(managedArgLength);
		for (i2 = 0; i2 != managedArgLength; ++i2) (&managedArgsRuntimeOffset[i]->f__firstChar_1)[i2] = (char16_t)argv[i][i2];
	}
	returnCode = m_PortableTestApp_Program_Main_0(managedArgs);
	CS2X_GC_Collect();
	return returnCode;
}
