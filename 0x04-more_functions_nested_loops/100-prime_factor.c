#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	long n, f, m;

	n = 612852475143;
	f = 2;

	while (n != 0)
	{
		if (n % f != 0)
		{
			f++;
		}
		else
		{
			m = n;
			n = n / m;
		}
			if (n == 1)
			{
				printf("%ld\n", m);
				break;
			}
	}
	return (0);
}
