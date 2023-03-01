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
int len1, len2;
int m;

len1 = strlen(dest);
len2 = strlen(src);

for (m = 0; m <= len2 && len2 < n; m++)
{
	dest[len1 + m] = src[m];
}
return (dest);
}
