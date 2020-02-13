##
## EPITECH PROJECT, 2020
## cpp_d06_2019
## File description:
## Makefile
##

CC = g++

CFLAGS = -W -Wall -Wextra

SRC = $(wildcard *.cpp)

NAME = my_cat

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)
	rm -rf $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf *~
	rm -rf \#*\#

fclean: clean
	rm -rf $(NAME)

re: fclean all
