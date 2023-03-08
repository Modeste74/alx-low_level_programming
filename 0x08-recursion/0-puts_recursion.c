#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: to be printed out
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
