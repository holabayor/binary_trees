#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to to measure the size
 * Return: size of the tree else 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;


	if (!tree)
	{
		return (0);
	}

	size = binary_tree_size(tree->right) + binary_tree_size(tree->left) + 1;
	return (size);
}
