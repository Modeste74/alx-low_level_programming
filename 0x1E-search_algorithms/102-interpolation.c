#include "search_algos.h"
/**
 * interpolation_search - makes use of interpolation algorithm to
 *     find the value passed as the argument
 * @array: pointer to the first element in the array
 * @size: this is the size of the array
 * @value: to be found in the array
 * Return: index of the value found else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, p;

	while (l <= h)
	{
		if (l == h)
		{
			if (array[l] == value)
				return (l);
			return (-1);
		}
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (p < size)
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", p);
			return (-1);
		}
		if (array[p] == value)
			return (p);
		if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;
	}
	return (-1);
}
