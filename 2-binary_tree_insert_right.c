#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
 
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
 binary_tree_t *new_node;

 if (parent == NULL)
    return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
    return (NULL);

new_node -> n = value;
new_node -> parent = parent;
new_node -> left = NULL;

if (parent->right != NULL)
{
    new_node -> right = parent->right;
    parent- > right->parent = new_node;
}

else
{
    new_node -> right = NULL;
}

parent -> right = new_node;

return (new_node);
}
