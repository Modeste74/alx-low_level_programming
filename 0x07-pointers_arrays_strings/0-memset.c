#include "main.h"

/**
 * *_memset - prototype head for function below
 * @s: string to stored
 * @b: character in the string
 * @n: size of the string stored
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
