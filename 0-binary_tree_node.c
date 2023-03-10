#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree
 * @parent: the pointer to the root node of the tree
 * @value: data to store
 * Return: a pointer to the root node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	new->parent = parent;
	return (new);
}
