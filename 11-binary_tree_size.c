#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the root node
 * Return: the size or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);


	return (left + right + 1);
}
