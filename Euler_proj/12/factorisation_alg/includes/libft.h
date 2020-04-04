/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbright <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 14:29:59 by gbright           #+#    #+#             */
/*   Updated: 2020/03/15 17:12:17 by gbright          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void		ft_putchar_fd(int fd, char c);
void		ft_putstr_fd(int fd, char *str);
void		ft_putnbr(int nb);
char		*ft_strdup_size(char *src, int o_size);
int		*ft_idup_size(int *src, int o_size, int n);
int		ft_strlen(char *out);
int		ft_atoi(char *str);
void		ft_putchar(char c);
void		ft_control(void);
int		*ft_next_set(int *arr, int m, int n);
int		ft_factor(int **arr, int nb);
int		*ft_first_comb(int n);
int		ft_check_comb(int *comb, int c, int *primes);
int		ft_check_all_comb(int m, int n, int *primes);
void		ft_control(void);
int		ft_uniq_nums(int *arr, int len);
int		ft_check_div(int **divs, int div, int sum, int size);
#endif
