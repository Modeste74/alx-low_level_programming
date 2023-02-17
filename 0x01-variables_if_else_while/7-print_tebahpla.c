#include <stdio.h>

/**
 * main - print alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
