#include <stdio.h>

void main(void)
{
	int	i;
	long	sum0;
	long	sum1;
	int	k;

	printf("Enter a maximal integer number: ");
	scanf("%d", &i);
	sum0 = 0;
	sum1 = 0;
	k = 1;

	
	while (k <= i)
	{
		sum0 += k;
		k += 1;
	}
	sum0 = sum0 * sum0;

	k = 1;
	while (k <= i)
	{
		sum1 += k * k;
		k += 1;
	}

	printf("\nsquare of sum = %ld", sum0);
	printf("\nsum of squares = %ld", sum1);


}
