#include "main.h"

/**
 * set_bit - set the bit value to 1 at certain index
 * @n: pointer to the bit to be ultered
 * @index: poistion of the bit to be changed
 *
 * Return: 1 if success -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	
	*n |= 1 << index;
	return (1);
}
