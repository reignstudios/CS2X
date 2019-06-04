/* ############################### */
/* Generated with CS2X v0.1.0 */
/* ############################### */
#include "CS2X.CoreLib.h"

/* =============================== */
/* Forward declare Types */
/* =============================== */
typedef struct t_RayTraceBenchmark_Sphere t_RayTraceBenchmark_Sphere;
typedef struct t_RayTraceBenchmark_Light t_RayTraceBenchmark_Light;
typedef struct t_RayTraceBenchmark_Scene t_RayTraceBenchmark_Scene;
typedef struct t_RayTraceBenchmark_Benchmark t_RayTraceBenchmark_Benchmark;
typedef struct t_RayTraceBenchmark_BenchmarkMain t_RayTraceBenchmark_BenchmarkMain;
typedef struct t_RayTraceBenchmark_Vec3 t_RayTraceBenchmark_Vec3;
typedef struct t_RayTraceBenchmark_Ray t_RayTraceBenchmark_Ray;

/* =============================== */
/* Type definitions */
/* =============================== */
struct t_RayTraceBenchmark_Vec3
{
	float f_X_2;
	float f_Y_2;
	float f_Z_2;
};
t_RayTraceBenchmark_Vec3 f_RayTraceBenchmark_Vec3_Zero;

struct t_RayTraceBenchmark_Sphere
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_RayTraceBenchmark_Vec3 f_Center_1;
	float f_Radius_1;
	t_RayTraceBenchmark_Vec3 f_Color_1;
	float f_Reflection_1;
	float f_Transparency_1;
};

struct t_RayTraceBenchmark_Light
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_RayTraceBenchmark_Vec3 f_Position_1;
	t_RayTraceBenchmark_Vec3 f_Color_1;
};

struct t_RayTraceBenchmark_Scene
{
	t_System_RuntimeType* CS2X_RuntimeType;
	t_RayTraceBenchmark_Sphere** f_Objects_1;
	t_RayTraceBenchmark_Light** f_Lights_1;
};

struct t_RayTraceBenchmark_Benchmark
{
	t_System_RuntimeType* CS2X_RuntimeType;
};
int32_t f_RayTraceBenchmark_Benchmark_Width;
int32_t f_RayTraceBenchmark_Benchmark_Height;
float f_RayTraceBenchmark_Benchmark_fov;
int32_t f_RayTraceBenchmark_Benchmark_maxDepth;
float f_RayTraceBenchmark_Benchmark_PI;

struct t_RayTraceBenchmark_BenchmarkMain
{
	t_System_RuntimeType* CS2X_RuntimeType;
};

struct t_RayTraceBenchmark_Ray
{
	t_RayTraceBenchmark_Vec3 f_Org_2;
	t_RayTraceBenchmark_Vec3 f_Dir_2;
};

/* =============================== */
/* Runtime Types */
/* =============================== */
typedef struct t_RayTraceBenchmark_Sphere_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_RayTraceBenchmark_Sphere* self);
} t_RayTraceBenchmark_Sphere_RTTYPE;
t_RayTraceBenchmark_Sphere_RTTYPE t_RayTraceBenchmark_Sphere_RTTYPE_OBJ;
int8_t t_RayTraceBenchmark_Sphere_RTTYPE_RTTYPE_METADATA_Name[26] = {0,0,0,0,0,0,0,0,6,0,0,0,83,0,112,0,104,0,101,0,114,0,101,0,0,0};
int8_t t_RayTraceBenchmark_Sphere_RTTYPE_RTTYPE_METADATA_FullName[62] = {0,0,0,0,0,0,0,0,24,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,83,0,112,0,104,0,101,0,114,0,101,0,0,0};

typedef struct t_RayTraceBenchmark_Light_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_RayTraceBenchmark_Light* self);
} t_RayTraceBenchmark_Light_RTTYPE;
t_RayTraceBenchmark_Light_RTTYPE t_RayTraceBenchmark_Light_RTTYPE_OBJ;
int8_t t_RayTraceBenchmark_Light_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,76,0,105,0,103,0,104,0,116,0,0,0};
int8_t t_RayTraceBenchmark_Light_RTTYPE_RTTYPE_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,76,0,105,0,103,0,104,0,116,0,0,0};

typedef struct t_RayTraceBenchmark_Scene_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_RayTraceBenchmark_Scene* self);
} t_RayTraceBenchmark_Scene_RTTYPE;
t_RayTraceBenchmark_Scene_RTTYPE t_RayTraceBenchmark_Scene_RTTYPE_OBJ;
int8_t t_RayTraceBenchmark_Scene_RTTYPE_RTTYPE_METADATA_Name[24] = {0,0,0,0,0,0,0,0,5,0,0,0,83,0,99,0,101,0,110,0,101,0,0,0};
int8_t t_RayTraceBenchmark_Scene_RTTYPE_RTTYPE_METADATA_FullName[60] = {0,0,0,0,0,0,0,0,23,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,83,0,99,0,101,0,110,0,101,0,0,0};

typedef struct t_RayTraceBenchmark_Benchmark_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_RayTraceBenchmark_Benchmark* self);
} t_RayTraceBenchmark_Benchmark_RTTYPE;
t_RayTraceBenchmark_Benchmark_RTTYPE t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ;
int8_t t_RayTraceBenchmark_Benchmark_RTTYPE_RTTYPE_METADATA_Name[32] = {0,0,0,0,0,0,0,0,9,0,0,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,0,0};
int8_t t_RayTraceBenchmark_Benchmark_RTTYPE_RTTYPE_METADATA_FullName[68] = {0,0,0,0,0,0,0,0,27,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,0,0};

typedef struct t_RayTraceBenchmark_BenchmarkMain_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_RayTraceBenchmark_BenchmarkMain* self);
} t_RayTraceBenchmark_BenchmarkMain_RTTYPE;
t_RayTraceBenchmark_BenchmarkMain_RTTYPE t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ;
int8_t t_RayTraceBenchmark_BenchmarkMain_RTTYPE_RTTYPE_METADATA_Name[40] = {0,0,0,0,0,0,0,0,13,0,0,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,77,0,97,0,105,0,110,0,0,0};
int8_t t_RayTraceBenchmark_BenchmarkMain_RTTYPE_RTTYPE_METADATA_FullName[76] = {0,0,0,0,0,0,0,0,31,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,77,0,97,0,105,0,110,0,0,0};

typedef struct t_RayTraceBenchmark_Vec3_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_RayTraceBenchmark_Vec3* self);
} t_RayTraceBenchmark_Vec3_RTTYPE;
t_RayTraceBenchmark_Vec3_RTTYPE t_RayTraceBenchmark_Vec3_RTTYPE_OBJ;
int8_t t_RayTraceBenchmark_Vec3_RTTYPE_RTTYPE_METADATA_Name[22] = {0,0,0,0,0,0,0,0,4,0,0,0,86,0,101,0,99,0,51,0,0,0};
int8_t t_RayTraceBenchmark_Vec3_RTTYPE_RTTYPE_METADATA_FullName[58] = {0,0,0,0,0,0,0,0,22,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,86,0,101,0,99,0,51,0,0,0};

typedef struct t_RayTraceBenchmark_Ray_RTTYPE
{
	t_System_RuntimeType runtimeType;
	t_System_String* (*vTable_ToString_0)(t_RayTraceBenchmark_Ray* self);
} t_RayTraceBenchmark_Ray_RTTYPE;
t_RayTraceBenchmark_Ray_RTTYPE t_RayTraceBenchmark_Ray_RTTYPE_OBJ;
int8_t t_RayTraceBenchmark_Ray_RTTYPE_RTTYPE_METADATA_Name[20] = {0,0,0,0,0,0,0,0,3,0,0,0,82,0,97,0,121,0,0,0};
int8_t t_RayTraceBenchmark_Ray_RTTYPE_RTTYPE_METADATA_FullName[56] = {0,0,0,0,0,0,0,0,21,0,0,0,82,0,97,0,121,0,84,0,114,0,97,0,99,0,101,0,66,0,101,0,110,0,99,0,104,0,109,0,97,0,114,0,107,0,46,0,82,0,97,0,121,0,0,0};

/* =============================== */
/* Forward decalre Methods */
/* =============================== */
t_RayTraceBenchmark_Sphere* m_RayTraceBenchmark_Sphere__ctor_0(t_RayTraceBenchmark_Vec3 p_c, float p_r, t_RayTraceBenchmark_Vec3 p_clr, float p_refl, float p_trans);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Sphere_Normal_0(t_RayTraceBenchmark_Sphere* p_sphere, t_RayTraceBenchmark_Vec3 p_pos);
char m_RayTraceBenchmark_Sphere_Intersect_0(t_RayTraceBenchmark_Sphere* p_sphere, t_RayTraceBenchmark_Ray p_ray);
char m_RayTraceBenchmark_Sphere_Intersect_1(t_RayTraceBenchmark_Sphere* p_sphere, t_RayTraceBenchmark_Ray p_ray, float* p_distance);
t_RayTraceBenchmark_Light* m_RayTraceBenchmark_Light__ctor_0(t_RayTraceBenchmark_Vec3 p_position, t_RayTraceBenchmark_Vec3 p_color);
t_RayTraceBenchmark_Scene* m_RayTraceBenchmark_Scene__ctor_0();
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Benchmark_trace_0(t_RayTraceBenchmark_Ray p_ray, t_RayTraceBenchmark_Scene* p_scene, int32_t p_depth);
uint8_t* m_RayTraceBenchmark_Benchmark_Render_0(t_RayTraceBenchmark_Scene* p_scene, uint8_t* p_pixels);
void m_RayTraceBenchmark_BenchmarkMain_Main_0();
void m_RayTraceBenchmark_BenchmarkMain_Start_0();
uint8_t* m_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRA_0(uint8_t* p_rgb);
int32_t* m_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRAInt_0(uint8_t* p_rgb);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3__ctor_0(float p_x, float p_y, float p_z);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Addition_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Subtraction_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_UnaryNegation_0(t_RayTraceBenchmark_Vec3 p_p1);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Multiply_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Multiply_1(t_RayTraceBenchmark_Vec3 p_p1, float p_p2);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Multiply_2(float p_p1, t_RayTraceBenchmark_Vec3 p_p2);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Division_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Division_1(t_RayTraceBenchmark_Vec3 p_p1, float p_p2);
float m_RayTraceBenchmark_Vec3_Dot_0(t_RayTraceBenchmark_Vec3 p_v1, t_RayTraceBenchmark_Vec3 p_v2);
float m_RayTraceBenchmark_Vec3_Magnitude_0(t_RayTraceBenchmark_Vec3 p_v);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_Normalize_0(t_RayTraceBenchmark_Vec3 p_v);
t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3__ctor_1();
void m_RayTraceBenchmark_Vec3__cctor_0();
t_RayTraceBenchmark_Ray m_RayTraceBenchmark_Ray__ctor_0();

/* =============================== */
/* Method definitions */
/* =============================== */
t_RayTraceBenchmark_Sphere* m_RayTraceBenchmark_Sphere__ctor_0(t_RayTraceBenchmark_Vec3 p_c, float p_r, t_RayTraceBenchmark_Vec3 p_clr, float p_refl, float p_trans)
{
	t_RayTraceBenchmark_Sphere* self;
	self = CS2X_GC_NewAtomic(sizeof(t_RayTraceBenchmark_Sphere));
	self->CS2X_RuntimeType = &t_RayTraceBenchmark_Sphere_RTTYPE_OBJ;
	self->f_Center_1 = p_c;
	self->f_Radius_1 = p_r;
	self->f_Color_1 = p_clr;
	self->f_Reflection_1 = p_refl;
	self->f_Transparency_1 = p_trans;
	return self;
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Sphere_Normal_0(t_RayTraceBenchmark_Sphere* p_sphere, t_RayTraceBenchmark_Vec3 p_pos)
{
	return m_RayTraceBenchmark_Vec3_Normalize_0(m_RayTraceBenchmark_Vec3_op_Subtraction_0(p_pos, p_sphere->f_Center_1));
}

char m_RayTraceBenchmark_Sphere_Intersect_0(t_RayTraceBenchmark_Sphere* p_sphere, t_RayTraceBenchmark_Ray p_ray)
{
	t_RayTraceBenchmark_Vec3 l_l_0;
	float l_a_1;
	float l_b2_2;
	float l_r2_3;
	l_l_0 = m_RayTraceBenchmark_Vec3_op_Subtraction_0(p_sphere->f_Center_1, p_ray.f_Org_2);
	l_a_1 = m_RayTraceBenchmark_Vec3_Dot_0(l_l_0, p_ray.f_Dir_2);
	if (l_a_1 < 0) return 0;
	l_b2_2 = m_RayTraceBenchmark_Vec3_Dot_0(l_l_0, l_l_0) - (l_a_1 * l_a_1);
	l_r2_3 = p_sphere->f_Radius_1 * p_sphere->f_Radius_1;
	if (l_b2_2 > l_r2_3) return 0;
	return 1;
}

char m_RayTraceBenchmark_Sphere_Intersect_1(t_RayTraceBenchmark_Sphere* p_sphere, t_RayTraceBenchmark_Ray p_ray, float* p_distance)
{
	t_RayTraceBenchmark_Vec3 l_l_0;
	float l_a_1;
	float l_b2_2;
	float l_r2_3;
	float l_c_4;
	float l_near_5;
	float l_far_6;
	(*p_distance) = 0;
	l_l_0 = m_RayTraceBenchmark_Vec3_op_Subtraction_0(p_sphere->f_Center_1, p_ray.f_Org_2);
	l_a_1 = m_RayTraceBenchmark_Vec3_Dot_0(l_l_0, p_ray.f_Dir_2);
	if (l_a_1 < 0) return 0;
	l_b2_2 = m_RayTraceBenchmark_Vec3_Dot_0(l_l_0, l_l_0) - (l_a_1 * l_a_1);
	l_r2_3 = p_sphere->f_Radius_1 * p_sphere->f_Radius_1;
	if (l_b2_2 > l_r2_3) return 0;
	l_c_4 = sqrtf(l_r2_3 - l_b2_2);
	l_near_5 = l_a_1 - l_c_4;
	l_far_6 = l_a_1 + l_c_4;
	(*p_distance) = (l_near_5 < 0) ? l_far_6 : l_near_5;
	return 1;
}

t_RayTraceBenchmark_Light* m_RayTraceBenchmark_Light__ctor_0(t_RayTraceBenchmark_Vec3 p_position, t_RayTraceBenchmark_Vec3 p_color)
{
	t_RayTraceBenchmark_Light* self;
	self = CS2X_GC_NewAtomic(sizeof(t_RayTraceBenchmark_Light));
	self->CS2X_RuntimeType = &t_RayTraceBenchmark_Light_RTTYPE_OBJ;
	self->f_Position_1 = p_position;
	self->f_Color_1 = p_color;
	return self;
}

t_RayTraceBenchmark_Scene* m_RayTraceBenchmark_Scene__ctor_0()
{
	t_RayTraceBenchmark_Scene* self;
	self = CS2X_GC_New(sizeof(t_RayTraceBenchmark_Scene));
	self->CS2X_RuntimeType = &t_RayTraceBenchmark_Scene_RTTYPE_OBJ;
	return self;
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Benchmark_trace_0(t_RayTraceBenchmark_Ray p_ray, t_RayTraceBenchmark_Scene* p_scene, int32_t p_depth)
{
	float l_nearest_0;
	t_RayTraceBenchmark_Sphere* l_obj_1;
	int32_t l_i_2;
	t_RayTraceBenchmark_Vec3 l_point_of_hit_3;
	t_RayTraceBenchmark_Vec3 l_normal_4;
	char l_inside_5;
	t_RayTraceBenchmark_Vec3 l_color_6;
	float l_reflection_ratio_7;
	float l_rayNormDot_8;
	float l_facing_9;
	float l_fresneleffect_10;
	l_nearest_0 = 3.402823E+38f;
	l_obj_1 = 0;
	for (l_i_2 = 0; l_i_2 != m_System_Array_get_Length_0(p_scene->f_Objects_1); ++l_i_2)
	{
		t_RayTraceBenchmark_Sphere* l_o_3;
		float l_distance_4;
		l_o_3 = p_scene->f_Objects_1[sizeof(size_t) + l_i_2];
		l_distance_4 = 3.402823E+38f;
		if (m_RayTraceBenchmark_Sphere_Intersect_1(l_o_3, p_ray, &l_distance_4))
		{
			if (l_distance_4 < l_nearest_0)
			{
				l_nearest_0 = l_distance_4;
				l_obj_1 = l_o_3;
			}
		}
	}
	if (l_obj_1 == 0) return f_RayTraceBenchmark_Vec3_Zero;
	l_point_of_hit_3 = m_RayTraceBenchmark_Vec3_op_Addition_0(p_ray.f_Org_2, (m_RayTraceBenchmark_Vec3_op_Multiply_1(p_ray.f_Dir_2, l_nearest_0)));
	l_normal_4 = m_RayTraceBenchmark_Sphere_Normal_0(l_obj_1, l_point_of_hit_3);
	l_inside_5 = 0;
	if (m_RayTraceBenchmark_Vec3_Dot_0(l_normal_4, p_ray.f_Dir_2) > 0)
	{
		l_inside_5 = 1;
		l_normal_4 = m_RayTraceBenchmark_Vec3_op_UnaryNegation_0(l_normal_4);
	}
	l_color_6 = f_RayTraceBenchmark_Vec3_Zero;
	l_reflection_ratio_7 = l_obj_1->f_Reflection_1;
	for (l_i_2 = 0; l_i_2 != m_System_Array_get_Length_0(p_scene->f_Lights_1); ++l_i_2)
	{
		t_RayTraceBenchmark_Light* l_l_8;
		t_RayTraceBenchmark_Vec3 l_light_direction_9;
		t_RayTraceBenchmark_Ray l_r_10;
		char l_blocked_11;
		int32_t l_i2_12;
		l_l_8 = p_scene->f_Lights_1[sizeof(size_t) + l_i_2];
		l_light_direction_9 = m_RayTraceBenchmark_Vec3_Normalize_0(m_RayTraceBenchmark_Vec3_op_Subtraction_0(l_l_8->f_Position_1, l_point_of_hit_3));
		l_r_10.f_Org_2 = m_RayTraceBenchmark_Vec3_op_Addition_0(l_point_of_hit_3, (m_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_4, 1E-05f)));
		l_r_10.f_Dir_2 = l_light_direction_9;
		l_blocked_11 = 0;
		for (l_i2_12 = 0; l_i2_12 != m_System_Array_get_Length_0(p_scene->f_Objects_1); ++l_i2_12)
		{
			t_RayTraceBenchmark_Sphere* l_o_13;
			l_o_13 = p_scene->f_Objects_1[sizeof(size_t) + l_i2_12];
			if (m_RayTraceBenchmark_Sphere_Intersect_0(l_o_13, l_r_10))
			{
				l_blocked_11 = 1;
				break;
			}
		}
		if (!l_blocked_11)
		{
			l_color_6 = m_RayTraceBenchmark_Vec3_op_Multiply_1(m_RayTraceBenchmark_Vec3_op_Multiply_0(m_RayTraceBenchmark_Vec3_op_Multiply_1(l_l_8->f_Color_1, max(0, m_RayTraceBenchmark_Vec3_Dot_0(l_normal_4, l_light_direction_9))), l_obj_1->f_Color_1), (1.0f - l_reflection_ratio_7));
		}
	}
	l_rayNormDot_8 = m_RayTraceBenchmark_Vec3_Dot_0(p_ray.f_Dir_2, l_normal_4);
	l_facing_9 = max(0, -l_rayNormDot_8);
	l_fresneleffect_10 = l_reflection_ratio_7 + ((1 - l_reflection_ratio_7) * powf((1 - l_facing_9), 5));
	if (p_depth < 6 && l_reflection_ratio_7 > 0)
	{
		t_RayTraceBenchmark_Vec3 l_reflection_direction_11;
		t_RayTraceBenchmark_Ray l_r_12;
		t_RayTraceBenchmark_Vec3 l_reflection_13;
		l_reflection_direction_11 = m_RayTraceBenchmark_Vec3_op_Addition_0(p_ray.f_Dir_2, (m_RayTraceBenchmark_Vec3_op_Multiply_1(m_RayTraceBenchmark_Vec3_op_Multiply_1(m_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_4, 2), l_rayNormDot_8), (-1.0f))));
		l_r_12.f_Org_2 = m_RayTraceBenchmark_Vec3_op_Addition_0(l_point_of_hit_3, (m_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_4, 1E-05f)));
		l_r_12.f_Dir_2 = l_reflection_direction_11;
		l_reflection_13 = m_RayTraceBenchmark_Benchmark_trace_0(l_r_12, p_scene, p_depth + 1);
		l_color_6 = m_RayTraceBenchmark_Vec3_op_Multiply_1(l_reflection_13, l_fresneleffect_10);
	}
	if (p_depth < 6 && (l_obj_1->f_Transparency_1 > 0))
	{
		float l_ior_11;
		float l_CE_12;
		float l_eta_13;
		t_RayTraceBenchmark_Vec3 l_GF_14;
		float l_sin_t1_2_15;
		float l_sin_t2_2_16;
		l_ior_11 = 1.5f;
		l_CE_12 = m_RayTraceBenchmark_Vec3_Dot_0(p_ray.f_Dir_2, l_normal_4) * (-1.0f);
		l_ior_11 = l_inside_5 ? (1.0f) / l_ior_11 : l_ior_11;
		l_eta_13 = (1.0f) / l_ior_11;
		l_GF_14 = m_RayTraceBenchmark_Vec3_op_Multiply_1((m_RayTraceBenchmark_Vec3_op_Addition_0(p_ray.f_Dir_2, m_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_4, l_CE_12))), l_eta_13);
		l_sin_t1_2_15 = 1 - (l_CE_12 * l_CE_12);
		l_sin_t2_2_16 = l_sin_t1_2_15 * (l_eta_13 * l_eta_13);
		if (l_sin_t2_2_16 < 1)
		{
			t_RayTraceBenchmark_Vec3 l_GC_17;
			t_RayTraceBenchmark_Vec3 l_refraction_direction_18;
			t_RayTraceBenchmark_Ray l_r_19;
			t_RayTraceBenchmark_Vec3 l_refraction_20;
			l_GC_17 = m_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_4, sqrtf(1 - l_sin_t2_2_16));
			l_refraction_direction_18 = m_RayTraceBenchmark_Vec3_op_Subtraction_0(l_GF_14, l_GC_17);
			l_r_19.f_Org_2 = m_RayTraceBenchmark_Vec3_op_Subtraction_0(l_point_of_hit_3, (m_RayTraceBenchmark_Vec3_op_Multiply_1(l_normal_4, 0.0001f)));
			l_r_19.f_Dir_2 = l_refraction_direction_18;
			l_refraction_20 = m_RayTraceBenchmark_Benchmark_trace_0(l_r_19, p_scene, p_depth + 1);
			l_color_6 = m_RayTraceBenchmark_Vec3_op_Multiply_1(m_RayTraceBenchmark_Vec3_op_Multiply_1(l_refraction_20, (1 - l_fresneleffect_10)), l_obj_1->f_Transparency_1);
		}
	}
	return l_color_6;
}

uint8_t* m_RayTraceBenchmark_Benchmark_Render_0(t_RayTraceBenchmark_Scene* p_scene, uint8_t* p_pixels)
{
	t_RayTraceBenchmark_Vec3 l_eye_0;
	float l_h_1;
	float l_w_2;
	int32_t l_y_3;
	l_eye_0 = f_RayTraceBenchmark_Vec3_Zero;
	l_h_1 = tanf(((45.0f / 360) * (2 * 3.141593f)) / 2) * 2;
	l_w_2 = l_h_1 * 1280 / 720;
	for (l_y_3 = 0; l_y_3 != 720; ++l_y_3)
	{
		int32_t l_x_4;
		for (l_x_4 = 0; l_x_4 != 1280; ++l_x_4)
		{
			float l_xx_5;
			float l_yy_6;
			float l_ww_7;
			float l_hh_8;
			t_RayTraceBenchmark_Vec3 l_dir_9;
			t_RayTraceBenchmark_Ray l_r_10;
			t_RayTraceBenchmark_Vec3 l_pixel_11;
			int32_t l_i_12;
			l_xx_5 = l_x_4;
			l_yy_6 = l_y_3;
			l_ww_7 = 1280;
			l_hh_8 = 720;
			l_dir_9.f_X_2 = ((l_xx_5 - (l_ww_7 / 2.0f)) / l_ww_7) * l_w_2;
			l_dir_9.f_Y_2 = (((l_hh_8 / 2.0f) - l_yy_6) / l_hh_8) * l_h_1;
			l_dir_9.f_Z_2 = -1.0f;
			l_dir_9 = m_RayTraceBenchmark_Vec3_Normalize_0(l_dir_9);
			l_r_10.f_Org_2 = l_eye_0;
			l_r_10.f_Dir_2 = l_dir_9;
			l_pixel_11 = m_RayTraceBenchmark_Benchmark_trace_0(l_r_10, p_scene, 0);
			l_i_12 = (l_x_4 * 3) + (l_y_3 * 1280 * 3);
			p_pixels[sizeof(size_t) + l_i_12] = (uint8_t)min(l_pixel_11.f_X_2 * 255, 255);
			p_pixels[sizeof(size_t) + l_i_12 + 1] = (uint8_t)min(l_pixel_11.f_Y_2 * 255, 255);
			p_pixels[sizeof(size_t) + l_i_12 + 2] = (uint8_t)min(l_pixel_11.f_Z_2 * 255, 255);
		}
	}
	return p_pixels;
}

void m_RayTraceBenchmark_BenchmarkMain_Main_0()
{
	m_RayTraceBenchmark_BenchmarkMain_Start_0();
}

void m_RayTraceBenchmark_BenchmarkMain_Start_0()
{
	t_RayTraceBenchmark_Scene* l_scene_0;
	int32_t l_pixelsLength_1;
	uint8_t* l_pixels_2;
	uint8_t* l_data_3;
	l_scene_0 = m_RayTraceBenchmark_Scene__ctor_0();
	l_scene_0->f_Objects_1 = CS2X_GC_NewArrayAtomic(sizeof(t_RayTraceBenchmark_Sphere), 5);
	l_scene_0->f_Objects_1[sizeof(size_t) + 0] = m_RayTraceBenchmark_Sphere__ctor_0(m_RayTraceBenchmark_Vec3__ctor_0(0.0f, -10002.0f, -20.0f), 10000, m_RayTraceBenchmark_Vec3__ctor_0(0.8f, 0.8f, 0.8f), 0.0f, 0.0f);
	l_scene_0->f_Objects_1[sizeof(size_t) + 1] = m_RayTraceBenchmark_Sphere__ctor_0(m_RayTraceBenchmark_Vec3__ctor_0(0.0f, 2.0f, -20.0f), 4, m_RayTraceBenchmark_Vec3__ctor_0(0.8f, 0.5f, 0.5f), 0.5f, 0.0f);
	l_scene_0->f_Objects_1[sizeof(size_t) + 2] = m_RayTraceBenchmark_Sphere__ctor_0(m_RayTraceBenchmark_Vec3__ctor_0(5.0f, 0.0f, -15.0f), 2, m_RayTraceBenchmark_Vec3__ctor_0(0.3f, 0.8f, 0.8f), 0.2f, 0.0f);
	l_scene_0->f_Objects_1[sizeof(size_t) + 3] = m_RayTraceBenchmark_Sphere__ctor_0(m_RayTraceBenchmark_Vec3__ctor_0(-5.0f, 0.0f, -15.0f), 2, m_RayTraceBenchmark_Vec3__ctor_0(0.3f, 0.5f, 0.8f), 0.2f, 0.0f);
	l_scene_0->f_Objects_1[sizeof(size_t) + 4] = m_RayTraceBenchmark_Sphere__ctor_0(m_RayTraceBenchmark_Vec3__ctor_0(-2.0f, -1.0f, -10.0f), 1, m_RayTraceBenchmark_Vec3__ctor_0(0.1f, 0.1f, 0.1f), 0.1f, 0.8f);
	l_scene_0->f_Lights_1 = CS2X_GC_NewArrayAtomic(sizeof(t_RayTraceBenchmark_Light), 1);
	l_scene_0->f_Lights_1[sizeof(size_t) + 0] = m_RayTraceBenchmark_Light__ctor_0(m_RayTraceBenchmark_Vec3__ctor_0(-10, 20, 30), m_RayTraceBenchmark_Vec3__ctor_0(2, 2, 2));
	l_pixelsLength_1 = 1280 * 720 * 3;
	l_pixels_2 = CS2X_GC_NewArrayAtomic(sizeof(uint8_t), l_pixelsLength_1);
	m_System_Console_WriteLine_0(StringLiteral_1);
	m_System_Console_WriteLine_0(StringLiteral_2);
	l_data_3 = m_RayTraceBenchmark_Benchmark_Render_0(l_scene_0, l_pixels_2);
}

uint8_t* m_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRA_0(uint8_t* p_rgb)
{
	uint8_t* l_rgba_0;
	int32_t l_i_1;
	int32_t l_i2_2;
	l_rgba_0 = CS2X_GC_NewArrayAtomic(sizeof(uint8_t), (m_System_Array_get_Length_0(p_rgb) / 3) * 4);
	for (l_i_1 = 0, l_i2_2 = 0; l_i_1 != m_System_Array_get_Length_0(p_rgb); l_i_1 = 3, l_i2_2 = 4)
	{
		l_rgba_0[sizeof(size_t) + l_i2_2] = p_rgb[sizeof(size_t) + l_i_1 + 2];
		l_rgba_0[sizeof(size_t) + l_i2_2 + 1] = p_rgb[sizeof(size_t) + l_i_1 + 1];
		l_rgba_0[sizeof(size_t) + l_i2_2 + 2] = p_rgb[sizeof(size_t) + l_i_1];
		l_rgba_0[sizeof(size_t) + l_i2_2 + 3] = 255;
	}
	return l_rgba_0;
}

int32_t* m_RayTraceBenchmark_BenchmarkMain_ConvertRGBToBGRAInt_0(uint8_t* p_rgb)
{
	int32_t* l_rgba_0;
	int32_t l_i_1;
	int32_t l_i2_2;
	l_rgba_0 = CS2X_GC_NewArrayAtomic(sizeof(int32_t), m_System_Array_get_Length_0(p_rgb) / 3);
	for (l_i_1 = 0, l_i2_2 = 0; l_i_1 != m_System_Array_get_Length_0(p_rgb); l_i_1 = 3, l_i2_2 = 1)
	{
		int32_t l_color_3;
		l_color_3 = p_rgb[sizeof(size_t) + l_i_1 + 2];
		l_color_3 = p_rgb[sizeof(size_t) + l_i_1 + 1] << 8;
		l_color_3 = p_rgb[sizeof(size_t) + l_i_1] << 16;
		l_color_3 = 255 << 24;
		l_rgba_0[sizeof(size_t) + l_i2_2] = l_color_3;
	}
	return l_rgba_0;
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3__ctor_0(float p_x, float p_y, float p_z)
{
	t_RayTraceBenchmark_Vec3 selfObj;
	t_RayTraceBenchmark_Vec3* self = &selfObj;
	self->f_X_2 = p_x;
	self->f_Y_2 = p_y;
	self->f_Z_2 = p_z;
	return selfObj;
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Addition_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 + p_p2.f_X_2, p_p1.f_Y_2 + p_p2.f_Y_2, p_p1.f_Z_2 + p_p2.f_Z_2);
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Subtraction_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 - p_p2.f_X_2, p_p1.f_Y_2 - p_p2.f_Y_2, p_p1.f_Z_2 - p_p2.f_Z_2);
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_UnaryNegation_0(t_RayTraceBenchmark_Vec3 p_p1)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(-p_p1.f_X_2, -p_p1.f_Y_2, -p_p1.f_Z_2);
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Multiply_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 * p_p2.f_X_2, p_p1.f_Y_2 * p_p2.f_Y_2, p_p1.f_Z_2 * p_p2.f_Z_2);
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Multiply_1(t_RayTraceBenchmark_Vec3 p_p1, float p_p2)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 * p_p2, p_p1.f_Y_2 * p_p2, p_p1.f_Z_2 * p_p2);
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Multiply_2(float p_p1, t_RayTraceBenchmark_Vec3 p_p2)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(p_p1 * p_p2.f_X_2, p_p1 * p_p2.f_Y_2, p_p1 * p_p2.f_Z_2);
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Division_0(t_RayTraceBenchmark_Vec3 p_p1, t_RayTraceBenchmark_Vec3 p_p2)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 / p_p2.f_X_2, p_p1.f_Y_2 / p_p2.f_Y_2, p_p1.f_Z_2 / p_p2.f_Z_2);
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_op_Division_1(t_RayTraceBenchmark_Vec3 p_p1, float p_p2)
{
	return m_RayTraceBenchmark_Vec3__ctor_0(p_p1.f_X_2 / p_p2, p_p1.f_Y_2 / p_p2, p_p1.f_Z_2 / p_p2);
}

float m_RayTraceBenchmark_Vec3_Dot_0(t_RayTraceBenchmark_Vec3 p_v1, t_RayTraceBenchmark_Vec3 p_v2)
{
	return (p_v1.f_X_2 * p_v2.f_X_2) + (p_v1.f_Y_2 * p_v2.f_Y_2) + (p_v1.f_Z_2 * p_v2.f_Z_2);
}

float m_RayTraceBenchmark_Vec3_Magnitude_0(t_RayTraceBenchmark_Vec3 p_v)
{
	return sqrtf((p_v.f_X_2 * p_v.f_X_2) + (p_v.f_Y_2 * p_v.f_Y_2) + (p_v.f_Z_2 * p_v.f_Z_2));
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3_Normalize_0(t_RayTraceBenchmark_Vec3 p_v)
{
	return m_RayTraceBenchmark_Vec3_op_Division_1(p_v, sqrtf((p_v.f_X_2 * p_v.f_X_2) + (p_v.f_Y_2 * p_v.f_Y_2) + (p_v.f_Z_2 * p_v.f_Z_2)));
}

t_RayTraceBenchmark_Vec3 m_RayTraceBenchmark_Vec3__ctor_1()
{
	t_RayTraceBenchmark_Vec3 selfObj = {0};
	return selfObj;
}

void m_RayTraceBenchmark_Vec3__cctor_0()
{
}

t_RayTraceBenchmark_Ray m_RayTraceBenchmark_Ray__ctor_0()
{
	t_RayTraceBenchmark_Ray selfObj = {0};
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
	memset(&t_RayTraceBenchmark_Sphere_RTTYPE_OBJ, 0, sizeof(t_RayTraceBenchmark_Sphere_RTTYPE));
	t_RayTraceBenchmark_Sphere_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_RayTraceBenchmark_Sphere_RTTYPE_OBJ;
	t_RayTraceBenchmark_Sphere_RTTYPE_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &t_System_Object_RTTYPE_OBJ;
	t_RayTraceBenchmark_Sphere_RTTYPE_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Sphere_RTTYPE_RTTYPE_METADATA_Name;
	t_RayTraceBenchmark_Sphere_RTTYPE_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Sphere_RTTYPE_RTTYPE_METADATA_FullName;
	memset(&t_RayTraceBenchmark_Light_RTTYPE_OBJ, 0, sizeof(t_RayTraceBenchmark_Light_RTTYPE));
	t_RayTraceBenchmark_Light_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_RayTraceBenchmark_Light_RTTYPE_OBJ;
	t_RayTraceBenchmark_Light_RTTYPE_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &t_System_Object_RTTYPE_OBJ;
	t_RayTraceBenchmark_Light_RTTYPE_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Light_RTTYPE_RTTYPE_METADATA_Name;
	t_RayTraceBenchmark_Light_RTTYPE_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Light_RTTYPE_RTTYPE_METADATA_FullName;
	memset(&t_RayTraceBenchmark_Scene_RTTYPE_OBJ, 0, sizeof(t_RayTraceBenchmark_Scene_RTTYPE));
	t_RayTraceBenchmark_Scene_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_RayTraceBenchmark_Scene_RTTYPE_OBJ;
	t_RayTraceBenchmark_Scene_RTTYPE_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &t_System_Object_RTTYPE_OBJ;
	t_RayTraceBenchmark_Scene_RTTYPE_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Scene_RTTYPE_RTTYPE_METADATA_Name;
	t_RayTraceBenchmark_Scene_RTTYPE_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Scene_RTTYPE_RTTYPE_METADATA_FullName;
	memset(&t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ, 0, sizeof(t_RayTraceBenchmark_Benchmark_RTTYPE));
	t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ;
	t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &t_System_Object_RTTYPE_OBJ;
	t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Benchmark_RTTYPE_RTTYPE_METADATA_Name;
	t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Benchmark_RTTYPE_RTTYPE_METADATA_FullName;
	memset(&t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ, 0, sizeof(t_RayTraceBenchmark_BenchmarkMain_RTTYPE));
	t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ;
	t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &t_System_Object_RTTYPE_OBJ;
	t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_BenchmarkMain_RTTYPE_RTTYPE_METADATA_Name;
	t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_BenchmarkMain_RTTYPE_RTTYPE_METADATA_FullName;
	memset(&t_RayTraceBenchmark_Vec3_RTTYPE_OBJ, 0, sizeof(t_RayTraceBenchmark_Vec3_RTTYPE));
	t_RayTraceBenchmark_Vec3_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_RayTraceBenchmark_Vec3_RTTYPE_OBJ;
	t_RayTraceBenchmark_Vec3_RTTYPE_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &t_System_ValueType_RTTYPE_OBJ;
	t_RayTraceBenchmark_Vec3_RTTYPE_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Vec3_RTTYPE_RTTYPE_METADATA_Name;
	t_RayTraceBenchmark_Vec3_RTTYPE_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Vec3_RTTYPE_RTTYPE_METADATA_FullName;
	memset(&t_RayTraceBenchmark_Ray_RTTYPE_OBJ, 0, sizeof(t_RayTraceBenchmark_Ray_RTTYPE));
	t_RayTraceBenchmark_Ray_RTTYPE_OBJ.runtimeType.CS2X_RuntimeType = &t_RayTraceBenchmark_Ray_RTTYPE_OBJ;
	t_RayTraceBenchmark_Ray_RTTYPE_OBJ.runtimeType.f__BaseType_k__BackingField_1 = &t_System_ValueType_RTTYPE_OBJ;
	t_RayTraceBenchmark_Ray_RTTYPE_OBJ.runtimeType.f__Name_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Ray_RTTYPE_RTTYPE_METADATA_Name;
	t_RayTraceBenchmark_Ray_RTTYPE_OBJ.runtimeType.f__FullName_k__BackingField_1 = (t_System_String*)t_RayTraceBenchmark_Ray_RTTYPE_RTTYPE_METADATA_FullName;

	/* Init runtime type metadata / string literals */
	((t_System_String*)t_RayTraceBenchmark_Sphere_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Sphere_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Light_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Light_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Scene_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Scene_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Benchmark_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Benchmark_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_BenchmarkMain_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_BenchmarkMain_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Vec3_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Vec3_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Ray_RTTYPE_RTTYPE_METADATA_Name)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)t_RayTraceBenchmark_Ray_RTTYPE_RTTYPE_METADATA_FullName)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;

	/* Init runtime type vtabel */
	t_RayTraceBenchmark_Sphere_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_RayTraceBenchmark_Light_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_RayTraceBenchmark_Scene_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_RayTraceBenchmark_Benchmark_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_RayTraceBenchmark_BenchmarkMain_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_RayTraceBenchmark_Vec3_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
	t_RayTraceBenchmark_Ray_RTTYPE_OBJ.vTable_ToString_0 = m_System_Object_ToString_0;
}

void CS2X_InvokeStaticConstructors_PortableTestApp()
{
	/* Init references */
	CS2X_InvokeStaticConstructors_CS2X_CoreLib();

	/* Init this project */
	m_RayTraceBenchmark_Vec3__cctor_0();
}

void CS2X_InitStringLiterals()
{
	((t_System_String*)StringLiteral_0)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)StringLiteral_1)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
	((t_System_String*)StringLiteral_2)->CS2X_RuntimeType = &t_System_String_RTTYPE_OBJ;
}

/* =============================== */
/* Entry Point */
/* =============================== */
int main()
{
	CS2X_GC_Init();
	CS2X_InitLib_PortableTestApp();
	CS2X_InitStringLiterals();
	CS2X_InvokeStaticConstructors_PortableTestApp();
	m_RayTraceBenchmark_BenchmarkMain_Main_0();
	CS2X_GC_Collect();
	return 0;
}
