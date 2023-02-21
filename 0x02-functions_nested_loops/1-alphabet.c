#include "main.h"

/**
 * print_alphabet - printing alphabets in lowercase with _putchar
 * Return: void
 */
void print_alphabet(void)
{
	/* print_alphabet function for this program */
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
