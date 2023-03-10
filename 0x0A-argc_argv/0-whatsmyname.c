#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: no arguments
 * @argv: string of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		puts(*argv);
		n++;
	}
	return (0);
}
