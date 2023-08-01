#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth ye node iri mu binary_tree
 * @tree: nod kuita calculate
 *
 * Return: depth ye nod
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}