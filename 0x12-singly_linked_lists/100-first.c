#include <stdio.h>

void first_print(void) __attribute__ ((constructor));
/**
 * first_print - first print string before main executed
 *
 * Return: void
 */
void first_print(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
