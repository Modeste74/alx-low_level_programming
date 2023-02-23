#include "main.h"

/**
 * mul - prototype head for program
 *
 * @a: to be read
 * @b: to be read
 * Return: results of mul
 */
int mul(int a, int b)
{
	int mul = a * b;

	if ((a <= 0 && b >= 0) || (a >= 0 && b <= 0))
	{
		return (mul);
	}
	return (mul);
}
