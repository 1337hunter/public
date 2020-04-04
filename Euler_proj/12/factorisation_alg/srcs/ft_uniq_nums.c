#include <stdio.h>

int	ft_uniq_nums(int *arr, int len)
{
	int	pnb;
	int	i;
	int	c;

	pnb = arr[0];
	c = 1;
	i = 0;
	while (++i < len)
	{
		if (pnb == arr[i])
			continue ;
		else
		{
			pnb = arr[i];
			c++;
		}
	}
	return (c);
}
