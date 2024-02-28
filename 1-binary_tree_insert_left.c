#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 * Return: return a pointer to the created node, NULL (fail).
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}
	binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
		node->n = value;
		node->left = NULL;
		node->right = NULL;
	}
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		node->right = NULL;
		node->parent = parent;
		node->n = value;
		parent->left = node;
	}
	return (node);
}
