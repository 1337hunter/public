/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 11:05:27 by gbright           #+#    #+#             */
/*   Updated: 2020/05/05 23:10:35 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (*little == 0)
		return ((char*)big);
	k = 0;
	j = 0;
	i = -1;
	while (++i < len && little[j] && big[i])
	{
		j = 0;
		k = i;
		while (little[j] && big[i] && big[i] == little[j] && i < len)
		{
			i++;
			j++;
		}
		i = k;
	}
	if (little[j] == 0)
		return (&((char*)big)[i - 1]);
	return (0);
}
