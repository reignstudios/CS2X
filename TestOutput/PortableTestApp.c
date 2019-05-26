/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#include "CS2X.CoreLib.h"

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t_PortableTestApp_Program t_PortableTestApp_Program;
typedef int32_t t_PortableTestApp_MyNamespace_MyEnum;

/* =============================== */
/* Type definitions */
/* =============================== */
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

#define f_PortableTestApp_MyNamespace_MyEnum_A 0
#define f_PortableTestApp_MyNamespace_MyEnum_B 1
#define f_PortableTestApp_MyNamespace_MyEnum_C 2

/* =============================== */
/* Runtime Types */
/* =============================== */
typedef struct t_PortableTestApp_Program_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_System_Object* self);
} t_PortableTestApp_Program_RTTYPE;
t_PortableTestApp_Program_RTTYPE t_PortableTestApp_Program_RTTYPE_OBJ;
int8_t t_PortableTestApp_Program_RTTYPE_RTTYPE_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0};
int8_t t_PortableTestApp_Program_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,46,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0};

typedef struct t_PortableTestApp_MyNamespace_MyEnum_RTTYPE
{
	t_System_RuntimeType runtimeType;
} t_PortableTestApp_MyNamespace_MyEnum_RTTYPE;
t_PortableTestApp_MyNamespace_MyEnum_RTTYPE t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_OBJ;
int8_t t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0};
int8_t t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_RTTYPE_METADATA_FullName[84] = {0,0,0,0,0,0,0,0,35,0,0,0,46,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,78,0,97,0,109,0,101,0,115,0,112,0,97,0,99,0,101,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0};

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
int32_t m_PortableTestApp_Program_get_MyProp_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_set_MyProp_0(t_PortableTestApp_Program* self, int32_t p_value);
int32_t m_PortableTestApp_Program_get_MyPropStatic_0();
void m_PortableTestApp_Program_set_MyPropStatic_0(int32_t p_value);
void m_PortableTestApp_Program_Foo2_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_Foo_0(t_PortableTestApp_Program* self, t_PortableTestApp_Program* p_p);
void m_PortableTestApp_Program_Main_0();
t_System_String* m_PortableTestApp_Program_GetValue_0(t_System_Object* p_o);
t_PortableTestApp_Program* m_PortableTestApp_Program__ctor_0();
t_PortableTestApp_MyNamespace_MyEnum m_PortableTestApp_MyNamespace_MyEnum__ctor_0();

/* =============================== */
/* Method definitions */
/* =============================== */
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

void m_PortableTestApp_Program_Main_0()
{
	t_System_String* l_v_0;
	f_PortableTestApp_Program__MyAutoPropStatic_k__BackingField = 0;
	l_v_0 = StringLiteral_1;
	l_v_0 = int32_t_RTTYPE_OBJ.vTable_ToString_0(f_PortableTestApp_Program__MyAutoPropStatic_k__BackingField);
	l_v_0 = m_PortableTestApp_Program_GetValue_0(((t_System_Object_RTTYPE*)m_System_Object_GetType_0(l_v_0)->CS2X_RuntimeType)->vTable_ToString_0(m_System_Object_GetType_0(l_v_0)));
	m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_1, f_PortableTestApp_Program_value));
}

t_System_String* m_PortableTestApp_Program_GetValue_0(t_System_Object* p_o)
{
	return ((t_System_Object_RTTYPE*)p_o->CS2X_RuntimeType)->vTable_ToString_0(p_o);
}

t_PortableTestApp_Program* m_PortableTestApp_Program__ctor_0()
{
	t_PortableTestApp_Program* self;
	self = CS2X_GC_NewAtomic(sizeof(t_PortableTestApp_Program));
	return self;
}

t_PortableTestApp_MyNamespace_MyEnum m_PortableTestApp_MyNamespace_MyEnum__ctor_0()
{
	t_PortableTestApp_MyNamespace_MyEnum selfObj = {0};
	return selfObj;
}

/* =============================== */
/* Init Library */
/* =============================== */
void CS2X_InitLib_PortableTestApp()
{
	/* Init references */
	CS2X_InitLib_CS2X_CoreLib();

	/* Init runtime type objects */
	memset(&t_PortableTestApp_Program_RTTYPE_OBJ, 0, sizeof(t_PortableTestApp_Program_RTTYPE));
	t_PortableTestApp_Program_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_PortableTestApp_Program_RTTYPE_OBJ;
	memset(&t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_OBJ, 0, sizeof(t_PortableTestApp_MyNamespace_MyEnum_RTTYPE));
	t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_OBJ;

	/* Init runtime type metadata / string literals */
	((t_System_String*)t_PortableTestApp_Program_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_PortableTestApp_Program_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_PortableTestApp_MyNamespace_MyEnum_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;

	/* Init runtime type vtabel */
	t_PortableTestApp_Program_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
}

void CS2X_InitStringLiterals()
{
	((t_System_String*)StringLiteral_0)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)StringLiteral_1)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
}

/* =============================== */
/* Entry Point */
/* =============================== */
int main()
{
	CS2X_GC_Init();
	CS2X_InitLib_PortableTestApp();
	CS2X_InitStringLiterals();
	m_PortableTestApp_Program_Main_0();
	CS2X_GC_Collect();
	return 0;
}
