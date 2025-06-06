#include "binary_trees.h"

/**
 * binary_tree_postorder - traversal postorder
 * @tree: binary tree
 * @func: function to display value
**/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

/*
if (val_l <= val_r)
		return (val_l + 1);
	else
		return (val_r);

*/