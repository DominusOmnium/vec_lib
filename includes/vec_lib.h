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

double			vec3i_module(t_vec3_int v);
double			vec3d_module(t_vec3_double v);
t_vec3_int		vec3i_sub(t_vec3_int v1, t_vec3_int v2);
t_vec3_double	vec3d_sub(t_vec3_int v1, t_vec3_int v2);
t_vec3_int		vec3i_add(t_vec3_int v1, t_vec3_int v2);
t_vec3_double	vec3d_add(t_vec3_double v1, t_vec3_double v2);
t_vec3_int		vec3i_mul(t_vec3_int v, double d);
t_vec3_double	vec3d_mul(t_vec3_double v, double d);
double			vec3i_scalar(t_vec3_int v1, t_vec3_int v2);
double			vec3d_scalar(t_vec3_double v1, t_vec3_double v2);
#endif
