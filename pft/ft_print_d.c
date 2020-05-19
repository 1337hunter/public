/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 15:30:56 by gbright           #+#    #+#             */
/*   Updated: 2020/05/14 15:06:13 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

static int	my_print_d(int *flag, char *s, int prec)
{
	int	counter;
	int	i;
	int	s_len;

	counter = 0;
	i = -1;
	s_len = ft_strlen(s);
	if (flag[2])
		while (++i < prec - s_len)
			counter += write(1, "0", 1);
	while (*s)
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

static int	ft_control_d(int *fl, int w, int prec, char *s)
{
	int	c;

	c = 0;
	if (fl[0])
	{
		c += my_print_flag(fl);
		c += my_print_d(fl, s, prec);
		c += ft_print_width(w - c, ' ');
	}
	else
	{
		if (fl[1])
			c += my_print_flag(fl);
		if (fl[1])
			c += ft_print_width(w - ft_max(prec, ft_strlen(s)) -
			(fl[12] || fl[13] || fl[19]), '0');
		else if (fl[3] || fl[5])
			c += ft_print_width(w - ft_max(prec, ft_strlen(s)) -
			(fl[12] || fl[13] || fl[19]), ' ');
		if (!(fl[1]))
			c += my_print_flag(fl);
		c += my_print_d(fl, s, prec);
	}
	return (c);
}

void		ft_print_d(va_list params, int *flag, int *total)
{
	int		w;
	int		prec;
	char	*s;

	w = (flag[3] ? va_arg(params, int) : flag[5]);
	prec = (flag[4] ? va_arg(params, int) : flag[6]);
	s = ft_itoa(va_arg(params, int));
	if (flag[2])
		flag[1] = 0;
	flag[19] = (*s == '-' ? 1 : 0);
	s += flag[19];
	*total += ft_control_d(flag, w, prec, s);
	free(s - flag[19]);
}
