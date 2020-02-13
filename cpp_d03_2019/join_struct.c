/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** join_struct
*/

#include "string.h"

int struct_size(const string_t * const * tab)
{
    int i = 0;

    for (i = 0; tab[i]; i += 1);
    return (i);
}

int struct_len(const string_t * const * tab)
{
    int i = 0;
    int total_len = 0;

    for (i = 0; tab[i]; i += 1)
        total_len += strlen(tab[i]->str);
    return (total_len);
}

char *my_str_struct_join(const string_t * const * tab, char sep)
{
    int i = 0;
    int sepnbr = struct_size(tab) - 1;
    char *dest = calloc(sepnbr + struct_len(tab), sizeof(char));

    for (i = 0; tab[i]; i += 1) {
        strcat(dest, tab[i]->str);
        strcat(dest, &sep);
    }
    dest[strlen(dest) - 1] = '\0';
    return (dest);
}