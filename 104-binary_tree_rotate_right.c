#include "binary_trees.h"

/**
 * binary_tree_rotate_right - This function rotates a binary tree to the right
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new;
	binary_tree_t *tmp;

	if (!tree || !tree->left)
		return (NULL);

	tmp = tree->left->right;
	new = tree->left;
	new->parent = tree->parent;
	new->right = tree;
	tree->parent = new;
	tree->left = tmp;
	if (tmp)
		tmp->parent = tree;

	return (new);
}
