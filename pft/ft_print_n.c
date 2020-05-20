/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 22:18:36 by gbright           #+#    #+#             */
/*   Updated: 2020/05/14 22:18:37 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

static void    my_print_n(va_list params,int *flag, int *total, void *point)
{
    if (!flag[7] && !flag[8] && !flag[9] && !flag[10])
    {
        point = va_arg(params, int*);
        *((int*)point) = *total;
    }
    if (flag[7] && !flag[8] && !flag[9] && !flag[10])
    {
        point = va_arg(params, long int*);
        *((long int*)point) = *total;
    }
    if (flag[7] && flag[8] && !flag[9] && !flag[10])
    {
        point = va_arg(params, long long int*);
        *((long long int*)point) = *total;
    }
    if (!flag[7] && !flag[8] && flag[9] && !flag[10])
    {
        point = va_arg(params, short int*);
        *((short int*)point) = *total;
    }
    if (!flag[7] && !flag[8] && flag[9] && flag[10])
    {
        point = va_arg(params, signed char*);
        *((signed char*)point) = *total;
    }
}

void    ft_print_n(va_list params, int *flag, int *total)
{
    void    *point;

    point = 0;
    my_print_n(params, flag, total, point);
}