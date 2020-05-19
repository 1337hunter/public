/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 22:09:59 by gbright           #+#    #+#             */
/*   Updated: 2020/05/08 12:15:05 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

char	*ft_strdup(const char *s)
{
	char	*new;
	int		len;

	len = 0;
	while (s[len++] != '\0')
		continue ;
	if (!(new = (char*)malloc(len * sizeof(char))))
		return (0);
	while (--len >= 0)
		new[len] = s[len];
	return (new);
}
