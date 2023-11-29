#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree  node
 * @parent: A pointer that points to the parent node of the new node
 * @value: The value to pt in the new node
 *
 * Return: returns pointer to the new node or NULL
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd;

	nw_nd = malloc(sizeof(binary_tree_t));
	if (nw_nd == NULL)
		return (NULL);

	nw_nd->n = value;
	nw_nd->parent = parent;
	nw_nd->left = NULL;
	nw_nd->right = NULL;

	return (nw_nd);
}
