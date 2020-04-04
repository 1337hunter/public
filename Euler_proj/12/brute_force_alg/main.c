#include <stdio.h>

void	ft_triangles_div(void)
{
	unsigned int	n;
	unsigned int	i;
	unsigned int	counter;
	unsigned int	triangle;
	
	n = 1;
	while (n != 0)
	{
		counter = 0;
		triangle = n * (n + 1) / 2;
		i = 1;
		while (i <= triangle && counter <= 6)
		{
			if (triangle % i == 0)
				counter++;
			i++;
		}
		if (counter == 7)
		{
			printf("n = %d\n", n * (n + 1) / 2);
			return ;
		}
		n++;
	}
}

int	main(void)
{
	ft_triangles_div();
	return (0);
}
