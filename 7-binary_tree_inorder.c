#include "binary_trees.h"
/**
 * binary_tree_inorder - inorder traversal
 * @tree: binary tree to traversal
 * @func: func for display node
**/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
