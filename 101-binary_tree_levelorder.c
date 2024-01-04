#include "binary_trees.h"

/**
 * binary_tree_levelorder - This function goes through a binary tree
 * using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 *
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	{
		const binary_tree_t **queue = NULL;
		int front = 0, rear = 0;

		queue = malloc(sizeof(binary_tree_t *) * 1024);
		if (!queue)
			return;

		queue[rear++] = tree;

		while (front < rear)
		{
			const binary_tree_t *node = queue[front++];

			func(node->n);

			if (node->left)
				queue[rear++] = node->left;
			if (node->right)
				queue[rear++] = node->right;
		}

		free(queue);
	}
}
