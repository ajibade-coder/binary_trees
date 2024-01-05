#include "binary_trees.h"

/**
 * @binary_tree_insert_left: function that inserts a node as the left-child of another node.
 * @parent: parent is a pointer to the node to insert the left-child in.
 * @value: value is the value to store in the new node.
 * Return: insert node in left.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_b_t_node;

	if (parent == NULL)
		return (NULL);

    new_b_t_node = binary_tree_node(parent, value);
    if (new_b_t_node == NULL)
		return (NULL);
    
    if (parent->left != NULL)
    {
        new_b_t_node->left = parent->left;
        parent->left->parent = new_b_t_node;
    }
    parent->left = new_b_t_node;

    return (new_b_t_node);
}
