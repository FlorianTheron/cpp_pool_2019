/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** join_utils
*/

#include "string.h"

int arr_size(const char * const *tab)
{
    int i = 0;

    for (i = 0; tab[i]; i += 1);
    return (i);
}

int arr_len(const char * const *tab)
{
    int i = 0;
    int total_len = 0;

    for (i = 0; tab[i]; i += 1)
        total_len += strlen(tab[i]);
    return (total_len);
}

char *my_strjoin(const char * const *tab, char sep)
{
    int i = 0;
    int sepnbr = arr_size(tab) - 1;
    char *dest = calloc(sepnbr + arr_len(tab), sizeof(char));

    for (i = 0; tab[i]; i += 1) {
        strcat(dest, tab[i]);
        strcat(dest, &sep);
    }
    dest[strlen(dest) - 1] = '\0';
    return (dest);
}