#include "vec_lib.h"

t_vec3_int		vec3i_add_vec3i(t_vec3_int v1, t_vec3_int v2)
{
	return ((t_vec3_int){v1.x + v2.x, v1.y + v2.y, v1.z + v2.z});
}

t_vec3_double	vec3d_add_vec3d(t_vec3_double v1, t_vec3_double v2)
{
	return ((t_vec3_double){v1.x - v2.x, v1.y - v2.y, v1.z - v2.z});
}

t_vec3_int		vec3i_mul_d(t_vec3_int v, double d)
{
	return ((t_vec3_int){(int)(v.x * d), (int)(v.y * d), (int)(v.z * d)});
}

t_vec3_double	vec3d_mul_d(t_vec3_double v, double d)
{
	return ((t_vec3_double){v.x * d, v.y * d, v.z * d});
}
