/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** split
*/

#include "string.h"

int arrays_size(char **array)
{
    int i = 0;

    while (array[i])
        i += 1;
    return (i);
}

string_t **split_s(const string_t *this, char separator)
{
    char **array = NULL;
    string_t **list = NULL;

    if (!this || !this->str || !separator)
        return (NULL);
    array = split_c(this, separator);
    list = malloc((arrays_size(array) + 1) * sizeof(string_t *));

    for (int i = 0; array[i]; i += 1) {
        list[i] = malloc(sizeof(string_t));
        list[i]->str = malloc((strlen(array[i]) + 1) * sizeof(char));
        strcpy(list[i]->str, array[i]);
    }
    return (list);
}

char **split_c(const string_t *this, char separator)
{
    if (!this || !this->str || !separator)
        return (NULL);
    return (array_parser(this->str, separator));
}