#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full or not
 * @tree: the root node
 * Return: 0 if not complete, 1 if complete
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_is_full(tree->left) + 1;
	right = binary_tree_is_full(tree->right) + 1;

	if (left == right)
		return (1);
	else
		return (0);
}
