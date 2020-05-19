/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 10:40:48 by gbright           #+#    #+#             */
/*   Updated: 2020/05/01 13:53:02 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i++;
	while (--i >= 0)
		if (s[i] == (char)c)
			return (&((char*)s)[i]);
	if (s[i] == (char)c)
		return (&((char*)s)[i]);
	else
		return (0);
	return (0);
}
