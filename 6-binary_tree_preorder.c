#include "binary_trees.h"

/**
 * binary_tree_preorder - pereorder traversing
 * @tree: root node
 * @func: func to call on each node traversing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
