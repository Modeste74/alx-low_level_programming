#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string parameters
 * @separator: separate strings
 * @n: number of string to be printed.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *ptr;

	va_list string;

	va_start(string, n);

	for (m = 0; m < n; m++)
	{
		ptr = va_arg(string, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (m < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string);
}
