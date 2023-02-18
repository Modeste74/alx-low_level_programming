#include <stdio.h>

/**
 * main - printing different combination 0f three numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int p;

	for (n = 48; n <= 55; n++)
		for (m = 49; m <= 56; m++)
			for (p = 50; p <= 57; p++)
			{
				if (n != m && m != p)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					putchar(',');
					putchar(' ');
				}
			}

	return (0);
}
