#ifndef VEC_LIB_H
# define VEC_LIB_H
# include <math.h>

typedef struct  s_ivec3
{
    int x;
    int y;
    int z;
}               t_ivec3;
typedef struct  s_dvec3
{
    double x;
    double y;
    double z;
}               t_dvec3;

typedef struct  s_vec3
{
    float x;
    float y;
    float z;
}               t_vec3;

float			ivec3_mod(t_ivec3 v);
double			dvec3_mod(t_dvec3 v);
float			vec3_mod(t_vec3 v);
t_ivec3			ivec3_sub_ivec3(t_ivec3 v1, t_ivec3 v2);
t_dvec3			dvec3_sub_dvec3(t_dvec3 v1, t_dvec3 v2);
t_vec3			vec3_sub_vec3(t_vec3 v1, t_vec3 v2);
t_ivec3			ivec3_add_ivec3(t_ivec3 v1, t_ivec3 v2);
t_dvec3			dvec3_add_dvec3(t_dvec3 v1, t_dvec3 v2);
t_vec3			vec3_add_vec3(t_vec3 v1, t_vec3 v2);
t_ivec3			ivec3_mul_ivec3(t_ivec3 v1, t_ivec3 v2);
t_dvec3			dvec3_mul_dvec3(t_dvec3 v1, t_dvec3 v2);
t_vec3			vec3_mul_vec3(t_vec3 v1, t_vec3 v2);
t_ivec3			ivec3_mul_d(t_ivec3 v, float d);
t_dvec3			dvec3_mul_d(t_dvec3 v, double d);
t_vec3			vec3_mul_f(t_vec3 v, float d);
float			ivec3_scalar(t_ivec3 v1, t_ivec3 v2);
double			dvec3_scalar(t_dvec3 v1, t_dvec3 v2);
float			vec3_scalar(t_vec3 v1, t_vec3 v2);
t_ivec3			ivec3_cross(t_ivec3 v1, t_ivec3 v2);
t_dvec3			dvec3_cross(t_dvec3 v1, t_dvec3 v2);
t_vec3			vec3_cross(t_vec3 v1, t_vec3 v2);
#endif
