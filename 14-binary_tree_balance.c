#include "binary_trees.h"

size_t tree_height(const binary_tree_t *tree);
size_t max(size_t a, size_t b);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to to measure the balance factor
 * Return: balance factor of the tree else 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;


	if (!tree)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (left_height - right_height);
}

/**
 * tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to to measure the height
 * Return: height of the tree else 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;


	if (!tree)
	{
		return (0);
	}

	right_height = tree_height(tree->right);
	left_height = tree_height(tree->left);
	return (max((left_height + 1), (right_height + 1)));
}

/**
 * max - function that return the maximum of two numbers
 * @a: first number
 * @b: second number
 * Return: maximum of the two numbers
 */
size_t max(size_t a, size_t b)
{
	return (a > b ? a : b);
}
