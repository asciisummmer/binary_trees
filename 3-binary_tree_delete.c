#include "binary_trees.h"

/**
 * binary_tree_delete - delete all node of tree
 * @tree: binary tree
 * Return: Nothing
**/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
