##
## EPITECH PROJECT, 2020
## cpp_d03_2019
## File description:
## Makefile
##

CC = gcc

SRCS = $(wildcard *.c ../*.c)

CFLAGS = -I -W -Wall -Wextra -std=gnu11

FLAGS = --coverage -lcriterion

NAME = tests_run

all: $(NAME)

$(NAME): $(SRCS)
	gcc -o unit_tests $(SRCS) $(CFLAGS) $(FLAGS)
	./unit_tests

clean:
	rm -rf *.gc*

fclean: clean
	rm -rf unit_tests

re: fclean all

.PHONY: clean fclean all re