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
void        ft_print_x(va_list params, int *flag, int *total);
void        ft_print_n(va_list params, int *flag, int *total);
void        ft_print_f(va_list params, int *flag, int *total);
void        ft_print_g(va_list params, int *flag, int *total);
int         ft_print_formatted_g(char *s, int *fl, int prec, int exp);
int         ft_print_exp(int exp);
int         ft_print_width(int width, char ch);
int	        ft_printf(const char *, ...);
char	    *ft_conv_p(void *p);
char	    *ft_conv_u(unsigned int  p);
char        *ft_conv_x(unsigned int x);
char        *ft_conv_f(double nb);
char        *ft_conv_g(double nb, int *fl);
char        *ft_conv_lu(unsigned long n);
char        *ft_conv_ld(long int n);
char	    *ft_conv_xxx(unsigned int x);
void	    ft_fzero(const char *s, va_list params);
int	        ft_abcdef(char *input, int size);
int	        ft_big_abcdef(char *input, int size);
const char	*ft_flags(const char *s, int *fl);
void        ft_flags_f(const char *s, int *fl);
void        ft_ibzero(int *arr, int n);
void		ft_convs(const char *s, va_list params, int *flag, int *total);
void        ft_print_infnan(char *s, int *flag, int *total, int w);
void        ft_swap(char *a, char *b);
const char	*ft_lhflags(const char *s, int *flag);
int		    ft_get_digits(int n);
int         ft_get_exp(char *s);
int         ft_round(char *s);
char        *ft_place_dot(char *s, int exp, int prec);
#endif
