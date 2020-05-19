/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 15:42:49 by gbright           #+#    #+#             */
/*   Updated: 2020/05/15 15:42:51 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"



#include <stdio.h>
static char *my_fillnaninf(int detect)
{
    char *out;

    if(!(out = (char*)ft_calloc(sizeof(unsigned char), 5)))
            return (0);
    if (detect == 0)
    {
        out[0] = 'n';
        out[1] = 'a';
        out[2] = 'n';
    }
    else if (detect == 1)
    {
        out[0] = 'i';
        out[1] = 'n';
        out[2] = 'f';
    }
    else if (detect == 2)
    {
        out[0] = '-';
        out[1] = 'i';
        out[2] = 'n';
        out[3] = 'f'; 
    }
    return (out);
}

static void my_get_right(double nb, char *out)
{
    int i;

    i = -1;
    out[++i] = '.'; 
    while (++i < 52)
    {
        nb *= 10;
        out[i] = (int)nb + '0';
        nb = nb - (int)nb;
    }
    out[i] = 0;
}

static void my_get_left(double nb, char *out)
{
    int     i;
    double  power;
    double  temp;
    int     j;

    i = 0;
    while ((int)nb != 0 || i == 0)
    {
        power = 1;
        temp = nb;
        while ((int)temp > 9 || (int)temp < -9)
		{
			power *= 10;
			temp /= 10;
		}
        out[i++] = (int)temp + '0';
        nb = nb - power * (double)((int)temp);
        j = 10;
        while (((unsigned long long)(temp * j)) % 10 == 0 && (int)nb != 0)
        {
            out[i++] = '0';
            j *= 10;
        }
    }
    my_get_right(nb, &out[i]);
}

static char *my_conv_g(double nb, int *fl)
{
    char        *out;
    int         i;

    i = 2;
    if (!(out = (char*)ft_calloc(sizeof(unsigned char), 380)))
		return (0);
    out[0] = '0';
    out[1] = '0';
    fl[14] = 2;
    if (nb  < 0 || *((long *)&nb) == 0x8000000000000000)
    {
        out[i++] = '-';
        nb = -nb;
    }
    my_get_left(nb, &out[i]);
    return (out + 2);
}

char    *ft_conv_g(double nb, int *fl)
{
    if (nb == 1.0 / 0.0)
        return (my_fillnaninf(1));
    else if (nb == -1.0 / 0.0)
        return (my_fillnaninf(2));
    else if (nb != nb)
        return (my_fillnaninf(0));
    else
        return (my_conv_g(nb, fl));
}