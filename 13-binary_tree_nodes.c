#include "binary_trees.h"

/**
 * binary_tree_nodes - count node have one child in binary tree
 * @tree: binary tree root
 * Return: number of node with child
**/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count_nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		count_nodes += 1 + binary_tree_nodes(tree->left);
		count_nodes += binary_tree_nodes(tree->right);
		return (count_nodes);
	}
	return (count_nodes);
}
