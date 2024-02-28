#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a given node is a root.
 * @node: the pointer to the node to check.
 * Return: 1, if it is a root and 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
