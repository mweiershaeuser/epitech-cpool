##
## EPITECH PROJECT, 2023
## Makefile cat
## File description:
## Makefile for cat
##

NAME = "cat"

SRC = main.c

OBJ = $(SRC:.c=.o)

.PHONY: all libmy clean fclean re

all: libmy $(NAME)

libmy:
	cd ../lib/my/ && make re

$(NAME):
	gcc -o cat $(SRC) -I./include -L../lib/my -lmy

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
