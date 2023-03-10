#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @agrv: string of arguments
 * @agrc: no of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
