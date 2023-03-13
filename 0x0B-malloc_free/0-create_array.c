#include "main.h"
#include <stdlib.h>

/**
 * *create_array - entry point
 * @size: size
 * @c: charater
 *
 * Return: NULL or pointer to memory
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
	return (ptr);
}
