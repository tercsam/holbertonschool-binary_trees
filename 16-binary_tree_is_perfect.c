#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of
 * a binary tree
 * @tree: pointer to tree
 * Return: height of tree or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_left = binary_tree_height(tree->left);
	if (tree->right != NULL)
		height_right = binary_tree_height(tree->right);

	return (height_left >= height_right ? (height_left + 1) : (height_right + 1));
}

/**
 * binary_tree_is_perfect - check if tree perfect
 * @tree: pointer to tree
 * Return: 1 if perfect or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
