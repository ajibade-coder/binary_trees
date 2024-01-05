#include "binary_trees.h"
/**
 * binary_tree_depth - depth of specified node from root tree.
 * @tree: node to check the depth of.
 * Return: 0 is it is the root or number of depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
