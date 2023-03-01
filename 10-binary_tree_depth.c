#include "binary_trees.h"
/**
 * binary_tree_height - find height of the BT
 * @tree: tree to traverse
 * Return: height of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
		return (depth);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
