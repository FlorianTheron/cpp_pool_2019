/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_string_append
*/

#include <criterion/criterion.h>
#include "../string.h"

// append
// Tests : 1

Test(string_append, basic_append_s)
{
    string_t s;
    string_t ap;

    string_init(&s, "Bonjour");
    string_init(&ap, "Adieu");
    append_s(&s, &ap);
    cr_assert_str_eq("BonjourAdieu", s.str);
    string_destroy(&s);
    string_destroy(&ap);
}