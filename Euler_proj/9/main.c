#include <stdio.h>
#include <unistd.h>


void main(void)
{
	int	a;
	int	b;
	int	c;
	int	rez[3];
	int	tsum;


	c = 3;
	while (1)
	{
		b = 2;
		while(b < c)
		{
			a = 1;
			while(a < b)
			{
				tsum = a + b + c;
				if ((tsum == 1000) && (a * a + b * b == c * c))
				{
					rez[0] = a;
					rez[1] = b;
					rez[2] = c;
					break;
				}

				a++;
			}
			
			if ( a == b )
			{
				a--;
			}

			tsum = a + b + c;
			if ((tsum == 1000) && (a * a + b * b == c * c))
                        {
                       		rez[0] = a;
                        	rez[1] = b;
                        	rez[2] = c;
                       		break;
                        }
			b++;
		}
		tsum = a + b + c;
		if ((a + b + c == 1000) && (a * a + b * b == c * c))
                {
                	rez[0] = a;
                	rez[1] = b;
                	rez[2] = c;
                	break;
		}
		c++;

	}
	printf("\n%d %d %d", rez[0], rez[1], rez[2]);
	printf("\n a * a = %d", rez[0] * rez[0]);
	printf("\n b * b = %d", rez[1] * rez[1]);
	printf("\n c * c = %d", rez[2] * rez[2]);

}

