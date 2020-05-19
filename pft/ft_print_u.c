/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 16:54:45 by gbright           #+#    #+#             */
/*   Updated: 2020/05/14 16:54:47 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"


#include <stdio.h>
static int	my_print_u(int *flag, char *s, int prec)
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


static int	my_control_u(int *fl, int w, int prec, char *s)
{
	int	c;

	c = 0;
	if (fl[0])
	{
		c += my_print_u(fl, s, prec);
		c += ft_print_width(w - c, ' ');
	}
	else
	{
		if (fl[1])
			c += ft_print_width(w - ft_max(prec, ft_strlen(s)), '0');
		else if (fl[3] || fl[5])
			c += ft_print_width(w - ft_max(prec, ft_strlen(s)), ' ');
		c += my_print_u(fl, s, prec);
	}
	return (c);
}

void    ft_print_u(va_list params, int *flag, int *total)
{
	int		w;
	int		prec;
	char	*s;

	w = (flag[3] ? va_arg(params, int) : flag[5]);
	prec = (flag[4] ? va_arg(params, int) : flag[6]);
	s = ft_utoa(va_arg(params, unsigned int));
	if (flag[2])
		flag[1] = 0;
	*total += my_control_u(flag, w, prec, s);
	free(s);
}