#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts a node left to the parent
 * @parent: parent pointer
 * @value: value to store in the new node
 *
 * Description: If parent already has a left-child, the new node must take its
 * place, and the old left-child must be set as the left-child of the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_chd;

	if (parent == NULL)
		return (NULL);
	left_chd = binary_tree_node(parent, value);
	if (left_chd == NULL)
		return (NULL);
	left_chd->left = parent->left;
	if (left_chd->left != NULL)
		left_chd->left->parent = left_chd;
	parent->left = left_chd;
	return (left_child);
}

