/* this program is looking for prime divider 
 * for inputed integer number*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
	long	N;
	long	n;
	int	i;
	int 	div;
	int 	j;

	printf("enter a nubber to determine the largest prime divider: ");
	scanf("%ld", &N);
	printf("N = %ld", N);
	div = 1;
	n =  N/2 + 1;	
	i = 2;
	j = 2;

	while (i < n)
	{
		if ( N % i == 0 ) 
		{
			j = 2;
			while (j < i)
			{
				if (i % j == 0)
				{
					break;
				}
				j++;	
			}
			if (j == i)
			{
				div = i;
			}
		}

		i++;		
	}

	printf("\nthe largest prime divider is: %d\n", div);

}
