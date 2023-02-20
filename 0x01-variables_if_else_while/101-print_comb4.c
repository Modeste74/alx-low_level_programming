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
	{
		for (m = n + 1; m <= 56; m++)
		{
			for (p = m + 1; p <= 57; p++)
			{
				if (n != m && m != p)
				{
					putchar(n);
					putchar(m);
					putchar(p);
				}

					if (n == 55 && m == 56 && p == 57)
						continue;
					{
					putchar(',');
					putchar(' ');
					}
			}
		}
	}

			
	putchar('\n');
	return (0);
}
