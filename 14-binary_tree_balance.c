#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to the root node of the tree.
 * Return: height of the tree(size_t).
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);
	height_left = 0;
	height_right = 0;
	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	if (height_left > height_right)
		return (height_left);
	else
		return (height_right);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree.
 * Return: Balance factor of the tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left, height_right;
	int balance_factor;

	if (tree == NULL)
		return 0;
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);
	balance_factor = height_left - height_right;
	return balance_factor;
}

