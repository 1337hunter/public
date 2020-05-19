/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 11:11:23 by gbright           #+#    #+#             */
/*   Updated: 2020/05/13 10:42:08 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

void		ft_print_c(va_list params, int *flag, int *total);
void		ft_print_s(va_list params, int *flag, int *total);
void		ft_print_p(va_list params, int *flag, int *total);
void        ft_print_d(va_list params, int *flag, int *total);
void        ft_print_u(va_list params, int *flag, int *total);
char	    *ft_conv_p(void *p);
char	    *ft_conv_u(unsigned int  p);
char        *ft_conv_x(unsigned int x);
char	    *ft_conv_xx(unsigned int x);
int	        ft_printf(const char *, ...);
int         ft_print_width(int width, char ch);
char	    *ft_conv_lu(unsigned long p);
void	    ft_fzero(const char *s, va_list params);
int	        ft_abcdef(char *input, int size);
int	        ft_big_abcdef(char *input, int size);
const char	    *ft_flags(const char *s, int *flag);
const char	*ft_lhflags(const char *s, int *flag);
void		ft_convs(const char *s, va_list params, int *flag, int *total);
void        ft_flagerr(int *flag);
int		ft_get_digits(int n);
#endif
