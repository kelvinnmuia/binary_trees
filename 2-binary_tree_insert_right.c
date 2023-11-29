#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child
 * of another in a binary tree.
 *
 * @parent: A pointer to the node to insert the right-child in.
 *
 * @value: The value to store in the new node.
 *
 * Return: returns a pointer to the new node or an error if the parent is NULL
 *
 * Description: the new node takes its place and the old-right is
 * set as the right-child of the new node,
 * if the parent already has right-child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd;

	if (parent == NULL)
		return (NULL);

	nw_nd = binary_tree_node(parent, value);
	if (nw_nd == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		nw_nd->right = parent->right;
		parent->right->parent = nw_nd;
	}
	parent->right = nw_nd;

	return (nw_nd);
}
