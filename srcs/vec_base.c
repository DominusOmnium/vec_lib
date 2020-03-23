#include "vec_lib.h"

double			vec3i_mod(t_vec3_int v)
{
	return (sqrt((double)(v.x * v.x + v.y * v.y + v.z * v.z)));
}

double			vec3d_mod(t_vec3_double v)
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

t_vec3_int		vec3i_sub_vec3i(t_vec3_int v1, t_vec3_int v2)
{
	return ((t_vec3_int){v1.x - v2.x, v1.y - v2.y, v1.z - v2.z});
}

t_vec3_double	vec3d_sub_vec3d(t_vec3_double v1, t_vec3_double v2)
{
	return ((t_vec3_double){v1.x - v2.x, v1.y - v2.y, v1.z - v2.z});
}
