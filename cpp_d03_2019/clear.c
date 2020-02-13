/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** clear
*/

#include "string.h"

void clear(string_t *this)
{
    if (!this)
        return;
    if (!this->str)
        return;
    this->str[0] = 0;
}