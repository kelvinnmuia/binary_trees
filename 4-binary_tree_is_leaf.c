#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether a node is a leaf of a binary tree
 * @node: pointer that pints to the node to check.
 *
 * Return: returns 0 if the node is not a leaf and 1 if the node is a leaf
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
