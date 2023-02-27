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

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n++] = '\0';
	return (dest);
}
