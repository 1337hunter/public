/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_width.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:59:49 by gbright           #+#    #+#             */
/*   Updated: 2020/05/11 18:59:51 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_print_width(int width, char ch)
{
    int i;
    int counter;
    
    i = -1;
    counter = 0;
    while (++i < width)
        counter += write(1, &ch, 1);
    return (counter);
}