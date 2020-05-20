/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_g.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 12:21:10 by gbright           #+#    #+#             */
/*   Updated: 2020/05/16 12:21:12 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

	#include <stdio.h>
static char	*my_formating(int *fl, char *s, int prec, int *exp)
{
	int		i;
	int 	point;

	i = 0;
	point = 0;
	fl[17] = ft_get_exp(s);
	while (s[i] == '0' || s[i] == '.')
		i++;
	while (point < prec && s[i + point] != '.')
		point++;
	point = (s[i + point] == '.' ? 1 : 0);
	if (!fl[11] && fl[2])
		ft_round(&s[i] + (prec == 0 ? 0 : prec - 1) + point);
	else if (fl[11] && fl[2] && prec && *exp > -4 && *exp <= 0)
		ft_round(s + prec + ft_abs(*exp) + point);
	else if (!fl[2])
		ft_round(&s[i] + 5);
	else if (fl[11] && prec && fl[2])
		ft_round(&s[i] + (prec == 0 ? 0 : prec - 1));
	else if (fl[11] && !prec && fl[2])
		ft_round(&s[i]);
	if (i == 0 && s[-1] != '0' && s[0] == '0')
		s--;
	*exp = ft_get_exp(s);
	s = ((*exp < -4 || *exp >= 6) ? ft_place_dot(s, *exp, prec) : s);
	return (s);
}

static int	my_print_g(int *flag, char *s, int prec)
{
	int	counter;
	int exp;

	s = my_formating(flag, s, prec, &exp);
	//ft_printf("s = >>%s<<|", s);
	counter = ft_print_formatted_g(s, flag, prec, exp);
	if ((exp < -4 || exp >= 6) && (exp >= prec || exp < 0))
		counter += ft_print_exp(exp);
	return (counter);
}

static int	my_print_flag(int *flag)
{
	int counter;

	counter = 0;
	if (flag[19])
	{
		counter += write(1, "-", 1);
		flag[13] = 0;
		flag[12] = 0;
	}
	if (flag[13])
		counter += write(1, "+", 1);
	else if (flag[12])
		counter += write(1, " ", 1);
	return (counter);
}

static int	my_control_g(int *fl, int w, int prec, char *s)
{
	int	c;

	c = 0;
	if (fl[0])
	{
		c += my_print_flag(fl);
		c += my_print_g(fl, s, prec);
		c += ft_print_width(w - c, ' ');
	}
	return (c);
}

void    ft_print_g(va_list params, int *flag, int *total)
{
    int		w;
	int		prec;
	char	*s;

	w = (flag[3] ? va_arg(params, int) : flag[5]);
	prec = (flag[4] ? va_arg(params, int) : flag[6]);
    s = ft_conv_g(va_arg(params, double), flag);
    flag[19] = (*s == '-' ? 1 : 0);
	s += flag[19];
    if (*s == 'i' || *s == 'n')
        ft_print_infnan(s, flag, total, w);
    else
        *total += my_control_g(flag, w, prec, s);
    free(s - flag[19] - flag[14]);
}