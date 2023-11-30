#include "binary_trees.h"

/**
 * binary_tree_depth - Function for measuring the depth of a node in a binary tree
 * @tree: A pointer to the node that measures the depth of a tree.
 *
 * Return: the function returns the depth or 0 if the tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = depth_helper(tree);
	return (depth - 1);
}

/**
 * depth_helper - helper function
 * @tree: the tree to measure
 *
 * Return: returns root inclusive, depth
 */
size_t depth_helper(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + depth_helper(tree->parent));
}
