#include "binary_trees.h"

/**
 * binary_tree_height - The function that measures the height of a binary tree
 * @tree: The pointer to the root node of the tree to measure the height.
 *
 * Return: returns height or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}

/**
 * binary_tree_balance - A function that  measures the balance of a binary tree
 * @tree: A pointer that points to the root node of the tree to measure balance
 *
 * Return: returns the balance factor of the tree or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}
