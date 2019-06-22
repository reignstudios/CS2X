/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#pragma once

typedef struct rt_System_Byte__PTR
{
	t_System_RuntimeType runtimeType;
} rt_System_Byte__PTR;
rt_System_Byte__PTR rt_System_Byte__PTR_OBJ;
int8_t rt_System_Byte__PTR_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,66,0,121,0,116,0,101,0,42,0,0,0};
int8_t rt_System_Byte__PTR_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,66,0,121,0,116,0,101,0,42,0,0,0};

typedef struct rt_System_Int32__PTR
{
	t_System_RuntimeType runtimeType;
} rt_System_Int32__PTR;
rt_System_Int32__PTR rt_System_Int32__PTR_OBJ;
int8_t rt_System_Int32__PTR_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,73,0,110,0,116,0,51,0,50,0,42,0,0,0};
int8_t rt_System_Int32__PTR_METADATA_FullName[40] = {0,0,0,0,0,0,0,0,13,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,73,0,110,0,116,0,51,0,50,0,42,0,0,0};

typedef struct rt_System_Void__PTR
{
	t_System_RuntimeType runtimeType;
} rt_System_Void__PTR;
rt_System_Void__PTR rt_System_Void__PTR_OBJ;
int8_t rt_System_Void__PTR_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,86,0,111,0,105,0,100,0,42,0,0,0};
int8_t rt_System_Void__PTR_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,86,0,111,0,105,0,100,0,42,0,0,0};

typedef struct rt_System_Char__PTR
{
	t_System_RuntimeType runtimeType;
} rt_System_Char__PTR;
rt_System_Char__PTR rt_System_Char__PTR_OBJ;
int8_t rt_System_Char__PTR_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,67,0,104,0,97,0,114,0,42,0,0,0};
int8_t rt_System_Char__PTR_METADATA_FullName[38] = {0,0,0,0,0,0,0,0,12,0,0,0,83,0,121,0,115,0,116,0,101,0,109,0,46,0,67,0,104,0,97,0,114,0,42,0,0,0};


/* =============================== */
/* Init Pointer Types */
/* =============================== */
void CS2X_InitPointerRuntimeTypes()
{
	/* Init runtime type objects */
	memset(&rt_System_Byte__PTR_OBJ, 0, sizeof(rt_System_Byte__PTR));
	rt_System_Byte__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Byte__PTR_OBJ;
	rt_System_Byte__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt_System_Byte__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Byte__PTR_METADATA_Name;
	rt_System_Byte__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Byte__PTR_METADATA_FullName;
	memset(&rt_System_Int32__PTR_OBJ, 0, sizeof(rt_System_Int32__PTR));
	rt_System_Int32__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Int32__PTR_OBJ;
	rt_System_Int32__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt_System_Int32__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Int32__PTR_METADATA_Name;
	rt_System_Int32__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Int32__PTR_METADATA_FullName;
	memset(&rt_System_Void__PTR_OBJ, 0, sizeof(rt_System_Void__PTR));
	rt_System_Void__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Void__PTR_OBJ;
	rt_System_Void__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt_System_Void__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Void__PTR_METADATA_Name;
	rt_System_Void__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Void__PTR_METADATA_FullName;
	memset(&rt_System_Char__PTR_OBJ, 0, sizeof(rt_System_Char__PTR));
	rt_System_Char__PTR_OBJ.runtimeType.CS2X_RuntimeType = &rt_System_Char__PTR_OBJ;
	rt_System_Char__PTR_OBJ.runtimeType.f__BaseType_k__BackingField_1 = 0;
	rt_System_Char__PTR_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)rt_System_Char__PTR_METADATA_Name;
	rt_System_Char__PTR_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)rt_System_Char__PTR_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)rt_System_Byte__PTR_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Byte__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int32__PTR_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Int32__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Void__PTR_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Void__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Char__PTR_METADATA_Name)->CS2X_RuntimeType = &rt_System_String_OBJ;
	((t_System_String*)rt_System_Char__PTR_METADATA_FullName)->CS2X_RuntimeType = &rt_System_String_OBJ;

	/* Init runtime type vtabel */
}
