#include "mathft.h"
#include <stdio.h>

long double	ft_sqrt(long double num)
{
	long double	root;
	long double	eps;
	
	root = num / 2;
	eps = 0.0000000000000001;
	while (ft_abs(root * root - num) > eps)
	{
		root = (root + num / root) / 2;
	}
	return (root);
}
