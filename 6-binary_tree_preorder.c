#include "binary_trees.h"

/**
 * binary_tree_preorder - ino yenda thru a binary_tree ichi shandisa pre-order traversal
 * @tree: tree ye traverse
 * @func: poynda fanksheni
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}