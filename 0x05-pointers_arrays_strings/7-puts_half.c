#include "main.h"

/**
 * puts_half - prototype head for the function
 *
 * @str: to be printed half way
 * Return: void
 */
void puts_half(char *str)
{
	int m, n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		m = (n - 1) / 2;
		m = m + 1;
	}
	else
	{
		m = n / 2;
	}
	for (; m < n; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
