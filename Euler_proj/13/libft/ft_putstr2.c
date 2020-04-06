#include "libft.h"

void	ft_putstr2(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i] != 0)
	{
		j = 0;
		while (map[i][j] != 0)
		{
			write(1, &map[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
