#include "binary_trees.h"

/**
 * is_perfect_recursive - Function that checks if abinary tree is perfect
 * @tree: The pointer that points to the rot node of the tree to check.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: level of the current node.
 *
 * Return: return 1 if the tree is perfect, otherwise 0
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * get_leaf - Returns the leaf of a binary tree
 * @tree: The pointer that points to the rot node of the tree t check.
 *
 * Return: A pointer to the first encountered leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * depth - helper function that returns the depth of
 * a given node in the binary tree.
 *
 * @tree: A pointer that points to the node to measure
 *
 * Return: The depth of the node.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * is_leaf - Checks if the node is a leaf of a binary tree
 * @node: A pointer to the node to check.
 *
 * Return: returns 1 if the node is leaf and 0 otherwise.
 *
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * binary_tree_is_perfect - Helper function that checks whether
 * a binary tree is perfect
 * @tree: A pointer that points to the root node of the tree to check.
 *
 * Return: returns 1 if the tree is perfect otherwise 0
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
