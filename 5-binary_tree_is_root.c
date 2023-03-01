#include "binary_trees.h"
/**
 * binary_tree_is_root - checks for root nodes
 * @node: node to check
 * Return: 0 on failure and 1 on success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
		return (1);
	else
		return (0);
}
