#include <stdio.h>
#include "../libft/libft.h"
#include <unistd.h>
#include "../ftprintf.h"

int	ttask(void)
{
	/* %o outputs unsigned int в восьмеричной системе */
        /* # points to include \0 before output number */
	printf("Spec\tInput\t\tOutput\n");
        //printf("%%o\t(9)\t\t\%o\n", 9);
        //printf("%%#o\t(9)\t\t\%#o\n", 9);
        /* %x (%X have big letters) */
	/* %a float point number in hexidecimal */
	/* how about star? */
	printf("%%*d\t\t\t|%*d|\n", 10, 4);
        printf("%%10d\t\t\t|%10d|\n", 6);
        //printf("%%1$*2$d\t\t\t|%1$*2$d|\n", 6, 10);
	/* ttest flag '-' and number without '-' */
	printf("%%-10d\t\t\t|%-10d|how do you do?\n", 100);
	printf("%%10d\t\t\t|%10d|how do you do?|\n", 100);
	printf("%%010.2\t\t\t|%10.2d|how do you do?|\n", 100);
	printf("%%c\t(%d)\t\t%c\n", 100, 100);
	printf("%%s\t(abcd)\t%s\n", "abcd");
	int	a = 10;
	unsigned long int p = (unsigned long int)(&a);
	printf("%%ld = %ld\n", p);
	printf("%%x = %x\n", (unsigned int)p);
	printf("%%X = \t%X\n", (unsigned int)p);
	printf("%%X = \t%X\n", 0);
	printf("xconv = %s\n", ft_xconv(0));
	printf("xxconv = %s\n", ft_xxconv((unsigned int)p));
	printf("pconv = %s\n", ft_pconv(&a));
	printf("%p\n", &a);
	int	b = -2147483648;
	printf("%%i = %i\n", b);
	printf("%%d = %d\n", b);
	unsigned int	c = 4294967295;
	printf("%%u = %u\n", c);
	printf("ft_utoa = %s\n", ft_utoa(c));
	printf("\n");
	return (0);
}
