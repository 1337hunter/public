int     ft_str_count_ch(char *str, char ch)
{
	int	c;

	c = 0;
	while (*str != 0)
	{
		if (*str == ch)
			c++;
		str++;
	}
	return (c);
}
