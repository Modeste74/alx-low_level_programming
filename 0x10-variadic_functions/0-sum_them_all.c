#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list addition;
	unsigned int m, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(addition, n);

	for (m = 0; m < n; m++)
	{
		sum = sum + va_arg(addition, int);
	}

	va_end(addition);

	return (sum);
}
