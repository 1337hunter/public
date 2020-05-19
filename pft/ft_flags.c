/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:31:00 by gbright           #+#    #+#             */
/*   Updated: 2020/05/11 15:14:22 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

const char		*ft_flags(const char *s, int *fl)
{
	while (*s == '-' || *s == '0' || *s == '.' || *s == '*' ||
			(*s >= '1' && *s <= '9') || *s == '#' ||
			*s == ' ' || *s == '+')
	{
		fl[0] = (*s == '-' || fl[0] ? 1 : 0);
		fl[1] = (*s == '0' || fl[1] ? 1 : 0);
		fl[2] = (*s == '.' || fl[2] ? 1 : 0);
		fl[4] = ((*s == '*' && fl[2]) || fl[4] ? 1 : 0);
		fl[3] = ((*s == '*' || fl[3]) ? 1 : 0);
		if (*s >= '1' && *s <= '9' && fl[2] && !(fl[6]))
		{
			fl[6] = ft_atoi(s);
			s += ft_get_digits(fl[6]) - 1;
		}
		if (*s >= '1' && *s <= '9' && !fl[5] && !fl[2])
		{
			fl[5] = ft_atoi(s);
			s += ft_get_digits(fl[5]) - 1;
		}
		fl[11] = (*s == '#' || fl[11] ? 1 : 0);
		fl[12] = (*s == ' ' || fl[12] ? 1 : 0);
		fl[13] = (*s == '+' || fl[13] ? 1 : 0);
		s++;
	}
	return (s);
}
