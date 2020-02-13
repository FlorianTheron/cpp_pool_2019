##
## EPITECH PROJECT, 2020
## cpp_d01_2019
## File description:
## Makefile
##

CC = gcc

CFLAGS = -W -Wall -Wextra -I. -std=gnu11

FLAGS = --coverage -lcriterion

SRC = $(wildcard *.c tests/*.c)

NAME = unit_tests

OBJ = $(SRC:.c=.o)

all: tests_run

tests_run: $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(FLAGS)
	rm -rf $(OBJ)
	./unit_tests

clean:
	rm -rf $(OBJ)
	rm -rf *~
	rm -rf \#*\#

fclean: clean
	rm -rf $(NAME)

re: fclean all
