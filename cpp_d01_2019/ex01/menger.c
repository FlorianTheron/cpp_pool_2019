/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** menger
*/

#include <stdio.h>

void menger(int size, int offset_x, int offset_y, int steps)
{
    int current_size = 0;
    int x = 0;
    int y = 0;

    if (steps == 0)
        return;
    current_size = size / 3;
    x = current_size + offset_x;
    y = current_size + offset_y;
    printf("%03d %03d %03d\n", current_size, x, y);
    for (int x_side = 0; x_side < 3; x_side += 1) {
        for (int y_side = 0; y_side < 3; y_side += 1) {
            if (x_side == 1 && y_side == 1)
                continue;
            menger(current_size, (x_side * current_size) + offset_x,
            (y_side * current_size) + offset_y, steps - 1);
        }
    }
}