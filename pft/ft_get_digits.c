int ft_get_digits(int n)
{
	int	c;

	c = 0;
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}