/*
** EPITECH PROJECT, 2019
** Lib
** File description:
** array_parser
*/

#include "string.h"

int array_len(char *str, char sep)
{
    int size = 0;
    int i = 0;

    for (i = 0; str[i]; i += 1) {
        if (str[i] == sep)
            size += 1;
        while (str[i] == sep)
            i += 1;
    }
    return (size + 1);
}

int move_ptr(char *str, char sep)
{
    int i = 0;

    for (i = 0; str[i] != sep && str[i]; i += 1);
    for (; str[i] == sep; i += 1);
    return (i);
}

int strlen_sep(char *str, char sep)
{
    int i = 0;

    for (i = 0; str[i] != sep && str[i]; i += 1);
    return (i);
}

char *strcpy_sep(char *dest, char *src, char sep)
{
    int dlen = strlen(dest);
    int i = 0;

    for (i = 0; src[i] && src[i] != sep; i += 1)
        dest[dlen + i] = src[i];
    dest[dlen + i] = '\0';
    return (dest);
}

char **array_parser(char *str, char sep)
{
    char **array = NULL;
    int size = 0;
    int i = 0;

    size = array_len(str, sep);
    array = calloc(size, sizeof(char *));
    for (i = 0; i < size && str[0]; i += 1) {
        array[i] = calloc(strlen_sep(str, sep) + 1, sizeof(char));
        strcpy_sep(array[i], str, sep);
        array[i][strlen(array[i])] = '\0';
        str += move_ptr(str, sep);
    }
    array[i] = NULL;
    return (array);
}