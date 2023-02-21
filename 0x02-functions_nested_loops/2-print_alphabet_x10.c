#include "main.h"

/**
 * print_alphabet_x10 - print lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int l = 0, c;

	while (l < 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		l++;
	}
}
