#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, NULL if node is NULL or has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (parent->left == node && parent->right != NULL)
		return (parent->right);
	if (parent->right == node && parent->left != NULL)
		return (parent->left);
	return (NULL);
}
