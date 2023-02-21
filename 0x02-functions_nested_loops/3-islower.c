#include "main.h"

/**
 *_islower - used for finding if int c is lowercae
 *@c: should be checked
 * Return: 1 for lowercase else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
