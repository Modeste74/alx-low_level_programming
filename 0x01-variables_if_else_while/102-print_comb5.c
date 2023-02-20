#include <stdio.h>

/**
 * main - printing all combination of two two digits as per conditions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, p, q;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (p = 48; p <= 57; p++)
			{
				for (q = 49; q <= 56; q++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(p);
					putchar(q);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}


