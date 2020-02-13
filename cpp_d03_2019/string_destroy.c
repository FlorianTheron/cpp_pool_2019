/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string_destroy
*/

#include "string.h"

void string_destroy(string_t *this)
{
    if (this == NULL) {
        fprintf(stderr, "Nothing to free.\n");
        return;
    }
    if (this->str)
        free(this->str);
    this->str = NULL;
}