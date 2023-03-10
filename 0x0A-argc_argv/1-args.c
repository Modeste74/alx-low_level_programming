#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: no of arguments
 * @argv: string of argument
 * Return: always 0 all good
 */
int main(int argc, char *argv[])
{
	int n = 0;
	(void) argv;

	if (n < argc)
	{
		printf("%d\n", argc - 1);
		n++;
	}
	return (0);
}
