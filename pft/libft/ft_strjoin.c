/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:02:14 by gbright           #+#    #+#             */
/*   Updated: 2020/05/05 22:56:05 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*out;

	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = 0;
	while (s1[s1_len] != 0)
		s1_len++;
	s2_len = 0;
	while (s2[s2_len] != 0)
		s2_len++;
	if (!(out = (char*)malloc((s1_len + s2_len + 1) * sizeof(char))))
		return (0);
	while (*s1 != '\0')
		*out++ = *s1++;
	while (*s2 != '\0')
		*out++ = *s2++;
	*out = '\0';
	return (out - s1_len - s2_len);
}
