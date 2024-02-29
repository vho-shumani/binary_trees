#include "binary_trees.h"
/**
 * binary_tree_size - measures size of a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return: size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right;

	if (tree == NULL)
	{
		return (0);
	}
	size_left =  binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	return (size_right + size_left + 1);
}
