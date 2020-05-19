/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:43:30 by gbright           #+#    #+#             */
/*   Updated: 2020/05/11 15:17:03 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include "libft/libft.h"


#include <stdio.h>
static const char	*percent(const char *s, va_list params, int *total)
{
	int			flag[20];
	int			flagf[20];
	const char	*temp;

	temp = s;
	if (*s == '%')
		*total += write(1, "%", 1);
	ft_ibzero(flag, 20);
	ft_ibzero(flagf, 20);
	ft_flags_f(s, flagf);
	s = ft_flags(s, flag);
	s = ft_lhflags(s, flag);
	if (*s != 'f' && *s != 'g')
		ft_convs(s, params, flag, total);
	else if (*s == 'f' || *s == 'g')
		ft_convs(s, params, flagf, total);
	else
		return (temp);
	return (++s);
}

int					ft_printf(const char *s, ...)
{
	va_list	params;
	int	total;

	total = 0;
	va_start(params, s);
	while (*s != 0)
	{
		if (*s == '%')
			s = percent(++s, params, &total);
		else
			total += write(1, s++, 1);
	}
	va_end(params);
	return (total);
}
