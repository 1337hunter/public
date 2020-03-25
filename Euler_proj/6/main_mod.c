#include <stdio.h>

void main(void)
{
	int	i;
	long	sum0;
	long	sum1;
	int	k;
	int	n;
	int	j;
	long	sum01;
	long	sum11;
	long	d;

	printf("This program outputs a difference  ");
	printf("between square of sum (1 + 2 + 3 + ... + n )^2 ");
	printf("and sum of squares (1^2 + 2^2 + 3^2 + ... + n^2 with growing n\n");
	
	sum0 = 0;
	sum1 = 0;
	sum01 =0;
	sum11 =0;
	d = 0;
	k = 1;
	j = 1;
	scanf("%d", &n);

	while (j < n)
	{

		k = 1;
		while (k <= j)
		{
			sum0 += k;
			k += 1;
		}
		sum0 = sum0 * sum0;

		k = 1;
		while (k <= j)
		{
			sum1 += k * k;
			k += 1;
		}
		
		d = (sum0 - sum1) - (sum01 - sum11);

		sum01 = sum0;
		sum11 = sum1;
		
		printf("\nn = %d II dif = %ld II dif(dif) = %ld", j, sum0 - sum1, d);


		j += 1;
		sum0 = 0;
		sum1 = 0;
	}


}
