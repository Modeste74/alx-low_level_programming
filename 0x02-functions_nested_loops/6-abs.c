#include "main.h"

/**
 * _abs - used as prototype here
 * @n: value to be read
 * Return: absolute value or 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_value = n * -1;

		return (abs_value);
	}
	return (0);
}
