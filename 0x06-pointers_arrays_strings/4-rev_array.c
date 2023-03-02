#include "main.h"

/**
 * reverse_array - prototype head for this function
 * @a: array of int to be reversed
 * @n: the quantity of elements to reserved in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m, p;

	for (m = 0; m < n--; m++)
	{
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
