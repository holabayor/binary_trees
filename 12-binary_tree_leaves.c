#include "binary_trees.h"

/**
 * binary_tree_leaves - function that measures the leaves of a binary tree
 * @tree: pointer to the root node of the tree to to measure the leaves
 * Return: leaves of the tree else 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;


	if (!tree)
		return (0);
	if (!tree->left || !tree->right)
		return (1);

	left_leaves = binary_tree_leaves(tree->right);
	right_leaves = binary_tree_leaves(tree->left);
	return (left_leaves + right_leaves);
}
