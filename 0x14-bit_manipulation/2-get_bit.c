#include "main.h"

/**
 * get_bit - find the value of a bit in a certain index of a decimal number
 * @n: number whose bit value is to determined
 * @index: position of the bit whose value is to be determined
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
