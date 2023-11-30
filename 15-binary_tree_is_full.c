#include "binary_trees.h"

/**
 * is_full_recursive - Function Checks if a binary tree is full recursive
 * @tree: A pointer that points to the root node of the tree to check.
 *
 * Return: returns 1 if the tree is full recursive otherwise returns 0
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL) ||
		is_full_recursive(tree->left) == 0 ||
		is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Function that checks whether a binary tree is full.
 * @tree: The pointer that points to the root node of the tree to check.
 *
 * Return: returns 0 if the tree is not full or NULL otherwise returns 1
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
