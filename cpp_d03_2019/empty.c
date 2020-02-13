/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** empty
*/

#include "string.h"

int empty(const string_t *this)
{
    if (!this)
        return (1);
    if (!this->str)
        return (1);
    if (this->str[0] == '\0')
        return (1);
    return (0);
}