#include "main.h"
#include <string.h>

/**
 * *_strncat - head for funtion below
 *
 * @dest: to be merged with another string
 * @src: to merge with the first to a point
 * @n: to determine up to where src is merged
 * Return: new dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len1 = 0, len2 = 0;

while (dest[len1++])
	len2++;
for (len1 = 0; src[len1] && len1 < n; len1++)
{
	dest[len2] = src[len1];
}
return (dest);
}
