#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: separates the contents of the array
 * @n: numbers of numbers to be printed out
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	int num;

	va_list numbers;

	va_start(numbers, n);

	for (m = 0; m < n; m++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (m < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(numbers);
}
