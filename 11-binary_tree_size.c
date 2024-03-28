#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Size of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size = 0;

	if (tree == NULL)
		return (0);

	tree_size = binary_tree_size(tree->left) + 1 +
		binary_tree_size(tree->right);

	return (tree_size);
}
