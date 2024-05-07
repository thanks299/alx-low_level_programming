#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @arr: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of first occurrence of value, or -1 if not found
 */
int linear_search(int *arr, size_t size, int value)
{
    int idx; /* Index being checked */

    if (!arr)
        return -1;

    for (idx = 0; idx < (int)size; idx++)
    {
        printf("Value checked arr[%u] = [%d]\n", idx, arr[idx]);
        if (value == arr[idx])
            return idx;
    }
    return -1;
}
