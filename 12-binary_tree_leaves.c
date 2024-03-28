#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Number of leaves in the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t tree_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	tree_leaves = binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right);

	return (tree_leaves);
}
