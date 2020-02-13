/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** drawing
*/

#include <stdint.h>
#include <stddef.h>

#ifndef DRAWING_H_
#define DRAWING_H_

typedef struct point_s {
    uint32_t x;
    uint32_t y;
} point_t;

void draw_square(uint32_t **img, const point_t *origin, size_t size,
uint32_t color);

#endif /* !DRAWING_H_ */
