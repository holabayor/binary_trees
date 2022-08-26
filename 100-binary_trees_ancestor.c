#include <stdio.h>
#include "binary_trees.h"

/**
 * tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to the root node of the tree to to measure the depth
 * Return: depth of the tree else 0 if tree is NULL
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t depth;


	if (!tree || !tree->parent)
		return (0);

	depth = tree_depth(tree->parent) + 1;
	return (depth);
}

/**
 * binary_trees_ancestor - function that finds the
 * lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	if (!first->parent && !second->parent)
		return (NULL);
	if (first->parent == second->parent || first->parent == second)
		return (first->parent);
	if (first == second->parent)
		return (second->parent);
	if (tree_depth(first) < tree_depth(second))
		return (binary_trees_ancestor(first, second->parent));
	if (tree_depth(first) > tree_depth(second))
		return (binary_trees_ancestor(first->parent, second));
	return (NULL);
}

