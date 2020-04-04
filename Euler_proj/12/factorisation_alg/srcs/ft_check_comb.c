#include "libft.h"

int	ft_check_comb(int *comb, int c, int *primes)
{
	int	divider;
	int	i;

	i = -1;
	divider = 1;
	while (++i < c)
		divider *= primes[comb[i]];
	return (divider);
}
