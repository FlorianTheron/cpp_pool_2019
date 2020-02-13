/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_btree
*/

#include "double_btree.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

bool double_btree_is_empty(double_btree_t tree)
{
    return (tree == NULL ? true : false);
}

unsigned int double_btree_get_size(double_btree_t tree)
{
    unsigned int size = 1;

    if (tree == NULL)
        return (0);
    if (tree->left)
        size += double_btree_get_size(tree->left);
    if (tree->right)
        size += double_btree_get_size(tree->right);
    return (size);
}

unsigned int double_btree_get_depth(double_btree_t tree)
{
    unsigned int depth_left = 1;
    unsigned int depth_right = 1;

    if (tree == NULL)
        return (0);
    if (tree->left)
        depth_left += double_btree_get_depth(tree->left);
    if (tree->right)
        depth_right += double_btree_get_depth(tree->right);
    return (depth_right > depth_left ? depth_right : depth_left);
}

bool double_btree_create_node(double_btree_t *node_ptr, double value)
{
    double_btree_t node = NULL;

    if ((node = malloc(sizeof(double_btree_t))) == NULL)
        return (false);
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    (*node_ptr) = node;
    return (true);
}

bool double_btree_delete(double_btree_t *root_ptr)
{
    if ((*root_ptr) == NULL)
        return (false);
    if ((*root_ptr)->left)
        return (double_btree_delete(&(*root_ptr)->left));
    if ((*root_ptr)->right)
        return (double_btree_delete(&(*root_ptr)->right));
    free((*root_ptr));
    (*root_ptr) = NULL;
    return (true);
}