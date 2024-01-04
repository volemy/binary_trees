#include "binary_trees.h"

/**
 * array_to_bst - This function creates a binary search tree from an array
 * @array: Pointer to the array to create the tree from
 * @size: Size of the array
 *
 * Return: Pointer to the root node of the created tree
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (!array || !size)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (!bst_insert(&root, array[i]))
			return (NULL);
	}
	return (root);
}
