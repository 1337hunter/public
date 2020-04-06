#include <stdio.h>

int	*ft_sum_buint(int *rez, int *a, int *b)
{
	int	i;

	i = 16;
	a += 1;
	while (--i >= 0)
	{
		rez[i] += b[i];
		if (rez[i] > 99999999 && i != 0)
		{
			rez[i - 1] += rez[i] / 100000000;
			rez[i] = rez[i] - (rez[i] / 100000000) * 100000000;
		}
	}
	return (rez);
}
