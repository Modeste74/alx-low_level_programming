#include "main.h"
#include <string.h>

/**
 * _strlen - used as prototype head
 *
 * @s: length to be determined
 * Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++)
		count++;
	return (count);
}
