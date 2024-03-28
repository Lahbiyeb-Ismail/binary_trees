#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes in a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Number of nodes in the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t tree_nodes = 0;

	if (tree == NULL)
		return (0);

	tree_nodes = binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (tree_nodes);

	return (tree_nodes + 1);
}
