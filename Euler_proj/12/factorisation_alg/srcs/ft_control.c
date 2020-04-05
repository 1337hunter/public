#include "libft.h"
#include <stdio.h>

void	ft_control(void)
{
	int		nb;
	int		*primes;
	int		n;
	int		m;
	int		*div_arr;

	primes = 0;
	nb = 1;
	while (g_sum < 1000)
	{
		g_sum = 0;
		div_arr = (int*)malloc(sizeof(int) * 2000);
		nb++;
		n = ft_factor(&primes, nb * (nb + 1) / 2);
		m = 0;
		while (++m <= n)
			ft_check_all_comb(m, n, primes, &div_arr);
		g_sum += 1;
		free(div_arr);
	}
	printf("nb = %d divs = %d\n", nb * (nb + 1) / 2, g_sum);
}
