#include "main.h"

/**
 * clear_bit - sets a bit at a certain position to 0
 * @n: pointer to the bit to be changed
 * @index: position of the bit to be changed
 *
 * Return: 1 if successful and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	
	*n &= ~(1 << index);
	return (1);
}
