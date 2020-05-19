/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 21:10:16 by gbright           #+#    #+#             */
/*   Updated: 2020/05/14 21:10:18 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

static int	my_print_x(int *flag, char *s, int prec)
{
	int	count;
	int	i;
	int	s_len;

	count = 0;
	i = -1;
	s_len = ft_strlen(s);
	if (flag[2])
		while (++i < prec - s_len)
			count += write(1, "0", 1);
	while (*s)
		count += write(1, s++, 1);
	return (count);
}

static int	my_control_x(int *fl, int w, int prec, char *s)
{
    int	c;

	c = 0;
	if (fl[0])
	{
        if (fl[11])
            c += write(1, "0x", 1);
		c += my_print_x(fl, s, prec);
		c += ft_print_width(w - c, ' ');
	}
	else
	{
        if (fl[1] && fl[11])
            c += write(1, "0x", 2);
        if (fl[1])
            c += ft_print_width(w - c - ft_max(prec, ft_strlen(s)), '0');
        else if (fl[3] || fl[5])
            c += ft_print_width(w - ft_max(prec, ft_strlen(s)) -
            2 * fl[11], ' ');
        if (!(fl[1]) && fl[11])
            c += write(1, "0x", 2);
        c += my_print_x(fl, s, prec);
	}
	return (c);
}

void    ft_print_x(va_list params, int *flag, int *total)
{
    char    *s;
    int     w;
    int     prec;

	if (flag[2])
		flag[1] = 0;
    w = (flag[3] ? va_arg(params, int) : flag[5]);
    prec = (flag[4] ? va_arg(params, int) : flag[6]);
    s = ft_conv_x(va_arg(params, unsigned int));
    *total += my_control_x(flag, w, prec, s);
}