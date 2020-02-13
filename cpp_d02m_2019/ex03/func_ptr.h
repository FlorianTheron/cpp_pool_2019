/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** func_ptr
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include "func_ptr_enum.h"

#ifndef FUNC_PTR_H_
#define FUNC_PTR_H_

typedef struct ptr_s {
    action_t action;
    void (*ptr)(const char *);
} ptr_t;

void print_normal(const char *str);
void print_reverse(const char *str);
void print_upper(const char *str);
void print_42(const char *str);
void do_action(action_t action, const char *str);

#endif /* !FUNC_PTR_H_ */
