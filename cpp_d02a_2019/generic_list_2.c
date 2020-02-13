/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list_2
*/

#include "generic_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

bool list_del_elem_at_front(list_t *front_ptr)
{
    (*front_ptr) = (*front_ptr)->next;
    return (true);
}

bool list_del_elem_at_back(list_t *front_ptr)
{
    if ((*front_ptr) == NULL)
        return (false);
    if ((*front_ptr)->next == NULL) {
        (*front_ptr) = NULL;
        return (true);
    }
    return (list_del_elem_at_back(&(*front_ptr)->next));
}

bool list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    if ((*front_ptr) == NULL)
        return (false);
    if (position > list_get_size((*front_ptr)))
        return (false);
    if (position == 0)
        return (list_del_elem_at_front(front_ptr));
    return (list_del_elem_at_position(&(*front_ptr)->next,
    position - 1));
}

void list_clear(list_t *front)
{
    if ((*front) == NULL)
        return;
    list_clear(&(*front)->next);
    (*front) = NULL;
    free((*front));
}

void *list_get_elem_at_front(list_t list)
{
    if (list == NULL)
        return (0);
    if (list_is_empty(list))
        return (0);
    return (list->value);
}