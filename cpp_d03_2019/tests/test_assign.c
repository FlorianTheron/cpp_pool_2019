/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_assign
*/

#include <criterion/criterion.h>
#include "../string.h"

// assign
// Tests : 3

Test(string_assign, basic_assign_s)
{
    string_t s;
    string_t str;

    string_init(&s, "Bonjour");
    string_init(&str, "Adieu");
    assign_s(&s, &str);
    cr_assert_str_eq("Adieu", s.str);
    string_destroy(&s);
    string_destroy(&str);
}

Test(string_assign, basic_assign_c)
{
    string_t s;

    string_init(&s, "Bonjour");
    assign_c(&s, "Adieu");
    cr_assert_str_eq("Adieu", s.str);
    string_destroy(&s);
}

Test(string_assing, try_assign_null)
{
    string_t s;

    string_init(&s, "Bonjour");
    assign_c(&s, NULL);
    cr_assert_str_eq("Bonjour", s.str);
    string_destroy(&s);
}