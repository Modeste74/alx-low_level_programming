#include "search_algos.h"
/**
 * linear_search - uses linear serach algorithm
 *     to search for the value passed
 * @array: pointer to first element in the array
 * @size: no of elements in the array
 * @value: value to search for
 * Return: index of value found else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
