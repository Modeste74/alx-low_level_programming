#include "main.h"
#include <stdio.h>

/**
 * *_strchr - prototype head for the function
 * @s: string to be searched
 * @c: char to searched for
 * Return: s + rest of string or NULL
 */
char *_strchr(char *s, char c)
{
	int m = 0;

	while (s[m] >= '\0')
	{
		if (s[m] == c)
		{
			return (s + m);
		}
		m++;
	}
	return (NULL);
}
