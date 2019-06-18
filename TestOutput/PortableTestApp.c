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
typedef struct t_PortableTestApp_Program t_PortableTestApp_Program;
typedef int32_t t_PortableTestApp_MyEnum;
typedef int32_t t_PortableTestApp_MyNamespace_MyEnum;

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

#define f_PortableTestApp_MyNamespace_MyEnum_A 0
#define f_PortableTestApp_MyNamespace_MyEnum_B 1
#define f_PortableTestApp_MyNamespace_MyEnum_C 2

/* =============================== */
/* Runtime Types */
/* =============================== */
typedef struct rt_PortableTestApp_MyAbstractClass
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_PortableTestApp_MyAbstractClass* self);
	void (*vTable_MyVirtMethod_0)(t_PortableTestApp_MyAbstractClass* self);
} rt_PortableTestApp_MyAbstractClass;
rt_PortableTestApp_MyAbstractClass rt_PortableTestApp_MyAbstractClass_OBJ;
int8_t rt_PortableTestApp_MyAbstractClass_METADATA_Name[44] = {0,0,0,0,0,0,0,0,15,0,0,0,77,0,121,0,65,0,98,0,115,0,116,0,114,0,97,0,99,0,116,0,67,0,108,0,97,0,115,0,115,0,0,0};
int8_t rt_PortableTestApp_MyAbstractClass_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,65,0,98,0,115,0,116,0,114,0,97,0,99,0,116,0,67,0,108,0,97,0,115,0,115,0,0,0};

typedef struct rt_PortableTestApp_MyBaseClass
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_PortableTestApp_MyBaseClass* self);
	void (*vTable_MyVirtMethod_0)(t_PortableTestApp_MyBaseClass* self);
} rt_PortableTestApp_MyBaseClass;
rt_PortableTestApp_MyBaseClass rt_PortableTestApp_MyBaseClass_OBJ;
int8_t rt_PortableTestApp_MyBaseClass_METADATA_Name[36] = {0,0,0,0,0,0,0,0,11,0,0,0,77,0,121,0,66,0,97,0,115,0,101,0,67,0,108,0,97,0,115,0,115,0,0,0};
int8_t rt_PortableTestApp_MyBaseClass_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,66,0,97,0,115,0,101,0,67,0,108,0,97,0,115,0,115,0,0,0};

typedef struct rt_PortableTestApp_MyExtensions
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_PortableTestApp_MyExtensions* self);
} rt_PortableTestApp_MyExtensions;
rt_PortableTestApp_MyExtensions rt_PortableTestApp_MyExtensions_OBJ;
int8_t rt_PortableTestApp_MyExtensions_METADATA_Name[38] = {0,0,0,0,0,0,0,0,12,0,0,0,77,0,121,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,115,0,0,0};
int8_t rt_PortableTestApp_MyExtensions_METADATA_FullName[70] = {0,0,0,0,0,0,0,0,28,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,69,0,120,0,116,0,101,0,110,0,115,0,105,0,111,0,110,0,115,0,0,0};

typedef struct rt_PortableTestApp_Program
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_PortableTestApp_Program* self);
} rt_PortableTestApp_Program;
rt_PortableTestApp_Program rt_PortableTestApp_Program_OBJ;
int8_t rt_PortableTestApp_Program_METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0};
int8_t rt_PortableTestApp_Program_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,80,0,114,0,111,0,103,0,114,0,97,0,109,0,0,0};

typedef struct rt_PortableTestApp_MyEnum
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_PortableTestApp_MyEnum* self);
} rt_PortableTestApp_MyEnum;
rt_PortableTestApp_MyEnum rt_PortableTestApp_MyEnum_OBJ;
int8_t rt_PortableTestApp_MyEnum_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0};
int8_t rt_PortableTestApp_MyEnum_METADATA_FullName[58] = {0,0,0,0,0,0,0,0,22,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0};

typedef struct rt_PortableTestApp_MyNamespace_MyEnum
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_PortableTestApp_MyNamespace_MyEnum* self);
} rt_PortableTestApp_MyNamespace_MyEnum;
rt_PortableTestApp_MyNamespace_MyEnum rt_PortableTestApp_MyNamespace_MyEnum_OBJ;
int8_t rt_PortableTestApp_MyNamespace_MyEnum_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0};
int8_t rt_PortableTestApp_MyNamespace_MyEnum_METADATA_FullName[82] = {0,0,0,0,0,0,0,0,34,0,0,0,80,0,111,0,114,0,116,0,97,0,98,0,108,0,101,0,84,0,101,0,115,0,116,0,65,0,112,0,112,0,46,0,77,0,121,0,78,0,97,0,109,0,101,0,115,0,112,0,97,0,99,0,101,0,46,0,77,0,121,0,69,0,110,0,117,0,109,0,0,0};

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
void m_PortableTestApp_MyAbstractClass_MyFoo_0(t_PortableTestApp_MyAbstractClass* self);
t_PortableTestApp_MyAbstractClass* m_PortableTestApp_MyAbstractClass__ctor_0(t_PortableTestApp_MyAbstractClass* self);
void m_PortableTestApp_MyBaseClass_MyVirtMethod_0(t_PortableTestApp_MyBaseClass* self);
t_PortableTestApp_MyBaseClass* m_PortableTestApp_MyBaseClass__ctor_0(t_PortableTestApp_MyBaseClass* self);
t_System_String* m_PortableTestApp_MyExtensions_Name_0(t_PortableTestApp_MyEnum p_e);
t_System_String* m_PortableTestApp_MyExtensions_Name2_0(t_PortableTestApp_Program* p_e);
t_System_String* m_PortableTestApp_Program_Name2_0(t_PortableTestApp_Program* self);
int32_t m_PortableTestApp_Program_get_MyProp_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_set_MyProp_0(t_PortableTestApp_Program* self, int32_t p_value);
int32_t m_PortableTestApp_Program_get_MyPropStatic_0();
void m_PortableTestApp_Program_set_MyPropStatic_0(int32_t p_value);
void m_PortableTestApp_Program_Foo2_0(t_PortableTestApp_Program* self);
void m_PortableTestApp_Program_Foo_0(t_PortableTestApp_Program* self, t_PortableTestApp_Program* p_p);
void m_PortableTestApp_Program__cctor_0();
void m_PortableTestApp_Program_Main_0();
void m_PortableTestApp_Program_FooThrow_0();
int32_t* m_PortableTestApp_Program_Ya_0();
t_System_String* m_PortableTestApp_Program_GetValue_0(t_System_Object* p_o);
t_PortableTestApp_Program* m_PortableTestApp_Program__ctor_0(t_PortableTestApp_Program* self);
t_PortableTestApp_MyEnum m_PortableTestApp_MyEnum__ctor_0();
t_PortableTestApp_MyNamespace_MyEnum m_PortableTestApp_MyNamespace_MyEnum__ctor_0();

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
	jmp_buf CS2X_JMP_LAST_0;
	jmp_buf CS2X_JMP_0;
	int CS2X_IS_JMP_0;
	l_a_0 = CS2X_AllocArrayTypeAtomic(sizeof(int32_t), 5, &rt_System_Int32___OBJ);
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[0] = 1;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[1] = 2;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[2] = 3;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[3] = 4;
	((int32_t*)(((char*)l_a_0) + (sizeof(size_t)*2)))[4] = 5;
	if (m_System_Object_GetType_0(l_a_0) == (&rt_System_Int32___OBJ)) m_System_Console_WriteLine_0(m_System_Object_GetType_0(l_a_0)->f__FullName_k__BackingField_1);
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
	/* try */
	memcpy(CS2X_JMP_LAST_0, CS2X_ThreadExceptionJmpBuff, sizeof(jmp_buf));
	CS2X_IS_JMP_0 = setjmp(CS2X_JMP_0);
	if (CS2X_IS_JMP_0 == 0)
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_0, sizeof(jmp_buf));
		m_PortableTestApp_Program_FooThrow_0();
	}
	else /* end try */
	{
		memcpy(CS2X_ThreadExceptionJmpBuff, CS2X_JMP_LAST_0, sizeof(jmp_buf));
		if (CS2X_IsType(((t_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt_System_NotSupportedException_OBJ)) /* catch */
		{
			t_System_NotSupportedException* l_e_4;
			l_e_4 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			m_System_Console_WriteLine_0(m_System_String_Concat_0(StringLiteral_6, l_e_4->f__Message_k__BackingField_1));
		}
		else if (CS2X_IsType(((t_System_Object*)CS2X_ThreadExceptionObject)->CS2X_RuntimeType, &rt_System_Exception_OBJ)) /* catch */
		{
			t_System_Exception* l_e_4;
			l_e_4 = CS2X_ThreadExceptionObject;
			CS2X_ThreadExceptionObject = 0;
			m_System_Console_WriteLine_0(l_e_4->f__Message_k__BackingField_1);
		}
		if (CS2X_ThreadExceptionObject != 0) longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw unhandled exception */
	} /* end catch */
}

void m_PortableTestApp_Program_FooThrow_0()
{
	CS2X_ThreadExceptionObject = m_System_NotSupportedException__ctor_0(CS2X_AllocType(sizeof(t_System_NotSupportedException), &rt_System_NotSupportedException_OBJ), StringLiteral_7);
	longjmp(CS2X_ThreadExceptionJmpBuff, 1); /* throw exception */
}

int32_t* m_PortableTestApp_Program_Ya_0()
{
	return 0;
}

t_System_String* m_PortableTestApp_Program_GetValue_0(t_System_Object* p_o)
{
	return ((rt_System_Object*)p_o->CS2X_RuntimeType)->vTable_ToString_0(p_o);
}

t_PortableTestApp_Program* m_PortableTestApp_Program__ctor_0(t_PortableTestApp_Program* self)
{
	m_System_Object__ctor_0(self);
	self->f_abc_1 = 99;
	return self;
}

t_PortableTestApp_MyEnum m_PortableTestApp_MyEnum__ctor_0()
{
	t_PortableTestApp_MyEnum selfObj = {0};
	return selfObj;
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
	memset(&rt_PortableTestApp_Program_OBJ, 0, sizeof(rt_PortableTestApp_Program));
	rt_PortableTestApp_Program_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_Program_OBJ;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Object_OBJ;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_METADATA_Name;
	rt_PortableTestApp_Program_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_Program_METADATA_FullName;
	memset(&rt_PortableTestApp_MyEnum_OBJ, 0, sizeof(rt_PortableTestApp_MyEnum));
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.CS2X_RuntimeType = &rt_PortableTestApp_MyEnum_OBJ;
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Enum_OBJ;
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnum_METADATA_Name;
	rt_PortableTestApp_MyEnum_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_PortableTestApp_MyEnum_METADATA_FullName;
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
	((t_System_String*)rt_PortableTestApp_Program_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_Program_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyEnum_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyEnum_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_PortableTestApp_MyNamespace_MyEnum_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_PortableTestApp_MyAbstractClass_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	rt_PortableTestApp_MyAbstractClass_OBJ.vTable_MyVirtMethod_0 = 0;
	rt_PortableTestApp_MyBaseClass_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	rt_PortableTestApp_MyBaseClass_OBJ.vTable_MyVirtMethod_0 = m_PortableTestApp_MyBaseClass_MyVirtMethod_0;
	rt_PortableTestApp_MyExtensions_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	rt_PortableTestApp_Program_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	rt_PortableTestApp_MyEnum_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	rt_PortableTestApp_MyNamespace_MyEnum_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
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
	CS2X_InitArrayRuntimeTypes();
	CS2X_InvokeStaticConstructors_PortableTestApp();
	m_PortableTestApp_Program_Main_0();
	CS2X_GC_Collect();
	return 0;
}
