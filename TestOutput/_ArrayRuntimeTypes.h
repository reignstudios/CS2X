/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#pragma once

typedef struct rt_System_Int32__
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(int32_t* self);
} rt_System_Int32__;
rt_System_Int32__ rt_System_Int32___OBJ;
int8_t rt_System_Int32___METADATA_Name[28] = {0,0,0,0,0,0,0,0,7,0,0,0,73,0,110,0,116,0,51,0,50,0,91,0,93,0,0,0};
int8_t rt_System_Int32___METADATA_FullName[42] = {0,0,0,0,0,0,0,0,14,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,91,0,93,0,0,0};

void CS2X_InitArrayRuntimeTypes()
{
	/* Init runtime type objects */
	memset(&rt_System_Int32___OBJ, 0, sizeof(rt_System_Int32__));
	rt_System_Int32___OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Int32___OBJ;
	rt_System_Int32___OBJ.runtimeType.f__BaseType_k__BackingField_1 = &rt_System_Array_OBJ;
	rt_System_Int32___OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Int32___METADATA_Name;
	rt_System_Int32___OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Int32___METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Int32___METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int32___METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
	rt_System_Int32___OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
}
