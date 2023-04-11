#include "main.h"

/**
 * flip_bits - returns no of bit flipped
 * @n: number to check
 * @m: to be flipped
 *
 * Return: no of bits flippped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped;
	unsigned int count = 0;

	flipped = n ^ m;
	while (flipped > 0)
	{
		count += flipped & 1;
		flipped >>= 1;
	}
	return (count);
}
