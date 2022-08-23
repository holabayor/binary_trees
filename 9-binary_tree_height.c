#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to to measure the height
 * Return: height of the tree else 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;


	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
