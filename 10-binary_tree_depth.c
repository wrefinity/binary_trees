#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the node to measure the depth of
 *
 * Return: depth of a node in a binary tree else return 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t c = 0;

	if (node == NULL)
		return (c);
	while (node->parent)
	{
		c++;
		node = node->parent;
	}
	return (c);
}
