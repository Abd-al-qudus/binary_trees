#include "binary_trees.h"
/**
 * binary_tree_depth - find height of the BT
 * @tree: tree to traverse
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
