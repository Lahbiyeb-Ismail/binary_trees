#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: 1 if the binary tree is full, 0 otherwise or if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
	{
		if (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right))
		{
			return (1);
		}
	}
	return (0);
}
