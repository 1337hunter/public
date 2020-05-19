/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:36:48 by gbright           #+#    #+#             */
/*   Updated: 2020/05/10 18:39:12 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ftprintf.h"

void	ft_convs(const char *s, va_list params, int *flag, int *total)
{
	*s == 'c' ? ft_print_c(params, flag, total) : 0;
	*s == 's' ? ft_print_s(params, flag, total) : 0;
	*s == 'p' ? ft_print_p(params, flag, total) : 0;
	*s == 'd' ? ft_print_d(params, flag, total) : 0;
	*s == 'i' ? ft_print_d(params, flag, total) : 0;
	*s == 'u' ? ft_print_u(params, flag, total) : 0;
	*s == 'x' ? ft_print_x(params, flag, total) : 0;
	*s == 'n' ? ft_print_n(params, flag, total) : 0;
	*s == 'f' ? ft_print_f(params, flag, total) : 0;
	*s == 'g' ? ft_print_g(params, flag, total) : 0;
	/*s == 'e' ? ft_print_e(params, flag, total) : 0;
	*s == 'X' ? ft_print_xxx(params, flag, total) : 0;
	*s == '%' ? ft_print_percent(params, flag, total) : 0;*/
}
