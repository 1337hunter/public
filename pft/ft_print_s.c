/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 22:03:34 by gbright           #+#    #+#             */
/*   Updated: 2020/05/11 22:03:48 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"



#include <stdio.h>
static int  my_print_s(int *flag, char *s, int *total, int pre)
{
    int counter;

    counter = 0;
    if (flag[4] || flag[6] || flag[2])
    {
        while (pre && *s)
        {
            counter++;
            *total += write(1, s++, 1);
            pre--;
        }
    }
    else
    {
        while (*s)
        {
            *total += write(1, s++, 1);
            counter++;
        }
    }
    return (counter);   
}

static int  mini(int arg1, int arg2)
{
    if (arg1 < arg2)
        return (arg1);
    return (arg2);
}

void        ft_print_s(va_list params, int *flag, int *total)
{
    char    *s;
    int     width;
    int     pre;
    int     counter;

    width = (flag[3] ? va_arg(params, int) : flag[5]);
    pre = (flag[4] ? va_arg(params, int) : flag[6]);
    s = va_arg(params, char*);
    if (flag[0])
    {
        counter = my_print_s(flag, s, total, pre);
        if (flag[3] || flag[5])
            *total += ft_print_width(width - counter, ' ');
    }
    else
    {
        if (flag[3] || flag[5])
            *total += ft_print_width(width - mini(pre, ft_strlen(s)), ' ');
        my_print_s(flag, s, total, pre);
    }
}