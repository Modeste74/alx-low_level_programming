#include "main.h"

/**
 * swap_int - prototype head for this program
 *
 * @a: no to swapped
 * @b: no to be swappped with
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
