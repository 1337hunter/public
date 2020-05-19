/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 10:38:50 by gbright           #+#    #+#             */
/*   Updated: 2020/05/13 10:38:52 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

static int  my_print_p(int *flag, char *s, int prec)
{
    int i;
    int counter;

    counter = 0;
    if (s[2] == '0' && ft_strlen(s) == 3 && flag[2])
    {
        i = 0;
        counter += write(1, s, 3);
        while(++i < prec)
            counter += write(1, "0", 1);
    }
    else
        while (*s)
            counter += write(1, s++, 1);
    return (counter);
}

void        ft_print_p(va_list params, int *flag, int *total)
{
    char    *s;
    int     width;
    int     prec;
    int     counter;

    width = (flag[3] ? va_arg(params, int) : flag[5]);
    prec = (flag[4] ? va_arg(params, int) : flag[6]);
    s = ft_conv_p(va_arg(params, void*));
    if (flag[0])
    {
        counter = my_print_p(flag, s, prec);
        *total += counter;
        *total += ft_print_width(width - counter, ' ');
    }
    else
    {
        if (!(flag[2]))
            *total += ft_print_width(width - 14, ' ');
        else
            *total += ft_print_width(width - 2 - prec, ' ');
        *total += my_print_p(flag, s, prec);
    }
    free(s);
}