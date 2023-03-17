#include "main.h"
#include <stdlib.h>

/**
 * _realloc - entry point
 * @ptr: old pointer
 * @old_size: size of ptr
 * @new_size: size of the new pointer to new memory.
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrnew;
	unsigned int n;
	char *oldptr;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptrnew = malloc(new_size);
		return (ptrnew);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	
	ptrnew = malloc(new_size);
	if (ptrnew == 0)
	{
		return (NULL);
	}

	oldptr = ptr;
	for (n = 0; n < new_size; n++);
	{
		ptrnew[n] = oldptr[n];
	}
	return (ptrnew);
}
