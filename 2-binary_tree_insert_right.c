#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as
 * the right child of a given node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node,
 * or NULL if the parent is NULL or if memory allocation fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		tmp = parent->right;
		tmp->parent = node;
		parent->right = node;
		node->right = tmp;
	}
	return (node);
}
