/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 14:41:27 by gbright           #+#    #+#             */
/*   Updated: 2020/05/08 11:00:46 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*my_shift(char *temp, int i)
{
	char	*out;
	int		j;

	j = 0;
	if (temp[0] == 0)
		if (!(out = (char*)malloc((12 - i) * sizeof(char))))
			return (0);
	if (temp[0] == '-')
	{
		if (!(out = (char*)malloc((12 - i + 1) * sizeof(char))))
			return (0);
		out[j++] = '-';
	}
	while (i < 11)
		out[j++] = temp[i++];
	out[j] = 0;
	return (out);
}

char		*ft_itoa(int n)
{
	char	temp[11];
	int		i;

	i = 11;
	temp[0] = 0;
	if (n < 0)
	{
		temp[0] = '-';
		if (n == -2147483648)
		{
			temp[--i] = '8';
			n /= 10;
		}
		n *= -1;
	}
	if (n == 0)
		temp[--i] = '0';
	while (n != 0)
	{
		temp[--i] = '0' + (n % 10);
		n /= 10;
	}
	return (my_shift(temp, i));
}
