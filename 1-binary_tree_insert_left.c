#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node at the left child
 * @parent: parent node
 * @value: value to store
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *ptr;

	if (parent == NULL)
		return (NULL);
	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	if (parent->left != NULL)
	{
		ptr = parent->left;
		parent->left = node;
		ptr->parent = node;
		node->left = ptr;
	}
	else
		parent->left = node;
	return (node);
}
