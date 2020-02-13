/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** test_generic_list
*/

#include <criterion/criterion.h>
#include <stdio.h>
#include "../generic_list.h"

Test(generic_list, add_elem_at_back)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_back(&list, (void *)(10)));
}

Test(generic_list, add_elem_at_front)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_front(&list, (void *)(5)));
}

Test(generic_list, add_elem_at_position)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_position(&list, (void *)(7), 0));
}

Test(generic_list, get_elem_front_is_null)
{
    list_t list = NULL;

    cr_assert_null(list_get_elem_at_front(list));
}

Test(generic_list, get_elem_front)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_front(&list, (void *)(10)));
    cr_assert_eq(10, (int*)list_get_elem_at_front(list));
}

Test(generic_list, get_elem_at_position)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_back(&list, (void *)(20)));
    cr_assert_eq(20, (int*)list_get_elem_at_position(list, 0));
}

Test(generic_list, add_back_del_front)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_back(&list, (void *)(12)));
    cr_assert_eq(true, list_del_elem_at_front(&list));
}

Test(generic_list, add_front_del_back)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_front(&list, (void *)(11)));
    cr_assert_eq(true, list_del_elem_at_back(&list));
}

Test(generic_list, add_del_add_size)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_front(&list, (void *)(11)));
    cr_assert_eq(true, list_del_elem_at_back(&list));
    cr_assert_eq(true, list_add_elem_at_back(&list, (void *)(2)));
    cr_assert_eq(1, list_get_size(list));
}

Test(generic_list, wrong_add_position)
{
    list_t list = NULL;

    cr_assert_eq(true, list_add_elem_at_back(&list, (void *)(7)));
    cr_assert_eq(false, list_add_elem_at_position(&list, (void *)(8), 20));
}

Test(generic_list, list_is_empty)
{
    list_t list = NULL;

    cr_assert_eq(true, list_is_empty(list));
}