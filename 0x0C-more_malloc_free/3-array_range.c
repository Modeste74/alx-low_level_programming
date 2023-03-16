#include "main.h"
#include <stdlib.h>

/**
 * array_range - entry point
 * @min: first value in the array
 * @max: last value in array
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr, len, n;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	arr = malloc(len * sizeof(int));
	if (arr == 0)
	{
		return (NULL);
	}
	for (n = 0; n < len; n++)
	{
		arr[n] = min;
		min++;
	}
	return (arr);
}
