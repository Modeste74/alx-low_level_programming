#include "main.h"

/**
 * *_strpbrk - prototype head for function below
 * @s: string to be read
 * @accept: string to compare with
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int n = 0, m;

	while (s[n] != '\0')
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[n] == accept[m])
			{
				return (s + n);
			}
		}
		n++;
	}
	return ('\0');
}
