/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** mem_ptr
*/

#include "mem_ptr.h"
#include <stdlib.h>
#include <string.h>

void add_str(const char *str1, const char *str2, char **res)
{
    if (str1 == NULL && str2 == NULL)
        return;
    *res = malloc(sizeof(char) * (strlen(str1) + strlen(str2)));
    *res = strcat(*res, str1);
    *res = strcat(*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    if (str_op == NULL)
        return;
    if (str_op->str1 == NULL && str_op->str2 == NULL)
        return;
    str_op->res = malloc(sizeof(char) * (strlen(str_op->str1)
    + strlen(str_op->str2)));
    str_op->res = strcat(str_op->res, str_op->str1);
    str_op->res = strcat(str_op->res, str_op->str2);
}