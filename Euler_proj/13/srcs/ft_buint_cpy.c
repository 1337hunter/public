int	*ft_buint_cpy(int *a, int * b)
{
	int	i;

	i = -1;
	while (++i < 16)
		a[i] = b[i];
	return (a);
}
