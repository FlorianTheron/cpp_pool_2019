/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** test_double_list
*/

#include <criterion/criterion.h>
#include "../double_list.h"

Test(double_list, add_elem_at_back)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_back(&list, 10));
}

Test(double_list, add_elem_at_front)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_front(&list, 5));
}

Test(double_list, add_elem_at_position)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_position(&list, 7, 0));
}

Test(double_list, get_elem_front_is_null)
{
    double_list_t list = NULL;

    cr_assert_eq(0, double_list_get_elem_at_front(list));
}

Test(double_list, get_elem_front)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_front(&list, 10));
    cr_assert_eq(10, double_list_get_elem_at_front(list));
}

Test(double_list, get_elem_at_position)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_back(&list, 20));
    cr_assert_eq(20, double_list_get_elem_at_position(list, 0));
}

Test(double_list, add_back_del_front)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_back(&list, 12));
    cr_assert_eq(true, double_list_del_elem_at_front(&list));
}

Test(double_list, add_front_del_back)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_front(&list, 11));
    cr_assert_eq(true, double_list_del_elem_at_back(&list));
}

Test(double_list, add_del_add_size)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_front(&list, 11));
    cr_assert_eq(true, double_list_del_elem_at_back(&list));
    cr_assert_eq(true, double_list_add_elem_at_back(&list, 2));
    cr_assert_eq(1, double_list_get_size(list));
}

Test(double_list, wrong_add_position)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_add_elem_at_back(&list, 7));
    cr_assert_eq(false, double_list_add_elem_at_position(&list, 8, 20));
}

Test(double_list, double_list_is_empty)
{
    double_list_t list = NULL;

    cr_assert_eq(true, double_list_is_empty(list));
}