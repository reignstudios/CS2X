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
typedef struct t_PortableTestApp_Test_Generics t_PortableTestApp_Test_Generics;
typedef struct t_PortableTestApp_Test_VirtualMethods_Base t_PortableTestApp_Test_VirtualMethods_Base;
typedef struct t_PortableTestApp_Test_VirtualMethods t_PortableTestApp_Test_VirtualMethods;

/* =============================== */
/* Forward declare Generic Types */
/* =============================== */
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


/* =============================== */
/* Generic Type definitions */
/* =============================== */
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

/* =============================== */
/* Generic Runtime Types */
/* =============================== */
typedef struct rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC
{
	t_System_RuntimeType runtimeType;
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
char m_PortableTestApp_Test_Generics_RunTest_0();
char m_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0(t_PortableTestApp_Test_VirtualMethods_Base* self, char p_value);
t_PortableTestApp_Test_VirtualMethods_Base* m_PortableTestApp_Test_VirtualMethods_Base__ctor_0(t_PortableTestApp_Test_VirtualMethods_Base* self);
char m_PortableTestApp_Test_VirtualMethods_VirtualFoo_0(t_PortableTestApp_Test_VirtualMethods* self, char p_value);
char m_PortableTestApp_Test_VirtualMethods_AbstractFoo_0(t_PortableTestApp_Test_VirtualMethods* self, char p_value);
char m_PortableTestApp_Test_VirtualMethods_RunTest_0();
t_PortableTestApp_Test_VirtualMethods* m_PortableTestApp_Test_VirtualMethods__ctor_0(t_PortableTestApp_Test_VirtualMethods* self);
/* =============================== */
/* Forward decalre Generic Type Methods */
/* =============================== */
int32_t m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self, int32_t p_value);
t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* self);
t_System_Object* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self, t_System_Object* p_value);
t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* self);
t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* self);
double m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC_Foo_0(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self, double p_value);
t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Double_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* self);
t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* self);
int32_t m_PortableTestApp_Test_Generics_Foo_Int32__1(char p_value);
t_System_Object* m_PortableTestApp_Test_Generics_Foo_Object__1(char p_value);
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
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_VirtualMethods_RunTest_0(), StringLiteral_7);
	m_PortableTestApp_Program_Log_0(m_PortableTestApp_Test_Generics_RunTest_0(), StringLiteral_8);
	m_System_Console_WriteLine_0(StringLiteral_9);
	return 99;
}

void m_PortableTestApp_Program_Log_0(char p_success, t_System_String* p_message)
{
	if (p_success)
	{
		m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_10, p_message));
	}
	else
	{
		m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_11, p_message));
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

char m_PortableTestApp_Test_Generics_RunTest_0()
{
	t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC* l_obj_0;
	t_PortableTestApp_Test_GenericClass_System_Object_GENERIC* l_obj2_1;
	t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC* l_obj3_2;
	t_PortableTestApp_Test_GenericClass_System_Double_GENERIC* l_obj4_3;
	t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC* l_obj5_4;
	l_obj_0 = m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_OBJ));
	l_obj2_1 = m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ));
	l_obj3_2 = m_t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Test_GenericClass2_System_Double_GENERIC), &rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC_OBJ));
	l_obj4_3 = (t_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj3_2;
	l_obj5_4 = m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_OBJ));
	l_obj_0->f_i_1 = 1;
	l_obj_0->f__p_k__BackingField_1 = 2;
	l_obj2_1->f_i_1 = l_obj_0;
	l_obj2_1->f__p_k__BackingField_1 = l_obj_0;
	l_obj5_4->f_i_1 = 77;
	l_obj5_4->f_i2_1 = 0;
	return m_PortableTestApp_Test_Generics_Foo_Int32__1(1) == 0 && m_PortableTestApp_Test_Generics_Foo_Object__1(1) == 0 && m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo_0(l_obj_0, 1) == 1 && m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo_0(l_obj2_1, l_obj_0) == l_obj_0 && m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Foo2_Object__1(l_obj_0, l_obj_0, m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ))) == 2 && m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC_Foo2_Object__1(l_obj2_1, l_obj2_1, m_t_PortableTestApp_Test_GenericClass_System_Object_GENERIC__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Test_GenericClass_System_Object_GENERIC), &rt_PortableTestApp_Test_GenericClass_System_Object_GENERIC_OBJ))) == l_obj_0 && m_t_PortableTestApp_Test_GenericClass_System_Int32_GENERIC_Boo_Object__1(l_obj_0, 5, l_obj2_1) == l_obj2_1 && ((rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj4_3->CS2X_RuntimeType)->vTable_MyVirt_Object__0(l_obj4_3, l_obj3_2) && ((rt_PortableTestApp_Test_GenericClass_System_Double_GENERIC*)l_obj4_3->CS2X_RuntimeType)->vTable_MyVirt_String__0(l_obj4_3, f_System_String_Empty) && ((rt_PortableTestApp_Test_GenericClass2_System_Double_GENERIC*)l_obj3_2->CS2X_RuntimeType)->vTable_MyVirt2_Object__0(l_obj3_2, l_obj3_2) && m_t_PortableTestApp_Test_GenericClass_System_Int64__B_System_Object_GENERIC_Aaa_Object__1(l_obj5_4, 0);
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


/* =============================== */
/* Generic Type Method definitions */
/* =============================== */
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

int32_t m_PortableTestApp_Test_Generics_Foo_Int32__1(char p_value)
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

t_System_Object* m_PortableTestApp_Test_Generics_Foo_Object__1(char p_value)
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
	((t_System_String*)rt_PortableTestApp_Test_Generics_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_Generics_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_Base_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Test_VirtualMethods_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.vTable_VirtualFoo_0 = m_PortableTestApp_Test_VirtualMethods_Base_VirtualFoo_0;
	rt_PortableTestApp_Test_VirtualMethods_Base_OBJ.vTable_AbstractFoo_0 = 0;
	rt_PortableTestApp_Test_VirtualMethods_OBJ.vTable_VirtualFoo_0 = m_PortableTestApp_Test_VirtualMethods_VirtualFoo_0;
	rt_PortableTestApp_Test_VirtualMethods_OBJ.vTable_AbstractFoo_0 = m_PortableTestApp_Test_VirtualMethods_AbstractFoo_0;

	/* <<< === Generic Runtime Types === >>> */
	/* Init runtime type objects */
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
