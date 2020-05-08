/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 12:52:25 by gbright           #+#    #+#             */
/*   Updated: 2020/05/08 11:50:38 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			wordc(const char *s1, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s1[i])
	{
		if (s1[i] == c)
		{
			while (s1[i] == c)
				i++;
			words++;
		}
		i++;
	}
	return (words + 1);
}

int			wordl(const char *s1, char c)
{
	int	l;

	l = 0;
	while (s1[l] != c && s1[l])
		l++;
	return (l);
}

const char	*go_next(const char *s1, char c)
{
	while (*s1 == c && *s1)
		s1++;
	return (s1);
}

static char	**memreset(char **input)
{
	int	i;

	i = -1;
	while (input[++i])
		free(input[i]);
	free(input);
	return (0);
}

char		**ft_split(char const *s, char c)
{
	char	**out;
	int		l;
	int		w;
	int		i;

	if (s == 0)
		return (0);
	w = 0;
	if (!(out = (char**)malloc(sizeof(char*) * (wordc(s, c) + 1))))
		return (0);
	while (*s)
	{
		s = go_next(s, c);
		if ((l = wordl(s, c)) && *s)
		{
			if (!(out[w] = (char*)malloc(sizeof(char) * (l + 1))))
				return (memreset(out));
			i = 0;
			while (i < l && *s)
				out[w][i++] = *s++;
			out[w++][l] = 0;
		}
	}
	out[w] = 0;
	return (out);
}
