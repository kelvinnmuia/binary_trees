#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks whether a node is a root of a binary tree.
 * @node: A pointer that points to the node to check
 *
 * Return: returns 0 if its not a root node and 1 if its a root node
 *
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
