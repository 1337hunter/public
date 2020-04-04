#include "libft.h"

int	ft_check_all_comb(int m, int n, int *primes, int **divs)
{
	int		*comb;
	int		div;
	int		size;

	size = 16;
	comb = ft_first_comb(m);
	while ((comb))
	{
		div = ft_check_comb(comb, m, primes);
		if ((ft_check_div(divs, div, g_sum, size)))
			g_sum++;
		comb = ft_next_set(comb, m, n);
	}
	free(comb);
	return (g_sum);
}
