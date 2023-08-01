#include "binary_trees.h"

/**
 * binary_tree_is_root - kutarisa if a node kana iri root
 * @node: nod kuti iyite check
 *
 * Return: 1 if nod kana iri root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}