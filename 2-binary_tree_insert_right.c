#include "binary_trees.h"

/**
 *  * binary_tree_insert_right - add a node in the right of the parent
 *  if it exists it move down one level
 * @parent: parent is a pointer to the node to insert the left-child in.
 * @value: value is the value to store in the new node.
 * Return: insert node in right.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_b_t_node;

    if (parent == NULL)
        return (NULL);
    new_b_t_node = binary_tree_node(parent, value);

    if (new_b_t_node == NULL)
        return (NULL);
    if (new_b_t_node->right != NULL)
    {
        new_b_t_node->right = parent->right;
        new_b_t_node->right->parent = new_b_t_node;
    }
    parent->right = new_b_t_node;
    return (new_b_t_node);
}
