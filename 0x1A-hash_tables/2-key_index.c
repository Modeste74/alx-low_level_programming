#include "hash_tables.h"

/**
 * key_index - finds the key index
 * @key: whose key index is to be found
 * @size: size of the array where the data is stored
 *
 * Return: Index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;
	unsigned long int hash_index;

	hash_key = hash_djb2(key);
	hash_index = hash_key % size;
	return (hash_index);
}
