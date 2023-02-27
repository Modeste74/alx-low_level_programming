#include "main.h"

/**
 * *_strcpy - prototype head for function
 *
 * @dest: data to be copied here
 * @src: string to be copied from here
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	while (src[n])
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
