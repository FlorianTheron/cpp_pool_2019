/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list_2
*/

#include "double_list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
unsigned int position)
{
    if (position > double_list_get_size((*front_ptr)))
        return (false);
    if (position == 0)
        return (double_list_add_elem_at_front(front_ptr, elem));
    if ((*front_ptr) == NULL)
        return (false);
    return (double_list_add_elem_at_position(&(*front_ptr)->next, elem,
    position - 1));
}

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    (*front_ptr) = (*front_ptr)->next;
    return (true);
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    if ((*front_ptr) == NULL)
        return (false);
    if ((*front_ptr)->next == NULL) {
        (*front_ptr) = NULL;
        return (true);
    }
    return (double_list_del_elem_at_back(&(*front_ptr)->next));
}

bool double_list_del_elem_at_position(double_list_t *front_ptr, unsigned int
position)
{
    if ((*front_ptr) == NULL)
        return (false);
    if (position > double_list_get_size((*front_ptr)))
        return (false);
    if (position == 0)
        return (double_list_del_elem_at_front(front_ptr));
    return (double_list_del_elem_at_position(&(*front_ptr)->next,
    position - 1));
}

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return (0);
    if (double_list_is_empty(list))
        return (0);
    return (list->value);
}