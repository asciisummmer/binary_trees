#include "binary_trees.h"

/**
 * binary_tree_depth - depth of node
 * @tree: binary tree to get depth
 * Return: depth of node in binary tree
**/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
