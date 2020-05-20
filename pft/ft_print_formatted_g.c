/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_formatted_g.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 17:00:39 by gbright           #+#    #+#             */
/*   Updated: 2020/05/19 17:00:42 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft/libft.h"


#include <stdio.h>
void    my_fillzero(char *s, int n, int *fl, int prec)
{
    s[n + 1] = 0;
    if (!fl[11])
        while ((s[n] == '0' || s[n] == '.') && !(fl[17] > -5 && fl[17] <= 0))
            s[n--] = 0;
    else if (fl[2] && prec && fl[11] && !(fl[17] > -5 && fl[17] <= 0))
        while (s[n] == '0' && n > prec)
            s[n--] = 0;
    else if (fl[11] && !(fl[17] > -5 && fl[17] <= 0))
        while (s[n] == '0')
            s[n--] = 0;
}

int     ft_print_formatted_g(char *s, int *fl, int prec, int exp)
{
    if (fl[11] && !prec && !fl[2])
        fl[18] += write(1, s, 7);
    else if (fl[2] && prec && (exp > -5 && exp <= 0))
    {
        my_fillzero(s, prec + ft_abs(fl[17]), fl, prec);
        while (*s)
            fl[18] += write(1, s++, 1);
    }
    else if (fl[11] && fl[2] && prec)
    {
        my_fillzero(s, prec , fl, prec);
        while (*s)
            fl[18] += write(1, s++, 1);
    }
    else if (!fl[11] && fl[2] && prec)
    {
        my_fillzero(s, prec, fl, prec);
        while (*s)
            fl[18] += write(1, s++, 1);
    }
    else if (fl[2] && (exp >= 6 || exp < -4))
    {
        my_fillzero(s, prec + 1, fl, prec);
        while (*s)
            fl[18] += write(1, s++, 1);
    }
    else if (!fl[2] && !fl[11] && (exp >= 6 || exp < -4))
    {
        my_fillzero(s, 6, fl, prec);
        while (*s)
            fl[18] += write(1, s++, 1);
    }
    else if (!fl[2] && !fl[11] && !(exp >= 6 || exp < -4))
    {
        my_fillzero(s, 6, fl, prec);
        while (*s)
            fl[18] += write(1, s++, 1);
    }
    return (fl[18]);
}