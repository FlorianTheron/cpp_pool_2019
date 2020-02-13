/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** insert
*/

#include "string.h"

void insert_s(string_t *this, size_t pos, const string_t *str)
{
    if (!this || !str)
        return;
    if (!this->str || !str->str)
        return;
    insert_c(this, pos, str->str);
}

void insert_c(string_t *this, size_t pos, const char *str)
{
    char *new_str = NULL;

    if (pos > strlen(this->str))
        return (append_c(this, str));
    new_str = calloc(strlen(this->str) + strlen(str) + 1, sizeof(char));
    if (!strncpy(new_str, this->str, pos))
        return;
    if (!strcat(new_str, str))
        return;
    if (!strcat(new_str, this->str + pos))
        return;
    free(this->str);
    this->str = new_str;
}