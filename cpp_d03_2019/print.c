/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** print
*/

#include "string.h"

void print(const string_t *this)
{
    if (!this)
        return;
    if (!this->str)
        return;
    printf("%s", this->str);
}