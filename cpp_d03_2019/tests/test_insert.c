/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_insert
*/

#include <criterion/criterion.h>
#include "../string.h"

// insert
// Tests : 1

Test(insert, basic_insert)
{
    string_t s;

    string_init(&s, "HelloWorld");
    s.insert_c(&s, 5, "Happy");
    cr_assert_str_eq("HelloHappyWorld", s.str);
    string_destroy(&s);
}

Test(insert, basic_insert_2)
{
    string_t s;
    string_t s2;

    string_init(&s, "HelloWorld");
    string_init(&s2, "Happy");
    s.insert_s(&s, 5, &s2);
    cr_assert_str_eq("HelloHappyWorld", s.str);
    string_destroy(&s);
    string_destroy(&s2);
}