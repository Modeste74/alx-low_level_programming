#include "search_algos.h"
/**
 * binary_s - searches for a value using
 *    using binary search algorithm
 * @array: pointer to first element
 * @le: beginning index in the array
 * @ri: last index in the array
 * @value: value to be searched for
 * Return: index to element found or -1
 */
int binary_s(int *array, size_t le, size_t ri, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);
	for (; le <= ri; )
	{
		mid = le + (le + ri) / 2;
		printf("Searching in array: ");
		for (i = le; i <= ri; i++)
		{
			if (i == ri)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			le = mid + 1;
		else
			ri = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - uses the exponential search
 *      algorithm to search for a value
 * @array: pointer to the first element
 * @size: represent the size of the array
 * @value: to be found in the array
 * Return: index where value lies else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, size - 1);
	return (binary_s(array, i / 2, size - 1, value));
}
