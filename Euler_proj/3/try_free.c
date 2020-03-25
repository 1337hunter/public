#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	int str[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i;
	int *i_ptr;

	i_ptr = malloc(10 * sizeof(*i_ptr));
	i = 0;
	while (i < 10)
	{
		*(i_ptr + i) = i;
		printf("%d\n ", *(i_ptr + i));

		i++;
	}
	
	i = 0;


        while (i < 10)
        {
		printf("releasing %d \n", i);
		free((i_ptr + i));
		i++;
        }
		
	i = 0;
        while (i < 10)
        {
                printf("%d\n ", *(i_ptr + i));
		
		i++;
        }

}
