/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string_assign
*/

#include "string.h"

void assign_s(string_t *this, const string_t *str)
{
    if (!this || !str)
        return;
    assign_c(this, str->str);
}

void assign_c(string_t *this, const char *s)
{
    if (!s || !this)
        return;
    if (this->str)
        free(this->str);
    if (!(this->str = malloc(sizeof(char) * (strlen(s) + 1))))
        return;
    strcpy(this->str, s);
}