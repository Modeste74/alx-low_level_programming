#include "main.h"

/**
 * _strspn - prototype head for the below function
 * @s: string to be read
 * @accept: string to be compared with
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, m, length = 0;

	while (s[n] != '\0')
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (accept[m] == s[n])
			{
				length++;
				break;
			}
			else if (accept[m + 1] == '\0')
			{
				return (length);
			}
		}
		n++;
	}
	return (length);
}
