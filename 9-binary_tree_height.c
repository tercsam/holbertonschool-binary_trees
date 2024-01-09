#include "binary_trees.h"
/**
 * binary_tree_height - measure binary tree height
 * @tree: root node
 * Return: the maximum value between left and right or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = -1, right = -1;

	if (tree == NULL)
		return (0);

	if (tree->left != 0 || tree->right != 0)
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);

	else
		return (right + 1);
}
