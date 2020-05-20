# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbright <gbright@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/29 22:01:11 by gbright           #+#    #+#              #
#    Updated: 2020/05/13 10:40:53 by gbright          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS = 	./ft_printf.c ./ft_conv_x.c ./ft_conv_xxx.c ./ft_conv_lu.c \
       	./ft_abcdef.c ./ft_big_abcdef.c ./ft_flags.c ./ft_lhflags.c 	\
	./ft_convs.c ./ft_get_digits.c ./ft_print_c.c ./ft_print_s.c	\
	./ft_print_p.c  ./ft_conv_p.c ./ft_print_d.c ./ft_print_u.c \
	 ./ft_print_x.c ./ft_print_n.c ./ft_conv_lu.c ./ft_get_exp.c \
	./ft_conv_f.c ./ft_print_f.c ./ft_flags_f.c ./ft_ibzero.c \
	./ft_print_infnan.c ./ft_conv_ld.c ./ft_swap.c \
	./ft_round.c ./ft_print_exp.c ./ft_print_formatted_g 
	
	

OBJ = $(SRCS:.c=.o)

BONUS =

%o: %c
	gcc $(FLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@cd ./libft/ && make
	@ar rc $(NAME) $(OBJ)
bonus:

test:

clean:
	@rm -f $(OBJ) 
	@cd ./libft/ && make clean

fclean: clean 
	@rm -f $(NAME) 
	@cd ./libft/ && make fclean

re: fclean all

.PHONY: all clean fclean re