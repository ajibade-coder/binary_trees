#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves.
 * @tree: A pointer to the root node of the tree to.
 *
 * Return: The number of leaves in the tree that were.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, left_node = 0, right_node = 0;

	if (tree)
	{
		left_node = binary_tree_leaves(tree->left);
		right_node = binary_tree_leaves(tree->right);
		leaves = left_node + right_node;

		if (!tree->left && !tree->right)
		{
			leaves += 1;
		}
	}
	return (leaves);
}
