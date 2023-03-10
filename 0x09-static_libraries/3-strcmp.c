#include "main.h"

/**
 * _strcmp - head for this comparing function
 *
 * @s1: to be compared
 * @s2: to also be compared with s1
 * Return: value
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
