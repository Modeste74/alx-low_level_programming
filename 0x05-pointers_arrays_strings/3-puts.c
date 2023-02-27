#include "main.h"

/**
 * _puts - prototype head for the function
 *
 * @str: to be printed out
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
