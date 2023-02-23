#include "main.h"

/**
 * _isupper - prototype head for this program.
 *
 * @c: to read and processed
 * Return: 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
