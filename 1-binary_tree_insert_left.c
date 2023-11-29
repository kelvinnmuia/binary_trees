#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert the left child in a binary tree
 *
 * @parent: A pointer of the node to insert in the left-child
 *
 * @value:The value to store in the new node
 *
 * Return: returns a pointer to the new node and an error
 * when the parent is NULL
 *
 * Description: The new node takes its place and the old
 * left-child is set as the left-child of
 * the new node, if the parent already has a left-child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd;

	if (parent == NULL)
		return (NULL);

	nw_nd = binary_tree_node(parent, value);
	if (nw_nd == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		nw_nd->left = parent->left;
		parent->left->parent = nw_nd;
	}
	parent->left = nw_nd;

	return (nw_nd);
}
