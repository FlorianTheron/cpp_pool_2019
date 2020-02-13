/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** join
*/

#include "string.h"

void join_s(string_t *this, char delim, const string_t * const * tab)
{
    if (!this || !(*tab))
        return;
    this->str = strdup(my_str_struct_join(tab, delim));
}

void join_c(string_t *this, char delim, const char * const *tab)
{
    if (!this || !(*tab))
        return;
    this->str = strdup(my_strjoin(tab, delim));
}