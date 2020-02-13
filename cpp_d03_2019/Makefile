##
## EPITECH PROJECT, 2020
## cpp_d03_2019
## File description:
## Makefile
##

CC = gcc

SRCS = $(wildcard *.c)

TEST_SRCS = $(wildcard *.c tests/*.c)

OBJS = $(SRCS:.c=.o)

TEST_OBJS = $(TEST_SRCS:.c=.o)

CFLAGS = -I -W -Wall -Wextra -std=gnu11

FLAGS = --coverage -lcriterion

NAME = libstring

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@.a $(OBJS)
	rm -rf *.o

tests_run:
	make -C tests/

clean:
	rm -rf $(OBJS)
	make -C tests/ clean

fclean: clean
	rm -rf $(NAME).a
	make -C tests/ fclean

re: fclean all

.PHONY: clean fclean all re