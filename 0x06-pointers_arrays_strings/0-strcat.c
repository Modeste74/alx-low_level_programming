#include "main.h"
#include <string.h>

/**
 * *_strcat - head for this fucntion
 *
 * @dest: to be merged with another string
 * @src: to merge with first string
 * Return: dest new
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;
	int n;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (n = 0; n <= len2; n++)
	{
		dest[len1 + n] = src[n];
	}
	return (dest);
}
