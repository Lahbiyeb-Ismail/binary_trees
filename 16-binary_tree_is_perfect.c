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
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		count_right = 1 + binary_tree_height(tree->right);


	if (count_left > count_right)
		return (count_left);
	else
		return (count_right);
}

/**
 * _pow - function that return pow
 *
 * @h: height
 *
 * Return: Always 0(Success)
 **/

int _pow(int h)
{
	int i, result = 1;

	for (i = 0; i < h; i++)
		result = 2 * result;

	return (result);
}

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

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise or if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_leaves = binary_tree_leaves(tree);
	int tree_height = binary_tree_height(tree);
	int perfect_tree = _pow(tree_height);

	if (tree == NULL)
		return (0);

	if (tree_leaves == perfect_tree)
		return (1);
	return (0);
}
