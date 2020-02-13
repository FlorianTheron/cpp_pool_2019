/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** ptr_tricks
*/

#include "ptr_tricks.h"
#include <stdio.h>
#include <stdlib.h>

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    int diff = (int)(abs((void *)ptr1 - (void *)ptr2) / sizeof(int));

    return (diff);
}

whatever_t *get_struct_ptr(const int *member_ptr)
{
    whatever_t w = {0};
    long long i = (long long)member_ptr - abs((long long)&w -
    (long long)&(w.member));

    return ((void *)(i));
}