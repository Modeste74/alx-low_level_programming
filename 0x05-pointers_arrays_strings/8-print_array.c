#include "main.h"
#include <stdio.h>

/**
 * print_array - prototype head for the function
 *
 * @a: piointer that hold an array
 * @n: number of elements in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
