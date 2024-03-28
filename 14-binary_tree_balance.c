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
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 *
 * Return: Balance factor of the binary tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t tree_balance_1 = 0;
	size_t tree_balance_2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		tree_balance_1 = 1 + binary_tree_height(tree->left);

	if (tree->right)
		tree_balance_2 = 1 + binary_tree_height(tree->right);

	return (tree_balance_1 - tree_balance_2);
}
