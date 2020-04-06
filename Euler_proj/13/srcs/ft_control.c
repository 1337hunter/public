#include "srcsft.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_control(void)
{
	char	**arr;
	int	*rez;
	int	*a;
	int	*b;
	int	i;
	
	arr = ft_str_split(ft_str_input(), '\n');
	i = -1;
	rez = (int*)calloc(sizeof(int), 16);
	a = (int*)calloc(sizeof(int), 16);
	while (arr[++i] != 0)
	{
		b = ft_str2buint(arr[i]);
		rez = ft_sum_buint(rez, a, b);
		a = ft_buint_cpy(a, rez);
	}
	i = -1;
	while (++i < 16)
		if (rez[i] != 0)
			printf("%d", rez[i]);
	printf("\n");
}
