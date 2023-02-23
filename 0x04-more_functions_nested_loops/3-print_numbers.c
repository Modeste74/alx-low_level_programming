#include "main.h"

/**
 * print_numbers - prototype head for program
 *
 * _putchar: used to print
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57;)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
