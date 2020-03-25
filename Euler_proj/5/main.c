#include <stdio.h>
#include <time.h>

void main (void)
{
	printf("\n*****Эта программа ищет самое маленькое число\n");
        printf(" которое делится нацело на все числа от 1 до input N*****\n");

	long	i;
	int	j;
	int	k;
	int	c;
	clock_t	start;
	clock_t	end;

	start = clock();
	c = 0;
	i = 1;
	k = 1;
	scanf("%d", &j);
	
	while (1)
	{
		while ( k <= j )
		{
			if ( i % k == 0 )
			{
				c += 1;
			}
			
			k += 1;
		}
		if ( c == j )
		{
			break;
		}

		i += 1;
		c = 0;
		k = 1;
	}
	printf("\nНаименьшее число: %ld\n", i);
	end = clock();
	printf("time of execution: ");
	printf("%f сек\n", (double)(end - start) / CLOCKS_PER_SEC);
}
