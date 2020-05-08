/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:50:30 by gbright           #+#    #+#             */
/*   Updated: 2020/05/07 22:16:36 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	if (dest == 0 && src == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (((unsigned char*)src)[i] != (unsigned char)c)
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		else
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			return (&((unsigned char*)dest)[++i]);
		}
		i++;
	}
	return (0);
}
