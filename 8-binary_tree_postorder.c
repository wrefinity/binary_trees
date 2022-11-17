#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree using postorder traversal
 * @tree: pointer to the root node of the tree
 * @func: postorder pointer function.
 * The value in the node must be passed as a parameter to this function
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
