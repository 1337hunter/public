#include "libft.h"
#include <stdio.h>
int	ft_check_all_comb(int m, int n, int *primes)
{
	int	*comb;
	int	sum;
	int	div;
	int	*divs;
	int	size;

	size = 16;
	sum = 0;
	divs = (int*)malloc(sizeof(int) * 1000);
	comb = ft_first_comb(m);
	while ((comb = ft_next_set(comb, m, n)))
	{
		div = ft_check_comb(comb, m, primes);
		if ((ft_check_div(&divs, div, sum, size)))
			sum++;
	}
	free(divs);
	free(comb);
	return (sum);
}
