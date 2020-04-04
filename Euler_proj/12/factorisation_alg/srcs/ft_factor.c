#include "libft.h"

/* This function works correct!*/
int	ft_factor(int **arr, int nb)
{
	int	c;
	int	size;
	int	i;

	c = 0;
	size = 16;
	*arr = (int*)malloc(sizeof(int) * size);
	i = 2;
	while (nb > 1)
	{
		while (nb % i == 0)
		{
			if (c == size)
			{
				size *= 2;
				*arr = ft_idup_size(*arr, size, c);
			}
			(*arr)[c++] = i;
			nb = nb / i;
		}
		i++;
	}
	return (c);
}
