#include "main.h"

/**
 * times_table - prototype head
 *
 * Return: void
 */
void times_table(void)
{
	int n, m, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * m;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

