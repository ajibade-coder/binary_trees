#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child.
 * @tree: A pointer to the root node of the tree to count.
 *
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0, left_node = 0, right_node = 0;

	if (tree)
	{
		left_node = binary_tree_nodes(tree->left);
		right_node = binary_tree_nodes(tree->right);
		nodes = left_node + right_node;

		if (tree->left || tree->right)
			nodes += 1;
	}
	return (nodes);
}
