/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_string_destroy
*/

#include "criterion/criterion.h"
#include "../string.h"

// string_destroy
// Tests : 2

Test(string_destroy, string_is_null)
{
    string_t s;

    string_init(&s, "Hello");
    string_destroy(&s);
    cr_assert_null(s.str);
}