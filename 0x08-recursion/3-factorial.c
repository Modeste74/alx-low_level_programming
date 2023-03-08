#include "main.h"

/**
 * factorial - recursion function for factorials
 * @n: factorial to be determined
 * Return: factorial of
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
