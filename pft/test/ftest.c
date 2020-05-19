#include <stdio.h>
#include "../libft/libft.h"
#include <unistd.h>
#include "../ftprintf.h"
#include <math.h>
int	ftest(void)
{
	printf("----------------------------- flag test --------------------------------\n");
	double f = -0.0;
	int i = 0;
	printf("|%#-g|\n", f);
		

	// flags: -, 0, ., *, num
    // convs: c, s, p, d, i, u, x, X, %
    // convs bonus: n, f, g, e
    // flags bonus: l, ll, h, hh, #, ' ', +
	return (0);
}