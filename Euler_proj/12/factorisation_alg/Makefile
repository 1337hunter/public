FLAGS = -Wall -Wextra -Werror

NAME = prog

SRC_FILES = ./srcs/*.c

LIB_FILES = ./libft/*.c 

all:
	clear
	@echo "Compiling... (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧"
	@gcc -o $(NAME) $(FLAGS) $(SRC_FILES) $(LIB_FILES) -I./includes/
	@echo "Done! \(★ ω ★)/"

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

.PHONY: all clean fclean
