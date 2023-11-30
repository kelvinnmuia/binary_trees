#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with atleast 1
 * child in a binary tree.
 *
 * @tree: The pointer that points to the root node of the tree
 * to count the number of nodes
 *
 * Return: returns node count, otherwise returns 0 if the tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
