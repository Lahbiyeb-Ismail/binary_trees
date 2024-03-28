#include "binary_trees.h"

/**
 * binary_tree_postorder - Performs a post-order traversal on a binary tree
 *
 * @tree: Pointer to the root node of the binary tree
 * @func: Pointer to a function to be called on each node
 *
 * Description: This function traverses the binary tree in post-order fashion,
 * applying the given function to each node's value.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
