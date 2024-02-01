#include "hash_tables.h"

/**
* hash_table_create - Creates a hash table.
* @size: The size of the hash table.
*
* Return: A pointer to the newly created hash table, or NULL on failure.
*/
hash_table_t *hash_table_create(size_t size)
{
hash_table_t *table;
size_t index;

if (size == 0)
{
fprintf(stderr, "Error: Invalid size for hash table.\n");
return (NULL);
}
table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
fprintf(stderr, "Error: Failed to allocate memory for hash table.\n");
return (NULL);
}
table->size = size;
table->array = malloc(sizeof(hash_node_t *) * size);
if (table->array == NULL)
{
free(table);
fprintf(stderr, "Error: Failed to allocate memory for hash table array.\n");
return (NULL);
}
for (index = 0; index < size; index++)
table->array[index] = NULL;
return (table);
}
