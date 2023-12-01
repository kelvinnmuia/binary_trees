#include "binary_trees.h"

/**
 * binary_tree_levelorder - Function that traverses a binary tree
 * using level-order traversal
 * @tree: pointer that points to the root node of the tree to traverse.
 * @func: pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	ll *children = NULL;

	func(tree->n);
	children = get_children(chidren, tree);
	levels_rec(children, func);

	free_list(children);
}

/**
 * level_rec - Helper function that calls func on all
 * nodes at each level.
 * @head: A pointer that points to the head of linked
 * list with nodes at one level.
 * @func: A pointer to a function to call for each node.
 */
void level_rec(ll *head, void (*func)(int))
{
	ll *children = NULL, *curr = NULL;

	if (!head)
		return;
	for (curr = head; curr != NULL; curr = curr->next)
	{
		func(curr->node->n);
		children = get_children(children, curr->node);
	}
	levels_rec(children, func);
	free_list(children);
}

/**
 * get_children - A function that appends children of parent to linked list.
 * @head: A pointer to the head of linked list where children will be appended.
 * @parent: The pointer to the node whose children has to be appended
 * Return: A pointer to the head of the linked list of children.
 */
ll *get_children(ll *head, const binary_tree_t *parent)
{
	if (parent->left)
		head = append(head, parent->left);
	if (parent->right)
		head = append(head, parent->right);
	return (head);
}

/**
 * append - A function that adds new node at the end of the linkedlist
 * @head: A pointer to the head of a linked list
 * @btnode: const binary tree node to append
 * Return: returns pointer to the head or NULL
 */
ll *append(ll *head, const binary_tree_t *btnode)
{
	ll *new = NULL, *last = NULL;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->node = btnode;
		new->next = NULL;
		if (!head)
			head = new;
		else
		{
			last = head;
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
	return (head);
}

/**
 * free_list - frees all the nodes in the linked list
 * @head: pointer to the head of list_t linked list
 */
void free_list(ll *head)
{
	ll *ptr = NULL;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
