#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert left child in
 * @value: data to store in the node
 * Return: the new node if success, NULL if fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
		parent->left = newNode;
		newNode->parent = parent;
	}

	parent->left = newNode;
	newNode->parent = parent;

	return (newNode);
}
