#include "libft.h"
#include <stdio.h>

int	*ft_next_set(int *arr, int m, int n)
{
	int	i;
	int	j;
	
	i = m;
	while (--i >= 0)
	{
		if (arr[i] < n - m + i)
		{
			arr[i]++;
			j = i;
			while (++j < m)
				arr[j] = arr[j - 1] + 1;
			return (arr);
		}
	}
	return (0);
}
