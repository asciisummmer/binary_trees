#include "binary_trees.h"

/**
 * binary_tree_leaves - count leave of binary tree
 * @tree: binary tree root
 * Return: number of leaves
**/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count_leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		count_leaves += binary_tree_leaves(tree->left);
		count_leaves += binary_tree_leaves(tree->right);
		return (count_leaves);
	}
}
