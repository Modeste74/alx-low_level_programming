#include <stdio.h>

/**
 * main - printing all number to base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	char c;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for  (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
