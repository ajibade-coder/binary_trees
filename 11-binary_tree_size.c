#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree in bytes.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The size of the tree in bytes.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, left_node = 0, right_node = 0;

	if (tree)
	{
		left_node = binary_tree_size(tree->left);
		right_node = binary_tree_size(tree->right);
		size = left_node + right_node + 1;
	}
	return (size);
}
