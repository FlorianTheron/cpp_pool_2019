/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** test_double_btree
*/

#include <criterion/criterion.h>
#include "../double_btree.h"

Test(double_btree, btree_size_eq_5)
{
    double_btree_t tree = NULL;

    double_btree_create_node(&tree, 42.5);
    double_btree_create_node(&tree->right, 100);
    double_btree_create_node(&tree->left, 20);
    double_btree_create_node(&tree->left->left, 30);
    double_btree_create_node(&tree->left->right, 5);
    cr_assert_eq(5, double_btree_get_size(tree));
}

Test(double_tree, create_node)
{
    double_btree_t tree = NULL;

    double_btree_create_node(&tree, 42.5);
    cr_assert_eq(1, double_btree_get_size(tree));
    cr_assert_eq(1, double_btree_get_depth(tree));
}

Test(double_btree, btree_depth_eq_3)
{
    double_btree_t tree = NULL;

    double_btree_create_node(&tree, 42.5);
    double_btree_create_node(&tree->right, 100);
    double_btree_create_node(&tree->left, 20);
    double_btree_create_node(&tree->left->left, 30);
    double_btree_create_node(&tree->left->right, 5);
    cr_assert_eq(3, double_btree_get_depth(tree));
}

Test(double_btree, max_value_eq_100)
{
    double_btree_t tree = NULL;

    double_btree_create_node(&tree, 42.5);
    double_btree_create_node(&tree->right, 100);
    double_btree_create_node(&tree->left, 20);
    double_btree_create_node(&tree->left->left, 30);
    double_btree_create_node(&tree->left->right, 5);
    cr_assert_eq(100, double_btree_get_max_value(tree));
}

Test(double_btree, min_value_eq_5)
{
    double_btree_t tree = NULL;

    double_btree_create_node(&tree, 42.5);
    double_btree_create_node(&tree->right, 100);
    double_btree_create_node(&tree->left, 20);
    double_btree_create_node(&tree->left->left, 30);
    double_btree_create_node(&tree->left->right, 5);
    cr_assert_eq(5, double_btree_get_min_value(tree));
}

Test(double_btree, btree_delete_node)
{
    double_btree_t tree = NULL;

    double_btree_create_node(&tree, 42.5);
    double_btree_create_node(&tree->right, 100);
    double_btree_create_node(&tree->left, 20);
    double_btree_create_node(&tree->left->left, 30);
    double_btree_create_node(&tree->left->right, 5);
    double_btree_delete(&tree->left->left);
    cr_assert_eq(4, double_btree_get_size(tree));
}

Test(double_btree, tree_is_empty_size_depth_eq_0)
{
    double_btree_t tree = NULL;

    cr_assert_eq(0, double_btree_get_size(tree));
    cr_assert_eq(0, double_btree_get_depth(tree));
}