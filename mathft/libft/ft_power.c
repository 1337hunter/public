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
	long double	rez;
	int		flag;

	flag = 1;
	if (power < 0)
		flag = -1;
	if (power == (long double)(int)power && flag == 1)
		return (ft_int_power(num, power));
	else if (power == (long double)(int)power && flag == -1)
		return (1.0 / (ft_int_power(num, power * flag)));
	else if (num < 0)
	{
		write(2, "error: ft_power: num < 0 (use complex type)\n", 44);
		return (0);
	}
	else
	{
		rez = ft_int_power(num, (int)power * flag) *
			ft_float_power(num, flag * (power - (int)power));
	}
	if (flag == 1)
		return (rez);
	return (1 / rez);
}
