/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_empty
*/

#include <criterion/criterion.h>
#include "../string.h"

// empty
// Tests : 1

Test(string_empty, str_is_empty)
{
    string_t s;

    string_init(&s, "\0");
    cr_assert_eq(1, s.empty(&s));
}