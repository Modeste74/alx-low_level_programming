#include "hash_tables.h"

/**
 * hash_table_create - it create a hash table
 * @size: This is the size of the array where data will stored
 *
 * Return: a pointer to the hash create else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->size = size;
	for (n = 0; n < size; n++)
	{
		hash_table->array[n] = NULL;
	}
	return (hash_table);
}
