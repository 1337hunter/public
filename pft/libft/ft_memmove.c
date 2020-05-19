/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 13:57:58 by gbright           #+#    #+#             */
/*   Updated: 2020/05/08 10:23:23 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dest == 0 && src == 0)
		return (0);
	if (dest == src)
		return (dest);
	if (dest > src)
		while (n--)
			((unsigned char*)dest)[n] = ((unsigned char*)src)[n];
	else
		while (++i < n)
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
	return (dest);
}
