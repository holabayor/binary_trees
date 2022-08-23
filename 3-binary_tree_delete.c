#include "binary_trees.h"

/**
 * binary_tree_delete - function that inserts a node as
 * the right-child of another node
 * @tree:  pointer to the root node of the tree to delete
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree);
	free(tree);
}
