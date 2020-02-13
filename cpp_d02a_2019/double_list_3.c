/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list_3
*/

#include "double_list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

double double_list_get_elem_at_back(double_list_t list)
{
    if (double_list_is_empty(list))
        return (0);
    if (list->next == NULL)
        return (list->value);
    return (double_list_get_elem_at_back(list->next));
}

double double_list_get_elem_at_position(double_list_t list,
unsigned int position)
{
    if (double_list_is_empty(list))
        return (0);
    if (list == NULL)
        return (0);
    if (position > double_list_get_size(list))
        return (0);
    if (position == 0)
        return (double_list_get_elem_at_front(list));
    return (double_list_get_elem_at_position(list->next, position - 1));
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
double value)
{
    if (list == NULL)
        return (NULL);
    if (list->value == value)
        return ((doublelist_node_t *)list);
    return (double_list_get_first_node_with_value(list->next, value));
}