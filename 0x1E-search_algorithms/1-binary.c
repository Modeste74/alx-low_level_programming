#include "search_algos.h"
/**
 * binary_search - searches for a value using
 *    using binary search algorithm
 * @array: pointer to first element
 * @size: number of elements in the array
 * @value: value to be searched for
 * Return: index to element found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, mid, i;

	if (array == NULL)
		return (-1);
	for (; l <= r; )
	{
		mid = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
