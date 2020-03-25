#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int BUFSIZE = 10000;

void cpy_arr(char *arg1, char *arg2, int n)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		arg1[i] = arg2[i];
		i++;
	}
}




void main(void)
{
	char		buf[BUFSIZE];
	int		file;
	int		n;
	int		i;
	long long	max;
	long long	cmp0;
	int		j;
	long long	max9;
	char		m[13];
	char		mtmp[13];

	i 	= 0;
	max	= 0;

	file = open("./number", O_RDONLY);
	printf("дискриптор файла - %d\n", file);
	n = read(file, buf, BUFSIZE);
	close(file);
	printf("число считанных байт - %d\n", n);


	i = 0;
	while (i < n)
	{
		buf[i] = buf[i] - '0';
		i++;
	}

	
	i = 0;
	j = 0;
	cmp0 = 1;
	while (i < (n - 12))
	{
		while (j < 12)
		{
			mtmp[j] = buf[i + j];
			cmp0 *= buf[i + j];
			j += 1; 

		}
		
		j = 0;
		if (cmp0 > max)
		{
			while (j < 13)
			{
				m[j] = buf[i + j] + '0';
				j++;
			}
			max = cmp0;
		}
		
		cmp0 = 1;
		j = 0;	
		i++;
	}
	j = 0;
	max9 = 1;
	while (j < 12)
	{
		max9 *= 9;
		j++;
	}
	printf("max = %lld\n", max);
	printf("9^13 = %lld\n", max9);	
	write(1, "Последовательность цифр: ", 48);
	write(1, m, 13);
	write(1, "\n", 1);
}
