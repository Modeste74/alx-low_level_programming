#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print different types of data types
 * @format: list of different data types to be printed
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	char *ptr, *separator;

	va_list types;

	va_start(types, format);

	separator = "";
	while (format && format[n])
	{
		switch (format[n])
		{
			case 'c':
				printf("%s%c", separator, va_arg(types, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(types, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(types, double));
				break;
			case 's':
				ptr = va_arg(types, char *);
				if (ptr == NULL)
					ptr = "(nil)";
				printf("%s%s", separator, ptr);
				break;
			default:
				n++;
				continue;
		}
		separator = ", ";
		n++;
	}
	printf("\n");

	va_end(types);
}
