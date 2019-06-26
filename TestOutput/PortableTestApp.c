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
typedef struct t_PortableTestApp_Vec3 t_PortableTestApp_Vec3;
typedef int32_t t_PortableTestApp_MyNamespace_MyEnum;

/* =============================== */
/* Forward declare Generic Types */
/* =============================== */
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
};
int32_t f_PortableTestApp_Program_abcStatic;
int32_t f_PortableTestApp_Program__MyAutoPropStatic_k__BackingField;
int32_t f_PortableTestApp_Program__MyPropStatic;
t_System_String* f_PortableTestApp_Program_value;
t_PortableTestApp_MyEnum f_PortableTestApp_Program_myEnum;
t_PortableTestApp_MyBaseClass* f_PortableTestApp_Program_i2;

struct t_PortableTestApp_Vec3
{
	float f_x_2;
	float f_y_2;
	float f_z_2;
};

#define f_PortableTestApp_MyNamespace_MyEnum_A 0
#define f_PortableTestApp_MyNamespace_MyEnum_B 1
#define f_PortableTestApp_MyNamespace_MyEnum_C 2


/* =============================== */
/* Generic Type definitions */
/* =============================== */
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
	void (*vTable_MyVirtMethod_0)(t_PortableTestApp_MyAbstractClass* self);
} rt_PortableTestApp_MyAbstractClass;
rt_PortableTestApp_MyAbstractClass rt_PortableTestApp_MyAbstractClass_OBJ;
int8_t rt_PortableTestApp_MyAbstractClass_METADATA_Name[44] = {0,0,0,0,0,0,0,0,15,0,0,0,77,0,121,0,65,0,98,0,115,0,116,0,114,0,97,0,99,0,116,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* MyAbstractClass */
int8_t rt_PortableTestApp_MyAbstractClass_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,65,0,98,0,115,0,116,0,114,0,97,0,99,0,116,0,67,0,108,0,97,0,115,0,115,0,0,0}; /* PortableTestApp.MyAbstractClass */

typedef struct rt_PortableTestApp_MyBaseClass
{
	t_System_RuntimeType runtimeType;
	void (*vTable_MyVirtMethod_0)(t_PortableTestApp_MyBaseClass* self);
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

/* =============================== */
/* Generic Runtime Types */
/* =============================== */
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

typedef struct rt_System_Single___ARRAY
{
	t_System_RuntimeType runtimeType;
} rt_System_Single___ARRAY;
rt_System_Single___ARRAY rt_System_Single___ARRAY_OBJ;
int8_t rt_System_Single___ARRAY_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,83,0,105,0,110,0,103,0,108,0,101,0,91,0,93,0,0,0}; /* Single[] */
int8_t rt_System_Single___ARRAY_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,83,0,105,0,110,0,103,0,108,0,101,0,91,0,93,0,0,0}; /* System.Single[] */

typedef struct rt_System_Double___ARRAY
{
	t_System_RuntimeType runtimeType;
} rt_System_Double___ARRAY;
rt_System_Double___ARRAY rt_System_Double___ARRAY_OBJ;
int8_t rt_System_Double___ARRAY_METADATA_Name[30] = {0,0,0,0,0,0,0,0,8,0,0,0,68,0,111,0,117,0,98,0,108,0,101,0,91,0,93,0,0,0}; /* Double[] */
int8_t rt_System_Double___ARRAY_METADATA_FullName[44] = {0,0,0,0,0,0,0,0,15,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,68,0,111,0,117,0,98,0,108,0,101,0,91,0,93,0,0,0}; /* System.Double[] */

/* =============================== */
/* POINTER Runtime Types */
/* =============================== */
typedef struct rt_System_Byte__PTR
{
	t_System_RuntimeType runtimeType;
} rt_System_Byte__PTR;
rt_System_Byte__PTR rt_System_Byte__PTR_OBJ;
int8_t rt_System_Byte__PTR_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,66,0,121,0,116,0,101,0,42,0,0,0}; /* Byte* */
int8_t rt_System_Byte__PTR_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,42,0,0,0}; /* System.Byte* */

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
void m_PortableTestApp_MyAbstractClass_MyFoo_0(t_PortableTestApp_MyAbstractClass* self);
t_PortableTestApp_MyAbstractClass* m_PortableTestApp_MyAbstractClass__ctor_0(t_PortableTestApp_MyAbstractClass* self);
void m_PortableTestApp_MyBaseClass_MyVirtMethod_0(t_PortableTestApp_MyBaseClass* self);
t_PortableTestApp_MyBaseClass* m_PortableTestApp_MyBaseClass__ctor_0(t_PortableTestApp_MyBaseClass* self);
t_System_String* m_PortableTestApp_MyExtensions_Name_0(t_PortableTestApp_MyEnum p_e);
t_System_String* m_PortableTestApp_MyExtensions_Name2_0(t_PortableTestApp_Program* p_e);
t_PortableTestApp_MyEnum m_PortableTestApp_MyEnum__ctor_0();
t_System_String* m_PortableTestApp_Program_Name2_0(t_PortableTestApp_Program* self);
int32_t m_PortableTestApp_Program_get_MyProp_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_set_MyProp_0(t_PortableTestApp_Program* self, int32_t p_value);
int32_t m_PortableTestApp_Program_get_MyPropStatic_0();
void m_PortableTestApp_Program_set_MyPropStatic_0(int32_t p_value);
void m_PortableTestApp_Program_Foo2_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_Foo_0(t_PortableTestApp_Program* self, t_PortableTestApp_Program* p_p);
void m_PortableTestApp_Program__cctor_0();
void m_PortableTestApp_Program_Main_0();
double* m_PortableTestApp_Program_Ya_0();
t_System_String* m_PortableTestApp_Program_GetValue_0(t_System_Object* p_o);
t_PortableTestApp_Program* m_PortableTestApp_Program__ctor_0(t_PortableTestApp_Program* self);
t_PortableTestApp_Vec3 m_PortableTestApp_Vec3__ctor_0();
t_PortableTestApp_MyNamespace_MyEnum m_PortableTestApp_MyNamespace_MyEnum__ctor_0();
/* =============================== */
/* Forward decalre Generic Type Methods */
/* =============================== */
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self);
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuffStatic_1(char p_value);
t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC__ctor_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self);
t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuff_1(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self);
t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuffStatic_1(char p_value);
t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC__ctor_1(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self);
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff2_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, int32_t p_value);
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff3_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, float p_value2, int32_t p_value, int32_t p_value3);

/* =============================== */
/* Method definitions */
/* =============================== */

void m_PortableTestApp_MyAbstractClass_MyFoo_0(t_PortableTestApp_MyAbstractClass* self)
{
	m_System_Console_Write_0(StringLiteral_1);
}

t_PortableTestApp_MyAbstractClass* m_PortableTestApp_MyAbstractClass__ctor_0(t_PortableTestApp_MyAbstractClass* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

void m_PortableTestApp_MyBaseClass_MyVirtMethod_0(t_PortableTestApp_MyBaseClass* self)
{
	m_System_Console_Write_0(StringLiteral_2);
}

t_PortableTestApp_MyBaseClass* m_PortableTestApp_MyBaseClass__ctor_0(t_PortableTestApp_MyBaseClass* self)
{
	m_PortableTestApp_MyAbstractClass__ctor_0(self);
	return self;
}

t_System_String* m_PortableTestApp_MyExtensions_Name_0(t_PortableTestApp_MyEnum p_e)
{
	if (p_e == 0) return StringLiteral_3;
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

void m_PortableTestApp_Program__cctor_0()
{
	t_PortableTestApp_MyEnum l_en_0;
	t_System_String* l_e_1;
	f_PortableTestApp_Program__MyAutoPropStatic_k__BackingField = 555;
	l_en_0 = 0;
	l_e_1 = m_PortableTestApp_MyExtensions_Name_0(l_en_0);
}

void m_PortableTestApp_Program_Main_0()
{
	int32_t* l_a_0;
	int32_t l_aa_i_1;
	t_PortableTestApp_MyBaseClass* l_i_2;
	uint8_t* l_a2_3;
	float* l_sldkfj_4;
	float* l_sldkfj2_5;
	t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* l_myG_6;
	int32_t l_myGI_7;
	int32_t l_myGI2_8;
	int32_t l_myGI3_9;
	t_PortableTestApp_Vec3 l_myGIS_10;
	jmp_buf CS2X_JMP_LAST_0;
	jmp_buf CS2X_JMP_0;
	int CS2X_IS_JMP_0;
	l_a_0 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 5, &rt_System_Int32___ARRAY_OBJ);
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[0] = 1;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[1] = 2;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[2] = 3;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[3] = 4;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[4] = 5;
	if (m_System_Object_GetType_0(l_a_0) == (&rt_System_Int32___ARRAY_OBJ)) m_System_Console_WriteLine_0(m_System_Object_GetType_0(l_a_0)->f__FullName_k__BackingField_1);
	for (l_aa_i_1 = 0; l_aa_i_1 != m_System_Array_get_Length_0((t_System_Array*)l_a_0); ++l_aa_i_1)
	{
		int32_t l_aa_2;
		l_aa_2 = ((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[l_aa_i_1];
		m_System_Console_Write_0(StringLiteral_5);
		if (l_aa_2 == 88) break;
	}
	f_PortableTestApp_Program_i2 = m_PortableTestApp_MyBaseClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyBaseClass), &rt_PortableTestApp_MyBaseClass_OBJ));
	f_PortableTestApp_Program_i2->f_b_2 = 44;
	f_PortableTestApp_Program_i2->f_c_2 = 33;
	f_PortableTestApp_Program_i2->f_d_2 = 66;
	l_i_2 = m_PortableTestApp_MyBaseClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyBaseClass), &rt_PortableTestApp_MyBaseClass_OBJ));
	l_i_2->f_b_2 = 44;
	l_i_2->f_c_2 = 33;
	l_i_2->f_d_2 = 66;
	l_a2_3 = alloca(sizeof(uint8_t) * 3);
	l_a2_3[0] = 1;
	l_a2_3[1] = 2;
	l_a2_3[2] = 3;
	l_myG_6 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC__ctor_1(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC), &rt_PortableTestApp_MyG_System_Int32_GENERIC_OBJ));
	l_myGI_7 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff_1(l_myG_6);
	l_myGI2_8 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff2_1(l_myG_6, 123);
	l_myGI3_9 = m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff3_1(l_myG_6, 55.0f, 123, 55);
	l_myGIS_10 = m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuffStatic_1(1);
	m_System_Console_WriteLine_0(m_System_Object_GetType_0(l_myG_6)->f__FullName_k__BackingField_1);
	/* try */
	memcpy(CS2X_JMP_LAST_0, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));
	CS2X_IS_JMP_0 = setjmp(CS2X_JMP_0);
	if (CS2X_IS_JMP_0 == 0)
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_0, sizeof(jmp_buf));
		m_PortableTestApp_Program_FooThrow_0(m_PortableTestApp_MyBaseClass__ctor_0(CS2X_AllocTypeAtomic(sizeof(t_PortableTestApp_MyBaseClass), &rt_PortableTestApp_MyBaseClass_OBJ)));
	}
	else /* end try */
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
		if (CS2X_IsType(((t_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt_System_NotSupportedException_OBJ)) /* catch */
		{
			t_System_NotSupportedException* l_e_11;
			l_e_11 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_6, l_e_11->f__Message_k__BackingField_1));
		}
		else if (CS2X_IsType(((t_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt_System_Exception_OBJ)) /* catch */
		{
			t_System_Exception* l_e_11;
			l_e_11 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			m_System_Console_WriteLine_0(l_e_11->f__Message_k__BackingField_1);
		}
		if (CS2X_ThreadExceptionObject != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw unhandled exception */
	} /* end catch */
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


/* =============================== */
/* Generic Type Method definitions */
/* =============================== */
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self)
{
	return self->f_g_1;
}

int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuffStatic_1(char p_value)
{
	if (p_value) return 0;
	else return 0;
}

t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC__ctor_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuff_1(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self)
{
	return self->f_g_1;
}

t_PortableTestApp_Vec3 m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC_DoStuffStatic_1(char p_value)
{
	if (p_value) return m_PortableTestApp_Vec3__ctor_0();
	else return m_PortableTestApp_Vec3__ctor_0();
}

t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* m_t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC__ctor_1(t_PortableTestApp_MyGPortableTestApp_MyG_PortableTestApp_Vec3_GENERIC* self)
{
	m_System_Object__ctor_0(self);
	return self;
}

int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff2_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, int32_t p_value)
{
	return p_value;
}
int32_t m_t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC_DoStuff3_1(t_PortableTestApp_MyGPortableTestApp_MyG_System_Int32_GENERIC* self, float p_value2, int32_t p_value, int32_t p_value3)
{
	if ((&rt_System_Single_OBJ) == (&rt_System_Int32_OBJ) && (&rt_System_Int32_OBJ) == (&rt_System_Int32_OBJ)) return p_value;
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
	((t_System_String*)rt_PortableTestApp_Vec3_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Vec3_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_PortableTestApp_MyAbstractClass_OBJ.vTable_MyVirtMethod_0 = 0;
	rt_PortableTestApp_MyBaseClass_OBJ.vTable_MyVirtMethod_0 = m_PortableTestApp_MyBaseClass_MyVirtMethod_0;

	/* <<< === Generic Runtime Types === >>> */
	/* Init runtime type objects */
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
	memset(&rt_System_Single___ARRAY_OBJ, 0, sizeof(rt_System_Single___ARRAY));
	rt_System_Single___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Single___ARRAY_OBJ;
	rt_System_Single___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_Single___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Single___ARRAY_METADATA_Name;
	rt_System_Single___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Single___ARRAY_METADATA_FullName;
	memset(&rt_System_Double___ARRAY_OBJ, 0, sizeof(rt_System_Double___ARRAY));
	rt_System_Double___ARRAY_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Double___ARRAY_OBJ;
	rt_System_Double___ARRAY_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_Double___ARRAY_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Double___ARRAY_METADATA_Name;
	rt_System_Double___ARRAY_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Double___ARRAY_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Int32___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int32___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Single___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Single___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Double___ARRAY_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Double___ARRAY_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* <<< === Pointer Runtime Types === >>> */
	/* Init runtime type objects */
	memset(&rt_System_Byte__PTR_OBJ, 0, sizeof(rt_System_Byte__PTR));
	rt_System_Byte__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Byte__PTR_OBJ;
	rt_System_Byte__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt_System_Byte__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Byte__PTR_METADATA_Name;
	rt_System_Byte__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Byte__PTR_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Byte__PTR_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Byte__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
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
}

/* =============================== */
/* Entry Point */
/* =============================== */
int main()
{
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
	CS2X_InvokeStaticConstructors_PortableTestApp();
	m_PortableTestApp_Program_Main_0();
	CS2X_GC_Collect();
	return 0;
}
