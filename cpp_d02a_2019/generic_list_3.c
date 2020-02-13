/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list_3
*/

#include "generic_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void *list_get_elem_at_back(list_t list)
{
    if (list == NULL)
        return (NULL);
    if (list->next == NULL)
        return (list->value);
    return (list_get_elem_at_back(list->next));
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    if (list == NULL)
        return (NULL);
    if (position > list_get_size(list))
        return (false);
    if (position == 0)
        return (list_get_elem_at_front(list));
    return (list_get_elem_at_position(list->next, position - 1));
}

void list_dump(list_t list, value_displayer_t val_disp)
{
    if (list == NULL)
        return;
    val_disp(list->value);
    list_dump(list->next, val_disp);
}

node_t *list_get_first_node_with_value(list_t list, void *value,
value_comparator_t val_comp)
{
    if (list == NULL)
        return (NULL);
    if (val_comp(list->value, value) == 0)
        return ((node_t *)list);
    return (list_get_first_node_with_value(list->next, value, val_comp));
}