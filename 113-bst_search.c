#include "binary_trees.h"

/**
 * bst_search - ches for value in Binary Search Tree
 * @tree: pointer to root node of  BST to search
 * @value: value to search in tree
 * Return: pointer to node containing a value equals to value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL || tree->n == value)
		return ((binary_tree_t *) tree);

	if (value < tree->n)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
