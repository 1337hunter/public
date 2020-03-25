#include <stdio.h>

void main(void)
{
	int N;
	int elem_1;
	int elem_2;
	int sum;
	int temp;
	
	printf("Enter end of the sequence: ");
	scanf("%di \n", &N);
	elem_1 = 1;
	elem_2 = 2;
	sum = elem_2;
	temp = 0;
	while (elem_2 < N)
	{
		temp = elem_2;
		elem_2 = elem_1 + elem_2;
		elem_1 = temp;
		if (elem_2 % 2 == 0)
		{
			sum += elem_2;
		}
	}
	printf("sum = %d \n", sum);
}
