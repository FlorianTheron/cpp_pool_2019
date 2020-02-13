/*
** EPITECH PROJECT, 2020
** Piscine C++
** File description:
** func_ptr
*/

#include "func_ptr.h"

void print_normal(const char *str)
{
    if (str == NULL)
        return;
    printf("%s\n", str);
}

void print_reverse(const char *str)
{
    if (str == NULL)
        return;
    for (int i = strlen(str) - 1; i >= 0; i -= 1)
        printf("%c", str[i]);
    printf("\n");
}

void print_upper(const char *str)
{
    if (str == NULL)
        return;
    for (int i = 0; i < strlen(str); i += 1)
        printf("%c", toupper(str[i]));
    printf("\n");
}

void print_42(const char *str)
{
    if (str == NULL)
        return;
    printf("42\n");
}

void do_action(action_t action, const char *str)
{
    ptr_t ptr_arr[4] =  {
        {PRINT_NORMAL, &print_normal},
        {PRINT_REVERSE, &print_reverse},
        {PRINT_UPPER, &print_upper},
        {PRINT_42, &print_42}
    };

    ptr_arr[action].ptr(str);
}