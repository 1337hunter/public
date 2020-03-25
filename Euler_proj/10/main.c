#include <stdio.h>


void main(void)
{
	long	N;
	int	i;
	int	j;
	int	n;
	long long	sum;

	scanf("%ld", &N);
	sum = 0;

	i = 2;
	while (i < N)
	{
		n = i / 2 + 1;

		j = 2;
		while (j < n)
		{
			if ( i % j == 0)
			{
				break;
			}
			j++;
		}

		if ( j == n)
		{
			sum += i;
		}
		i++;
	}
	
	printf("sum = %lld\n", sum);

}

