/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** div
*/

#include "castmania.h"
#include <unistd.h>

int integer_div(int a, int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

float decimale_div(int a, int b)
{
    if (b == 0)
        return ((float)0);
    return ((float)a / (float)b);
}

void exec_div(division_t *operation)
{
    decimale_op_t *decimal_op = NULL;

    if (operation->div_type == INTEGER) {
        ((integer_op_t *)operation->div_op)->res =
        integer_div(((integer_op_t *)operation->div_op)->a,
        ((integer_op_t *)operation->div_op)->b);
    } else if (operation->div_type == DECIMALE) {
        ((decimale_op_t *)operation->div_op)->res =
        decimale_div(((decimale_op_t *)operation->div_op)->a,
        ((decimale_op_t *)operation->div_op)->b);
    }
}

