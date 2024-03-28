#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a pre-order traversal on a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to a function to be called on each node
 *
 * Description: This function traverses the binary tree in pre-order fashion,
 * applying the given function to each node's value.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
