#include "main.h"

/**
 * reverse_array - head for the function below
 *
 * @a: reserving of the array
 * @n: length of the element in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, tmp;

	for (j = n - 1; j >= n / 2; j--)
	{
		tmp = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = tmp;
	}
}
