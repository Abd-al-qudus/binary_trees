#include "binary_trees.h"
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int bin_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: The balance factor of the tree (0 if tree is NULL)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return 0;
	left_height = bin_tree_height(tree->left);
	right_height = bin_tree_height(tree->right);
	return left_height - right_height;
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the tree (0 if tree is NULL)
 */
int bin_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return 0;
	left_height = bin_tree_height(tree->left);
	right_height = bin_tree_height(tree->right);
	return (1 + MAX(left_height, right_height));
}
