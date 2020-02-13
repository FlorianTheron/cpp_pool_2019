/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** test_string_copy
*/

#include "criterion/criterion.h"
#include "../string.h"

// copy
// Tests : 5

Test(string_copy, string_copy_basic)
{
    string_t s;
    char *str = calloc(5, sizeof(char));

    string_init(&s, "Hello");
    s.copy(&s, str, 2, 1);
    cr_assert_str_eq("el", str);
    string_destroy(&s);
    free(str);
}

Test(string_copy, string_copy_null)
{
    string_t s;
    char *str = NULL;

    string_init(&s, "Hello");
    cr_assert_eq(0, s.copy(&s, str, 2, 1));
    cr_assert_null(str);
    string_destroy(&s);
}

Test(string_copy, pos_greater_than_size)
{
    string_t s;
    char *str = calloc(5, sizeof(char));

    string_init(&s, "Hello");
    cr_assert_eq(0, s.copy(&s, str, 2, 8));
    string_destroy(&s);
    free(str);
}

Test(string_copy, n_greater_than_size)
{
    string_t s;
    char *str = calloc(5, sizeof(char));

    string_init(&s, "Hello");
    cr_assert_eq(0, s.copy(&s, str, 10, 0));
    string_destroy(&s);
    free(str);
}