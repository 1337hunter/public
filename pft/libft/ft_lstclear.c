/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:11:14 by gbright           #+#    #+#             */
/*   Updated: 2020/05/05 21:47:18 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	**start;

	if (del == 0)
		return ;
	start = lst;
	next = *lst;
	if (*lst != 0)
	{
		while (next)
		{
			next = next->next;
			(*del)((*lst)->content);
			free(*lst);
			*lst = next;
		}
		*start = 0;
	}
}
