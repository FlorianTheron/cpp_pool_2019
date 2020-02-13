/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** find
*/

#include "string.h"

int find_s(const string_t *this, const string_t *str , size_t pos)
{
    if (!this || !str)
        return (-1);
    if (!this->str || !str->str)
        return (-1);
    return (find_c(this, str->str, pos));
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    int str_len = 0;
    int find_len = 0;

    if (!this)
        return (-1);
    if (!this->str)
        return (-1);
    str_len = strlen(this->str);
    find_len = strlen(str);
    if (pos > (size_t)str_len)
        return (-1);
    for (int i = pos; i + find_len < str_len; i += 1)
        if (strncmp(this->str + i, str, find_len) == 0)
            return (i);
    return (-1);
}