#include "binary_trees.h"
/**
 * binary_tree_delete - deletes the tree
 * @tree: pointer to the root of the binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}
