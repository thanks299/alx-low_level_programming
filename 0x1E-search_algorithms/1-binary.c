#include <stdio.h>
#include "search_algos.h"

/**
 * recursive_binary_search - Recursively searches for a value in a sorted array
 * @array: Input array
 * @begin: Starting index
 * @end: Ending index
 * @value: Value to search for
 *
 * Return: Index of value if found, -1 otherwise
 */
int recursive_binary_search(int *array, size_t begin, size_t end, int value)
{
	size_t mid, idx;

	if (begin > end)
		return (-1);

	mid = begin + (end - begin) / 2;

	printf("Searching in array:");
	for (idx = begin; idx <= end; idx++)
		printf("%s%d", (idx == begin) ? "" : ", ", array[idx]);
	printf("\n\n");

	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
		return (recursive_binary_search(array, begin, mid - 1, value));

	return (recursive_binary_search(array, mid + 1, end, value));
}

/**
 * binary_search - Calls recursive_binary_search to return the index
 * @array: Input array
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
