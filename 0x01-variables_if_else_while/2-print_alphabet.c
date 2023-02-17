#include <stdio.h>

/**
 * main - Listing alphabetic letters using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	return (0);
}
