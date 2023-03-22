#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: name to printed
 * @f: pointer to a function that accepts a char return nothing
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
