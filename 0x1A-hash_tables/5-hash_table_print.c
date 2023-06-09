#include "hash_tables.h"

/**
 * hash_table_print - print the contents of hash table
 * @ht: this the hash table to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *transverser;
	int count = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		transverser = ht->array[n];
		while (transverser != NULL)
		{
			if (count > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", transverser->key, transverser->value);
			count++;
			transverser = transverser->next;
		}
	}
	printf("}\n");
}
