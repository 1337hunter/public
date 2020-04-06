int	*ft_sum_buint(int *rez, int *a, int *b)
{
	int	i;
	
	i = 16;
	while (--i > 0)
	{
		rez[i] = a[i] +b[i];
		if (a[i] + b[i] > 99999999)
		{
			rez[i - 1] = rez[i] / 100000000;
			rez[i] = rez[i] - rez[i] / 100000000;
		}
	}
	rez[0] = a[0] + b[0];
	return (rez);
}
