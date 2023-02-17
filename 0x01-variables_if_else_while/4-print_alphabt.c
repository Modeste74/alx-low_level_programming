#include <stdio.h>

/**
 * main - List all letters in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 97;
		while (c <= 122)
		{
			if ((c != 113 && c != 101) && c <= 122)
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
