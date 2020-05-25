#ifndef VEC_LIB_H
# define VEC_LIB_H
# include <math.h>

typedef struct  s_vec3_int
{
    int x;
    int y;
    int z;
}               t_vec3_int;
typedef struct  s_vec3_double
{
    double x;
    double y;
    double z;
}               t_vec3_double;

double			vec3i_mod(t_vec3_int v);
double			vec3d_mod(t_vec3_double v);
t_vec3_int		vec3i_sub_vec3i(t_vec3_int v1, t_vec3_int v2);
t_vec3_double	vec3d_sub_vec3d(t_vec3_double v1, t_vec3_double v2);
t_vec3_int		vec3i_add_vec3i(t_vec3_int v1, t_vec3_int v2);
t_vec3_double	vec3d_add_vec3d(t_vec3_double v1, t_vec3_double v2);
t_vec3_int		vec3i_mul_vec3i(t_vec3_int v1, t_vec3_int v2);
t_vec3_double	vec3d_mul_vec3d(t_vec3_double v1, t_vec3_double v2);
t_vec3_int		vec3i_mul_d(t_vec3_int v, double d);
t_vec3_double	vec3d_mul_d(t_vec3_double v, double d);
double			vec3i_scalar(t_vec3_int v1, t_vec3_int v2);
double			vec3d_scalar(t_vec3_double v1, t_vec3_double v2);
t_vec3_double	vec3d_cross(t_vec3_double v1, t_vec3_double v2);
//
#endif
