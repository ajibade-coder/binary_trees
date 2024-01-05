#include "binary_trees.h"

/**
 * binary_tree_inorder -Traverses a binary tree using in-order traversal and returns.
 * @tree: A pointer to the root node of the tree to traverse in order.
 * @func: A pointer to a function to call for each node  of the tree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
