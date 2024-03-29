#include "binary_trees.h"

/**
 * array_to_bst - builds Binary Search Tree from an array
 * @array: pointer to first element of array to be converted
 * @size: number of element in array
 * Return: pointer to root node of created BST, or NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t lenght;
	bst_t *tree = NULL;

	for (lenght = 0; lenght < size; lenght++)
		bst_insert(&tree, array[lenght]);

	return (tree);
}
