/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#include "CS2X.CoreLib.h"

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t_PortableTestApp_MyAbstractClass t_PortableTestApp_MyAbstractClass;
typedef struct t_PortableTestApp_MyBaseClass t_PortableTestApp_MyBaseClass;
typedef struct t_PortableTestApp_MyExtensions t_PortableTestApp_MyExtensions;
typedef int32_t t_PortableTestApp_MyEnum;
typedef struct t_PortableTestApp_Program t_PortableTestApp_Program;
typedef struct t_PortableTestApp_Foo t_PortableTestApp_Foo;
typedef struct t_PortableTestApp_Vec3 t_PortableTestApp_Vec3;
typedef int32_t t_PortableTestApp_MyNamespace_MyEnum;
typedef struct t_PortableTestApp_Program_MyDelegate t_PortableTestApp_Program_MyDelegate;

/* =============================== */
/* Forward declare Generic Types */
/* =============================== */
typedef struct t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC;
typedef struct t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC;
typedef struct t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC;
typedef struct t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC;

/* =============================== */
/* Type definitions */
/* =============================== */
struct t_PortableTestApp_MyAbstractClass
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_MyBaseClass
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_b_2;
	int32_t f_c_2;
	int32_t f_d_2;
};

struct t_PortableTestApp_MyExtensions
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

#define f_PortableTestApp_MyEnum_A 0
#define f_PortableTestApp_MyEnum_B 1
#define f_PortableTestApp_MyEnum_C 2

struct t_PortableTestApp_Program
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_abc_1;
	int32_t f__MyAutoProp_k__BackingField_1;
	int32_t f__MyProp_1;
	char16_t f_charVal_1;
};
t_PortableTestApp_Program* f_PortableTestApp_Program_program;
int32_t f_PortableTestApp_Program_abcStatic;
int32_t f_PortableTestApp_Program__MyAutoPropStatic_k__BackingField;
int32_t f_PortableTestApp_Program__MyPropStatic;
t_System_String* f_PortableTestApp_Program_value;
t_PortableTestApp_MyEnum f_PortableTestApp_Program_myEnum;
t_PortableTestApp_Program_MyDelegate* f_PortableTestApp_Program_myDelegate;
t_PortableTestApp_MyBaseClass* f_PortableTestApp_Program_i2;

struct t_PortableTestApp_Foo
{
	int32_t f_i_2;
};

struct t_PortableTestApp_Vec3
{
	float f_x_2;
	float f_y_2;
	float f_z_2;
};

#define f_PortableTestApp_MyNamespace_MyEnum_A 0
#define f_PortableTestApp_MyNamespace_MyEnum_B 1
#define f_PortableTestApp_MyNamespace_MyEnum_C 2

struct t_PortableTestApp_Program_MyDelegate
{
	t_System_RuntimeType* CS2X_RuntimeType;
	intptr_t f__methodPtr_1;
	t_System_Object* f__target_1;
	t_System_MulticastDelegate* f__next_2;
};


/* =============================== */
/* Generic Type definitions */
/* =============================== */
struct t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC
{
	int32_t f_i_2;
	int32_t* f_collection_2;
};

struct t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	int32_t f_g_1;
};

struct t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_PortableTestApp_Vec3 f_g_1;
};

/* =============================== */
/* Runtime Types */
/* =============================== */
typedef struct rt_PortableTestApp_MyAbstractClass
{
	t_System_RuntimeType runtimeType;
	int32_t (*vTable_MyVirtMethod_0)(t_PortableTestApp_MyAbstractClass* self);
	void (*vTable_MyFoo2_0)(t_PortableTestApp_MyAbstractClass* self, int32_t* p_i);
} rt_PortableTestApp_MyAbstractClass;
rt_PortableTestApp_MyAbstractClass rt_PortableTestApp_MyAbstractClass_OBJ;
int8_t rt_PortableTestApp_MyAbstractClass_METADATA_Name[44] = {0,0,0,0,0,0,0,0,15,0,0,0,77,0,121,0,65,0,98,0,115,0,116,0,114,0,97,0,99,0,116,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* MyAbstractClass */
int8_t rt_PortableTestApp_MyAbstractClass_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,65,0,98,0,115,0,116,0,114,0,97,0,99,0,116,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.MyAbstractClass */

typedef struct rt_PortableTestApp_MyBaseClass
{
	t_System_RuntimeType runtimeType;
	int32_t (*vTable_MyVirtMethod_0)(t_PortableTestApp_MyBaseClass* self);
	void (*vTable_MyFoo2_0)(t_PortableTestApp_MyBaseClass* self, int32_t* p_i);
} rt_PortableTestApp_MyBaseClass;
rt_PortableTestApp_MyBaseClass rt_PortableTestApp_MyBaseClass_OBJ;
int8_t rt_PortableTestApp_MyBaseClass_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,77,0,121,0,66,0,97,0,115,0,101,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* MyBaseClass */
int8_t rt_PortableTestApp_MyBaseClass_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,66,0,97,0,115,0,101,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.MyBaseClass */

typedef struct rt_PortableTestApp_MyExtensions
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_MyExtensions;
rt_PortableTestApp_MyExtensions rt_PortableTestApp_MyExtensions_OBJ;
int8_t rt_PortableTestApp_MyExtensions_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,77,0,121,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,115,0,0,0}; /* MyExtensions */
int8_t rt_PortableTestApp_MyExtensions_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,115,0,0,0}; /* PortableTestApp.MyExtensions */

typedef struct rt_PortableTestApp_MyEnum
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_MyEnum;
rt_PortableTestApp_MyEnum rt_PortableTestApp_MyEnum_OBJ;
int8_t rt_PortableTestApp_MyEnum_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* MyEnum */
int8_t rt_PortableTestApp_MyEnum_METADATA_FullName[58] = {0,0,0,0,0,0,0,0,22,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* PortableTestApp.MyEnum */

typedef struct rt_PortableTestApp_Program
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Program;
rt_PortableTestApp_Program rt_PortableTestApp_Program_OBJ;
int8_t rt_PortableTestApp_Program_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0}; /* Program */
int8_t rt_PortableTestApp_Program_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0}; /* PortableTestApp.Program */

typedef struct rt_PortableTestApp_Foo
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Foo;
rt_PortableTestApp_Foo rt_PortableTestApp_Foo_OBJ;
int8_t rt_PortableTestApp_Foo_METADATA_Name[20] = {0,0,0,0,0,0,0,0,3,0,0,0,70,0,111,0,111,0,0,0}; /* Foo */
int8_t rt_PortableTestApp_Foo_METADATA_FullName[52] = {0,0,0,0,0,0,0,0,19,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,70,0,111,0,111,0,0,0}; /* PortableTestApp.Foo */

typedef struct rt_PortableTestApp_Vec3
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Vec3;
rt_PortableTestApp_Vec3 rt_PortableTestApp_Vec3_OBJ;
int8_t rt_PortableTestApp_Vec3_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,86,0,101,0,99,0,51,0,0,0}; /* Vec3 */
int8_t rt_PortableTestApp_Vec3_METADATA_FullName[54] = {0,0,0,0,0,0,0,0,20,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,86,0,101,0,99,0,51,0,0,0}; /* PortableTestApp.Vec3 */

typedef struct rt_PortableTestApp_MyNamespace_MyEnum
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_MyNamespace_MyEnum;
rt_PortableTestApp_MyNamespace_MyEnum rt_PortableTestApp_MyNamespace_MyEnum_OBJ;
int8_t rt_PortableTestApp_MyNamespace_MyEnum_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* MyEnum */
int8_t rt_PortableTestApp_MyNamespace_MyEnum_METADATA_FullName[82] = {0,0,0,0,0,0,0,0,34,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,78,0,97,0,109,0,101,0,115,0,112,0,97,0,99,0,101,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0}; /* PortableTestApp.MyNamespace.MyEnum */

typedef struct rt_PortableTestApp_Program_MyDelegate
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_Program_MyDelegate;
rt_PortableTestApp_Program_MyDelegate rt_PortableTestApp_Program_MyDelegate_OBJ;
int8_t rt_PortableTestApp_Program_MyDelegate_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,77,0,121,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* MyDelegate */
int8_t rt_PortableTestApp_Program_MyDelegate_METADATA_FullName[82] = {0,0,0,0,0,0,0,0,34,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,46,0,77,0,121,0,68,0,101,0,108,0,101,0,103,0,97,0,116,0,101,0,0,0}; /* PortableTestApp.Program.MyDelegate */

/* =============================== */
/* Generic Runtime Types */
/* =============================== */
typedef struct rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC;
rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ;
int8_t rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,98,0,108,0,101,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* MyEnumerable<Int32> */
int8_t rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,98,0,108,0,101,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* PortableTestApp.MyEnumerable<System.Int32> */

typedef struct rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC;
rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_OBJ;
int8_t rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_METADATA_Name[52] = {0,0,0,0,0,0,0,0,19,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* MyEnumerator<Int32> */
int8_t rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_METADATA_FullName[98] = {0,0,0,0,0,0,0,0,42,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,101,0,114,0,97,0,116,0,111,0,114,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* PortableTestApp.MyEnumerator<System.Int32> */

typedef struct rt_PortableTestApp_MyG_System_Int32_GENERIC
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_MyG_System_Int32_GENERIC;
rt_PortableTestApp_MyG_System_Int32_GENERIC rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ;
int8_t rt_PortableTestApp_MyG_System_Int32_GENERIC_METADATA_Name[34] = {0,0,0,0,0,0,0,0,10,0,0,0,77,0,121,0,71,0,60,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* MyG<Int32> */
int8_t rt_PortableTestApp_MyG_System_Int32_GENERIC_METADATA_FullName[80] = {0,0,0,0,0,0,0,0,33,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,71,0,60,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,62,0,0,0}; /* PortableTestApp.MyG<System.Int32> */

typedef struct rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC
{
	t_System_RuntimeType runtimeType;
} rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC;
rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_OBJ;
int8_t rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,77,0,121,0,71,0,60,0,86,0,101,0,99,0,51,0,62,0,0,0}; /* MyG<Vec3> */
int8_t rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_METADATA_FullName[96] = {0,0,0,0,0,0,0,0,41,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,71,0,60,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,86,0,101,0,99,0,51,0,62,0,0,0}; /* PortableTestApp.MyG<PortableTestApp.Vec3> */

/* =============================== */
/* ARRAY Runtime Types */
/* =============================== */
typedef struct rt_System_Int32___ARRAY
{
	t_System_RuntimeType runtimeType;
} rt_System_Int32___ARRAY;
rt_System_Int32___ARRAY rt_System_Int32___ARRAY_OBJ;
int8_t rt_System_Int32___ARRAY_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,73,0,110,0,116,0,51,0,50,0,91,0,93,0,0,0}; /* Int32[] */
int8_t rt_System_Int32___ARRAY_METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,91,0,93,0,0,0}; /* System.Int32[] */

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
t_PortableTestApp_Foo* CS2X_PValueToIValue_t_PortableTestApp_Foo(t_PortableTestApp_Foo pvalue, t_PortableTestApp_Foo* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

int32_t* CS2X_PValueToIValue_int32_t(int32_t pvalue, int32_t* ivalue)
{
	(*ivalue) = pvalue;
	return ivalue;
}

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
void m_PortableTestApp_MyAbstractClass_PortableTestApp_MyInterface_MyVirtMethod_0(t_PortableTestApp_MyAbstractClass* self);
void m_PortableTestApp_MyAbstractClass_MyFoo_0(t_PortableTestApp_MyAbstractClass* self, int32_t* p_i);
t_PortableTestApp_MyAbstractClass* m_PortableTestApp_MyAbstractClass__ctor_0(t_PortableTestApp_MyAbstractClass* self);
void m_PortableTestApp_MyBaseClass_MyFoo2_0(t_PortableTestApp_MyBaseClass* self, int32_t* p_i);
int32_t m_PortableTestApp_MyBaseClass_MyVirtMethod_0(t_PortableTestApp_MyBaseClass* self);
t_PortableTestApp_MyBaseClass* m_PortableTestApp_MyBaseClass__ctor_0(t_PortableTestApp_MyBaseClass* self);
t_System_String* m_PortableTestApp_MyExtensions_Name_0(t_PortableTestApp_MyEnum p_e);
t_System_String* m_PortableTestApp_MyExtensions_Name2_0(t_PortableTestApp_Program* p_e);
t_PortableTestApp_MyEnum m_PortableTestApp_MyEnum__ctor_0();
void m_PortableTestApp_Program_Dispose_0(t_PortableTestApp_Program* self);
t_System_String* m_PortableTestApp_Program_Name2_0(t_PortableTestApp_Program* self);
int32_t m_PortableTestApp_Program_get_MyProp_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_set_MyProp_0(t_PortableTestApp_Program* self, int32_t p_value);
int32_t m_PortableTestApp_Program_get_MyPropStatic_0();
void m_PortableTestApp_Program_set_MyPropStatic_0(int32_t p_value);
void m_PortableTestApp_Program_Foo2_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_Foo_0(t_PortableTestApp_Program* self, t_PortableTestApp_Program* p_p);
uint32_t (__stdcall *m_PortableTestApp_Program_GetLastError_0)();
uint32_t (*m_PortableTestApp_Program_MyInternalExtern_0)(uint32_t);
void m_PortableTestApp_Program__cctor_0();
void m_PortableTestApp_Program_MyDelegateCallbackStatic_0(t_System_String* p_i);
void m_PortableTestApp_Program_MyDelegateCallback_0(t_PortableTestApp_Program* self, t_System_String* p_i);
char16_t m_PortableTestApp_Program_get_Item_0(t_PortableTestApp_Program* self, int32_t p_index);
void m_PortableTestApp_Program_set_Item_0(t_PortableTestApp_Program* self, int32_t p_index, char16_t p_value);
t_PortableTestApp_Program* m_PortableTestApp_Program_op_Explicit_0(int32_t p_value);
int32_t m_PortableTestApp_Program_op_Implicit_0(t_PortableTestApp_Program* p_value);
void m_PortableTestApp_Program_Main_0(t_System_String** p_args);
void m_PortableTestApp_Program_TestLoop_0(int32_t* p_es);
void m_PortableTestApp_Program_FooThrow_0(t_PortableTestApp_MyBaseClass* p_a);
double* m_PortableTestApp_Program_Ya_0();
t_System_String* m_PortableTestApp_Program_GetValue_0(t_System_Object* p_o);
t_PortableTestApp_Program* m_PortableTestApp_Program__ctor_0(t_PortableTestApp_Program* self);
int32_t m_PortableTestApp_Foo_get_i2_0(t_PortableTestApp_Foo* self);
void m_PortableTestApp_Foo_set_i2_0(t_PortableTestApp_Foo* self, int32_t p_value);
int32_t m_PortableTestApp_Foo_get_Item_0(t_PortableTestApp_Foo* self, int32_t p_index);
void m_PortableTestApp_Foo_set_Item_0(t_PortableTestApp_Foo* self, int32_t p_index, int32_t p_value);
t_PortableTestApp_Foo m_PortableTestApp_Foo_Boo_0(t_PortableTestApp_Foo* self);
t_PortableTestApp_Foo m_PortableTestApp_Foo__ctor_0();
t_PortableTestApp_Vec3 m_PortableTestApp_Vec3__ctor_0();
t_PortableTestApp_MyNamespace_MyEnum m_PortableTestApp_MyNamespace_MyEnum__ctor_0();
t_PortableTestApp_Program_MyDelegate* m_PortableTestApp_Program_MyDelegate__ctor_0(t_PortableTestApp_Program_MyDelegate* self, t_System_Object* p_object, intptr_t p_method);
void m_PortableTestApp_Program_MyDelegate_Invoke_0(t_PortableTestApp_Program_MyDelegate* self, t_System_String* p_i);
/* =============================== */
/* Forward decalre Generic Type Methods */
/* =============================== */
t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC m_t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC_GetEnumerator_0(t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC* self);
t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC* m_t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC__ctor_0(t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC* self);
t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC__ctor_0(int32_t* p_collection);
int32_t m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_get_Current_0(t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC* self);
char m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_MoveNext_0(t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC* self);
void m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_Reset_0(t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC* self);
t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC__ctor_1();
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff_0(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self);
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuffStatic_0(char p_value);
t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC__ctor_0(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self);
t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuff_0(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self);
t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuffStatic_0(char p_value);
t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC__ctor_0(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self);
t_PortableTestApp_Program_MyDelegate* m_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer_1(intptr_t p_ptr);
intptr_t m_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_1(t_PortableTestApp_Program_MyDelegate* p_d, intptr_t* p_dPtr);
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff2_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, int32_t p_value);
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff3_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, float p_value2, int32_t p_value, int32_t p_value3);

/* =============================== */
/* Method definitions */
/* =============================== */
void m_PortableTestApp_MyAbstractClass_PortableTestApp_MyInterface_MyVirtMethod_0(t_PortableTestApp_MyAbstractClass* self)
{
}

void m_PortableTestApp_MyAbstractClass_MyFoo_0(t_PortableTestApp_MyAbstractClass* self, int32_t* p_i)
{
	m_System_Console_WriteLine_0(StringLiteral_1);
}

t_PortableTestApp_MyAbstractClass* m_PortableTestApp_MyAbstractClass__ctor_0(t_PortableTestApp_MyAbstractClass* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

void m_PortableTestApp_MyBaseClass_MyFoo2_0(t_PortableTestApp_MyBaseClass* self, int32_t* p_i)
{
}

int32_t m_PortableTestApp_MyBaseClass_MyVirtMethod_0(t_PortableTestApp_MyBaseClass* self)
{
	m_System_Console_WriteLine_0(StringLiteral_2);
	return 0;
}

t_PortableTestApp_MyBaseClass* m_PortableTestApp_MyBaseClass__ctor_0(t_PortableTestApp_MyBaseClass* self)
{
	m_PortableTestApp_MyAbstractClass__ctor_0(self);
	return self;
}

t_System_String* m_PortableTestApp_MyExtensions_Name_0(t_PortableTestApp_MyEnum p_e)
{
	if (p_e == 0)
	{
		return StringLiteral_3;
	}
	return StringLiteral_4;
}

t_System_String* m_PortableTestApp_MyExtensions_Name2_0(t_PortableTestApp_Program* p_e)
{
	return StringLiteral_4;
}

t_PortableTestApp_MyEnum m_PortableTestApp_MyEnum__ctor_0()
{
	t_PortableTestApp_MyEnum selfObj = {0};
	return selfObj;
}

void m_PortableTestApp_Program_Dispose_0(t_PortableTestApp_Program* self)
{
	m_System_Console_WriteLine_0(StringLiteral_5);
}

t_System_String* m_PortableTestApp_Program_Name2_0(t_PortableTestApp_Program* self)
{
	return 0;
}

int32_t m_PortableTestApp_Program_get_MyProp_0(t_PortableTestApp_Program* self)
{
	return self->f__MyProp_1;
}

void m_PortableTestApp_Program_set_MyProp_0(t_PortableTestApp_Program* self, int32_t p_value)
{
	self->f__MyProp_1 = p_value;
}

int32_t m_PortableTestApp_Program_get_MyPropStatic_0()
{
	return f_PortableTestApp_Program__MyPropStatic;
}

void m_PortableTestApp_Program_set_MyPropStatic_0(int32_t p_value)
{
	f_PortableTestApp_Program__MyPropStatic = p_value;
}

void m_PortableTestApp_Program_Foo2_0(t_PortableTestApp_Program* self)
{
	int32_t l_i_0;
	int32_t l_i2_1;
	m_PortableTestApp_Program_set_MyProp_0(self, 123);
	l_i_0 = m_PortableTestApp_Program_get_MyProp_0(self);
	m_PortableTestApp_Program_set_MyPropStatic_0(321);
	l_i2_1 = m_PortableTestApp_Program_get_MyPropStatic_0();
}

void m_PortableTestApp_Program_Foo_0(t_PortableTestApp_Program* self, t_PortableTestApp_Program* p_p)
{
	int32_t l_i2_0;
	m_PortableTestApp_Program_Name2_0(p_p);
	m_PortableTestApp_MyExtensions_Name2_0(p_p);
	self->f__MyAutoProp_k__BackingField_1 = 123;
	l_i2_0 = 55;
	{
		int32_t l_i_1;
		l_i_1 = self->f_abc_1 + l_i2_0;
	}
	{
		int32_t l_i_1;
		l_i_1 = l_i2_0 + p_p->f_abc_1;
	}
}

uint32_t m_PortableTestApp_Program_GetLastError_0_DllNotFoundException()
{
	CS2X_ThreadExceptionObject = m_System_DllNotFoundException__ctor_0(CS2X_AllocType(sizeof(t_System_DllNotFoundException), &rt_System_DllNotFoundException_OBJ));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

uint32_t m_PortableTestApp_Program_MyInternalExtern_0_DllNotFoundException(uint32_t p_value)
{
	CS2X_ThreadExceptionObject = m_System_DllNotFoundException__ctor_0(CS2X_AllocType(sizeof(t_System_DllNotFoundException), &rt_System_DllNotFoundException_OBJ));
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

void m_PortableTestApp_Program__cctor_0()
{
	t_PortableTestApp_MyEnum l_en_0;
	t_System_String* l_e_1;
	uint32_t l_lastError_2;
	f_PortableTestApp_Program_program = m_PortableTestApp_Program__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Program), &rt_PortableTestApp_Program_OBJ));
	f_PortableTestApp_Program__MyAutoPropStatic_k__BackingField = 555;
	l_en_0 = 0;
	l_e_1 = m_PortableTestApp_MyExtensions_Name_0(l_en_0);
	l_lastError_2 = (*m_PortableTestApp_Program_GetLastError_0)();
}

void m_PortableTestApp_Program_MyDelegateCallbackStatic_0(t_System_String* p_i)
{
	m_System_Console_WriteLine_0(p_i);
}

void m_PortableTestApp_Program_MyDelegateCallback_0(t_PortableTestApp_Program* self, t_System_String* p_i)
{
	if (self != 0)
	{
		m_System_Console_WriteLine_0(m_System_String_Concat_0(p_i, StringLiteral_6));
	}
}

char16_t m_PortableTestApp_Program_get_Item_0(t_PortableTestApp_Program* self, int32_t p_index)
{
	return 0x4100;
}

void m_PortableTestApp_Program_set_Item_0(t_PortableTestApp_Program* self, int32_t p_index, char16_t p_value)
{
	self->f_charVal_1 = p_value;
}

t_PortableTestApp_Program* m_PortableTestApp_Program_op_Explicit_0(int32_t p_value)
{
	return 0;
}

int32_t m_PortableTestApp_Program_op_Implicit_0(t_PortableTestApp_Program* p_value)
{
	return 0;
}

void m_PortableTestApp_Program_Main_0(t_System_String** p_args)
{
	t_PortableTestApp_Program_MyDelegate* l_deli_0;
	intptr_t l_funcPtr_1;
	intptr_t l_dPtr_2;
	t_PortableTestApp_Program* l_ppp_3;
	int32_t l_bi_4;
	t_System_String* l_convertString_5;
	uint8_t* l_data_6;
	t_System_String* l_result_7;
	int32_t l_arg_i_8;
	t_PortableTestApp_Program* l_p_9;
	t_PortableTestApp_Program* l_p2_10;
	t_PortableTestApp_MyBaseClass* l_m_11;
	t_PortableTestApp_MyAbstractClass* l_m2_12;
	int32_t l_myI_13;
	int32_t* l_a_14;
	int32_t l_aa_i_15;
	t_PortableTestApp_MyBaseClass* l_i_16;
	uint8_t* l_a2_17;
	intptr_t l_iii_18;
	t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC* l_es_19;
	t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC l_e_en_20;
	float* l_sldkfj_21;
	float* l_sldkfj2_22;
	t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* l_myG_23;
	int32_t l_myGI_24;
	int32_t l_myGI2_25;
	int32_t l_myGI3_26;
	t_PortableTestApp_Vec3 l_myGIS_27;
	jmp_buf CS2X_JMP_LAST_0;
	jmp_buf CS2X_JMP_0;
	int CS2X_IS_JMP_0;
	jmp_buf CS2X_JMP_LAST_1;
	jmp_buf CS2X_JMP_1;
	int CS2X_IS_JMP_1;
	l_deli_0 = m_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer_1(m_intptr_t__ctor_3());
	l_funcPtr_1 = m_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_1(l_deli_0, &l_dPtr_2);
	l_ppp_3 = m_PortableTestApp_Program_op_Explicit_0(0);
	l_bi_4 = m_PortableTestApp_Program_op_Implicit_0(l_ppp_3);
	l_convertString_5 = StringLiteral_7;
	l_data_6 = m_System_Text_Encoding_GetBytes_5(f_System_Text_Encoding__UTF8_k__BackingField, l_convertString_5);
	l_result_7 = m_System_Text_Encoding_GetString_0(f_System_Text_Encoding__UTF8_k__BackingField, l_data_6);
	if (m_System_String_Equals_0(l_result_7, l_convertString_5))
	{
		return;
	}
	for (l_arg_i_8 = 0; l_arg_i_8 != m_System_Array_get_Length_0((t_System_Array*)p_args); ++l_arg_i_8)
	{
		t_System_String* l_arg_9;
		l_arg_9 = ((t_System_String**)(((char*)p_args) + (sizeof(size_t)*2)))[l_arg_i_8];
		if (m_System_String_get_Item_0(l_arg_9, 1) == 0x4100)
		{
			m_System_Console_WriteLine_0(l_arg_9);
		}
	}
	/* using */
	l_p_9 = m_PortableTestApp_Program__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Program), &rt_PortableTestApp_Program_OBJ));
	memcpy(CS2X_JMP_LAST_0, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));
	CS2X_IS_JMP_0 = setjmp(CS2X_JMP_0);
	if (CS2X_IS_JMP_0 == 0)
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_0, sizeof(jmp_buf));
		/* using */
		l_p2_10 = m_PortableTestApp_Program__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_Program), &rt_PortableTestApp_Program_OBJ));
		memcpy(CS2X_JMP_LAST_1, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));
		CS2X_IS_JMP_1 = setjmp(CS2X_JMP_1);
		if (CS2X_IS_JMP_1 == 0)
		{
			memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_1, sizeof(jmp_buf));
			m_PortableTestApp_Program_set_Item_0(l_p_9, 1, 0x4200);
			CS2X_ThreadExceptionObject = m_System_Exception__ctor_0(CS2X_AllocType(sizeof(t_System_Exception), &rt_System_Exception_OBJ));
			longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
			f_PortableTestApp_Program_myDelegate = m_PortableTestApp_Program_MyDelegate__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Program_MyDelegate), &rt_PortableTestApp_Program_MyDelegate_OBJ), l_p_9, &m_PortableTestApp_Program_MyDelegateCallback_0);
			f_PortableTestApp_Program_myDelegate = m_System_Delegate_Combine_0(f_PortableTestApp_Program_myDelegate, m_PortableTestApp_Program_MyDelegate__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Program_MyDelegate), &rt_PortableTestApp_Program_MyDelegate_OBJ), l_p_9, &m_PortableTestApp_Program_MyDelegateCallback_0));
			m_PortableTestApp_Program_MyDelegate_Invoke_0(f_PortableTestApp_Program_myDelegate, StringLiteral_8);
		}
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_1, sizeof(jmp_buf));
		m_PortableTestApp_Program_Dispose_0(l_p2_10);
		if (CS2X_IS_JMP_1 != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw caught exception */
		/* end-using */
	}
	memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
	m_PortableTestApp_Program_Dispose_0(l_p_9);
	if (CS2X_IS_JMP_0 != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw caught exception */
	/* end-using */
	f_PortableTestApp_Program_myDelegate = m_System_Delegate_Combine_0(f_PortableTestApp_Program_myDelegate, m_PortableTestApp_Program_MyDelegate__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Program_MyDelegate), &rt_PortableTestApp_Program_MyDelegate_OBJ), 0, &m_PortableTestApp_Program_MyDelegateCallbackStatic_0));
	f_PortableTestApp_Program_myDelegate = m_System_Delegate_Remove_0(f_PortableTestApp_Program_myDelegate, m_PortableTestApp_Program_MyDelegate__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Program_MyDelegate), &rt_PortableTestApp_Program_MyDelegate_OBJ), 0, &m_PortableTestApp_Program_MyDelegateCallbackStatic_0));
	f_PortableTestApp_Program_myDelegate = m_System_Delegate_Combine_0(f_PortableTestApp_Program_myDelegate, m_PortableTestApp_Program_MyDelegate__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Program_MyDelegate), &rt_PortableTestApp_Program_MyDelegate_OBJ), 0, &m_PortableTestApp_Program_MyDelegateCallbackStatic_0));
	if (f_PortableTestApp_Program_myDelegate != 0)
	{
		m_PortableTestApp_Program_MyDelegate_Invoke_0(f_PortableTestApp_Program_myDelegate, StringLiteral_9);
	}
	f_PortableTestApp_Program_value = StringLiteral_10;
	f_PortableTestApp_Program_myEnum = 0;
	l_m_11 = m_PortableTestApp_MyBaseClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyBaseClass), &rt_PortableTestApp_MyBaseClass_OBJ));
	m_PortableTestApp_MyBaseClass_MyVirtMethod_0(l_m_11);
	l_m2_12 = (t_PortableTestApp_MyAbstractClass*)l_m_11;
	((rt_PortableTestApp_MyAbstractClass*)l_m2_12->CS2X_RuntimeType)->vTable_MyVirtMethod_0(l_m2_12);
	l_myI_13 = 33;
	m_PortableTestApp_MyAbstractClass_MyFoo_0(l_m_11, &l_myI_13);
	((rt_PortableTestApp_MyAbstractClass*)l_m2_12->CS2X_RuntimeType)->vTable_MyFoo2_0(l_m2_12, &f_PortableTestApp_Program_program->f_abc_1);
	m_PortableTestApp_MyAbstractClass_MyFoo_0(l_m_11, &f_PortableTestApp_Program_program->f_abc_1);
	m_PortableTestApp_MyAbstractClass_MyFoo_0(l_m_11, &l_ppp_3->f_abc_1);
	m_PortableTestApp_MyAbstractClass_MyFoo_0(l_m_11, &f_PortableTestApp_Program_abcStatic);
	l_a_14 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 5, &rt_System_Int32___ARRAY_OBJ);
	((int32_t*)(((char*)l_a_14) + (sizeof(size_t)*2)))[0] = 1;
	((int32_t*)(((char*)l_a_14) + (sizeof(size_t)*2)))[1] = 2;
	((int32_t*)(((char*)l_a_14) + (sizeof(size_t)*2)))[2] = 3;
	((int32_t*)(((char*)l_a_14) + (sizeof(size_t)*2)))[3] = 4;
	((int32_t*)(((char*)l_a_14) + (sizeof(size_t)*2)))[4] = 5;
	if (m_System_Object_GetType_0(l_a_14) == (&rt_System_Int32___ARRAY_OBJ))
	{
		m_System_Console_WriteLine_0(m_System_Object_GetType_0(l_a_14)->f__FullName_k__BackingField_1);
	}
	for (l_aa_i_15 = 0; l_aa_i_15 != m_System_Array_get_Length_0((t_System_Array*)l_a_14); ++l_aa_i_15)
	{
		int32_t l_aa_16;
		l_aa_16 = ((int32_t*)(((char*)l_a_14) + (sizeof(size_t)*2)))[l_aa_i_15];
		m_System_Console_Write_0(StringLiteral_11);
		if (l_aa_16 == 88)
		{
			break;
		}
	}
	f_PortableTestApp_Program_i2 = m_PortableTestApp_MyBaseClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyBaseClass), &rt_PortableTestApp_MyBaseClass_OBJ));
	f_PortableTestApp_Program_i2->f_b_2 = 44;
	f_PortableTestApp_Program_i2->f_c_2 = 33;
	f_PortableTestApp_Program_i2->f_d_2 = 66;
	l_i_16 = m_PortableTestApp_MyBaseClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyBaseClass), &rt_PortableTestApp_MyBaseClass_OBJ));
	l_i_16->f_b_2 = 44;
	l_i_16->f_c_2 = 33;
	l_i_16->f_d_2 = 66;
	l_a2_17 = alloca(sizeof(uint8_t) * 3);
	l_a2_17[0] = 1;
	l_a2_17[1] = 2;
	l_a2_17[2] = 3;
	l_iii_18 = m_intptr_t__ctor_3();
	l_iii_18 += 1;
	l_es_19 = m_t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC), &rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ));
	for/*each*/ (l_e_en_20 = m_t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC_GetEnumerator_0(l_es_19); m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_MoveNext_0(&l_e_en_20);)
	{
		int32_t l_e_21;
		l_e_21 = m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_get_Current_0(&l_e_en_20);
		if (l_e_21 == 0)
		{
			m_System_Console_Write_0(StringLiteral_12);
		}
	}
	l_myG_23 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC), &rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ));
	l_myGI_24 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff_0(l_myG_23);
	l_myGI2_25 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff2_1(l_myG_23, 123);
	l_myGI3_26 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff3_1(l_myG_23, 55.0f, 123, 55);
	l_myGIS_27 = m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuffStatic_0(1);
	m_System_Console_WriteLine_0(m_System_Object_GetType_0(l_myG_23)->f__FullName_k__BackingField_1);
	/* try */
	memcpy(CS2X_JMP_LAST_0, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));
	CS2X_IS_JMP_0 = setjmp(CS2X_JMP_0);
	if (CS2X_IS_JMP_0 == 0)
	{
		t_PortableTestApp_MyAbstractClass* l_c_28;
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_0, sizeof(jmp_buf));
		l_c_28 = m_PortableTestApp_MyBaseClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyBaseClass), &rt_PortableTestApp_MyBaseClass_OBJ));
		m_PortableTestApp_Program_FooThrow_0((t_PortableTestApp_MyBaseClass*)CS2X_TestUpCast(l_c_28, &rt_PortableTestApp_MyBaseClass_OBJ));
		/* protected return */
		{
			memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
			return;
		}
	}
	else /* end try */
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
		if (CS2X_IsType(((t_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt_System_NotSupportedException_OBJ)) /* catch */
		{
			t_System_NotSupportedException* l_e_28;
			l_e_28 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_13, l_e_28->f__Message_k__BackingField_1));
		}
		else if (CS2X_IsType(((t_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt_System_Exception_OBJ)) /* catch */
		{
			t_System_Exception* l_e_28;
			l_e_28 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_14, l_e_28->f__Message_k__BackingField_1));
		}
		if (CS2X_ThreadExceptionObject != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw unhandled exception */
	}
	memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
	/* end catch */
}

void m_PortableTestApp_Program_TestLoop_0(int32_t* p_es)
{
	int32_t l_e_i_0;
	int32_t l_e_1;
	for (l_e_i_0 = 0; l_e_i_0 != m_System_Array_get_Length_0((t_System_Array*)p_es); ++l_e_i_0)
	{
		l_e_1 = ((int32_t*)(((char*)p_es) + (sizeof(size_t)*2)))[l_e_i_0];
		m_System_Console_Write_0(StringLiteral_12);
	}
}

void m_PortableTestApp_Program_FooThrow_0(t_PortableTestApp_MyBaseClass* p_a)
{
	CS2X_ThreadExceptionObject = m_System_NotSupportedException__ctor_0(CS2X_AllocType(sizeof(t_System_NotSupportedException), &rt_System_NotSupportedException_OBJ), StringLiteral_15);
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

double* m_PortableTestApp_Program_Ya_0()
{
	return 0;
}

t_System_String* m_PortableTestApp_Program_GetValue_0(t_System_Object* p_o)
{
	return m_System_Object_GetType_0(p_o)->f__FullName_k__BackingField_1;
}

t_PortableTestApp_Program* m_PortableTestApp_Program__ctor_0(t_PortableTestApp_Program* self)
{
	m_System_Object__ctor_0(self);
	self->f_abc_1 = 99;
	return self;
}

int32_t m_PortableTestApp_Foo_get_i2_0(t_PortableTestApp_Foo* self)
{
	return (*self).f_i_2;
}

void m_PortableTestApp_Foo_set_i2_0(t_PortableTestApp_Foo* self, int32_t p_value)
{
	(*self).f_i_2 = p_value;
}

int32_t m_PortableTestApp_Foo_get_Item_0(t_PortableTestApp_Foo* self, int32_t p_index)
{
	return (*self).f_i_2;
}

void m_PortableTestApp_Foo_set_Item_0(t_PortableTestApp_Foo* self, int32_t p_index, int32_t p_value)
{
	(*self).f_i_2 = p_value;
}

t_PortableTestApp_Foo m_PortableTestApp_Foo_Boo_0(t_PortableTestApp_Foo* self)
{
	t_PortableTestApp_Foo l_foo_0;
	t_PortableTestApp_Foo IVALUE_t_PortableTestApp_Foo;
	l_foo_0 = m_PortableTestApp_Foo_Boo_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(&(*self)), &IVALUE_t_PortableTestApp_Foo));
	if (m_PortableTestApp_Foo_get_Item_0(&l_foo_0, 0) == m_PortableTestApp_Foo_get_Item_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(&l_foo_0), &IVALUE_t_PortableTestApp_Foo)), &IVALUE_t_PortableTestApp_Foo), 0) && m_PortableTestApp_Foo_get_Item_0(&(*self), 1) == m_PortableTestApp_Foo_get_Item_0(&(*self), 0))
	{
		return l_foo_0;
	}
	else
	{
		int32_t IVALUE_int32_t;
		if (m_System_String_Equals_0(m_int32_t_ToString_0(CS2X_PValueToIValue_int32_t(m_PortableTestApp_Foo_Boo_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(&(*self)), &IVALUE_t_PortableTestApp_Foo)).f_i_2, &IVALUE_int32_t)), f_System_String_Empty))
		{
			return m_PortableTestApp_Foo_Boo_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(&l_foo_0), &IVALUE_t_PortableTestApp_Foo));
		}
		else
		{
			if (m_System_String_Equals_0(m_int32_t_ToString_0(CS2X_PValueToIValue_int32_t(m_PortableTestApp_Foo_get_i2_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(&(*self)), &IVALUE_t_PortableTestApp_Foo)), &IVALUE_t_PortableTestApp_Foo)), &IVALUE_int32_t)), f_System_String_Empty))
			{
				return l_foo_0;
			}
			else
			{
				return m_PortableTestApp_Foo_Boo_0(CS2X_PValueToIValue_t_PortableTestApp_Foo(m_PortableTestApp_Foo_Boo_0(&l_foo_0), &IVALUE_t_PortableTestApp_Foo));
			}
		}
	}
}

t_PortableTestApp_Foo m_PortableTestApp_Foo__ctor_0()
{
	t_PortableTestApp_Foo selfObj = {0};
	return selfObj;
}

t_PortableTestApp_Vec3 m_PortableTestApp_Vec3__ctor_0()
{
	t_PortableTestApp_Vec3 selfObj = {0};
	return selfObj;
}

t_PortableTestApp_MyNamespace_MyEnum m_PortableTestApp_MyNamespace_MyEnum__ctor_0()
{
	t_PortableTestApp_MyNamespace_MyEnum selfObj = {0};
	return selfObj;
}

t_PortableTestApp_Program_MyDelegate* m_PortableTestApp_Program_MyDelegate__ctor_0(t_PortableTestApp_Program_MyDelegate* self, t_System_Object* p_object, intptr_t p_method)
{
	m_System_MulticastDelegate__ctor_0(self);
	self->f__target_1 = p_object;
	self->f__methodPtr_1 = p_method;
	return self;
}

void m_PortableTestApp_Program_MyDelegate_Invoke_0(t_PortableTestApp_Program_MyDelegate* self, t_System_String* p_i)
{
	if (self->f__target_1 != 0) ((void (__cdecl *)(t_System_Object*, t_System_String*))self->f__methodPtr_1)(self->f__target_1, p_i);
	else ((void (__cdecl *)(t_System_String*))self->f__methodPtr_1)(p_i);
	if (self->f__next_2 != 0) m_PortableTestApp_Program_MyDelegate_Invoke_0(self->f__next_2, p_i);
}


/* =============================== */
/* Generic Type Method definitions */
/* =============================== */
t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC m_t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC_GetEnumerator_0(t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC* self)
{
	t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC l_e_0;
	l_e_0 = m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC__ctor_0(CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 3, &rt_System_Int32___ARRAY_OBJ));
	return l_e_0;
}

t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC* m_t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC__ctor_0(t_PortableTestApp_MyEnumerablePortableTestApp_MyEnumerable_System_Int32_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC__ctor_0(int32_t* p_collection)
{
	t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC selfObj;
	t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC* self = &selfObj;
	(*self).f_i_2 = -1;
	(*self).f_collection_2 = p_collection;
	return selfObj;
}

int32_t m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_get_Current_0(t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC* self)
{
	return ((int32_t*)(((char*)(*self).f_collection_2) + (sizeof(size_t)*2)))[(*self).f_i_2];
}

char m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_MoveNext_0(t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC* self)
{
	++(*self).f_i_2;
	return (*self).f_i_2 < m_System_Array_get_Length_0((*self).f_collection_2);
}

void m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC_Reset_0(t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC* self)
{
	(*self).f_i_2 = -1;
}

t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC m_t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC__ctor_1()
{
	t_PortableTestApp_MyEnumeratorPortableTestApp_MyEnumerator_System_Int32_GENERIC selfObj = {0};
	return selfObj;
}

int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff_0(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self)
{
	return self->f_g_1;
}

int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuffStatic_0(char p_value)
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

t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC__ctor_0(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuff_0(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self)
{
	return self->f_g_1;
}

t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuffStatic_0(char p_value)
{
	if (p_value)
	{
		return m_PortableTestApp_Vec3__ctor_0();
	}
	else
	{
		return m_PortableTestApp_Vec3__ctor_0();
	}
}

t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC__ctor_0(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_PortableTestApp_Program_MyDelegate* m_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointer_1(intptr_t p_ptr)
{
	return m_PortableTestApp_Program_MyDelegate__ctor_0(CS2X_AllocType(sizeof(t_PortableTestApp_Program_MyDelegate), &rt_PortableTestApp_Program_MyDelegate_OBJ), 0, p_ptr);
}

intptr_t m_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_1(t_PortableTestApp_Program_MyDelegate* p_d, intptr_t* p_dPtr)
{
	intptr_t result;
	result = &m_PortableTestApp_Program_MyDelegate_Invoke_0;
	*p_dPtr = (intptr_t)p_d;
	return result;
}

int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff2_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, int32_t p_value)
{
	return p_value;
}

int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff3_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, float p_value2, int32_t p_value, int32_t p_value3)
{
	if ((&rt_System_Single_OBJ) == (&rt_System_Int32_OBJ) && (&rt_System_Int32_OBJ) == (&rt_System_Int32_OBJ))
	{
		return p_value;
	}
	return p_value;
}

/* =============================== */
/* Init Library */
/* =============================== */
void CS2X_InitLib_PortableTestApp()
{
	/* Init references */
	CS2X_InitLib_CS2X_CoreLib();

	/* Init runtime type objects */
	memset(&rt_PortableTestApp_MyAbstractClass_OBJ, 0, sizeof(rt_PortableTestApp_MyAbstractClass));
	rt_PortableTestApp_MyAbstractClass_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyAbstractClass_OBJ;
	rt_PortableTestApp_MyAbstractClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_MyAbstractClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyAbstractClass_METADATA_Name;
	rt_PortableTestApp_MyAbstractClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyAbstractClass_METADATA_FullName;
	memset(&rt_PortableTestApp_MyBaseClass_OBJ, 0, sizeof(rt_PortableTestApp_MyBaseClass));
	rt_PortableTestApp_MyBaseClass_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyBaseClass_OBJ;
	rt_PortableTestApp_MyBaseClass_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_PortableTestApp_MyAbstractClass_OBJ;
	rt_PortableTestApp_MyBaseClass_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyBaseClass_METADATA_Name;
	rt_PortableTestApp_MyBaseClass_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyBaseClass_METADATA_FullName;
	memset(&rt_PortableTestApp_MyExtensions_OBJ, 0, sizeof(rt_PortableTestApp_MyExtensions));
	rt_PortableTestApp_MyExtensions_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyExtensions_OBJ;
	rt_PortableTestApp_MyExtensions_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_MyExtensions_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyExtensions_METADATA_Name;
	rt_PortableTestApp_MyExtensions_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyExtensions_METADATA_FullName;
	memset(&rt_PortableTestApp_MyEnum_OBJ, 0, sizeof(rt_PortableTestApp_MyEnum));
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyEnum_OBJ;
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnum_METADATA_Name;
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnum_METADATA_FullName;
	memset(&rt_PortableTestApp_Program_OBJ, 0, sizeof(rt_PortableTestApp_Program));
	rt_PortableTestApp_Program_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Program_OBJ;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_METADATA_Name;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_METADATA_FullName;
	memset(&rt_PortableTestApp_Foo_OBJ, 0, sizeof(rt_PortableTestApp_Foo));
	rt_PortableTestApp_Foo_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Foo_OBJ;
	rt_PortableTestApp_Foo_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_PortableTestApp_Foo_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Foo_METADATA_Name;
	rt_PortableTestApp_Foo_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Foo_METADATA_FullName;
	memset(&rt_PortableTestApp_Vec3_OBJ, 0, sizeof(rt_PortableTestApp_Vec3));
	rt_PortableTestApp_Vec3_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Vec3_OBJ;
	rt_PortableTestApp_Vec3_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_PortableTestApp_Vec3_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Vec3_METADATA_Name;
	rt_PortableTestApp_Vec3_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Vec3_METADATA_FullName;
	memset(&rt_PortableTestApp_MyNamespace_MyEnum_OBJ, 0, sizeof(rt_PortableTestApp_MyNamespace_MyEnum));
	rt_PortableTestApp_MyNamespace_MyEnum_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyNamespace_MyEnum_OBJ;
	rt_PortableTestApp_MyNamespace_MyEnum_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_PortableTestApp_MyNamespace_MyEnum_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_Name;
	rt_PortableTestApp_MyNamespace_MyEnum_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_FullName;
	memset(&rt_PortableTestApp_Program_MyDelegate_OBJ, 0, sizeof(rt_PortableTestApp_Program_MyDelegate));
	rt_PortableTestApp_Program_MyDelegate_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Program_MyDelegate_OBJ;
	rt_PortableTestApp_Program_MyDelegate_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_MulticastDelegate_OBJ;
	rt_PortableTestApp_Program_MyDelegate_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_MyDelegate_METADATA_Name;
	rt_PortableTestApp_Program_MyDelegate_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_MyDelegate_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_PortableTestApp_MyAbstractClass_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyAbstractClass_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyBaseClass_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyBaseClass_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyExtensions_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyExtensions_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyEnum_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyEnum_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Program_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Program_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Foo_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Foo_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Vec3_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Vec3_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Program_MyDelegate_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Program_MyDelegate_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_PortableTestApp_MyAbstractClass_OBJ.vTable_MyVirtMethod_0 = 0;
	rt_PortableTestApp_MyAbstractClass_OBJ.vTable_MyFoo2_0 = 0;
	rt_PortableTestApp_MyBaseClass_OBJ.vTable_MyVirtMethod_0 = m_PortableTestApp_MyBaseClass_MyVirtMethod_0;
	rt_PortableTestApp_MyBaseClass_OBJ.vTable_MyFoo2_0 = m_PortableTestApp_MyBaseClass_MyFoo2_0;

	/* <<< === Generic Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC));
	rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ;
	rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_METADATA_Name;
	rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC));
	rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_OBJ;
	rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_ValueType_OBJ;
	rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_METADATA_Name;
	rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_MyG_System_Int32_GENERIC));
	rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ;
	rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyG_System_Int32_GENERIC_METADATA_Name;
	rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyG_System_Int32_GENERIC_METADATA_FullName;
	memset(&rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_OBJ, 0, sizeof(rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC));
	rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_OBJ;
	rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_METADATA_Name;
	rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyEnumerable_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyEnumerator_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyG_System_Int32_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyG_System_Int32_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* <<< === Array Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt_System_Int32___ARRAY_OBJ, 0, sizeof(rt_System_Int32___ARRAY));
	rt_System_Int32___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Int32___ARRAY_OBJ;
	rt_System_Int32___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_Int32___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Int32___ARRAY_METADATA_Name;
	rt_System_Int32___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Int32___ARRAY_METADATA_FullName;
	memset(&rt_System_String___ARRAY_OBJ, 0, sizeof(rt_System_String___ARRAY));
	rt_System_String___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_String___ARRAY_OBJ;
	rt_System_String___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_String___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_String___ARRAY_METADATA_Name;
	rt_System_String___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_String___ARRAY_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Int32___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int32___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_String___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_String___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
}

void CS2X_InitDllImport_PortableTestApp()
{
	/* Init references */
	CS2X_InitDllImport_CS2X_CoreLib();

	/* Init this project */
	m_PortableTestApp_Program_GetLastError_0 = GetProcAddress(LoadLibraryW(L"Kernel32.dll"), "GetLastError");
	if (m_PortableTestApp_Program_GetLastError_0 == 0) m_PortableTestApp_Program_GetLastError_0 = &m_PortableTestApp_Program_GetLastError_0_DllNotFoundException;
	m_PortableTestApp_Program_MyInternalExtern_0 = GetProcAddress(GetModuleHandleW(NULL), "MyInternalExtern");
	if (m_PortableTestApp_Program_MyInternalExtern_0 == 0) m_PortableTestApp_Program_MyInternalExtern_0 = &m_PortableTestApp_Program_MyInternalExtern_0_DllNotFoundException;
}

void CS2X_InvokeStaticConstructors_PortableTestApp()
{
	/* Init references */
	CS2X_InvokeStaticConstructors_CS2X_CoreLib();

	/* Init this project */
	m_PortableTestApp_Program__cctor_0();
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
	m_PortableTestApp_Program_Main_0(managedArgs);
	CS2X_GC_Collect();
	return 0;
}
