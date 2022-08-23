#include "binary_trees.h"

/**
 * binary_tree_is_root - function that check if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);
	return (1);
}
