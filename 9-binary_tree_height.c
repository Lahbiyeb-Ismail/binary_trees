#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_1, height_2;

	if (tree == NULL)
		return (0);

	height_1 = 0;
	height_2 = 0;

	if (tree->left)
		height_1 = 1;
	if (tree->right)
		height_2 = 1;

	height_2 += binary_tree_height(tree->right);
	height_1 += binary_tree_height(tree->left);

	if (height_2 > height_1)
		return (height_2);
	return (height_1);
}
