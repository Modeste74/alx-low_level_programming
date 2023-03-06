#include "main.h"

/**
 * *_memcpy - prototype head for the below function
 * @dest: to be copied from
 * @src: to be copied into
 * @n: up to the point to be copied into
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
