#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * Return: s
 */
char *str_concat(char *s1, char *s2)
{
	int size, s1_len, s2_len, n, m;
	char *s;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = s1_len + s2_len + 1;

	s = malloc(size * sizeof(char));

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (n = 0; n < s1_len; n++)
	{
		s[n] = s1[n];
	}
	for (m = 0; m < s2_len; m++)
	{
		s[s1_len + m] = s2[m];
	}
	s[size - 1] = '\0';
	return (s);
}

