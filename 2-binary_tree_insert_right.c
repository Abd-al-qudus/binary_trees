#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node at the right child
 * @parent: parent node
 * @value: value to store
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *ptr;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right != NULL)
	{
		ptr = parent->right;
		parent->right = node;
		ptr->parent = node;
		node->right = ptr;
	}
	else
		parent->right = node;
	return (node);
}
