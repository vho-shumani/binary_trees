#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 * Return:  a pointer to the created node, NULL(fail)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	if (parent->right == NULL)
	{
		parent->right = node;
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
	}
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		node->left = NULL;
		node->parent = parent;
		parent->right = node;
	}
	return (node);
}
