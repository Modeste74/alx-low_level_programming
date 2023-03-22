#include "function_pointers.h"

/**
 * array_iterator - executes functions given as parameters
 * @array: to be executed
 * @size: size of the array elements
 * @action: pointer to function that accepts int and returns nothing
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	for (n = 0; n < size; n++)
	{
		(*action)(array[n]);
	}
}
