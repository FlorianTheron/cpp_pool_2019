/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_string_init
*/

#include <criterion/criterion.h>
#include "../string.h"

// string_init
// Tests : 1

Test(string_init, string_eq_helloworld)
{
    string_t s;

    string_init(&s, "Hello World");
    cr_assert_str_eq("Hello World", s.str);
    string_destroy(&s);
}