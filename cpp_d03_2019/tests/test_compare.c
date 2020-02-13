/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_compare
*/

#include "criterion/criterion.h"
#include "../string.h"

// compare
// Tests : 2

Test(compare_s, s1_s2_eq)
{
    string_t s1;
    string_t s2;

    string_init(&s1, "Hello");
    string_init(&s2, "Hello");

    cr_assert_eq(0, compare_s(&s1, &s2));
    string_destroy(&s1);
    string_destroy(&s2);
}

Test(compare_c, s1_s2_eq)
{
    string_t s;
    char str[] = "Hello";

    string_init(&s, "Hello");
    cr_assert_eq(0, compare_c(&s, str));
    string_destroy(&s);
}