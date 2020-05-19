/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:39:15 by gbright           #+#    #+#             */
/*   Updated: 2020/05/07 14:39:32 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*out;
	size_t		i;

	if (!(out = malloc(nmemb * size)))
		return (0);
	i = -1;
	while (++i < nmemb * size)
		((char*)out)[i] = '\0';
	return (out);
}
