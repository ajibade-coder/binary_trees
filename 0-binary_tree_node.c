#include "binary_trees.h"

/**
 * @binary_tree_node: function that creates a binary tree node/.
 * @parent:parent is a pointer to the parent node of the node to create.
 * @value: value is the value to put in the new node.
 * Return: the newly created node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_b_t_node;

	new_b_t_node = malloc(sizeof(binary_tree_t));

	if (new_b_t_node == NULL)
		return (NULL);
	
	new_b_t_node->n = value;
	new_b_t_node->parent = parent;
	new_b_t_node->left = NULL;
	new_b_t_node->right = NULL;

	return (new_b_t_node);
}
