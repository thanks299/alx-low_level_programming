#include <stdio.h>
#include "search_algos.h"

/**
 * r_binary_search - Recursively searches for a value in a sorted array
 * @array: Input array
 * @left: Left index of the array
 * @right: Right index of the array
 * @value: Value to search for
 *
 * Return: Index of value if found, -1 otherwise
 */
int linear_search(int *array, size_t left, size_t right, int value)
{
	if (left <= right)
	{
		size_t mid = left + (right - left) / 2;
		size_t i = left;

		printf("Searching in array:");
		while (i <= right)
		{
			printf("%s%d", (i == left) ? "" : ", ", array[i]);
			i++;
		}
		printf("\n");

		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			return r_binary_search(array, mid + 1, right, value);
		else
			return r_binary_search(array, left, mid - 1, value);
	}
	return -1;
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if value is not present
 *         in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	return r_binary_search(array, 0, size - 1, value);
}
