#include <stdio.h>

/**
 * main - listing lowercase and then uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (d = 65; d <= 90; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
