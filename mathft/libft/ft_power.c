#include "mathft.h"

long double	ft_int_power(long double num, int power)
{
	long double	rez;

	rez = 1;
	while (power != 0)
	{
		rez *= num;
		power--;
	}
	return (rez);
}

long double	ft_float_power(long double num, long double power)
{
	int		k;
	int		i;
	long double	rez;
	long double	mult;

	k = 0;
	rez = 1;
	while (k < 256 && power != 0)
	{
		while (power < 1)
		{
			power = power * 2;
			k++;
		}
		i = -1;
		mult = num;
		while (++i < k)
		{
			mult = ft_sqrt(mult);
		}
		power = power - (int)power;
		rez = rez * mult;
	}
	return (rez);
}

long double	ft_power(long double num, long double power)
{
	long double	rez_int;
	long double	rez_float;
	
	rez_int = 0;
	rez_float = 0;
	if (power == (long double)(int)power)
	{
		return (ft_int_power(num, power));
	}
	else if (num < 0)
	{
		write(2, "error: in function ft_power: num < 0 ", 37);
		write(2, "(use complex type)\n", 19);
		return (-1);
	}
	else
	{
		rez_int = ft_int_power(num, (int)power);
		rez_float = ft_float_power(num, power - (int)power);
	}
	return (rez_int * rez_float);
}
