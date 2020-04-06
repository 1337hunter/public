#include <stdlib.h>

int	*ft_str2buint(char *str)
{
	int	digit;
	int	*out;
	int	l;
	int	k;

	digit = 1;
	out = (int*)calloc(sizeof(int), 16);
	k = 15;
	l = ft_strlen(str);
	while (--l >= 0)
	{
		if (out[k] >= 10000000)
		{
			out[k] = out[k-- + 1] / 1000000000;
			digit = 1;
		}
		out[k] += digit * (str[l] - '0');
		digit *= 10;
	}
	return (out);
}
