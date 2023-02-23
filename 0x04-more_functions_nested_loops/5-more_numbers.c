#include "main.h"

/**
 * more_numbers - prototype head for the program
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int j;

	for (c = 0; c <= 10; c++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
