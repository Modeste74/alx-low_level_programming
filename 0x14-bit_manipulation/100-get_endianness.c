#include "main.h"

/**
 * get_endianness - checks for endianness 
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int ref = 0x12345678;
	char *check;
	check = (char *)&ref;

	if (*check == 0x12)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
