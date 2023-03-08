#include "main.h"

/**
 * _strlen_recursion - Recursion function
 * @s: length to be determined
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
