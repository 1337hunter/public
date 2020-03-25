#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>


char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

void main(void)
{
	char	str[12];
	char	str1[12];
	long 	N;
	int 	i;
	int 	j;
	int	tmp;
	int	tmp1;
	int	mi;
	int	mj;
	
	
	N = 0;
	i = 100;
	j = 100;
	tmp = 0;
	tmp1 = 0;
	printf("Эта программа ищет самый большой полиндром полученный ");
	printf("при умножении двух трехзначных чисел");

	while (i < 1000)
	{
		while (j < 1000)
		{
			tmp1 = i * j;
			sprintf(str, "%d", tmp1);
			strcpy(str1, str);
			strrev(str1);

			if ( strcmp(str1, str) == 0 )
			{
				tmp  = atoi(str);
				if ( tmp > N )
				{
					N = tmp;
					mi = i;
					mj = j;
				}
			}
			
			j++;

		}

		j = 100;
		i++;
	}
	printf("\nМаксимальный полиндром: %ld = %d x %d\n", N, mj, mi);
}
