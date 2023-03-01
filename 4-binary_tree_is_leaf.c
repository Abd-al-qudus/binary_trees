#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks for leaf nodes
 * @node: node to check
 * Return: 0 on failure and 1 on success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
