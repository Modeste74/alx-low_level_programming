#include "main.h"

/**
 * print_last_digit - prototype head
 * @n: reads value of n
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + 48);
	return (last_d);
}
