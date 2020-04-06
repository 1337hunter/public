/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:10:25 by gbright           #+#    #+#             */
/*   Updated: 2020/03/15 19:17:44 by cvirgil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		c;
	int		i;

	c = 0;
	while (*(src + c) != '\0')
	{
		c++;
	}
	c++;
	i = 0;
	while (i < c)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strdup_size(char *src, int o_size)
{
	char	*out;

	if (!(out = malloc(sizeof(*out) * o_size)))
		return (0);
	ft_strcpy(out, src);
	free(src);
	return (out);
}
