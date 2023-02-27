#include "main.h"

/**
 * puts2 - prototype head for function
 *
 * @str: to printed in parts
 * Return: void
 */
void puts2(char *str)
{
	int n, m = 0;

	while (str[m] != '\0')
	{
		m++;
	}
	for (n = 0; n < m; n++)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
