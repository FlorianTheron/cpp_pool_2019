##
## EPITECH PROJECT, 2020
## cpp_d01_2019
## File description:
## Makefile
##

CC = gcc

CFLAGS = -W -Wall -Wextra -I -std=gnu11

SRC = $(wildcard *.c)

NAME = menger

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -rf $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf *~
	rm -rf \#*\#

fclean: clean
	rm -rf $(NAME)

re: fclean all
