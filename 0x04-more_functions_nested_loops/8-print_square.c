#include "main.h"

/**
 * print_square - prototype head for program
 *
 * @size: size of said sqaure
 * Return: void
 */
void print_square(int size)
{
	int l, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
		for (l = 1; l <= size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar(35);
			}
			_putchar('\n');
	}
}
