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
#include <stdio.h>
int	*ft_incpy(int *dest, int *src, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	*ft_idup_size(int *src, int o_size, int n)
{
	int	*out;

	if (!(out = malloc(sizeof(*out) * o_size)))
		return (0);
	ft_incpy(out, src, n);
	free(src);
	return (out);
}
