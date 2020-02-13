/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** test_stack
*/

#include <criterion/criterion.h>
#include "../generic_list.h"
#include "../stack.h"

Test(stack, push)
{
    stack_t list = NULL;

    cr_assert_eq(true, stack_push(&list, (void *)(10)));
}

Test(stack, pop)
{
    stack_t list = NULL;

    cr_assert_eq(true, stack_push(&list, (void *)(10)));
    cr_assert_eq(true, stack_pop(&list));
}

Test(stack, pop_false)
{
    stack_t list = NULL;

    cr_assert_eq(false, stack_pop(&list));
}

Test(stack, top_null)
{
    stack_t list = NULL;

    cr_assert_null(stack_top(list));
}

Test(stack, top_valid)
{
    stack_t list = NULL;

    cr_assert_eq(true, stack_push(&list, (void *)(12)));
    cr_assert_eq(12, (int *)stack_top(list));
}

Test(stack, push_top_pop_size_empty)
{
    stack_t list = NULL;

    cr_assert_eq(true, stack_push(&list, (void *)(11)));
    cr_assert_eq(11, (int *)stack_top(list));
    cr_assert_eq(true, stack_pop(&list));
    cr_assert_eq(0, stack_get_size(list));
    cr_assert_eq(true, stack_is_empty(list));
}