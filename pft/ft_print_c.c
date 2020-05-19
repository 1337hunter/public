/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:36:02 by gbright           #+#    #+#             */
/*   Updated: 2020/05/11 18:36:04 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"



#include <stdio.h>
void    ft_print_c(va_list params, int *flag, int *total)
{
    unsigned char   c;
    int             width;

    width = 0;
    if (flag[3] == 1)
        width = va_arg(params, int);
    c = (unsigned char)va_arg(params, int);
    if (flag[0] == 1)
    {
        *total += write(1, &c, 1);
        if (flag[5] > 0)
            *total += ft_print_width(flag[5] - 1, ' ');
        else if (flag[3] == 1)
            *total += ft_print_width(width - 1, ' ');
    }
    else
    {
        if (flag[5] > 0)
            *total += ft_print_width(flag[5] - 1, ' ');
        else if (flag[3] == 1)
            *total += ft_print_width(width - 1, ' ');
        *total += write(1, &c, 1);
    }
}