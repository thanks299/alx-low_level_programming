#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value in the array.
 * @max: The maximum value in the array.
 *
 * Description: This function creates an array of integers containing all the
 * values from min (inclusive) to max (inclusive), ordered from min to max.
 * If min is greater than max, or if memory allocation fails, the function
 * returns NULL.
 *
 * Return: A pointer to the newly allocated array, or NULL if min is greater
 * than max or if memory allocation fails.
 */
int *array_range(int min, int max)
{
int *array;
int i;

if (min > max)
{
return (NULL);
}

array = malloc((max - min + 1) * sizeof(int));

if (!array)
{
return (NULL);
}

for (i = min; i <= max; i++)
{
array[i - min] = i;
}

return (array);
}
