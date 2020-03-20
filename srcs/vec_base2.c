#include "vec_lib.h"

double	vec3i_scalar(t_vec3_int v1, t_vec3_int v2)
{
	return ((double)(v1.x * v2.x + v1.y * v2.y + v1.z * v2.z));
}

double	vec3d_scalar(t_vec3_double v1, t_vec3_double v2)
{
	return (v1.x * v2.x + v1.y * v2.y + v1.z * v2.z);
}
