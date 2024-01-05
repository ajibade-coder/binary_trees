#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not and returns.
 * it has to be the same quantity of levels in left as right, and also returns.
 * each node has to have 2 nodes or none
 * @tree: tree to check for.
 * Return: 0 if is not a perfect or other number that is the level of height of the.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l_no = 0, r_x = 0;

	if (tree->left && tree->right)
	{
		l_no = 1 + tree_is_perfect(tree->left);
		r_x = 1 + tree_is_perfect(tree->right);
		if (r_x == l_no && r_x != 0 && l_no != 0)
			return (r_x);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - perfect or not a tree node.
 * @tree: tree to check for.
 * Return: 1 is it is or 0 if not a tree.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result_node = 0;

	if (tree == NULL)
		return (0);
	else
	{
		result_node = tree_is_perfect(tree);
		if (result_node != 0)
			return (1);
		return (0);
	}
}
