#include "main.h"

/**
 * _puts - prototype head for the function
 *
 * @s: to be printed out
 * Return: void
 */
void _puts(char *s)
{
	for (; *s != '\0';)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
