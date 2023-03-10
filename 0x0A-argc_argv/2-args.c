#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argv: string of arguments
 * @argc: no of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
