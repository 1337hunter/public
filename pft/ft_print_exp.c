/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_minus_exp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 12:05:08 by gbright           #+#    #+#             */
/*   Updated: 2020/05/18 12:06:29 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ftprintf.h"

int	ft_print_exp(int exp)
{
	int count;
	count = 0;

	if (exp < 0)
		count += write(1, "e-", 2);
	else
		count += write(1, "e+", 2);
	if (exp > -10 && exp < 10)
		count += write(1, "0", 1);
	if (exp > 0)
		count += ft_printf("%d", exp);
	else
		count += ft_printf("%d", -exp);
	return (count);
}