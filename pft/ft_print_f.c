/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_f.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 12:21:10 by gbright           #+#    #+#             */
/*   Updated: 2020/05/16 12:21:12 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

static int  my_leftlen(char *s)
{
    int c;

    c = 0;
    while (s[c] != '.' && s[c] != 0)
        c++;
    return (c);
}

static int	my_print_f(int *flag, char *s, int prec)
{
	int	counter;
	int	i;

	counter = 0;
	i = -1;
    while (*s != '.' && *s != 0)
        counter += write(1, s++, 1);
    if (*s == '.' && (prec || flag[11]))
        counter += write(1, s++, 1);
    if (flag[2])
    {
        while (++i < prec && *s != 0)
            counter += write(1, s++, 1);
        while (++i <= prec)
            counter += write(1, "0", 1);
    }
    else
        while (++i < 7)
            counter += write(1, s++, 1);
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

static int	my_control_f(int *fl, int w, int prec, char *s)
{
	int	c;

	c = 0;
	if (fl[0])
	{
		c += my_print_flag(fl);
		c += my_print_f(fl, s, prec);
		c += ft_print_width(w - c, ' ');
	}
	else
	{
		if (fl[1])
			c += my_print_flag(fl);
		if (fl[1])
            if (fl[2] && prec == 0)
			    c += ft_print_width(w - my_leftlen(s) - (fl[12] || fl[13] || fl[19]), '0');
            else
                c += ft_print_width(w - my_leftlen(s) - 1 - ft_max(6, prec), '0');
		else if (fl[3] || fl[5])
			c += ft_print_width(w - my_leftlen(s) - 1 - ft_max(6, prec), ' ');
        if (!(fl[1]))
			c += my_print_flag(fl);
		c += my_print_f(fl, s, prec);
	}
	return (c);
}

void    ft_print_f(va_list params, int *flag, int *total)
{
    int		w;
	int		prec;
	char	*s;

	w = (flag[3] ? va_arg(params, int) : flag[5]);
	prec = (flag[4] ? va_arg(params, int) : flag[6]);
    s = ft_conv_f(va_arg(params, double));
    flag[19] = (*s == '-' ? 1 : 0);
	s += flag[19];
    if (*s == 'i' || *s == 'n')
        ft_print_infnan(s, flag, total, w);
    else
        *total += my_control_f(flag, w, prec, s);
    free(s - flag[19]);
}