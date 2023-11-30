#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the siblings of node
 * in a binary tree
 *
 * @node: The pointer that points to to find sibling
 *
 * Return: returns a pointer to the sibling or NULL if the node is NULL
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
