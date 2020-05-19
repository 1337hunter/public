/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_infnan.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 18:23:04 by gbright           #+#    #+#             */
/*   Updated: 2020/05/16 18:24:05 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft/libft.h"
#include "ftprintf.h"

static int	my_print_flag(int *flag, char *s)
{
	int counter;

	counter = 0;
	if (flag[19])
	{
		counter += write(1, "-", 1);
		flag[13] = 0;
		flag[12] = 0;
	}
	if (flag[13] && *s != 'n')
		counter += write(1, "+", 1);
	else if (flag[12] && *s != 'n')
		counter += write(1, " ", 1);
	return (counter);
}

void	ft_print_infnan(char *s, int *fl, int *total, int w)
{
    if (fl[0])
    {
        *total += my_print_flag(fl, s);
        *total += write(1, s, 3);
		if (*s != 'n')
        	*total += ft_print_width(w - ft_strlen(s) - (fl[19] || fl[13] || fl[12]), ' ');
		else
			*total += ft_print_width(w - ft_strlen(s), ' ');
    }
    else 
    {
		if (*s != 'n')
        	*total += ft_print_width(w - ft_strlen(s) - (fl[19] || fl[13] || fl[12]), ' ');
        else
			*total += ft_print_width(w - ft_strlen(s), ' ');
		*total += my_print_flag(fl, s);
        *total += write(1, s, 3);
    }
}