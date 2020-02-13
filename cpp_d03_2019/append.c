/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** string_append
*/

#include "string.h"

void append_s(string_t *this, const string_t *ap)
{
    char *str = NULL;

    str = calloc(strlen(this->str) + strlen(ap->str) + 1, sizeof(char));
    if (!str)
        return;
    strcat(str, this->str);
    strcat(str, ap->str);
    free(this->str);
    this->str = calloc(strlen(str) + 1, sizeof(char));
    if (!this->str)
        return;
    strcat(this->str, str);
    free(str);
}

void append_c(string_t *this, const char *ap)
{
    char *str = NULL;

    if (!this || !ap)
        return;
    str = calloc(strlen(this->str) + strlen(ap) + 1, sizeof(char));
    if (!str)
        return;
    strcat(str, this->str);
    strcat(str, ap);
    free(this->str);
    this->str = calloc(strlen(str) + 1, sizeof(char));
    if (!this->str)
        return;
    strcat(this->str, str);
    free(str);
}