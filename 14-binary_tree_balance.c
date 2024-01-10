#include "binary_trees.h"

/**
 * binary_tree_height - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftHeight = binary_tree_height(tree->left);

	if (tree->right != NULL)
		rightHeight = binary_tree_height(tree->right);


	return ((leftHeight > rightHeight ? leftHeight : rightHeight) + 1);
}

/**
 * binary_tree_balance -  measures the balance factor of
 * a binary tree
 *
 * @tree: pointer to tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

}
