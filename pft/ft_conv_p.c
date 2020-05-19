/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pconv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:16:58 by gbright           #+#    #+#             */
/*   Updated: 2020/05/09 12:12:56 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"


#include <stdio.h>
char	*ft_conv_p(void *p)
{
	unsigned long	p_addr;
	char			temp[13];
	int				i;
	char			*out;

	p_addr = (unsigned long)p;
	i = 13;
	while (p_addr)
	{
		temp[--i] = p_addr % 16 + '0';
		p_addr /= 16;
	}
	if (!(out = ft_calloc(sizeof(unsigned char), 13 - i + 2)))
		return (0);
	if (i == 13)
		out[2] = '0';
	out[0] = '0';
	out[1] = 'x';
	ft_memmove(out + 2, temp + i, 13 - i);
	ft_abcdef(out + 2, 13 - i);
	return (out);
}
