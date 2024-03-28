#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree
 * @parent: Pointer to the parent node of the new node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node,
 * or NULL if memory allocation fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	node->n = value;
	return (node);
}
