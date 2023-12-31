##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile for the final stumper
##

MAIN	=	main.c

SRC	=	rush3.c	\
		handle_3_to_5.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

LIB	=	libmy.a

TESTS	=	unit_tests

.PHONY: all \
	clean_lib clean_emacs clean_tests clean \
	fclean_lib fclean \
	re \
	tests_run tests_run_cov

all: $(NAME)

$(LIB):
	cd lib/my && make re

$(NAME): $(LIB)
	gcc -o $(NAME) -Wall -Wextra $(MAIN) $(SRC) -L . -lmy

clean_lib:
	cd lib/my && make clean

clean_emacs:
	find . \( -name "*~" -or -name "#*#" \) -delete

clean_tests:
	rm -f $(TESTS)
	rm -rf coverage

clean: clean_emacs clean_lib
	rm -f $(OBJ)

fclean_lib:
	cd lib/my && make fclean

fclean: clean clean_tests fclean_lib
	rm -f $(NAME)

re: fclean all

$(TESTS): $(LIB)
	mkdir -p coverage
	cd coverage && \
	gcc -o $(TESTS) ../rush3.c ../handle_3_to_5.c ../tests/*.c \
	-L ../ -lmy --coverage -lcriterion

tests_run: $(TESTS)
	cd coverage && ./$(TESTS)

tests_run_cov: $(TESTS)
	mkdir -p coverage
	cd coverage && \
	gcc -o $(TESTS) ../rush3.c ../handle_3_to_5.c ../tests/*.c \
	-L ../ -lmy --coverage -lcriterion
	cd coverage && ./$(TESTS)
	gcovr --exclude tests
	gcovr --exclude tests --branches
