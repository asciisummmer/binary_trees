#include "binary_trees.h"

/**
 * binary_tree_size - detrmine size of binary
 * @tree: binary tree
 * Return: size of binary tree
**/

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);
	size = 1 + binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
