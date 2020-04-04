#include "libft.h"
#include <stdio.h>

void	ft_control(void)
{
	int	nb;
	int	*primes;
	int	n;
	int	m;
	int	divs;

	primes = 0;
	nb = 1;
	divs = 1;
	while (divs < 520)
	{
		nb++;
		divs = 1;
		n = ft_factor(&primes, nb * (nb + 1) / 2);
		divs += ft_uniq_nums(primes, n);
		m = 0;
		while (++m <= n)
			divs += ft_check_all_comb(m, n, primes);
		printf("nb = %d divs = %d\n", nb * (nb + 1) / 2, divs);
	}
	ft_putstr_fd(1, "nb = ");
	ft_putnbr(nb * (nb + 1) / 2);
	ft_putstr_fd(1, " ");
	ft_putstr_fd(1, "divs = ");
	ft_putnbr(divs);
	ft_putstr_fd(1, "\n");
}
