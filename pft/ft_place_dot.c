/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_dot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 09:10:09 by gbright           #+#    #+#             */
/*   Updated: 2020/05/19 09:12:01 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

char	*ft_place_dot(char *s, int exp, int prec)
{
	int	i;
	
	i = 0;
	if (exp < -4)
	{
		while (i-- >= exp)
			s++;
		*(s - 1) = *s;
		*s = '.';
		s--;
	}
	if (exp >= 6 && prec <= exp)
	{
		while (s[i] != '.' && s[i] != 0)
			i++;
		while (i > 1)
		{
			ft_swap(s + i - 1, s + i);
			i--;
		}
	}
	return (s);
}
