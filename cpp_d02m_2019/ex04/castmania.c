/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** castmania
*/

#include "castmania.h"
#include <stdio.h>

void display_div(division_t *operation)
{
    if (operation->div_type == INTEGER)
        printf("%d\n", ((integer_op_t *)operation->div_op)->res);
    else
        printf("%f\n", ((decimale_op_t *)operation->div_op)->res);
}

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *cast = (instruction_t *)data;

    if (instruction_type == ADD_OPERATION) {
        exec_add(((addition_t *)cast->operation));
        if (cast->output_type == VERBOSE)
            printf("%i\n", ((addition_t *)cast->operation)->add_op.res);
    } else if (instruction_type == DIV_OPERATION) {
        exec_div(((division_t *)cast->operation));
        if (cast->output_type == VERBOSE)
            display_div((division_t *)cast->operation);
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    if (instruction_type == PRINT_INT)
        printf("%d\n", *(int*)(data));
    else if (instruction_type == PRINT_FLOAT)
        printf("%f\n", *(float*)(data));
    else
        exec_operation(instruction_type, data);
}