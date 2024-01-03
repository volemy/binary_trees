#include "binary_trees.h"

/**
 * binary_tree_height - This function measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 0;
	return (left > right ? left : right);
}

/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right)
		return (1);

	return (0);
}
