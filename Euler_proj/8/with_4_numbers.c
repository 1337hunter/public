#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int BUFSIZE = 10000;

void main(void)
{
	char	buf[BUFSIZE];
	int	file;
	int	n;
	int	i;
	int	max;
	int	cmp0;
	

	i 	= 0;
	max	= 0;

	file = open("./number", O_RDONLY);
	printf("дискриптор файла - %d\n", file);
	n = read(file, buf, BUFSIZE);
	close(file);
	printf("число считанных байт - %d\n", n);

	while (i < n)
	{
		
		write(1, buf + i, 1);
		write(1, " ", 1);
		i++;
	}
	
	write(1, "\n", 1);

	i = 0;
	while (i < n)
	{
		buf[i] = buf[i] - '0';
		printf("%d", buf[i]);
		i++;
	}

	
	i = 0;
	while (i < (n - 3))
	{
		cmp0 = buf[i] *  buf[i + 1] * buf[i + 2] * buf[i + 3];
		if (cmp0 > max)
		{
			max = cmp0; 
		}
		i++;
	}
	printf("max = %d\n", max);
	

}
