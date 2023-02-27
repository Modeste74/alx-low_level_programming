#include "main.h"
#include <string.h>

/**
 * rev_string - prototype head
 *
 * @s: to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int mid = length / 2;
	char temp;
	int n;

	for (n = 0; n < mid; n++)
	{
		temp = s[n];
		s[n] = s[length - n - 1];
		s[length - n - 1] = temp;
	}
}
