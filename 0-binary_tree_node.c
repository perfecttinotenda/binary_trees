#include "binary_trees.h"

/**
 * binary_tree_node - criyetsi a binary tree nod
 * @parent: poyinda 2 the parent nod of nod to create
 * @value: val to put in the new_nod
 *
 * Return: Poyinda 2 the newly created nod
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}