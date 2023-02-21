#include "main.h"

/**
 * print_sign - is sued as the prototype in this program
 * @n: this charater is to be read
 * Return: 1 if n > zero, 0 if n = zero else (-1)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
