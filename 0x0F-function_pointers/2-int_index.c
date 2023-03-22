#include "function_pointers.h"

/**
 * int_index - returns index for first element that does not
 *              return 0
 * @array: to be searched
 * @size: number of elements in the array
 * @cmp: pointer to the function performing the search
 * Return: index of first element for which cmp doesn't
 *           return 0 0r -1 if no matches are met
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0)
	{
		return (-1);
	}
	if (!array || !cmp)
	{
		return (-1);
	}
	for (n = 0; n <= size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
