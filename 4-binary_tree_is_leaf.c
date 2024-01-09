#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);
    
    return (node -> left == NULL && node -> right == NULL);
               return (1);
    return (0);
}
