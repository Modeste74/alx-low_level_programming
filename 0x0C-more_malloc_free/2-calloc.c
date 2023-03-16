#include "main.h"
#include <stdlib.h>

/**
 * _calloc - entry point
 * @nmemb: elements of the array
 * @size: ...
 * Return: ar
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n, m;
	char *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	m = nmemb * size;
	ar = malloc(m);

	if (ar == 0)
	{
		return (NULL);
	}
	for (n = 0; n < m; n++)
	{
		ar[n] = 0;
	}
	return (ar);
}
