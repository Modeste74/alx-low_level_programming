#include "main.h"

/**
 * print_triangle - prototype head in this program
 *
 * @size: to be input
 * Return: void
 */
void print_triangle(int size)
{
	int b, h, hyp;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (h = 0 ; h < size; h++)
	{
		for (b = size - h; b > 1; b--)
		{
			_putchar(' ');
		}
		for (hyp = 0; hyp <= h; hyp++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
