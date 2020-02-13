/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** drawing
*/

#include "bitmap.h"
#include "drawing.h"

void draw_square(uint32_t **img, const point_t *origin, size_t size,
uint32_t color)
{
    if (origin == NULL || *img == NULL)
        return;
    for (uint32_t i = 0; i < size; i += 1)
        for (uint32_t j = 0; j < size; j += 1)
            img[i + origin->y][j + origin->x] = color;
}