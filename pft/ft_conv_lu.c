/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_lu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:35:46 by gbright           #+#    #+#             */
/*   Updated: 2020/05/10 18:42:47 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

char	*ft_conv_lu(unsigned long int n)
{
	char	temp[22];
	int		i;
	char	*out;

	temp[21] = 0;
	i = 21;
	if (n == 0)
		temp[--i] = '0';
	while (n)
	{
		temp[--i] = '0' + (n % 10);
		n /= 10;
	}
	ft_memmove(temp, temp + i, 22 - i);
	if (!(out = ft_calloc(sizeof(unsigned char), 22 - i)))
		return (0);
	ft_memcpy(out, temp, 22 - i);
	return (out);
}
