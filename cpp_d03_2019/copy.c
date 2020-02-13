/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** copy
*/

#include "string.h"

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t index = 0;

    if (!s || !this)
        return (0);
    if (!this->str)
        return (0);
    if (pos > strlen(this->str) || n > strlen(this->str))
        return (0);
    if ((pos + n > strlen(this->str)))
        return (0);
    for (; index < n; index += 1) {
        s[index] = this->str[pos];
        pos += 1;
    }
    return (n);
}