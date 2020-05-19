/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 10:34:42 by gbright           #+#    #+#             */
/*   Updated: 2020/05/08 10:26:34 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	delstart(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	set_len;

	set_len = (int)ft_strlen(set);
	i = -1;
	j = 0;
	while (++i < set_len && s1[j] != 0)
	{
		if (s1[j] == set[i])
		{
			i = -1;
			j++;
		}
	}
	return (j);
}

static int	delend(char const *s1, char const *set, int out_len)
{
	int	i;
	int	set_len;

	set_len = (int)ft_strlen(set);
	i = -1;
	while (++i < set_len && out_len > 0)
	{
		if (set[i] == s1[out_len - 1])
		{
			out_len--;
			i = -1;
		}
	}
	return (out_len);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	int		out_len;

	if (s1 == 0)
		return (0);
	s1 += delstart(s1, set);
	out_len = ft_strlen(s1);
	out_len = delend(s1, set, out_len);
	if (!(out = (char*)malloc((out_len + 1) * sizeof(char))))
		return (0);
	out[out_len] = 0;
	while (--out_len >= 0)
		out[out_len] = s1[out_len];
	return (out);
}
