#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: Is a pointer to parent node
 * @value: Integer stored in the node
 * Return: Pointer to the new node or NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodo;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (0);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	return (new_node);
}
