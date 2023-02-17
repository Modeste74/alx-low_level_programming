#include <stdio.h>

/**
 * main - List all letters in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 97; c != 101 && c != 113 && c <= 122; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
