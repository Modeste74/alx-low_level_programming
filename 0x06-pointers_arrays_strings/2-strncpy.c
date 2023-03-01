#include "main.h"

/**
 * *_strncpy - head for funtion below
 *
 * @dest: to be copied into
 * @src: to copy from to certain length
 * @n: specifies the length to copy up to
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	while (src[len2++])
	{
		len1++;
	}
	for (len2 = 0; src[len2] && len2 < n; len2++)
	{
		dest[len2] = src[len2];
	}
	for (len2 = len1; len2 < n; len2++)
	{
		dest[len2] = '\0';
	}
	return (dest);
}
