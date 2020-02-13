/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** size
*/

#include "string.h"

int size(const string_t *this)
{
    if (!this)
        return (-1);
    if (!this->str)
        return (-1);
    return (strlen(this->str));
}