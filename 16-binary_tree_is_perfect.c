#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if tree perfect
 * @tree: pointer to tree
 * Return: 1 if perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right == 0)
		return (1);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left == right)
	{
		left = binary_tree_is_perfect(tree->left) + 1;
		right = binary_tree_is_perfect(tree->right) + 1;

		if (left == right)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to tree
 * Return: height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left : right));
}
