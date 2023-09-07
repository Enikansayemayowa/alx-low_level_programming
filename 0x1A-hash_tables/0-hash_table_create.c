#include "hash_tables.h"
/**
 * hash_table_create - Write a function that creates a hash table
 * @size: where size is the size of the array
 * Return: 0
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = calloc(1, sizeof(hash_table_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->size = size;
	ptr->array = calloc(size, sizeof(hash_node_t *));
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
