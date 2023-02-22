#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - is being used as the prototype
 *
 * @n: reads value
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		printf("%d, ", n++);
		_putchar('\n');
	}
	else if (n >= 98)
	{
		while (n > 97)
		printf("%d, ", n--);
		_putchar('\n');
	}
}
