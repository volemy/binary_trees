#include "binary_trees.h"

/**
 * binary_tree_is_complete - This function checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	{
		int is_full = 0;
		const binary_tree_t **queue = NULL;
		int head = 0, tail = 0;

		queue = malloc(sizeof(binary_tree_t *) * 1024);
		if (!queue)
			return (0);

		queue[tail++] = tree;

		while (head < tail)
		{
			const binary_tree_t *node = queue[head++];

			if (!node)
				is_full = 1;
			else
			{
				if (is_full)
				{
					free(queue);
					return (0);
				}

				queue[tail++] = node->left;
				queue[tail++] = node->right;
			}
		}
		free(queue);

	}

	return (1);
}
