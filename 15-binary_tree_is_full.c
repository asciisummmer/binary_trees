#include "binary_trees.h"

/**
 * binary_tree_is_full - verify binary tree is full or not
 * @tree: root of node
 * Return: 1 if full else 0
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full = 0;
	int right_is_full = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		left_is_full = binary_tree_is_full(tree->left);
		right_is_full = binary_tree_is_full(tree->right);
		if (left_is_full == 1 && right_is_full == 1)
			return (1);
		else
			return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (0);
}
