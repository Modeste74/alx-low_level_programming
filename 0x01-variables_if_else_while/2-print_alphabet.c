#include <stdio.h>

/**
 * main - Listing alphabetic letters using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
