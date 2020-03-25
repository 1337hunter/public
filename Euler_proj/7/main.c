#include <stdio.h>



void main(void)
{
	long	i;
	int	k;
	int	N;
	int	c;
	long	cmp;

	scanf("%d", &N);
	k = 2;
	i = 2;
	c = 0;

	
	while (1)
	{
		cmp = i / 2 + 1;
		while (k <= cmp)
		{
			if (i % k == 0)
			{
				break;
			}

			k++;
		}

		if (k == i / 2 + 2)
		{
			c = c + 1;
			if ( c == N)
			{
				break;
			}
		}
		k = 2;
		i += 1;
	}
	printf("\nПростое число #%d - %ld\n", N + 1, i); 

}
