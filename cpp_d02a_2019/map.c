/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** map
*/

#include "map.h"

unsigned int map_get_size(map_t map)
{
    return (list_get_size(map));
}

bool map_is_empty(map_t map)
{
    return (list_is_empty(map));
}

int pair_comparator(void *first, void *second)
{
    return ((int *)first - (int *)second);
}

key_comparator_t key_cmp_container(bool store, key_comparator_t new_key_cmp)
{
    static key_comparator_t cmp;

    if (store)
        cmp = new_key_cmp;
    return cmp;
}

bool list_del_node(list_t *front_ptr, node_t *node_ptr)
{
    
}