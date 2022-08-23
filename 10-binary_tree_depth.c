#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to to measure the depth
 * Return: depth of the tree else 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;


	if (!tree || !tree->parent)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
