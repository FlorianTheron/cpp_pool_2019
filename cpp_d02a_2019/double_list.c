/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list
*/

#include "double_list.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int double_list_get_size(double_list_t list)
{
    unsigned int size = 0;
    double_list_t tmp = list;

    while (list != NULL) {
        size += 1;
        list = list->next;
    }
    list = tmp;
    return (size);
}

bool double_list_is_empty(double_list_t list)
{
    return (list != NULL ? false : true);
}

void double_list_dump(double_list_t list)
{
    if (list == NULL)
        return;
    printf("%f\n", list->value);
    double_list_dump(list->next);
}

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    double_list_t node = NULL;

    if ((node = malloc(sizeof(double_list_t))) == NULL)
        return (false);
    node->value = elem;
    node->next = (*front_ptr);
    (*front_ptr) = node;
    return (true);
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    if ((*front_ptr) == NULL) {
        (*front_ptr) = malloc(sizeof(double_list_t));
        if (!(*front_ptr))
            return (false);
        (*front_ptr)->value = elem;
        (*front_ptr)->next = NULL;
        return (true);
    }
    return (double_list_add_elem_at_back(&(*front_ptr)->next, elem));
}