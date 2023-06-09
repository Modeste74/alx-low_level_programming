#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: it the size of the array
 *
 * Return: pointer to new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;
	unsigned long int n;

	hash_table = malloc(sizeof(shash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = malloc(sizeof(shash_node_t) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	for (n = 0; n < size; n++)
		hash_table->array[n] = NULL;
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	return (hash_table);
}
/**
 * shash_table_set - adds element to harsh table
 * @ht: hash table
 * @key: to be added
 * @value: value associated with key
 *
 * Return: 1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *new_node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	new_node->sprev = NULL;
	new_node->snext = ht->shead;
	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	ht->array[index] = new_node;
	return (1);
}
/**
 * shash_table_get - retrieves the value in a key
 * @ht: the place to be retieved from
 * @key: key whose value is to be retrived
 *
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - used to print the hash table
 * @ht: the hash table to be printed
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints  hash table in reverse
 * @ht: to be printed in reverse
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}
/**
 * shash_table_delete - used to delete hash tables
 * @ht: hash table to be deleted
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *to_delete, *transverser;

	if (ht == NULL)
		return;
	to_delete = ht->shead;
	while (to_delete != NULL)
	{
		transverser = to_delete->snext;
		free(to_delete->key);
		free(to_delete->value);
		free(to_delete);
		to_delete = transverser;
	}
	free(ht->array);
	free(ht);
}
