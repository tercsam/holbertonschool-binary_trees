#include "binary_trees.h"
/**
 * binary_tree_inorder - goes thourgh a binary tree using inorder traversal
 * @tree: node root
 * @func: function to execute
 * Return: base case of the recursive
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
