#include "binary_trees.h"

/**
 * check_bst - Helper function to validate if the tree is a BST recursively
 * @tree: Pointer to the root node of the tree to check
 * @min: Pointer to the node's value which acts as a minimum constraint
 * @max: Pointer to the node's value which acts as a maximum constraint
 *
 * Return: 1 if BST, 0 otherwise
 */

int check_bst(const binary_tree_t *tree, int *min, int *max)
{
	if (!tree)
		return (1);

	if ((min && tree->n <= *min) || (max && tree->n >= *max))
		return (0);

	return (check_bst(tree->left, min, max) &&
			check_bst(tree->right, min, max));
}


/**
 * binary_tree_is_bst - This function checks if a binary tree is a BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is a BST, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (check_bst(tree, NULL, NULL));
}

