#include "binary_trees.h"

/**
 * binary_tree_height - determine heigth of binary tree
 * @tree: binary tree
 * Return: size of binary tree
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	int val_l =  binary_tree_height(tree->left);
	int val_r =  binary_tree_height(tree->right);

	if (val_l > val_r)
		return (val_l + 1);
	else
		return (val_r + 1);
}
