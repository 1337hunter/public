#include <stdlib.h>
#include "libft.h"

int	ft_count_ch_plus(char *str, char ch)
{
	int	c;
	int	last;

	c = 0;
	last = 0;
	while (*str != 0)
	{
		last = 1;
		if (*str == ch)
		{
			c++;
			last = 0;
		}
		str++;
	}
	if (last)
		return (c + 1);
	return (c);
}

char	*ft_check_size(char *str, int *size, int *curr)
{
	(*curr)++;
	if (*size <= *curr)
	{
		(*size) *= 2;
		str = ft_strdup_size(str, *size);
		return (str);
	}
	return (str);
}

char	**ft_str_split(char *str, char ch)
{
	char	**out;
	int	n;
	int	i;
	int	size;
	int	c;

	n = ft_count_ch_plus(str, ch);
	out = (char**)malloc(sizeof(char*) * (n + 1));
	i = -1;
	while (++i < n)
	{
		size = 32;
		out[i] = (char*)malloc(sizeof(char) * size);
		c = 0;
		while (*str != ch && *str != 0)
		{
			out[i] = ft_check_size(out[i], &size, &c);
			out[i][c - 1] = *str;
			str++;
		}
		str++;
		out[i][c] = 0;
	}
	out[n] = 0;
	return (out);
}
