#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node right to the parent node
 * @parent: parent pointer
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_chd;

	if (parent == NULL)
		return (NULL);
	right_chd = binary_tree_node(parent, value);
	if (right_chd == NULL)
		return (NULL);
	right_chd->right = parent->right;
	if (right_chd->right != NULL)
		right_chd->right->parent = right_chd;
	parent->right = right_chd;
	return (right_chd);
}

