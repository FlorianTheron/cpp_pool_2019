/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** c_str
*/

#include "string.h"

const char *c_str(const string_t *this)
{
    if (!this)
        return (NULL);
    if (!this->str)
        return (NULL);
    return (this->str);
}