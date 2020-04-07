##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Thomas Olry's Makefile made the 11/29/2019
##

SRC	=	main.c		\
		all_calc.c	\
		matrice.c	\
		error.c		\

CC	=	gcc -o

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror  -I./include/ -lm

NAME	=	102architect

all:	$(NAME)

$(NAME): $(OBJ)
	$(CC) $(NAME) $(OBJ) $(CFLAGS)
	@echo -e "\e[44;1m----------------THATS WORK !!!----------------\e[0m"

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
