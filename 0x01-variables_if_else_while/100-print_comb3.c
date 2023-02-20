#include <stdio.h>

/**
 * main - Print combination of 2 digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{

	for (m = n + 1; m <= 57; m++)
	{
		if (n != m)
		{
			putchar(n);
			putchar(m);
			{
			if (n == 56 && m == 57)
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	}
	return (0);
}
