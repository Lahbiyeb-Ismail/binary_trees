#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as
 * the left child of a given node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node,
 * or NULL if the parent is NULL or if memory allocation fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		tmp = parent->left;
		tmp->parent = node;
		parent->left = node;
		node->left = tmp;
	}
	return (node);
}
