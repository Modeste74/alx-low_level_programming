#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: string of arguments
 * @argc: no of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m1, m2, prod;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	prod = m1 * m2;

	printf("%d\n", prod);
	return (0);
}
