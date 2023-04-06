#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string to be converted to unsigned integer
 *
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (!b)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b == '1')
		{
			decimal = (decimal * 2) + 1;
		}
		else if (*b == '0')
		{
			decimal *= 2;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (decimal);
}
