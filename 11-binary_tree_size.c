#include "binary_trees.h"
/**
 * binary_tree_size - find size of the BT
 * @tree: tree to traverse
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	size = 0;
	if (tree == NULL)
		return (size);
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}
