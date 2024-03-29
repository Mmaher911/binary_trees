#include "binary_trees.h"

/**
 * isBST - Compare node in order to check if a given
 * @tree: pointer to root node of tree to check
 * @min: minimum value
 * @max: maximum value
 * Return: 1 if success, 0 otherwise
 */

int isBST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		isBST(tree->left, min, tree->n - 1) &&
		isBST(tree->right, tree->n + 1, max)
	);
}

/**
 * binary_tree_is_bst - checks if binary tree is valid Binary Search tree
 * @tree: pointer to root node of tree to check
 * Return: 1 if success, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isBST(tree, INT_MIN, INT_MAX));
}
