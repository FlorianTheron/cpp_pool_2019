/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_btree_2
*/

#include "double_btree.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

double double_btree_get_max_value(double_btree_t tree)
{
    double max_value = - __DBL_MAX__;
    double node_value = - __DBL_MAX__;

    if (tree == NULL)
        return (0);
    max_value = tree->value;
    if (tree->right) {
        node_value = double_btree_get_max_value(tree->right);
        if (node_value > max_value)
            max_value = node_value;
    }
    if (tree->left) {
        node_value = double_btree_get_max_value(tree->left);
        if (node_value > max_value)
            max_value = node_value;
    }
    return (max_value);
}

double double_btree_get_min_value(double_btree_t tree)
{
    double min_value = __DBL_MAX__;
    double node_value = __DBL_MAX__;

    if (tree == NULL)
        return (0);
    min_value = tree->value;
    if (tree->right) {
        node_value = double_btree_get_min_value(tree->right);
        if (node_value < min_value)
            min_value = node_value;
    }
    if (tree->left) {
        node_value = double_btree_get_min_value(tree->left);
        if (node_value < min_value)
            min_value = node_value;
    }
    return (min_value);
}