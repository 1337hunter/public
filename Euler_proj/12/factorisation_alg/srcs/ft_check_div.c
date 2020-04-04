#include "libft.h"
#include <stdio.h>

int	ft_check_div(int **divs, int div, int sum, int size)
{
	int	i;

	i = -1;
	while (++i < sum)
	{
		if ((*divs)[i] == div)
			return (0);
	}
	size = size + 1;
/*	THE GOAL IS: dinamicly allocate memory to make program work
 *	for any number of dividers
 *	if (sumi >= size)
	{
		size *= 2;
		*divs = ft_idup_size(*divs, size, sum);
	}
*/
	(*divs)[sum] = div;
	return (1);
}
