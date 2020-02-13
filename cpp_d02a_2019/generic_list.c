/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list
*/

#include "generic_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

unsigned int list_get_size(list_t list)
{
    unsigned int size = 0;
    list_t tmp = list;

    while (list != NULL) {
        size += 1;
        list = list->next;
    }
    list = tmp;
    return (size);
}

bool list_is_empty(list_t list)
{
    return (list != NULL ? false : true);
}

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    list_t node = NULL;

    if ((node = malloc(sizeof(list_t))) == NULL)
        return (false);
    node->value = elem;
    node->next = (*front_ptr);
    (*front_ptr) = node;
    return (true);
}

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    if ((*front_ptr) == NULL) {
        (*front_ptr) = malloc(sizeof(list_t));
        if (!(*front_ptr))
            return (false);
        (*front_ptr)->value = elem;
        (*front_ptr)->next = NULL;
        return (true);
    }
    return (list_add_elem_at_back(&(*front_ptr)->next, elem));
}

bool list_add_elem_at_position(list_t *front_ptr, void *elem, unsigned int pos)
{
    if (pos > list_get_size((*front_ptr)))
        return (false);
    if (pos == 0)
        return (list_add_elem_at_front(front_ptr, elem));
    if ((*front_ptr) == NULL)
        return (false);
    return (list_add_elem_at_position(&(*front_ptr)->next, elem,
    pos - 1));
}