/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 14:24:26 by gbright           #+#    #+#             */
/*   Updated: 2020/03/15 18:41:48 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_str_input(void)
{
	char		ch;
	unsigned int	size;
	unsigned int	red;
	unsigned int	i;
	char		*out;

	size = 64;
	ch = 1;
	if (!(out = (char*)malloc(sizeof(char) * size)))
		return (0);
	red = 1;
	i = 0;
	while (red)
	{
		red = read(0, &ch, 1);
		i++;
		if (size <= i)
		{
			size *= 2;
			if(!(out = ft_strdup_size(out, size)))
				return (0);
		}
		out[i - 1] = ch;
	}
	out[i - 1] = 0;
	return (out);
}
