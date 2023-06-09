#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *transverser, *to_delete;
	unsigned long int n;

	if (ht == NULL)
		return;
	for (n = 0; n < ht->size; n++)
	{
		transverser = ht->array[n];
		while (transverser != NULL)
		{
			to_delete = transverser;
			transverser = transverser->next;
			free(to_delete->key);
			free(to_delete->value);
			free(to_delete);
		}
	}
	free(ht->array);
	free(ht);
}
