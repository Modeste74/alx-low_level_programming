#include "main.h"

/**
 * _isdigit - prototype head for program
 *
 * @c: read this value
 * Return: 1 if a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
