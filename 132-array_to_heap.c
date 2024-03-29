#include "binary_trees.h"

/**
 * array_to_heap - builds Max Binary Heap tree from an array
 * @array: pointer to first element of array to be converted
 * @size: number of elements in array
 * Return: pointer to root node of created Binary Heap or NULL on failure
 */

heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *root = NULL;

	if (!array)
		return (NULL);

	root = heap_insert(&root, array[0]);
	for (i = 1; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
