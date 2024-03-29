#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree.
 * @tree: pointer to the root node of the tree.
 * @func: a pointer to a function.
 * Return: nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
}
