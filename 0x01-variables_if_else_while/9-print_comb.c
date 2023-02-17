#include <stdio.h>

/**
 * main - code that prints all combinations of single digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar(n);
	if (n <= 57)
	{
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
