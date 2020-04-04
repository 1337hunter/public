#include <stdlib.h>

int	*ft_first_comb(int n)
{
	int	*comb;
	int	i;

	comb = (int*)malloc(sizeof(int) * n);
	i = 0;
	while (i < n)
	{
		comb[i] = i;
		i++;
	}
	return (comb);
}
