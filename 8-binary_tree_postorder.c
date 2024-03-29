#include "binary_trees.h"

/**
 * binary_tree_postorder - Function for traversing the binary tree
 * using post-order traveral
 * @tree: A pointer that points to the root node of the tree to traverse
 * @func: A Pointer that is pointing to a function call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
