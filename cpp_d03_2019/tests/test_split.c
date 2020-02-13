/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_split
*/

#include <criterion/criterion.h>
#include "../string.h"

Test(split, split_in_3_lines)
{
    string_t s;

    string_init(&s, "Hello,Happy,World");
    char **array = s.split_c(&s, ',');
    cr_assert_str_eq("Hello", array[0]);
    cr_assert_str_eq("Happy", array[1]);
    cr_assert_str_eq("World", array[2]);
    string_destroy(&s);
}

Test(split, split_with_empty_lines)
{
    string_t s;

    string_init(&s, "Hello,Happy,,World");
    char **array = s.split_c(&s, ',');
    cr_assert_str_eq("Hello", array[0]);
    cr_assert_str_eq("Happy", array[1]);
    cr_assert_str_eq("World", array[2]);
    string_destroy(&s);
}

Test(split, split_with_struct)
{
    string_t s;

    string_init(&s, "Hello,Happy,,World");
    string_t **s2 = s.split_s(&s, ',');
    cr_assert_str_eq("Hello", s2[0]->str);
    cr_assert_str_eq("Happy", s2[1]->str);
    cr_assert_str_eq("World", s2[2]->str);
    string_destroy(&s);
}