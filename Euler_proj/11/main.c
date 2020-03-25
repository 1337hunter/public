#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int epwr(int n)
{
	int	i;
	int	rez;

	i = 0;
	rez = 1;
	while(i < n)
	{
		rez *= 10;
		i++;
	}
	return (rez);	
}


int N = 50 * 50;

int main(void)
{
	int	tb[N];
	int	i;
	int	j;
	int	k;
	int	l;
	int	s;
	int	c;
	int	counter;
	int	table;
	char	tmpc;
	int	tmpi;
	int	pwr;
	int	buf[8] = {0, 0, 0, 0, 0, 0, 0, 0};
	long	mp;
	long	tmpmp;
	int	numbers[4];
	
	table = open("./table", O_RDONLY);
	
	tmpi = 1;
	s = 0;
	c = 0;
	j = 0;
	k = 0;

	while(1)
	{
		while (1)
		{		
			tmpi = read(table, &tmpc, 1);
			if (tmpi == 0)
			{
				break;
			}
			if (tmpc == '\n')     /*Все работает!*/
			{
				s++;
				break;
			}
			if (tmpc != ' ')
			{
				buf[k] = tmpc - '0';
				k++;
			}
			else
			{
				break;
			}
		}
		if (tmpi == 0)
		{
			break;
		}

		c++;

		pwr = 0;
		if ( k > 0)
		{
			while (k--)
	                {
        	                tb[j] += buf[k] * epwr(pwr);
                	        pwr++;
               		}
		}
		l = 0;
		while (l < 8)
		{
			buf[l] = 0;
			l++;
		}
		j++;
		k = 0;

	}
	c = c/s;
	/* Конец считывания и записи таблицы*/
	/*
	l = 0;
	while (l < c * s)
	{
		printf("%d ", tb[l]);
		l++;
	}
	*/
	//write(1, "\n", 1);  происходит несутветная хрень
	//write(1, "\n", 1);  write лезет внутрь верхнего цикла
	//write(1, "\n", 1);
	int	arr2[s][c];
	
	i = 0;
	j = 0;
	counter = 0;
	printf("\nСчитанная матрица: \n");
	while (i < s)
	{
		while (j < c)
		{
			arr2[i][j] = tb[counter];
			counter++;
			printf("%2d ", arr2[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}

	i = 0;
	j = 0;
	k = 0;
	tmpmp = 1;
	mp = 1;
	/*Перебор по горизонтали*/
	while (i < s)
	{
		while (j < c - 3)
		{

			while (k < 4)
			{

				tmpmp *= arr2[i][j + k];
				k++;
			}
			k = 0;

			if (tmpmp > mp)
			{
				mp = tmpmp;
				numbers[0] = arr2[i][j];
				numbers[1] = arr2[i][j + 1];
				numbers[2] = arr2[i][j + 2];
				numbers[3] = arr2[i][j + 3];
			}
			j++;
			tmpmp = 1;
		}
	j = 0;
	i++;
	}
	
	i = 0;
	j = 0;
	k = 0;
	tmpmp = 1;
	/*Перебор по вертикали*/
	while (j < c)
        {
                while (i < s - 3)
                {

                        while (k < 4)
                        {

                                tmpmp *= arr2[i + k][j];
                                k++;
                        }
                        k = 0;

                        if (tmpmp > mp)
                        {
                                mp = tmpmp;
                                numbers[0] = arr2[i][j];
                                numbers[1] = arr2[i + 1][j];
                                numbers[2] = arr2[i + 2][j];
                                numbers[3] = arr2[i + 3][j];
                        }
                        i++;
                        tmpmp = 1;
                }
        i = 0;
        j++;
	}
	
	i = 0;
        j = 3;
        k = 0;
	l = 0;
        tmpmp = 1;
        /*Перебор по диагонали -/- */
        while (i < s - 3)
        {
                while (j < c)
                {

                        while (k < 4)
                        {

                                tmpmp *= arr2[i + k][j - k];
                                k++;
                        }
                        k = 0;

                        if (tmpmp > mp)
                        {
                                mp = tmpmp;
                                numbers[0] = arr2[i][j];
                                numbers[1] = arr2[i + 1][j - 1];
                                numbers[2] = arr2[i + 2][j - 2];
                                numbers[3] = arr2[i + 3][j - 3];
                        }
                        j++;
                        tmpmp = 1;
                }
        j = 0;
        i++;
        }


        i = 0;
        j = 0;
        k = 0;
        l = 0;
        tmpmp = 1;
        /*Перебор по диагонали -\- */
        while (i < s - 3)
        {
                while (j < c - 3)
                {

                        while (k < 4)
                        {

                                tmpmp *= arr2[i + k][j + k];
                                k++;
                        }
                        k = 0;

                        if (tmpmp > mp)
                        {
                                mp = tmpmp;
                                numbers[0] = arr2[i][j];
                                numbers[1] = arr2[i + 1][j + 1];
                                numbers[2] = arr2[i + 2][j + 2];
                                numbers[3] = arr2[i + 3][j + 3];
                        }
                        j++;
                        tmpmp = 1;
                }
        j = 0;
        i++;
        }
	
	printf("\nНаибольшее произведение четырех подряд идущих цифр: ");
	printf("\n%ld = %d x ", mp,  numbers[0]);
	printf("%d x %d x %d\n", numbers[1], numbers[2], numbers[3]); 

	return (0);
}


