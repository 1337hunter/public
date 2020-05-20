/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 14:16:06 by gbright           #+#    #+#             */
/*   Updated: 2020/05/20 17:42:35 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


#include <stdio.h>
char	*ft_utoa(unsigned int n)
{
	char	temp[11];
	int		i;
	char	*out;

	i = 11;
	if (n == 0)
		temp[--i] = '0';
	while (n)
	{
		temp[--i] = '0' + (n % 10);
		n /= 10;
	}
	if (!(out = ft_calloc(sizeof(unsigned char), 11 - i)))
		return (0);
	ft_memmove(out, temp + i, 11 - i);
	out[11 - i] = 0;
	return (out);
}
