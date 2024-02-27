#include "binary_trees.h"
/**
 * binary_tree_node- creates a binary tree node
 * @parent: pointer to the parent of the node.
 * @value: value to put in the new node.
 * Return: pointer to the new node or NULL(failure).
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	return (node);
}
