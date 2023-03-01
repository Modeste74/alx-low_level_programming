#include "main.h"

/**
 * *string_toupper - head of this function
 *
 * @b: string to be converted to upper
 * Return: b
 */
char *string_toupper(char *b)
{
	int n = 0;

	while (b[n])
	{
		if (b[n] >= 'a' && b[n] <= 'z')
			b[n] -= 32;
		n++;
	}
	return (b);
}
