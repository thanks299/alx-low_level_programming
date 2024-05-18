#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Description: This function reallocates a memory block to a new size.
 * If new_size is 0 and ptr is not NULL, the memory block is freed and
 * NULL is returned. If ptr is NULL, a new memory block of new_size is
 * allocated. If new_size equals old_size, the function returns ptr.
 * Otherwise, a new memory block is allocated, the content is copied
 * from the old block to the new block, and the old block is freed.
 *
 * Return: A pointer to the newly allocated memory block, or NULL if
 * new_size is 0 and ptr is not NULL, or if the memory allocation fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int copy_size;

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
return (malloc(new_size));
}

if (new_size == old_size)
{
return (ptr);
}

new_ptr = malloc(new_size);

if (!new_ptr)
{
return (NULL);
}

copy_size = (new_size < old_size) ? new_size : old_size;
memcpy(new_ptr, ptr, copy_size);

free(ptr);
return (new_ptr);
}
