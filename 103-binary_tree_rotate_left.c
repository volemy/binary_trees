#include "binary_trees.h"

/**
 * binary_tree_rotate_left - This function rotates the binary tree
 * to the left
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new;
	binary_tree_t *tmp;

	if (!tree || !tree->right)
		return (NULL);

	new = tree->right;
	tmp = new->left;
	new->left = tree;
	tree->right = tmp;
	tree->parent = new;
	new->parent = tree->parent;

	return (new);
}
