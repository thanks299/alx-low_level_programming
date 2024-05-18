#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * and initializes it to zero.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element in the array.
 *
 * Description: This function allocates memory for
 * an array of nmemb elements of size bytes each using malloc.
 * The allocated memory is set to zero. If nmemb or
 * size is 0, or if memory allocation fails, the function returns NULL.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0 or
 * if memory allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(nmemb * size);
if (!ptr)
{
return (NULL);
}

memset(ptr, 0, nmemb * size);
return (ptr);
}
