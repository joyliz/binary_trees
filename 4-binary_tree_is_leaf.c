#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, and 0 otherwise or if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node)
return (0);
if (!node->left && !node->right)
return (1);
return (0);
}
