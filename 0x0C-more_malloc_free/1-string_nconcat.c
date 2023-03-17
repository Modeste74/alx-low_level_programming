#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - entry point
 * @s1: first string
 * @s2: string to be concat with the first
 * @n: length of the second string
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int num1, num2, length, m;
	char *s;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	num1 = strlen(s1);
	num2 = strlen(s2);

	if (n >= num2)
	{
		length = num1 + num2 + 1;
	}
	else
	{
		length = num1 + n + 1;
	}

	s = malloc((length) * sizeof(char));

	if (s == 0)
	{
		return (NULL);
	}
	for (m = 0; m < num1; m++)
	{
		s[m] = s1[m];
	}
	for (m = 0; m < num2; m++)
	{
		s[num1 + m] = s2[m];
	}
	s[length] = '\0';
	return (s);
}
