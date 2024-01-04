#include "binary_trees.h"

/**
 * is_bst_util - Checks if a binary tree is a BST
 * @tree: Pointer to the root node of the tree to check
 * @prev: Pointer to the previous node
 *
 * Return: 1 if the tree is a BST, 0 otherwise
 */

int is_bst_util(const binary_tree_t *tree, int *prev)
{
	if (tree == NULL)
		return (1);

	if (!is_bst_util(tree->left, prev))
		return (0);

	if (*prev != -1 && tree->n <= *prev)
		return (0);

	*prev = tree->n;

	return (is_bst_util(tree->right, prev));
}

/**
 * binary_tree_is_bst - This function checks if a binary tree is a BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is a BST, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	int prev = -1;

	return (is_bst_util(tree, &prev));
}
