/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** pyramid
*/

#include <stdlib.h>
#include <stdio.h>

int find_path(int size, const int **map, int x, int y)
{
    int node_right = 0;
    int node_left = 0;

    if (y >= size)
        return (map[y][x]);
    else {
        node_right = find_path(size, map, x , y + 1);
        node_left = find_path(size, map, x + 1, y + 1);
        if (node_right >= node_left) {
            return (map[y][x] + node_left);
        } else {
            return (map[y][x] + node_right);
        }
    }
}

int pyramid_path(int size, const int **map)
{
    return (find_path(size - 1, map, 0, 0));
}