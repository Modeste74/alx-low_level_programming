#include "main.h"

/**
 * print_diagonal - prototype head for the program
 * @n: to be read
 * REturn: void
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d <= c; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
