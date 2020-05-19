/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xconv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 22:27:56 by gbright           #+#    #+#             */
/*   Updated: 2020/05/09 14:58:17 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include "libft/libft.h"

char	*ft_conv_x(unsigned int x)
{
	char	temp[11];
	int		i;
	char	*out;

	ft_bzero(temp, 11);
	i = 11;
	if (x == 0)
		temp[--i] = '0';
	while (x)
	{
		temp[--i] = (x % 16) + '0';
		x /= 16;
	}
	ft_memmove(temp, temp + i, 11 - i);
	if (!(out = ft_calloc(sizeof(unsigned char), 11 - i)))
		return (0);
	ft_memcpy(out, temp, 11 - i);
	ft_abcdef(out, 11 - i);
	return (out);
}
