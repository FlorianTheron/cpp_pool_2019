/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** tab_to_2dtab
*/

#include <stdlib.h>

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int index = 0;
    *res = malloc(sizeof(int *) * (length + 1));

    for (int i = 0; i < length; i += 1) {
        res[0][i] = malloc(sizeof(int) * (width + 1));
    }
    for (int i = 0; i < length; i += 1) {
        for (int j = 0; j < width; j += 1) {
            res[0][i][j] = tab[index];
            index += 1;
        }
    }
}