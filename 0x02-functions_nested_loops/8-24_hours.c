#include "main.h"

/**
 * jack_bauer - used as prototype head
 *
 * Return: void
 */
void jack_bauer(void)
{
	int n, m, p, q;

	for (n = 48; n <= 50; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if ((n <= 49 && m <= 57) || (n <= 50 && m <= 51))
			{
				for (p = 48; p <= 53; p++)
				{
					for (q = 48; q <= 57; q++)
					{
						_putchar(n);
						_putchar(m);
						_putchar(':');
						_putchar(p);
						_putchar(q);
						_putchar('\n');
					}
				}
			}
		}
	}
}
