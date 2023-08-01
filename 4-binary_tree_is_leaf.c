#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks kana node iri leaf
 * @node: nod_2_check
 *
 * Return: 1 if nod kana iri leaf
 *         0 kana isiri leaf
 *         0 if nod rtrn nothing
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}