#include "search_algos.h"
#include <math.h>
/**
 * jump_search - uses jump search algorithm to find
 *      value
 * @array: pointer to the first element
 * @size: size of the array
 * @value: to be found in the array
 * Return: index of found value else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t js = sqrt(size);
	size_t l, i;

	if (array == NULL)
		return (-1);
	for (l = 0; l < size; l += js)
	{
		if (array[l] < value)
			printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (value <= array[l])
		{
			printf("Value found between indexes [%lu] and [%lu]\n", l - js, l);
			for (i = l - js; i <= l; i++)
			{
				printf("Value checked array[%lu] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
			break;
		}
	}
	return (-1);
}
