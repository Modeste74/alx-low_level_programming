#include "hash_tables.h"

/**
 * hash_table_get - retrives value associated with key
 * @ht: hash table to look into
 * @key: key whose value is to  be retrieved
 *
 * Return: value found or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *transverser;
	unsigned long int index;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	transverser = ht->array[index];
	while (transverser != NULL)
	{
		if (strcmp(transverser->key, key) == 0)
			return (transverser->value);
		transverser = transverser->next;
	}
	return (NULL);
}
