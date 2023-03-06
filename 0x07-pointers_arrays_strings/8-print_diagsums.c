#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prototype head for below function
 * @a: pointer to an array of data
 * @size: size the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n = 0, sum1 = 0, sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 += a[n];
		a += size;
	}
	a -= size;
	for (n = 0; n < size; n++)
	{
		sum2 += a[n];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
