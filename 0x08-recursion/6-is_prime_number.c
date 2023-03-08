#include "main.h"

int look_for_prime(int n, int m);

/**
 * is_prime_number - entry point
 * @n: to be determined if its prime or not
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (look_for_prime(n, 1));
}
/**
 * look_for_prime - looks for prime number
 * @n: to be checked
 * @m: to be...
 * Return: 1 or 0
 */
int look_for_prime(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % m == 0 && m > 1)
	{
		return (0);
	}
	if ((n / m) < m)
	{
		return (1);
	}
	return (look_for_prime(n, m + 1));
}
