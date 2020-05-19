/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 18:44:17 by gbright           #+#    #+#             */
/*   Updated: 2020/05/05 23:05:38 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		s_len;
	char	*out;
	int		i;

	if (f == 0 || s == 0)
		return (0);
	s_len = -1;
	while (s[++s_len] != '\0')
		continue ;
	if (!(out = (char*)malloc((s_len + 1) * sizeof(char))))
		return (0);
	out[s_len] = '\0';
	i = -1;
	while (s[++i] != '\0')
		out[i] = (*f)(i, s[i]);
	return (out);
}
