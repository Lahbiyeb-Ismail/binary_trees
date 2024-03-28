#include "binary_trees.h"

/**
 * bst_insert - Inserts a value into a binary search tree
 *
 * @tree: Pointer to a pointer to the root node of the binary search tree
 * @value: Value to insert into the binary search tree
 *
 * Return: Pointer to the newly inserted node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp = NULL;
	bst_t *second = NULL;
	bst_t *new = NULL;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	tmp = *tree;
	while (tmp)
	{
		second = tmp;
		if (value < tmp->n)
			tmp = tmp->left;
		else if (value > tmp->n)
			tmp = tmp->right;
		else if (value == tmp->n)
			return (NULL);
	}

	new = binary_tree_node(NULL, value);
	if (second == NULL)
		second = new;
	else if (value < second->n)
	{
		second->left = new;
		new->parent = second;
	}
	else
	{
		second->right = new;
		new->parent = second;
	}

	return (new);
}
