#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns pointer containing copied string
 * @str: string of copied data
 *
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
	int n = 1, m = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}

	ptr = malloc(sizeof(char) * (n));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (m < n)
	{
		ptr[m] = str[m];
		m++;
	}
	return (ptr);
}
