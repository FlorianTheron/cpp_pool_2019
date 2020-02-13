/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_c_str
*/

#include <criterion/criterion.h>
#include "../string.h"

// c_str
// Tests : 1

Test(c_str, buff_not_null)
{
    string_t s;

    string_init(&s, "World");
    cr_assert_not_null(&s.str);
    cr_assert_not_null(s.c_str(&s));
    cr_assert_str_eq("World", s.c_str(&s));
    string_destroy(&s);
}