#include "binary_trees.h"

/**
 * binary_tree_height - determine heigth of binary tree
 * @tree: binary tree
 * Return: size of binary tree
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int val_l =  0;
	int val_r =  0;

	if (tree == NULL)
		return (0);
	val_l = binary_tree_height(tree->left);
	val_r = binary_tree_height(tree->right);
	if (val_l > val_r)
		return (val_l + 1);
	else
		return (val_r + 1);
}


/**
 * binary_tree_balance - compute balance factor or binary tree
 * @tree: root of binary tree
 * Return: balance factor
**/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}


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


/**
 * binary_tree_is_perfect - verify if tree is perfect
 * @tree: root of binary tree
 *  Return: 1 if is perfect else 0
**/

int binary_tree_is_perfect(const binary_tree_t *tree)
{

	int left_size = 0;
	int right_size = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	if (left_size != right_size)
		return (0);

	balance = binary_tree_balance(tree);
	if (balance != 0)
		return (0);
	return (1);
}
