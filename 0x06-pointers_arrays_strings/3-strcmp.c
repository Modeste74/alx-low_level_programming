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
	int m, value, flag = 0;

	for (m = 0; s1[m] != '\0' || s2[m] != '\0'; m++)
	{
		if (s1[m] != s2[m])
			flag = 1;
		value = (*s1 - *s2);
		break;
	}
	if (flag == 1)
	{
		return (value);
	}
	return (value);
}
